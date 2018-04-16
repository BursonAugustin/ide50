{"filter":false,"title":"helpers.h","tooltip":"/pset3/find/helpers.h","undoManager":{"mark":82,"position":82,"stack":[[{"start":{"row":19,"column":31},"end":{"row":20,"column":0},"action":"insert","lines":["",""],"id":121}],[{"start":{"row":20,"column":0},"end":{"row":81,"column":1},"action":"insert","lines":["/**"," * helpers.c"," *"," * Computer Science 50"," * Problem Set 3"," *"," * Helper functions for Problem Set 3."," */","","#include <cs50.h>","","#include \"helpers.h\"","","/**"," * Returns true if value is in array of n values, else false."," */","bool search(int value, int values[], int n)","{","    int min = 0;","    int max = n - 1;","    // TODO: implement a searching algorithm","   while(min <= max)","   {","       int midpoint = (min + max) / 2;","       if (value == values[midpoint])","       {","           return true;","       }","       else if (value > values[midpoint])","       {","           min = midpoint + 1;","       }","       else if (value < values[midpoint])","       {","           max = midpoint - 1 ;","       }","   }","   return false;","}","","/**"," * Sorts array of n values."," */","void sort(int values[], int n)","{","    // TODO: implement an O(n^2) sorting algorithm","    for(int i = 0; i < n; i++)","    {","        int min = i;","        for(int j = i + 1; j < n; j++)","        {","            if(values[j] < values[min])","            {","                min = j;","            }","        }","        if(min != i)","        {","            values[min] = values[i];","        }","    }","}"],"id":122}],[{"start":{"row":44,"column":34},"end":{"row":44,"column":35},"action":"remove","lines":["t"],"id":123}],[{"start":{"row":44,"column":33},"end":{"row":44,"column":34},"action":"remove","lines":["n"],"id":124}],[{"start":{"row":44,"column":32},"end":{"row":44,"column":33},"action":"remove","lines":["i"],"id":125}],[{"start":{"row":44,"column":31},"end":{"row":44,"column":32},"action":"remove","lines":["o"],"id":126}],[{"start":{"row":44,"column":30},"end":{"row":44,"column":31},"action":"remove","lines":["p"],"id":127}],[{"start":{"row":44,"column":29},"end":{"row":44,"column":30},"action":"remove","lines":["d"],"id":128}],[{"start":{"row":44,"column":28},"end":{"row":44,"column":29},"action":"remove","lines":["i"],"id":129}],[{"start":{"row":44,"column":27},"end":{"row":44,"column":28},"action":"remove","lines":["m"],"id":130}],[{"start":{"row":44,"column":27},"end":{"row":44,"column":28},"action":"insert","lines":["m"],"id":131}],[{"start":{"row":44,"column":28},"end":{"row":44,"column":29},"action":"insert","lines":["i"],"id":132}],[{"start":{"row":44,"column":29},"end":{"row":44,"column":30},"action":"insert","lines":["d"],"id":133}],[{"start":{"row":44,"column":30},"end":{"row":44,"column":31},"action":"insert","lines":["d"],"id":134}],[{"start":{"row":44,"column":31},"end":{"row":44,"column":32},"action":"insert","lines":["l"],"id":135}],[{"start":{"row":44,"column":32},"end":{"row":44,"column":33},"action":"insert","lines":["e"],"id":136}],[{"start":{"row":48,"column":38},"end":{"row":48,"column":39},"action":"remove","lines":["t"],"id":137}],[{"start":{"row":48,"column":37},"end":{"row":48,"column":38},"action":"remove","lines":["n"],"id":138}],[{"start":{"row":48,"column":36},"end":{"row":48,"column":37},"action":"remove","lines":["i"],"id":139}],[{"start":{"row":48,"column":35},"end":{"row":48,"column":36},"action":"remove","lines":["o"],"id":140}],[{"start":{"row":48,"column":34},"end":{"row":48,"column":35},"action":"remove","lines":["p"],"id":141}],[{"start":{"row":48,"column":33},"end":{"row":48,"column":34},"action":"remove","lines":["d"],"id":142}],[{"start":{"row":48,"column":33},"end":{"row":48,"column":34},"action":"insert","lines":["d"],"id":143}],[{"start":{"row":48,"column":34},"end":{"row":48,"column":35},"action":"insert","lines":["d"],"id":144}],[{"start":{"row":48,"column":35},"end":{"row":48,"column":36},"action":"insert","lines":["l"],"id":145}],[{"start":{"row":48,"column":36},"end":{"row":48,"column":37},"action":"insert","lines":["e"],"id":146}],[{"start":{"row":52,"column":38},"end":{"row":52,"column":39},"action":"remove","lines":["t"],"id":147}],[{"start":{"row":52,"column":37},"end":{"row":52,"column":38},"action":"remove","lines":["n"],"id":148}],[{"start":{"row":52,"column":36},"end":{"row":52,"column":37},"action":"remove","lines":["i"],"id":149}],[{"start":{"row":52,"column":35},"end":{"row":52,"column":36},"action":"remove","lines":["o"],"id":150}],[{"start":{"row":52,"column":34},"end":{"row":52,"column":35},"action":"remove","lines":["p"],"id":151}],[{"start":{"row":52,"column":34},"end":{"row":52,"column":35},"action":"insert","lines":["d"],"id":152}],[{"start":{"row":52,"column":35},"end":{"row":52,"column":36},"action":"insert","lines":["l"],"id":153}],[{"start":{"row":52,"column":36},"end":{"row":52,"column":37},"action":"insert","lines":["e"],"id":154}],[{"start":{"row":54,"column":24},"end":{"row":54,"column":25},"action":"remove","lines":["t"],"id":155}],[{"start":{"row":54,"column":23},"end":{"row":54,"column":24},"action":"remove","lines":["n"],"id":156}],[{"start":{"row":54,"column":22},"end":{"row":54,"column":23},"action":"remove","lines":["i"],"id":157}],[{"start":{"row":54,"column":21},"end":{"row":54,"column":22},"action":"remove","lines":["o"],"id":158}],[{"start":{"row":54,"column":20},"end":{"row":54,"column":21},"action":"remove","lines":["p"],"id":159}],[{"start":{"row":54,"column":20},"end":{"row":54,"column":21},"action":"insert","lines":["d"],"id":160}],[{"start":{"row":54,"column":21},"end":{"row":54,"column":22},"action":"insert","lines":["l"],"id":161}],[{"start":{"row":54,"column":22},"end":{"row":54,"column":23},"action":"insert","lines":["e"],"id":162}],[{"start":{"row":39,"column":10},"end":{"row":39,"column":11},"action":"remove","lines":["x"],"id":163}],[{"start":{"row":39,"column":9},"end":{"row":39,"column":10},"action":"remove","lines":["a"],"id":164}],[{"start":{"row":39,"column":8},"end":{"row":39,"column":9},"action":"remove","lines":["m"],"id":165}],[{"start":{"row":39,"column":8},"end":{"row":39,"column":9},"action":"insert","lines":["t"],"id":166}],[{"start":{"row":39,"column":9},"end":{"row":39,"column":10},"action":"insert","lines":["o"],"id":167}],[{"start":{"row":39,"column":10},"end":{"row":39,"column":11},"action":"insert","lines":["p"],"id":168}],[{"start":{"row":43,"column":31},"end":{"row":43,"column":32},"action":"remove","lines":["x"],"id":169}],[{"start":{"row":43,"column":30},"end":{"row":43,"column":31},"action":"remove","lines":["a"],"id":170}],[{"start":{"row":43,"column":29},"end":{"row":43,"column":30},"action":"remove","lines":["m"],"id":171}],[{"start":{"row":43,"column":29},"end":{"row":43,"column":30},"action":"insert","lines":["t"],"id":172}],[{"start":{"row":43,"column":30},"end":{"row":43,"column":31},"action":"insert","lines":["o"],"id":173}],[{"start":{"row":43,"column":31},"end":{"row":43,"column":32},"action":"insert","lines":["p"],"id":174}],[{"start":{"row":43,"column":18},"end":{"row":43,"column":19},"action":"remove","lines":["t"],"id":175}],[{"start":{"row":43,"column":17},"end":{"row":43,"column":18},"action":"remove","lines":["n"],"id":176}],[{"start":{"row":43,"column":16},"end":{"row":43,"column":17},"action":"remove","lines":["i"],"id":177}],[{"start":{"row":43,"column":15},"end":{"row":43,"column":16},"action":"remove","lines":["o"],"id":178}],[{"start":{"row":43,"column":14},"end":{"row":43,"column":15},"action":"remove","lines":["p"],"id":179}],[{"start":{"row":43,"column":14},"end":{"row":43,"column":15},"action":"insert","lines":["d"],"id":180}],[{"start":{"row":43,"column":15},"end":{"row":43,"column":16},"action":"insert","lines":["l"],"id":181}],[{"start":{"row":43,"column":16},"end":{"row":43,"column":17},"action":"insert","lines":["e"],"id":182}],[{"start":{"row":50,"column":24},"end":{"row":50,"column":25},"action":"remove","lines":["t"],"id":183}],[{"start":{"row":50,"column":23},"end":{"row":50,"column":24},"action":"remove","lines":["n"],"id":184}],[{"start":{"row":50,"column":22},"end":{"row":50,"column":23},"action":"remove","lines":["i"],"id":185}],[{"start":{"row":50,"column":21},"end":{"row":50,"column":22},"action":"remove","lines":["o"],"id":186}],[{"start":{"row":50,"column":20},"end":{"row":50,"column":21},"action":"remove","lines":["p"],"id":187}],[{"start":{"row":50,"column":20},"end":{"row":50,"column":21},"action":"insert","lines":["d"],"id":188}],[{"start":{"row":50,"column":21},"end":{"row":50,"column":22},"action":"insert","lines":["l"],"id":189}],[{"start":{"row":50,"column":22},"end":{"row":50,"column":23},"action":"insert","lines":["e"],"id":190}],[{"start":{"row":41,"column":18},"end":{"row":41,"column":19},"action":"remove","lines":["x"],"id":191}],[{"start":{"row":41,"column":17},"end":{"row":41,"column":18},"action":"remove","lines":["a"],"id":192}],[{"start":{"row":41,"column":16},"end":{"row":41,"column":17},"action":"remove","lines":["m"],"id":193}],[{"start":{"row":41,"column":16},"end":{"row":41,"column":17},"action":"insert","lines":["t"],"id":194}],[{"start":{"row":41,"column":17},"end":{"row":41,"column":18},"action":"insert","lines":["o"],"id":195}],[{"start":{"row":41,"column":18},"end":{"row":41,"column":19},"action":"insert","lines":["p"],"id":196}],[{"start":{"row":54,"column":13},"end":{"row":54,"column":14},"action":"remove","lines":["x"],"id":197}],[{"start":{"row":54,"column":12},"end":{"row":54,"column":13},"action":"remove","lines":["a"],"id":198}],[{"start":{"row":54,"column":11},"end":{"row":54,"column":12},"action":"remove","lines":["m"],"id":199}],[{"start":{"row":54,"column":11},"end":{"row":54,"column":12},"action":"insert","lines":["t"],"id":200}],[{"start":{"row":54,"column":12},"end":{"row":54,"column":13},"action":"insert","lines":["o"],"id":201}],[{"start":{"row":54,"column":13},"end":{"row":54,"column":14},"action":"insert","lines":["p"],"id":202}],[{"start":{"row":0,"column":0},"end":{"row":81,"column":1},"action":"remove","lines":["/**"," * helpers.h"," *"," * Computer Science 50"," * Problem Set 3"," *"," * Helper functions for Problem Set 3."," */"," ","#include <cs50.h>","","/**"," * Returns true if value is in array of n values, else false."," */","bool search(int value, int values[], int n);","","/**"," * Sorts array of n values."," */","void sort(int values[], int n);","/**"," * helpers.c"," *"," * Computer Science 50"," * Problem Set 3"," *"," * Helper functions for Problem Set 3."," */","","#include <cs50.h>","","#include \"helpers.h\"","","/**"," * Returns true if value is in array of n values, else false."," */","bool search(int value, int values[], int n)","{","    int min = 0;","    int top = n - 1;","    // TODO: implement a searching algorithm","   while(min <= top)","   {","       int middle = (min + top) / 2;","       if (value == values[middle])","       {","           return true;","       }","       else if (value > values[middle])","       {","           min = middle + 1;","       }","       else if (value < values[middle])","       {","           top = middle - 1 ;","       }","   }","   return false;","}","","/**"," * Sorts array of n values."," */","void sort(int values[], int n)","{","    // TODO: implement an O(n^2) sorting algorithm","    for(int i = 0; i < n; i++)","    {","        int min = i;","        for(int j = i + 1; j < n; j++)","        {","            if(values[j] < values[min])","            {","                min = j;","            }","        }","        if(min != i)","        {","            values[min] = values[i];","        }","    }","}"],"id":203},{"start":{"row":0,"column":0},"end":{"row":19,"column":31},"action":"insert","lines":["/**"," * helpers.h"," *"," * Computer Science 50"," * Problem Set 3"," *"," * Helper functions for Problem Set 3."," */"," ","#include <cs50.h>","","/**"," * Returns true if value is in array of n values, else false."," */","bool search(int value, int values[], int n);","","/**"," * Sorts array of n values."," */","void sort(int values[], int n);"]}]]},"ace":{"folds":[],"scrolltop":5,"scrollleft":0,"selection":{"start":{"row":19,"column":31},"end":{"row":19,"column":31},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1487375965441,"hash":"c5cdc3d1fb3840bca8a68f601881cac05a225b29"}