/**********************************************************************
48430 Embedded C - Assignment 1
Name: Mohammad Yasin Azimi
Student ID: 11733490
Date of submission: 20/04/2016
A brief statement on what you could achieve (less than 50 words):
-> Hoping to achieve full mark.

A brief statement on what you could NOT achieve (less than 50 words):
-> Nothing that can not be achieved.

**********************************************************************/



/**********************************************************************
List of header files - do NOT use any other header files.
**********************************************************************/
#include<stdio.h>



/**********************************************************************
Function prototypes - do NOT change the given prototypes. However you
may define your own functions if required.
**********************************************************************/
char isodd(int);			/*Check if an integer is odd*/
char istriangle(int);		/*Check if an integer is a triangular number*/
void printtriangle(int);	/*Print a triangle corresponding to an int*/



/**********************************************************************
Main
**********************************************************************/
int main(void){
    int length;	/*The keyword int declares 'length' to be an integer*/
    printf("Enter a number between 0 and 200>");    /*Prints out requesting the user to enter a integer value between 0 and 200*/
    scanf("%d", &length);	/*Receives an input value from the user and stores that value in the 'length' integer*/
    printf("Printing even triangular numbers below %d:\n", length); /*Prints the triangle numbers in order and stores the largest integer value*/
	if (length >= 6) {
		int max = 0;    /*Initialising the largest number by assigning a value of zero to the keyword 'max'*/
		int k;  /*Initialising k*/
		for (k = 1; k <= length; k++) { /*Assigning an integer value of 1 to variable 'k' with a condition to check whether 'k' is less then or equal to the keyword 'length' which will then proceed to the 'if' statement below and hence, continues the iterations 'k++'*/
        if (!isodd(k) && istriangle(k)) { /*Checks if the input value from the user is not an odd (even) AND triangular*/
			k < 100 ? printf("   %d", k) : printf("  %d", k);	/*Another method for writing an if/else statement. It checks if the input value is less than 100; if so it prints out 3 spaces between the output of the even triangular numbers below 100. Else it prints out 2 spaces between the output of the even triangular numbers above 100*/
            max = k;    /*This updates the largest even number in the triangle*/
        }
    }
    printf(" \n"); /*Prints out a 'space' after the triangular number and continues on to the next line*/
    printf("The last even triangular number is %d. Printing the triangle:\n", max); /*Prints out the last even triangular number along with the triangle*/
    printtriangle (max); /*Prints out the complete triangle up to the highest even number*/
	}
		
    return 0;
}



/**********************************************************************
Check if an integer n is odd.
return 1 - if odd
return 0 - otherwise
**********************************************************************/
char isodd(int n){
    return n % 2 == 1;  /*Checks the remainder of the divisable of n by 2*/
}



/**********************************************************************
Check if an integer n is a triangular number.
return 1 - if n is triangular
return 0 - if n is not triangular
**********************************************************************/
char istriangle(int n){
    int triangle = 0;   /*Value of zero is assigned to the keyword 'triangle'*/
    int k;
    for (k = 0; triangle < n; k++) { /*Assigning an integer value of 0 to the variable k with a condition to check whether the 'triangle' is less then the input value from the user, if so the following code will be executed and hence, continues the iterations 'k++'*/
        triangle += k; }    /*This code is executed if the condition passes the controller from the previous line which will then continue the interations in the validation of the for loop*/

    return triangle == n;
}



/**********************************************************************
Print all triangular numbers below n along the hypotenuse of a triangle
shape. e.g. 10 is a triangular number, therefore the function prints
01
** 03
** ** 06
** ** ** 10
PRE: This function assumes n is already a triangular number. i.e. this
function is called only if istriangle(n) returns 1.
**********************************************************************/
void printtriangle(int n){
    int count = 0;  /*Value of zero is assigned to the keyword 'count'*/
    int k;
    for (k = 1; k <= n; k++) {  /*Assigning an integer value of 1 to the variable k with a condition to check whether k is less than or equal to 'n' (input value from user), if so the following code will be executed (if statement). After executing the if statement, the program will then validate and continues the iterations in the for loop 'k++'*/
        if (istriangle(k)) {	/*Checks if the input value is a trianguler number with the parameter of the input value*/
            count++;    /*k++ is incrementing until the condition set in the "for" statement is met*/
            int z;
            for (z = 1; z < count; z++) {   /*Assigning an integer value of 1 to the variable 'z' with a condition to check whether 'z' is less then the count from the previous iteration then prints out "**" and continues the iterations*/
                printf("** "); /*This prints the correct '*'s in the triangle*/
            }
            printf("%02d \n", k); /*Prints the triangular numbers padded with '0's*/
        }
    }
}

