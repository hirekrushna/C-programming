#include <stdio.h>

int addnumber(int a,int b)
{
    return a+b;
}

int main()
{
    int res1 ,res2;

    int (*fun)(int ,int);
    fun = addnumber;

    res1 = fun( 20, 50);
    res2 = addnumber(20,50);

    printf("using fun pointer : %d\n",res1);
    printf("Using function addnumber : %d\n",res2);

        return 0;
}