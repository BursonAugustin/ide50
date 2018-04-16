# include <stdio.h>
# include <cs50.h>

int main(void)
{
    printf("Do you want ta add, subtract, multiply, divide?\n");
    string operation = Getstring();
    
    int num1 = GetInt();
    int num2 = GetInt();
    float answer;
    
if (operation =="aaa")
}

{
    int answer = add(num1, num2);
    printf("%\n", answer);
}

{
    else if (operation =="subtraction")
}
{
    int answer = subtract(num1, num2);
    printf("%\n," answer);
}
{
    else if (operation =="multiply")
}
{
    int answer = multiply(num1, num2);
    printf("%\n," answer)
}
{
    else if (operation =="divide")
}
{
    int answer = divide(num1, num2);
    printf("%\n,"answer)
}
{
    printf("Not an option")
}

int add(int num1, int num2)
{
    return num1 + num2
}
{
    
}