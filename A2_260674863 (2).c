/*
 * A2_260674863.c
 *
 *  Created on: Feb 7, 2016
 *      Author: Saleh Saqib Fazal
 */

//The text editor is Eclipse and the compiler is MinGW GCC

#include <stdio.h>   //standard input/output library
#include <math.h>    //math library

/*My code is divided into two sections: a function to check whether input is a palindrome
 or not and the parent function which divides the input into ten equal intervals counting
 the number of palindromes and the sum of their reciprocals. */

int checkforpal(int n){                   //this is check-for-palindrome function
int i, rem, reverse = 0;

i=n;                                  /* I assigned n to an integer i so that n remains
                                        independent of the check-for-pal process.   */
	while (i != 0) {
			rem= i%10;
			reverse= reverse*10 + rem;   // input is reversed using this code
			i= i/10;                     // %10 gets units of input and /10 gets other digits
				   }

	            if (reverse == n)return 1;   //return 1 is true and return 0 false
	            else return 0;               //this acts as a counter for numofpalindrome.
                      }


int main (){                   //this is the parent function
int input, x,n;

scanf("%d",&input);
                                       //the for loop below divides input into ten intervals
	for (x = input/10; x <= input; x = x +(input/10)){
			int numofPalindrome = 0;
		    double sumofreciprocal = 0.0;

			printf("%d ", x);

			for (n=1; n<x; n++){     //this for loop uses checkforpal function on one interval
				if(checkforpal(n)){
					numofPalindrome++;
					sumofreciprocal = sumofreciprocal + 1.0/((double) n);
								  }
		                       }
			printf(" %d ", numofPalindrome);
			printf(" %f \n", sumofreciprocal);
	                  }
		return 0;
		   }





