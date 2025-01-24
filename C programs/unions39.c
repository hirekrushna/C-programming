#include <stdio.h>
#include <string.h>

//THESE IS THE EXAMPLE OF STRUCTURE.

// struct student{
//     int id;
//     float marks;
//     char fav_char;
//     char name[25];
// };

// int main()
// {
//     struct student Harshal;
//     Harshal.id = 5;
//     Harshal.marks = 88.32;
//     Harshal.fav_char = 'H';
//     strcpy(Harshal.name,"Harshal Kumar");

//     printf("The id of Harshal is %d\n",Harshal.id);
//     printf("The marks of Harshal is %0.4f\n",Harshal.marks);
//     printf("The faovarite character of Harshal is %c\n",Harshal.fav_char);
//     printf("The name of harshal is %s\n",Harshal.name);
//     return 0;

// }

//OUTPUT::
//The id of Harshal is 5
//The marks of Harshal is 88.3200
//The faovarite character of Harshal is H
//The name of harshal is Harshal Kumar

// NOTE:::Here struct is used so output of all members are print but if we convert this structure into union it will shows the output only of one member and of other mebers it shows garbage value because it is the property of union.



//THESE IS THE EXAMPLE OF UNION.

union student{
    int id;
    float marks;
    char fav_char;
    char name[25];
};

int main()
{
    union student Harshal;
    Harshal.id = 5;
    Harshal.marks = 88.32;
    Harshal.fav_char = 'H';
    strcpy(Harshal.name,"Harshal Kumar");

    printf("The id of Harshal is %d\n",Harshal.id);
    printf("The marks of Harshal is %0.4f\n",Harshal.marks);
    printf("The faovarite character of Harshal is %c\n",Harshal.fav_char);
    printf("The name of harshal is %s\n",Harshal.name);
    return 0;

}

//OUTPUT:::
// The id of Harshal is 1936875848
// The marks of Harshal is 19203322417063652000000000000000.0000
// The faovarite character of Harshal is H
// The name of harshal is Harshal Kumar

//In union when we initialize the variables ,the variable which is initialized at last only this variable willl give the correct output.