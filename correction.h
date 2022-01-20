#ifndef CORRECTION_H
#define CORRECTION_H

#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"
#include <string.h>


unsigned long correct_facto(unsigned long n);
unsigned long correct_fibo(unsigned long n);
void correct_bubble_sort(int* arr, int size);
int correct_int_palindrome(int n);
matrix* correct_mat_trans(matrix* m);
matrix* correct_mat_mult(matrix* m1, matrix* m2);
void correct_combine_string(char* s1, char* s2, char* s);

#endif


