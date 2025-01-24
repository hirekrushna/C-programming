#include <stdio.h>
// int main()
// {
//     int a = 34;

//     int *ptr = &a;
//     //int *ptr = NULL;      //This line is give the address 0 for below printf.
//     printf("The address of a is %d\n",ptr);

//     int *ptr = &a;
//     //int *ptr = NULL;      //if we initialize the pointer with NULL then our program will confuse or crashed because of this type of problems we use the below type solution example. 
//     printf("The address of a is %d\n",*ptr);
     
//     return 0;
// }



//THERE IS NO GARAUNTY OF UNINITIALIZED POINTER IS A NULL POINTER SO FOR THE SAFE SIDE WHEN THE POINTER IS UNINITIALIZED THEN DOING THE POINTER IS NULL POINTER.
int main()
{
    int a = 34;
    int * ptr = NULL;
    
    if (ptr != NULL){
    printf("The address of a is %d\n", ptr);
    }
    else{
        printf("The pointer is a null pointer and cannot be dereferenced");
    }
    return 0;
}
