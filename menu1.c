#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // Variable declaration
    float s, l, b, r, h, a, c, cel,kel, fah;
    int choice;
    char ch;

    do {
        system("cls");
        printf("\n");
        printf("%c",213);
        for (a = 0; a < 29; a++) printf("%c",205);
        printf("%c",184);
        printf("\n%c           Menu              %c",179,179);
        printf("\n");
        printf("%c",198);
        for (a = 0; a < 29; a++) printf("%c",205);
        printf("%c",181);
        printf("\n%c1. Area Calculator           %c",179,179);
        printf("\n%c2. Temperature Converter     %c",179,179);
        printf("\n%c3. Exit                      %c",179,179);
        printf("\n");
        printf("%c",212);        
        for (a = 0; a < 29; a++) printf("%c",205);
        printf("%c",190);
        printf("\nEnter your choice:");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                // Area Calculator
                do {
                    system("cls");
                    printf("\n");
                    printf("%c",213);
                    for (a = 0; a < 29; a++) printf("%c",205);
                    printf("%c",184);
                    printf("\n%c           Area Calculator    %c",179,179);
                    printf("\n");
                    printf("%c",198);
                    for (a = 0; a < 29; a++) printf("%c",205);
                    printf("%c",181);
                    printf("\n%c1.1. Area of Square            %c",179,179);
                    printf("\n%c1.2. Area of Rectangle         %c",179,179);
                    printf("\n%c1.3. Area of Triangle          %c",179,179);
                    printf("\n%c1.4. Area of Circle            %c",179,179);
                    printf("\n%c1.5. Back to Main Menu         %c",179,179);
                    printf("\n");
                    printf("%c",212);        
                    for (a = 0; a < 29; a++) printf("%c",205);
                    printf("%c",190);
                    printf("\nEnter your choice:");
                    scanf("%d",&choice);

                    switch(choice) {
                        case 1:
                            // Area of Square
                            printf("Enter side of Square:");
                            scanf("%f",&s);
                            a = s * s;
                            printf("Area of Square:%g",a);
                            break;
                        case 2:
                            // Area of Rectangle
                            printf("Enter length of Rectangle:");
                            scanf("%f",&l);
                            printf("Enter breadth of Rectangle:");
                            scanf("%f",&b);
                            a = l * b;
                            printf("Area of Rectangle:%g",a);
                            break;
                        case 3:
                            // Area of Triangle
                            // Print Sub Menu
                            // Code for calculating the area of triangles (similar to the previous implementation)
                            printf("Enter three sides of triangle(seperatrd by any symbol):");
							scanf("%f%*c%f%*c%f",&a,&b,&c);
							s=(a+b+c)/2;
							h=sqrt(s*(s-a)*(s-b)*(s-c));
							printf("\nArea of Triangle=%.2f",h);
							break;
                        case 4:
                            // Area of Circle
                            printf("Enter radius of Circle:");
                            scanf("%f",&r);
                            a = 3.14 * r * r;
                            printf("Area Of Circle:%g",a);
                            break;
                        case 5:
                            // Back to main menu
                            break;
                        default:
                            printf("\nSorry! You have selected an invalid option.");
                    }
                    printf("\nPress any Key and Enter to Continue....");
                    fflush(stdin);
                    scanf("%c",&ch);
                } while(1);
                break;
            case 2:
                // Temperature Converter
                // Code for temperature converter (similar to the previous implementation)
                do
	{
		system("cls");
		printf("\n");
		printf("%c",213);
		for(a=0;a<29;a++)printf("%c",205);
		printf("%c",184);
		printf("\n%c  Temperatur Converter       %c",179,179);
		printf("\n");
		printf("%c",198);
		for(a=0;a<29;a++)printf("%c",205);
		printf("%c",181);
		printf("\n%c2.1. Cel to Fahre            %c",179,179);
		printf("\n%c2.2. Cel to Kel              %c",179,179);
		printf("\n%c2.3. Fah to Cel              %c",179,179);
		printf("\n%c2.4. Fah to Kel              %c",179,179);
		printf("\n%c2.5. Kel to Fah              %c",179,179);
		printf("\n%c2.6. Kel to Cel              %c",179,179);
		printf("\n%c2.7. Exit                    %c",179,179);
		printf("\n");
		printf("%c",212);		
		for(a=0;a<29;a++)printf("%c",205);
		printf("%c",190);
		printf("\nPlease enter your choice: ");
		scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			//Cel to Fah
			printf("\nEnter the temperature: ");
			scanf("%f",&cel);
			fah=(cel*(9.0/5.0))+32;
			printf("\nFahrenheit= %g",fah);
			break;
		case 2:
			//Cel To Kel
			printf("\nEnter the temperature: ");
			scanf("%f",&cel);
			kel=cel+273.15;
			printf("\nKelvin= %g",kel);
			break;
		case 3:
			// Fah To Cel
			printf("\nEnter the temperature: ");
			scanf("%f",&fah);
			cel=((fah-32)*5.0)/9.0;
			printf("\nCelcius= %g",cel);
			break;
		case 4:
			//Fah to Kel
			printf("\nEnter the temperature: ");
			scanf("%f",&fah);
			kel=5.0/9.0*(fah-32)+273.15;
			printf("\nKelvin= %g",kel);
			break;
		case 5:
			//Kel to Fah
			printf("\nEnter the temperature: ");
			scanf("%f",&kel);
			fah=((kel-273.15)/9.0/5.0)+32;
			printf("\nFahrenheit= %g",fah);
			break;
		case 6:
			//Kel to cel
			printf("\nEnter the temperature: ");
			scanf("%f",&kel);
			cel=kel-273.15;
			printf("\nCelcius= %g",cel);
			break;
		case 7:
			//exit
			printf("\nThank you.");
			exit(0);
		default:
			printf("\nOOPs! You have selected an invalid option!");	
	}
	printf("\nPress any key and enter to continue....");
	fflush(stdin);
	scanf("%c",&ch);
	}while(1);
                break;
            case 4:
                // Exit
                printf("\nThank You!");
                exit(0);
            default:
                printf("\nSorry! You have selected an invalid option.");
        }
        printf("\nPress any Key and Enter to Continue....");
        fflush(stdin);
        scanf("%c",&ch);
    } while(1);
    return 0;
}
