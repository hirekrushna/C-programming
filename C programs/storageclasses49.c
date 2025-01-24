#include <stdio.h>

//Automatic Variables or Auto Storage class.
//This is like a Local variable.

int myfunc(int a,int b)
{
    //int sum;
    auto int sum;       //Here both are same int sum and auto int sum.
    sum = a+b;
    return sum;
}

int main()
{
    int sum = myfunc(3,5);
    printf("The sum is %d\n",sum);
    return 0;
}

//OUTPUT ::The sum is 8.





//External Variables or Extern Storage Class.
//This is like a Global Variable.

int sum = 45;   //This is the Global Variable.

int myfunc(int a,int b)
{
    // int sum;       //Here on this two lines code we use the extern int sum;.
    // sum = a+b;
    extern int sum;     //Means ki jo global variable hota hai means jo kisi bhi function ke bahar define kiya ho wo variable hum extern keyword ke help se apne function me use kar sakte hai.
    return sum;
}

int main()
{
    int sum = myfunc(3,5);
    printf("The sum is %d\n",sum);
    return 0;
}

//OUTPUT :: The sum is 45.





//Static Variable or Static Storage class.
//This is like a Static Variables.  #Tutorial = 42.

int myfunc(int a,int b)
{
    static int myVar;
    myVar++;
    printf("The myVar is %d\n",myVar);

    return myVar;
}

int main()
{
    int myVar = myfunc(3,5);
    myVar = myfunc(3,5);
    myVar = myfunc(3,5);
    myVar = myfunc(3,5);
    
    return 0;
}

//OUTPUT ::
// The myVar is 1
// The myVar is 2
// The myVar is 3
// The myVar is 4





//Register Variable or Register Storage Class.
//It is very similar to Auto Storage Class.

int myfunc(int a,int b)
{
    static int myVar;
    myVar++;
    printf("The myVar is %d\n",myVar);

    return myVar;
}

int main()
{
    register int myVar = myfunc(3,5);
    myVar = myfunc(3,5);
    myVar = myfunc(3,5);
    myVar = myfunc(3,5);
    
    return 0;
}

//OUTPUT :: 
// The myVar is 1
// The myVar is 2
// The myVar is 3
// The myVar is 4