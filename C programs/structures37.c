#include <stdio.h>
#include <string.h> // Required for strcpy function




struct book {
char title[20];  
char Author_name[100];  
float price;  
int pages;
} ;

int main( ) {
struct book book1 = { "Cprogramming", "ABC", 130.00, 550 } ;
printf ( "\n Title = %s", book1.title ) ;
printf ( "\n Name = %s", book1.Author_name ) ;
printf ( "\n Price = %.2f",book1.price ) ; 
printf ( "\n Pages = %d", book1.pages ) ;
return 0;
}





// //THIS IS USING LOCAL VARIABLE.
// //struct student Krushna, Aniket, Ganesh;  is inside main function and it will not changing.

struct student {
    int id;
    int marks;
    char fav_char;
    char name[34]; // Character array to hold the name
};

int main() {
    struct student Krushna, Aniket, Ganesh;     

    // Assigning values
    Krushna.id = 1;
    Aniket.id = 2;
    Ganesh.id = 3;
    Krushna.marks = 88;
    Aniket.marks = 77;
    Ganesh.marks = 66;
    Krushna.fav_char = 'K';
    Aniket.fav_char = 'A';
    Ganesh.fav_char = 'G';

    // Using strcpy to copy strings into the name array
    strcpy(Krushna.name, "Krushna Kumar");
    strcpy(Aniket.name, "Aniket Kumar");
    strcpy(Ganesh.name, "Ganesh Kumar");

    // Printing values
    printf("Krushna's id is %d\n", Krushna.id);
    printf("Krushna got %d marks\n", Krushna.marks);
    printf("Aniket's favorite character is %c\n", Aniket.fav_char);
    printf("Krushna's name is %s\n", Krushna.name);

    return 0;
}





//THIS IS USING GLOBAL VARIABLE.
//struct student Krushna, Aniket, Ganesh;  is outside the function means like a public property.

struct student {
    int id;
    int marks;
    char fav_char;
    char name[34]; // Character array to hold the name
};

struct student Krushna, Aniket, Ganesh;

void print()
{
    printf("%s",Krushna.name);
}

int main() {
        

    // Assigning values
    Krushna.id = 1;
    Aniket.id = 2;
    Ganesh.id = 3;
    Krushna.marks = 88;
    Aniket.marks = 77;
    Ganesh.marks = 66;
    Krushna.fav_char = 'K';
    Aniket.fav_char = 'A';
    Ganesh.fav_char = 'G';

    // Using strcpy to copy strings into the name array
    strcpy(Krushna.name, "Krushna Kumar");
    strcpy(Aniket.name, "Aniket Kumar");
    strcpy(Ganesh.name, "Ganesh Kumar");

    //  Printing values
    // printf("Krushna's id is %d\n", Krushna.id);
    // printf("Krushna got %d marks\n", Krushna.marks);
    // printf("Aniket's favorite character is %c\n", Aniket.fav_char);
    //printf("Krushna's name is %s\n", Krushna.name);

    print();
    
    return 0;
}

