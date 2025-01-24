#include <stdio.h>
#include <string.h>
int main()
{
    char string1[] = "Krushna";
    char string2[] = "Hire";
    char string3[6];

    //function strcat():-
    puts(strcat(string1 , string2));


    //function strlen():-
    printf("The length of string 1 is %d\n",strlen(string1));
    printf("The length of string 2 is %d\n",strlen(string2));


    //function strrev():-
    printf("The reverse of string 1 is \n");
    puts(strrev(string1));

    printf("The reverse of string 2 is \n ");
    puts(strrev(string2));


    //function strcpy():-
    strcpy(string3,strcat(string1,string2));
    puts(string3);


    //function strcmp():-
    printf("The strcmp for string1, string2 returned %d ",strcmp(string1,string2));
    return 0;
}



//FUNCTION strcat():-
int main( ) { 
char  s[] = "Hello" ;
char  t[30] = "World" ;
strcat ( t, s ) ;
printf ( "String = %s", t ) ;
}
//Output: string = HelloWorld



//FUNCTION strlen():-
int main( ) { 
char  str[] = "Harry" ;
int  str_length;
str_length = strlen ( str ) ;
printf ( " length = %d", str_length );
}
//Output: length = 5 



//FUNCTION strrev():-
#include<stdio.h>
#include<string.h>
int main()
{
char str[50] = "1234";
printf("After reversing string is =%s",strrev(str));
return 0;}
//Output: After reversing string is = 4321



//FUNCTION strcpy():-
int main( ) { 
char  s[ ] = "CodeWithHarry" ;
char  t[20] ;
strcpy ( t, s ) ;
printf ( "\n Source string = %s", s ) ;
printf ( "\n Target string = %s", t ) ; 
}
//And here is the output...
//Source string = CodeWithHarry
//Target string = CodeWithHarry



//FUNCTION strcmp():-
int main()
{
char string1[ ] = "Harry" ;
char string2[ ] = "Code" ;
int a;
a= strcmp ( string1, string2 ) ;
printf ("\n%d", a) ;
return 0;
}
//Output:5