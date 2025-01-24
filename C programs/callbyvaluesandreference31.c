#include <stdio.h>

//CALL BY VALUES

//Function to change the values of the variables pointed to by a and t
//here values are not changes because this is call by values and in call by values the new function means changevalues here only copies the values of k and h to a and t and you are change the values of a and t then they are changed only for that changrvalue function means the values of k and h are not changes.
void changevalues(int a ,int t)
{
    int temp;
    temp = a;
    a = t;
    t = temp;
}
    
void main()
{
    int k = 45, h = 18;
    printf("The values of k and h is %d and %d\n",k,h);

    changevalues(k , h); //Passing values of k and h to copy in a and t or to changevalues function

    printf("The values of k and h now is %d and %d\n",k,h);              //printing the values after the changing the values in changevalues function
}



//These program of harry bhai which is in the notes of harry bhai
// void swap(int x, int y)
// {
// int temp;
// temp=x;
// x=y;
// y=temp;
// }
// void main()
// { 
// int r=10, v=20; 
// swap(r, v);  // passing value to function
// printf("\nValue of r: %d",r);
// printf("\nValue of v: %d",v);
// } 



//CALL BY REFERENCES
//Function to change the values of the variables pointed to by a and t
//here values are changes because this is call by reference and in call by reference the new function means exchangevalues function copies the address of s and t and give to u and v and if you are change the values of u and v then they are change the values of s and t because they copies the address.
// void exchangevalues(int *u ,int *v){
//     int temp;
//     temp = *u;
//     *u = *v;
//     *v = temp;
// }
// int main()
// {
//     int s=7, t=10;
//     printf("The values of s and t now is %d and %d\n",s,t);

//     exchangevalues(&s ,&t);//Passing the address of s and t to exchangevalues function

//     printf("The values of s and t after exchanging is %d and %d\n",s,t);            //Printing the values after changing the values in exchangevalues function.

//     return 0;
// }


//These program of harry bhai which is given in the notes of harry bhai 
// void swap(int *x, int *y)
// {
// int temp;
//  temp=*x;
// *x=*y;
// *y=temp;
// }
// void main()
// { 
// int r=10, v=20; 
// swap(&r, &v);  // passing value to function
// printf("\nValue of r: %d",r);
// printf("\nValue of v: %d",v);
// }












// int sum(int arr[]) {
// int sum_of_array=0;
// for (int i = 0; i<4; ++i) {
// sum_of_array += arr[i]; 
// }
// return sum_of_array; 
// }  

// int main() {   
// int result, array[] = {23,33,44,55};   
// result = sum(array);     
// printf("Result = %d", result);   
// return 0;
// } 



// void display(int *ptr) {
//  printf("%d\n", *ptr);
// }

// int main(){
//   int arr[] = {1, 2, 3, 4};
//   for (int i=0; i<4; i++) {
//   display(&arr[i]);
// }
//   return 0;
// }