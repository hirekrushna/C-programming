#include<stdio.h>
int main()
{
    // POINTER ARITHMETIC

    //Here integer is used 
    //Here the size of int is 4 so therefore output is increased by 4

    // int a = 18;
    // int *ptra = &a;
    // printf("%d\n",ptra);        //output = 6422296 --> It is the address of a 
    // printf("%d\n",ptra+1);        //output = 6422300
    // printf("%d\n",ptra+2);          //output = 6422304
    

    //Here charcter is used 
    //Here the output value is increased by the value you given in input because character takes 1 byte in memory location.
    //here in this below program you will also use the ptra-1,ptra-2etc.on the place of ptra+1,ptra+2,etc.
    //Here you can also use other format specifiers like %p,%x.
    // char a = '3';
    // char* ptra = &a;
    // printf("%d\n",ptra);       //output = 6422299
    // printf("%d\n",ptra+1);     //output = 6422300
    // printf("%d\n",ptra+2);     //output = 6422301


    // char a = '3';
    // char* ptra = &a;
    // printf("%d\n",ptra);        //output = 6422299
    // ptra++;                         //here you can also use the ptra--
    // printf("%d\n",ptra);       //output = 6422300
    // printf("%d\n",ptra+1);     //output = 6422301
    // printf("%d\n",ptra+2);      //output = 6422302



    //ARRAYS IN POINTER ARITHMETICS

    int arr[] = {7,18,45,93,33,17,10};
    printf("Value at position 3 of an array is %d\n",arr[3]);       //output = 93
    printf("The address of first position of an array is %d\n",&arr[0]);        //output = 6422276
    printf("The address of first position of an array is %d\n",arr);        //output = 6422276
    printf("The address of second position of an array is %d\n",&arr[1]);       //output = 6422280
    printf("The address of second position of an array is %d\n",arr + 1);       //output = 6422280
    printf("The address of third position of an array is %d\n",&arr[2]);        //output = 6422284
    printf("The address of third position of an array is %d\n",arr + 2);        //output = 6422284
    printf("The address of fourth position of an array is %d\n",&arr[3]);       //output = 6422288
    printf("The address of fourth position of an array is %d\n",arr + 3);       //out put = 6422288
    //arr--;  //this line will throw an error because it will considered as constant

    printf("Value at position 1 of an array is %d\n",*(&arr[0]));       //output = 7
    printf("Value at position 1 of an array is %d\n",arr[0]);       //output = 7
    printf("Value at position 1 of an array is %d\n",*(arr));       //output = 7
    printf("Value at position 2 of an array is %d\n",*(&arr[1]));       //output = 18
    printf("Value at position 2 of an array is %d\n",arr[1]);       //output = 18
    printf("Value at position 2 of an array is %d\n",*(arr + 1));       //output = 18

    return 0;
}
