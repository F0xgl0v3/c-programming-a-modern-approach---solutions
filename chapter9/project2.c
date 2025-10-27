#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

// Modify Programming Project 5 from Chapter 5 so that it uses a function to compute the amout of income tax. When passed an amount of taxable income, the fucntion will return the tax due.

#include <stdio.h>
#define p printf 
#define s scanf

float compute_tax ( float income );

int main ( void ) {
	float income, tax;

	p("Enter your income: ");
	s("%f", &income);
	tax = compute_tax ( income );
	p("Tax: %f\n", tax);
}

float compute_tax ( float income ) {

	float tax;

	if ( income < 750 ) tax = income * 0.01f;
	else if ( income < 2250 ) tax = (7.50f + ( income - 750.0f ) * 0.02f);
	else if ( income < 3750 ) tax = 37.5f + ( income - 2250.0f ) * 0.03f;
	else if ( income < 5250 ) tax = 82.5f + ( income - 3750.0f ) * 0.04f;
	else if ( income < 7000 ) tax = 142.5f + ( income - 5250.0f ) * 0.05f; 
	else tax = 230.0f + ( income - 7000 ) * 0.06f;

	return tax;
}	
