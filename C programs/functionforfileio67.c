#include <stdio.h>
int main()
{
    FILE *ptr = NULL;


    //FGETC()
    // ptr = fopen("Krushna'stextfile","r");    //In this line the mode is used r means read mode .we know the uses of these modes so depending on the uses of this in fputc,fputs,fgetc,fgets lets used.
    // char * c = fgetc(ptr);
    // printf("The character I read was : %c\n", c) ;      //Here ek time la fakt ek ch character read hoto jyamule aapan jevadhe fgetc(ptr) apply karun print karu tevadhech character output madhe print hotil Krushna'stextfile madhun.  
    // c = fgetc(ptr);                                     
    // printf("The character I read was : %c\n", c);


    //FGETS()
    // ptr = fopen("Krushna'stextfile","r");
    // char str[25];
    // fgets(str, 6, ptr);     //here we 6 but the output is 5 characters of string because string has last null character. 
    // printf("The string I read was : %s\n",str);

    // OUTPUT :: YACH OUPUT JE KAHI CONTENT Krushna'stextfile ya file madhe aahe te print karal.


    //FPUTC()
    // ptr = fopen("Krushna'stextfile","w");       //hare we used w means write mode because hare is put function and in put function we puut any character or string in thant function.
    // fputc('X',ptr);                    //Here we can also use other modes like a , w+ , a+.

    //OUTPUT :: HERE WE GIVE ANY CHARACTER IN FPUTC FUNCTION THAT WILL BE PRINT OR WRITE IN Krushna'stextfile.


    ///FPUTS()
    ptr = fopen("Krushna'stextfile","w");       //hare we used w means write mode because hare is put function and in put function we puut any character or string in thant function.
    fputs("AB DIVELLIERS IS MY FAVOURITE BATSMAN",ptr);     //Here we can also use other modes like a , w+ , a+.

    //OUTPUT :: HERE WE GIVE ANY STRING IN FPUTC FUNCTION THAT WILL BE PRINT OR WRITE IN Krushna'stextfile.
    return 0;
}



