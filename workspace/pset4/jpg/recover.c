#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE;

const int chunk = 512;

int main(void) 
   {
        FILE* cfCard = fopen("card.raw", "r");

        if (cfCard == NULL) {
        printf("Could not open card. \n");
        return 1;
    }

    FILE* outptr = NULL;

    int face = 0;

    while (1) {

        BYTE buffer[chunk];

        if (feof(cfCard)) {
            fclose(cfCard);
            if (outptr != NULL) {
                fclose(outptr);
                outptr = NULL;
            }
            return 0;
        }
        fread(buffer, sizeof(BYTE), chunk, cfCard);

        if ((buffer[0] == 0xff) && (buffer[1] == 0xd8) && (buffer[2] == 0xff) 
            && (buffer[3] >= 0xe0) && (buffer[3] <= 0xef)) {
            if (outptr != NULL) {
                fclose(outptr);
                outptr = NULL;
            }
            char Title[8];
            sprintf(Title, "%03d.jpg", face);
            face++;
            outptr = fopen(Title, "w");
            if (outptr == NULL) {
                printf("Could not write in file. \n");
                return 1;
            }
            fwrite(buffer, sizeof(BYTE), chunk, outptr);
        } else if (outptr != NULL) {
            fwrite(buffer, sizeof(BYTE), chunk, outptr);
        } 
    }
}
