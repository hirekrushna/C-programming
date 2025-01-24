// #include <stdio.h>

// int main()
// {
//     int n1, n2, max, lcm;

//     printf("Enter two integers\n");
//     scanf("%d %d", &n1, &n2);

//     max = (n1 > n2) ? n1 : n2;

//     lcm = max;

//     while (lcm % n1 != 0 || lcm % n2 != 0)
//     {
//         lcm += max;
//     }

//     printf("The lcm of %d and %d is %d\n", n1, n2, lcm);

//     return 0;
// }




//THIS PROGRAM USING GCD.

#include <stdio.h>

int main() {

    int n1, n2, i, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // loop to find the GCD
    for (i = 1; i <= n1 && i <= n2; ++i) {
        
        // check if i is a factor of both integers
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    lcm = (n1 * n2) / gcd;

    printf("The LCM of two numbers %d and %d is %d.", n1, n2, lcm);
    return 0;
}