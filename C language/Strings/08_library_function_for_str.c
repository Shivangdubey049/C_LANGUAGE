#include <stdio.h>
#include <string.h> //USed to import string fucntions that we will use in our code

int main()
{
    char st1[] = "I love soul games"; // It is string that contains 17 characters including spaces
    printf("%d\n", strlen(st1));      // strlen(st) gives the length of the str as output excluding the null character \0


    char copy[30];
    strcpy(copy, st1); // Strcopy is used to copy the data of one string to other:::--->>> strcpy(target,source)
    printf("%s\n", copy);
    char st2[] = "my fav one is elden ring";


    strcat(st1, st2); // strcat is used to concatenate :st1 gets concatenated with st2 that means both gets merged and gets stored in st1
    printf("%s\n", st1);


    char st3[] = "I love soul games";
    int a = strcmp(st1,st3); 
    printf("After comapring st1 and st2 we got %d",a);
    /*it is used to compare two strings, if both the strings are equal then it return 0 
    if both strings doesnt match then it returns 1 , in the case if 1st elemennt written consists of earlier alphabet then the output is -1
    otherwise if 2nd contrains later aplphabet then it returns 1 for example lets take string 1 as rohit and string 2 as virat and arg is passed
    strcmp(string1,string2), we know both aren't equal and in rohit r and v is first difference in the str so both of them are
    compared (according to alphabetical series comes first then output will be -1)and vice versa for passing opposite arguements 
    NOTE : The real thing that happens is that it compares ascii value so this is the main real logic*/
    return 0;
}


/*ASCII TABLE -

33        ! 
34        " 
35        # 
36        $ 
37        % 
38        & 
39        ' 
40       ( 
41        ) 
42        * 
43        + 
44        , 
45        - 
46        . 
47        / 
48        0 
49        1 
50        2 
51        3 
52        4 
53        5 
54        6 
55        7 
56        8 
57        9 
58        : 
59        ; 
60        < 
61        = 
62        > 
63        ? 
64        @ 
65        A 
66        B 
67        C 
68        D 
69        E 
70        F 
71        G 
72        H 
73        I 
74        J 
75        K 
76        L 
77        M 
78        N 
79        O 
80        P 
81        Q 
82        R 
83        S 
84        T 
85        U 
86        V 
87        W 
88        X 
89        Y 
90        Z 
91        [ 
92        \ 
93        ] 
94        ^ 
95        _ 
96        ` 
97        a 
98        b 
99        c 
100       d
101       e
102       f
103       g
104       h
105       i
106       j
107       k
108       l
109       m
110       n
*/
