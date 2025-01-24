#include <stdio.h>


int fib_recursive(int n)
{
    if(n==1 || n==2){
        return n-1;
    }
    else{
        return fib_recursive(n-1) + fib_recursive(n-2);
    }    
}


int fib_iterative(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n-1; i++)
    {
        b = a+b; //1 for iteration 1
        a = b-a; //1 for iteration 1

    }
    
    return a;
}

int main()
{
    int number;
    printf("Enter the index to get fibonacci series\n");
    scanf("%d", &number);
    printf("The value of fibonacci number at position no %d using iterative approach is %d\n",number, fib_iterative(number));
    printf("The value of fibonacci number at position no %d using recursive approach is %d\n", number, fib_recursive(number));
    return 0;
}




//THIS IS THE BEST PROGAM TO UNDERSTAND THE FIBONACCI SERIES.

// #include <stdio.h>
// int main() {

//   int i, n;

//   // initialize first and second terms
//   int t1 = 0, t2 = 1;

//   // initialize the next term (3rd term)
//   int nextTerm = t1 + t2;

//   // get no. of terms from user
//   printf("Enter the number of terms: ");
//   scanf("%d", &n);

//   // print the first two terms t1 and t2
//   printf("Fibonacci Series: %d, %d, ", t1, t2);

//   // print 3rd to nth terms
//   for (i = 3; i <= n; ++i) {
//     printf("%d, ", nextTerm);
//     t1 = t2;
//     t2 = nextTerm;
//     nextTerm = t1 + t2;
//   }

//   return 0;
// }
