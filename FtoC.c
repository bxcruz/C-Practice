#include <stdio.h>
#include <stdlib.h>
//------------------------------------------------------------
//PROTOTYPES--------------------------------------------------
//------------------------------------------------------------

#define LOWERBOUND 0
#define UPPERBOUND 300
#define INCREMENT 20

//using while loops
void FahToCel(int inF) {
	int cel;                                  //stores celsius value
	int fahr = inF;                           //parameter for fah->cel

	while (fahr <= UPPERBOUND) {
		cel = (5) * (fahr - 32) / 9;          //fah to cel formula
		printf(" %3d %6d\n", fahr, cel);      //print field
		fahr += INCREMENT;                    //increment fahrenheit by 20 degree increments
	}
}

//using while loops
void FahToCel(double inF) {
	double cel;
	double fahr = inF;

	while (fahr <= UPPERBOUND) {
		cel = (5.0/9.0) * (fahr - 32);
		printf(" %6.2f\t\t%6.2f\n", fahr, cel);
		fahr += INCREMENT;
	}
}


//using for loops, reversed
void RevFahToCel(double inF) {
	double cel;
	double fahr = inF;

	for (fahr; fahr >= LOWERBOUND; fahr -= INCREMENT) {
		cel = (5.0 / 9.0) * (fahr - 32);
		printf(" %6.2f\t\t%6.2f\n", fahr, cel);
	}
}

//using for loops
void FahToCel(float inF) {
	float cel;
	float fahr = inF;
	for (fahr; fahr <= UPPERBOUND; fahr += INCREMENT) {
		cel = (5.0 / 9.0) * (fahr - 32);
		printf(" %6.2f\t\t%6.2f\n", fahr, cel);
	}
}

//------------------------------------------------------------
//MAIN--------------------------------------------------------
//------------------------------------------------------------
int main() {
	printf("Displaying Fahrenheit to Celsius values from 0C to 300C in integer form:\n");
	FahToCel(1);   //prints integer estimation for fahrenheit to celsius
	printf("Displaying Fahrenheit to Celsius values from 0C to 300C in double form:\n");
    FahToCel(1.2); //prints double estimation for fahrenheit to celsius
	printf("Displaying Fahrenheit to Celsius values from 0C to 300C in float form:\n");
	FahToCel((float)1.2);  //prints float estimation for fahrenheit to celsius using for loop


	//exercise 1-5 page 17
	printf("Displaying Fahrenheit to Celsius values from 300C to 0C in double form:\n");
	RevFahToCel(281.20); //prints double estimation for fahrenheit to celsius from 300 to 0
	exit(EXIT_SUCCESS);
}