#include <stdio.h>
int main()
{
    char input;
   float kmsToMiles = 0.621371;
   float inchesToFoot = 0.0833333;
   float cmsToInches = 0.393701;
   float poundToKgs = 0.453592;
   float inchesToMeters = 0.0254;
   float first, second;

   while (1)
   {
        printf("Enter the input character.q to quit\n        1.kmsToMiles\n        2.inchesToFoot\n        3.cmsToInches\n        4.poundToKgs\n        5.inchesToMeters\n");
        scanf("%c",&input);
        // printf("The character is %c \n",input);

        switch (input)
        {
        case 'q':
            printf("Quiting the program....");
            goto end;
            break;
        
        case '1':
        printf("Enter the quantity in first unit\n");
        scanf("%f",&first);
        second = first * kmsToMiles;
        printf("%f is equal to %f\n",first,second);
        break;

        case '2':
        printf("Enter the quantity in first unit\n");
        scanf("%f",&first);
        second = first * inchesToFoot;
        printf("%f is equal to %f\n",first,second);
        break;

        case '3':
        printf("Enter the quantity in first unit\n");
        scanf("%f",&first);
        second = first * cmsToInches;
        printf("%f is equal to %f\n",first,second);
        break;

        case '4':
        printf("Enter the quantity in first unit\n");
        scanf("%f",&first);
        second = first * poundToKgs;
        printf("%f is equal to %f\n",first,second);
        break;

        case '5':
        printf("Enter the quantity in first unit\n");
        scanf("%f",&first);
        second = first * inchesToMeters;
        printf("%f is equal to %f\n",first,second);
        break;

        default:
        printf("Now in default");
            break;
        }
   }
   end:
    return 0;
}
