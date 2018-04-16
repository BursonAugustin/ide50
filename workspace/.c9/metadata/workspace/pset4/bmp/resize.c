{"filter":false,"title":"resize.c","tooltip":"/pset4/bmp/resize.c","undoManager":{"mark":100,"position":100,"stack":[[{"start":{"row":40,"column":15},"end":{"row":40,"column":16},"action":"remove","lines":["l"],"id":256}],[{"start":{"row":40,"column":14},"end":{"row":40,"column":15},"action":"remove","lines":["u"],"id":257}],[{"start":{"row":40,"column":13},"end":{"row":40,"column":14},"action":"remove","lines":["o"],"id":258}],[{"start":{"row":40,"column":12},"end":{"row":40,"column":13},"action":"remove","lines":["C"],"id":259}],[{"start":{"row":40,"column":13},"end":{"row":40,"column":14},"action":"remove","lines":["n"],"id":260}],[{"start":{"row":40,"column":12},"end":{"row":40,"column":13},"action":"remove","lines":[" "],"id":261}],[{"start":{"row":40,"column":12},"end":{"row":40,"column":13},"action":"insert","lines":["C"],"id":262}],[{"start":{"row":40,"column":13},"end":{"row":40,"column":14},"action":"insert","lines":["o"],"id":263}],[{"start":{"row":40,"column":14},"end":{"row":40,"column":15},"action":"insert","lines":["u"],"id":264}],[{"start":{"row":40,"column":15},"end":{"row":40,"column":16},"action":"insert","lines":["k"],"id":265}],[{"start":{"row":40,"column":15},"end":{"row":40,"column":16},"action":"remove","lines":["k"],"id":266}],[{"start":{"row":40,"column":15},"end":{"row":40,"column":16},"action":"insert","lines":["l"],"id":267}],[{"start":{"row":40,"column":16},"end":{"row":40,"column":17},"action":"insert","lines":["d"],"id":268}],[{"start":{"row":40,"column":17},"end":{"row":40,"column":18},"action":"insert","lines":[" "],"id":269}],[{"start":{"row":40,"column":18},"end":{"row":40,"column":19},"action":"insert","lines":["n"],"id":270}],[{"start":{"row":38,"column":19},"end":{"row":38,"column":20},"action":"remove","lines":[")"],"id":271}],[{"start":{"row":38,"column":18},"end":{"row":38,"column":19},"action":"remove","lines":["L"],"id":272}],[{"start":{"row":38,"column":17},"end":{"row":38,"column":18},"action":"remove","lines":["L"],"id":273}],[{"start":{"row":38,"column":16},"end":{"row":38,"column":17},"action":"remove","lines":["U"],"id":274}],[{"start":{"row":38,"column":15},"end":{"row":38,"column":16},"action":"remove","lines":["N"],"id":275}],[{"start":{"row":38,"column":15},"end":{"row":38,"column":16},"action":"insert","lines":["N"],"id":276}],[{"start":{"row":38,"column":16},"end":{"row":38,"column":17},"action":"insert","lines":["U"],"id":277}],[{"start":{"row":38,"column":17},"end":{"row":38,"column":18},"action":"insert","lines":["L"],"id":278}],[{"start":{"row":38,"column":18},"end":{"row":38,"column":19},"action":"insert","lines":["L"],"id":279}],[{"start":{"row":38,"column":19},"end":{"row":38,"column":20},"action":"insert","lines":["0"],"id":280}],[{"start":{"row":38,"column":19},"end":{"row":38,"column":20},"action":"remove","lines":["0"],"id":281}],[{"start":{"row":38,"column":19},"end":{"row":38,"column":20},"action":"insert","lines":[")"],"id":282}],[{"start":{"row":78,"column":66},"end":{"row":79,"column":0},"action":"insert","lines":["",""],"id":283},{"start":{"row":79,"column":0},"end":{"row":79,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":79,"column":4},"end":{"row":79,"column":74},"action":"insert","lines":["int out_padding =  (4 - (out_bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;"],"id":284}],[{"start":{"row":79,"column":6},"end":{"row":79,"column":7},"action":"remove","lines":["t"],"id":285}],[{"start":{"row":79,"column":5},"end":{"row":79,"column":6},"action":"remove","lines":["n"],"id":286}],[{"start":{"row":79,"column":4},"end":{"row":79,"column":5},"action":"remove","lines":["i"],"id":287}],[{"start":{"row":79,"column":4},"end":{"row":79,"column":5},"action":"insert","lines":["i"],"id":288}],[{"start":{"row":79,"column":5},"end":{"row":79,"column":6},"action":"insert","lines":["n"],"id":289}],[{"start":{"row":79,"column":6},"end":{"row":79,"column":7},"action":"insert","lines":["t"],"id":290}],[{"start":{"row":79,"column":74},"end":{"row":80,"column":0},"action":"insert","lines":["",""],"id":291},{"start":{"row":80,"column":0},"end":{"row":80,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":80,"column":4},"end":{"row":81,"column":0},"action":"insert","lines":["",""],"id":292},{"start":{"row":81,"column":0},"end":{"row":81,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":81,"column":4},"end":{"row":82,"column":104},"action":"insert","lines":["\tout_bf.bfSize = 54 + out_bi.biWidth * abs(out_bi.biHeight) * 3 + abs(out_bi.biHeight) *  out_padding;","\t\tout_bi.biSizeImage = ((((out_bi.biWidth * out_bi.biBitCount) + 31) & ~31) / 8) * abs(out_bi.biHeight);"],"id":293}],[{"start":{"row":81,"column":4},"end":{"row":81,"column":5},"action":"remove","lines":["\t"],"id":294}],[{"start":{"row":82,"column":0},"end":{"row":82,"column":1},"action":"remove","lines":["\t"],"id":295}],[{"start":{"row":82,"column":12},"end":{"row":82,"column":13},"action":"remove","lines":["z"],"id":296}],[{"start":{"row":82,"column":12},"end":{"row":82,"column":13},"action":"insert","lines":["z"],"id":297}],[{"start":{"row":81,"column":15},"end":{"row":81,"column":16},"action":"remove","lines":["z"],"id":298}],[{"start":{"row":81,"column":15},"end":{"row":81,"column":16},"action":"insert","lines":["z"],"id":299}],[{"start":{"row":82,"column":103},"end":{"row":83,"column":0},"action":"insert","lines":["",""],"id":300},{"start":{"row":83,"column":0},"end":{"row":83,"column":1},"action":"insert","lines":["\t"]}],[{"start":{"row":83,"column":1},"end":{"row":84,"column":0},"action":"insert","lines":["",""],"id":301},{"start":{"row":84,"column":0},"end":{"row":84,"column":1},"action":"insert","lines":["\t"]}],[{"start":{"row":84,"column":1},"end":{"row":87,"column":55},"action":"insert","lines":["\tfwrite(&out_bf, sizeof(BITMAPFILEHEADER), 1, outptr);","","\t\t// write outfile's BITMAPINFOHEADER","\t\tfwrite(&out_bi, sizeof(BITMAPINFOHEADER), 1, outptr);"],"id":302}],[{"start":{"row":86,"column":36},"end":{"row":86,"column":37},"action":"remove","lines":["R"],"id":303}],[{"start":{"row":86,"column":35},"end":{"row":86,"column":36},"action":"remove","lines":["E"],"id":304}],[{"start":{"row":86,"column":34},"end":{"row":86,"column":35},"action":"remove","lines":["D"],"id":305}],[{"start":{"row":86,"column":33},"end":{"row":86,"column":34},"action":"remove","lines":["A"],"id":306},{"start":{"row":86,"column":32},"end":{"row":86,"column":33},"action":"remove","lines":["E"]}],[{"start":{"row":86,"column":31},"end":{"row":86,"column":32},"action":"remove","lines":["H"],"id":307},{"start":{"row":86,"column":30},"end":{"row":86,"column":31},"action":"remove","lines":["O"]}],[{"start":{"row":86,"column":29},"end":{"row":86,"column":30},"action":"remove","lines":["F"],"id":308}],[{"start":{"row":86,"column":28},"end":{"row":86,"column":29},"action":"remove","lines":["N"],"id":309}],[{"start":{"row":86,"column":27},"end":{"row":86,"column":28},"action":"remove","lines":["I"],"id":310}],[{"start":{"row":86,"column":26},"end":{"row":86,"column":27},"action":"remove","lines":["P"],"id":311}],[{"start":{"row":86,"column":25},"end":{"row":86,"column":26},"action":"remove","lines":["A"],"id":312}],[{"start":{"row":86,"column":24},"end":{"row":86,"column":25},"action":"remove","lines":["M"],"id":313}],[{"start":{"row":86,"column":23},"end":{"row":86,"column":24},"action":"remove","lines":["T"],"id":314}],[{"start":{"row":86,"column":22},"end":{"row":86,"column":23},"action":"remove","lines":["I"],"id":315}],[{"start":{"row":86,"column":21},"end":{"row":86,"column":22},"action":"remove","lines":["B"],"id":316}],[{"start":{"row":86,"column":20},"end":{"row":86,"column":21},"action":"remove","lines":[" "],"id":317}],[{"start":{"row":86,"column":19},"end":{"row":86,"column":20},"action":"remove","lines":["s"],"id":318}],[{"start":{"row":86,"column":18},"end":{"row":86,"column":19},"action":"remove","lines":["'"],"id":319}],[{"start":{"row":86,"column":17},"end":{"row":86,"column":18},"action":"remove","lines":["e"],"id":320}],[{"start":{"row":86,"column":16},"end":{"row":86,"column":17},"action":"remove","lines":["l"],"id":321}],[{"start":{"row":86,"column":15},"end":{"row":86,"column":16},"action":"remove","lines":["i"],"id":322}],[{"start":{"row":86,"column":14},"end":{"row":86,"column":15},"action":"remove","lines":["f"],"id":323}],[{"start":{"row":86,"column":13},"end":{"row":86,"column":14},"action":"remove","lines":["t"],"id":324}],[{"start":{"row":86,"column":12},"end":{"row":86,"column":13},"action":"remove","lines":["u"],"id":325}],[{"start":{"row":86,"column":11},"end":{"row":86,"column":12},"action":"remove","lines":["o"],"id":326}],[{"start":{"row":86,"column":10},"end":{"row":86,"column":11},"action":"remove","lines":[" "],"id":327}],[{"start":{"row":86,"column":9},"end":{"row":86,"column":10},"action":"remove","lines":["e"],"id":328}],[{"start":{"row":86,"column":8},"end":{"row":86,"column":9},"action":"remove","lines":["t"],"id":329}],[{"start":{"row":86,"column":7},"end":{"row":86,"column":8},"action":"remove","lines":["i"],"id":330}],[{"start":{"row":86,"column":6},"end":{"row":86,"column":7},"action":"remove","lines":["r"],"id":331}],[{"start":{"row":86,"column":5},"end":{"row":86,"column":6},"action":"remove","lines":["w"],"id":332}],[{"start":{"row":86,"column":4},"end":{"row":86,"column":5},"action":"remove","lines":[" "],"id":333}],[{"start":{"row":86,"column":3},"end":{"row":86,"column":4},"action":"remove","lines":["/"],"id":334}],[{"start":{"row":86,"column":2},"end":{"row":86,"column":3},"action":"remove","lines":["/"],"id":335}],[{"start":{"row":86,"column":1},"end":{"row":86,"column":2},"action":"remove","lines":["\t"],"id":336}],[{"start":{"row":86,"column":0},"end":{"row":86,"column":1},"action":"remove","lines":["\t"],"id":337}],[{"start":{"row":85,"column":0},"end":{"row":86,"column":0},"action":"remove","lines":["",""],"id":338}],[{"start":{"row":89,"column":3},"end":{"row":123,"column":0},"action":"remove","lines":[" for (int i = 0, biHeight = abs(bi.biHeight); i < biHeight; i++)","    {","        // iterate over pixels in scanline","        for (int j = 0; j < bi.biWidth; j++)","        {","            // temporary storage","            RGBTRIPLE triple;","","            // read RGB triple from infile","            fread(&triple, sizeof(RGBTRIPLE), 1, inptr);","","            // write RGB triple to outfile","            fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);","        }","","        // skip over padding, if any","        fseek(inptr, padding, SEEK_CUR);","","        // then add it back (to demonstrate how)","        for (int k = 0; k < padding; k++)","        {","            fputc(0x00, outptr);","        }","    }","","    // close infile","    fclose(inptr);","","    // close outfile","    fclose(outptr);","","    // that's all folks","    return 0;","}",""],"id":339}],[{"start":{"row":89,"column":3},"end":{"row":133,"column":0},"action":"insert","lines":["","\t\tfor (int i = 0, biHeight = abs(bi.biHeight); i < biHeight; i++)","\t\t{","\t\t\t\t// Write each line factor-times","\t\t\t\tfor(int n = 0; n < factor; n++)","\t\t\t\t{","\t\t\t\t\t\t// iterate over pixels in scanline","\t\t\t\t\t\tfor (int j = 0; j < bi.biWidth; j++)","\t\t\t\t\t\t{","\t\t\t\t\t\t\t\t// temporary storage","\t\t\t\t\t\t\t\tRGBTRIPLE triple;","","\t\t\t\t\t\t\t\t// read RGB triple from infile","\t\t\t\t\t\t\t\tfread(&triple, sizeof(RGBTRIPLE), 1, inptr);","","\t\t\t\t\t\t\t\t// write RGB triple to outfile","\t\t\t\t\t\t\t\tfor(int m = 0; m < factor; m++) ","\t\t\t\t\t\t\t\t{","\t\t\t\t\t\t\t\t\t\tfwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);","\t\t\t\t\t\t\t\t}","\t\t\t\t\t\t}","","\t\t\t\t\t\t// skip over padding in infile","\t\t\t\t\t\tfseek(inptr, in_padding, SEEK_CUR);","","\t\t\t\t\t\t// then add it to outfile","\t\t\t\t\t\tfor (int k = 0; k <out_padding; k++)","\t\t\t\t\t\t\t\tfputc(0x00, outptr);","","\t\t\t\t\t\tfseek(inptr, -(bi.biWidth * 3 + in_padding ), SEEK_CUR);","","\t\t\t\t}","\t\t\t\tfseek(inptr, bi.biWidth*3+in_padding, SEEK_CUR);","\t\t}","","\t\t// close infile","\t\tfclose(inptr);","","\t\t// close outfile","\t\tfclose(outptr);","","\t\t// that's all folks","\t\treturn 0;","}",""],"id":340}],[{"start":{"row":76,"column":0},"end":{"row":81,"column":41},"action":"insert","lines":["\t\tBITMAPFILEHEADER out_bf;","\t\tBITMAPINFOHEADER out_bi;\t","\t\tout_bf = bf;","\t\tout_bi = bi;","\t\tout_bi.biWidth = bi.biWidth * factor;","\t\tout_bi.biHeight = bi.biHeight * factor;"],"id":341}],[{"start":{"row":75,"column":53},"end":{"row":76,"column":0},"action":"insert","lines":["",""],"id":342},{"start":{"row":76,"column":0},"end":{"row":76,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":76,"column":4},"end":{"row":77,"column":0},"action":"insert","lines":["",""],"id":343},{"start":{"row":77,"column":0},"end":{"row":77,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":83,"column":41},"end":{"row":84,"column":0},"action":"insert","lines":["",""],"id":344},{"start":{"row":84,"column":0},"end":{"row":84,"column":2},"action":"insert","lines":["\t\t"]}],[{"start":{"row":84,"column":2},"end":{"row":85,"column":0},"action":"insert","lines":["",""],"id":345},{"start":{"row":85,"column":0},"end":{"row":85,"column":2},"action":"insert","lines":["\t\t"]}],[{"start":{"row":82,"column":32},"end":{"row":82,"column":38},"action":"remove","lines":["factor"],"id":346},{"start":{"row":82,"column":32},"end":{"row":82,"column":39},"action":"insert","lines":["numbers"]}],[{"start":{"row":83,"column":34},"end":{"row":83,"column":40},"action":"remove","lines":["factor"],"id":347},{"start":{"row":83,"column":34},"end":{"row":83,"column":41},"action":"insert","lines":["numbers"]}],[{"start":{"row":114,"column":27},"end":{"row":114,"column":33},"action":"remove","lines":["factor"],"id":348},{"start":{"row":114,"column":27},"end":{"row":114,"column":34},"action":"insert","lines":["numbers"]}],[{"start":{"row":102,"column":23},"end":{"row":102,"column":29},"action":"remove","lines":["factor"],"id":349},{"start":{"row":102,"column":23},"end":{"row":102,"column":30},"action":"insert","lines":["numbers"]}],[{"start":{"row":101,"column":1},"end":{"row":101,"column":35},"action":"remove","lines":["\t\t\t// Write each line factor-times"],"id":350}],[{"start":{"row":78,"column":0},"end":{"row":78,"column":1},"action":"remove","lines":["\t"],"id":351},{"start":{"row":79,"column":0},"end":{"row":79,"column":1},"action":"remove","lines":["\t"]},{"start":{"row":80,"column":0},"end":{"row":80,"column":1},"action":"remove","lines":["\t"]},{"start":{"row":81,"column":0},"end":{"row":81,"column":1},"action":"remove","lines":["\t"]},{"start":{"row":82,"column":0},"end":{"row":82,"column":1},"action":"remove","lines":["\t"]},{"start":{"row":83,"column":0},"end":{"row":83,"column":1},"action":"remove","lines":["\t"]}],[{"start":{"row":130,"column":30},"end":{"row":130,"column":40},"action":"remove","lines":["in_padding"],"id":352},{"start":{"row":130,"column":30},"end":{"row":130,"column":40},"action":"insert","lines":["in_padding"]}],[{"start":{"row":130,"column":30},"end":{"row":130,"column":33},"action":"remove","lines":["in_"],"id":353}],[{"start":{"row":127,"column":38},"end":{"row":127,"column":41},"action":"remove","lines":["in_"],"id":354}],[{"start":{"row":121,"column":19},"end":{"row":121,"column":22},"action":"remove","lines":["in_"],"id":355}],[{"start":{"row":70,"column":0},"end":{"row":75,"column":53},"action":"remove","lines":["","    // write outfile's BITMAPFILEHEADER","    fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, outptr);","","    // write outfile's BITMAPINFOHEADER","    fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, outptr);"],"id":357}]]},"ace":{"folds":[],"scrolltop":979,"scrollleft":0,"selection":{"start":{"row":0,"column":0},"end":{"row":137,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":68,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1488074786260,"hash":"829ea8a1612d28ef7a75e2dc347e1a5aa1702af5"}