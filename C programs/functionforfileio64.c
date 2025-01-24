#include <stdio.h>
int main()
{
    FILE * ptr = NULL;
    
   
    //READING A FILE.
    // char string[100] ;
    // ptr = fopen ("Krushna'stextfile","r");           //r means reading mode.
    // fscanf(ptr,"%s",string);
    // printf("The content of this file is %s",string);

    //OUTPUT : Anything that is in the Krushna'stextfile is the output of above code because we are reading the file.


    //WRITTING A FILE.
    // w--> writing mode.
    // char string[100] = {"Rohit sharma is right handed batsman and it's jersey number is 45."} ;
    // ptr = fopen ("Krushna'stextfile","w");          //Here w means writting mode.writting mode asa kam karto ki aapan ithe string dili aahe aani nantar program jar run kela "krushna'stextfile" ya file madhe jar kahihi lihilele asel tar te automatically erase houn aapan ji string dili aahe ti tya file madhe write houn jail.
    // fprintf(ptr,"%s",string);
    // printf("The content of this file is %s",string);

    //OUTPUT : Anything that we are write in the string like here we are write "Rohit sharma is right handed batsman and it's jersey number is 45." that string will write in the "Krushna'stextfile".


    // a--> append mode.
    char string[100] = {"Rohit sharma is right handed batsmen and it's jersey number is 45."} ;
    ptr = fopen ("Krushna'stextfile","a");         //Here a means append mode. jas writting mode madhe aapan new string dili tar je old content hot krushna'stextfile madhe te automatic delete houn jaych pan ya append mode madhe te content delete nahi hot tar te content tasach rahun je kahi ajun new content add kel asel te tya old content madhe add hoot asat. 
    fprintf(ptr,"%s",string);
    printf("The content of this file is %s",string);

    //OUTPUT : Same as the above only difference is here we are use append mode.

    return 0;
}