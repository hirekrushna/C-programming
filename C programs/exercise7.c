#include <stdio.h>
#include <string.h>

struct driver_details {
    char name[50];
    int licensenumber;
    char route[50];
    float Kms;
};

int main()
{
    struct driver_details driver1, driver2, driver3;

    driver1.licensenumber = 45;
    driver2.licensenumber = 33;
    driver3.licensenumber = 18;
    driver1.Kms = 98.55;
    driver2.Kms = 55.55;
    driver3.Kms = 45.66;
    strcpy(driver1.route , "mumbai");
    strcpy(driver2.route , "pune");
    strcpy(driver3.route , "jaipur");
    strcpy(driver1.name , "Harshal Hire");
    strcpy(driver2.name , "Krushna Hire");
    strcpy(driver3.name , "pravin Hire");


    printf("The license number of driver1 is %d\n",driver1.licensenumber);
    printf("The license number of driver2 is %d\n",driver2.licensenumber);
    printf("The license number of driver3 is %d\n",driver3.licensenumber);
    printf("The Kms of vehicle is drive by driver1 is %f\n",driver1.Kms);
    printf("The Kms of vehicle is drive by driver2 is %f\n",driver2.Kms);
    printf("The Kms of vehicle is drive by driver3 is %f\n",driver3.Kms);
    printf("The route of driver1 is %s\n",driver1.route);
    printf("The route of driver2 is %s\n",driver2.route);
    printf("The route of driver3 is %s\n",driver3.route);
    printf("The name of driver1 is %s\n",driver1.name);
    printf("The name of driver2 is %s\n",driver2.name);
    printf("The name of driver3 is %s\n",driver3.name);
    return 0;
}
