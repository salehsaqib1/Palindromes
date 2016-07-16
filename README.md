# Palindromes
Assignment 2

Introduction

Mathematicians often study integers with specific properties. One such property is that of
being a palindrome. A palindromic number (in base 10) is a non-zero number which
reads the same backwards and forwards when written in base 10. For example 10322301
is a palindromic number.
It is easy to check that there are 9 palindromic numbers less than 10, 18 less than 100,
108 less than 1000, 198 less than 100, etc. We would like to examine the frequency of
distribution of such numbers empirically. (It is not that difficult to come up with an
analytic formula for this).
A surprising result is that the sum of the reciprocals of the palindromic numbers actually
converges to a constant, approximately 3.37018. It is this property that we will study in
this assignment.

Assignment

You are to write a C program to study the sum of the reciprocals of the palindromic
numbers.
Your program input some upper limit of values to examine. It should then go through the
numbers from 1 up to this limit. You should count the number of palindromic numbers
you find and compute the sum of their reciprocals.
You would like to output: the number of values processed, the number of palindromes
found and the sum of their reciprocals.
However for large values of limit this would produce too many lines of output. Therefor
you should only output 10 lines. Only output these values when the counter is a multiple
of limit/10.

Methodology

You will have to be able to check whether a number is palindromic. You should make
sure you are able to do this before trying to develop the entire program. If you get this
part correct you will receive at least half marks for the assignment.
The program can consist of a loop that goes through all the numbers up to the specified
limit. For each number it must check whether or not it is a palindrome. If it is, count it
and add its reciprocal to the sum of reciprocals.
