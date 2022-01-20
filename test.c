#include <stdio.h>
#include <stdlib.h>
#include "correction.h"
#include "facto.h"
#include "fibo.h"
#include "bubble_sort.h"
#include "int_palindrome.h"
#include "mat_trans.h"
#include "mat_mult.h"
#include "combine_string.h"

void print_matrix(matrix* m)
{
	
	for (int x = 0; x < m->rows; x++)
	{
		printf("\n");
		for (int y = 0; y < m->cols; y++)
		{
			printf("%i ", m->data[x*m->cols+y]);
		}
	}
	printf("\n");
}

void print_arr(int arr[], int size)
{
	printf("arr = {");
	for (int i = 0; i < size; i++)
	{
		printf(", %i", arr[i]);
	}
	printf("}\n");
}

void test_facto(void)
{
	printf("facto(1) -> your result: %lu | expected result: %lu\n", facto(1), correct_facto(1));	
	printf("facto(5) -> your result: %lu | expected result: %lu\n", facto(5), correct_facto(5));	
	printf("facto(12) -> your result: %lu | expected result: %lu\n", facto(12), correct_facto(12));	
}


void test_fibo(void)
{
	printf("fibo(1) -> your result: %lu | expected result: %lu\n", fibo(1), correct_fibo(1));	
	printf("fibo(5) -> your result: %lu | expected result: %lu\n", fibo(5), correct_fibo(5));	
	printf("fibo(12) -> your result: %lu | expected result: %lu\n", fibo(12), correct_fibo(12));	
}

void test_bubble_sort(void)
{
	int arr1[] = {2, 5, 82, 1, 5, 7, 8, 9, 2};
	int size = 9;
	printf("bubble_sort(arr1) -> your result:\n");
	bubble_sort(arr1, size);
	print_arr(arr1, size);
	printf("bubble_sort(arr1) -> expected result:\n");
	correct_bubble_sort(arr1, size);
	print_arr(arr1, size);
}

void test_int_palindrome(void)
{
	printf("int_palindrome(1551) -> your result: %i | expected result: %i\n", int_palindrome(1551), correct_int_palindrome(1551));
	printf("int_palindrome(15551) -> your result: %i | expected result: %i\n", int_palindrome(15551), correct_int_palindrome(15551));
	printf("int_palindrome(1515) -> your result: %i | expected result: %i\n", int_palindrome(1515), correct_int_palindrome(1515));
}

//AUCUNE MAT EST FREE

void test_mat_trans(void)
{
	int data1[] = {
	2, 5, 7,
	5, 8, 9,
	3, 0, 2,
	1, 6, 6
	};


	matrix *m1 = malloc(sizeof(matrix));
	m1->rows = 4;
	m1->cols = 3;
	m1->data = data1;

	printf("Original matrix: \n");
	print_matrix(m1);
	printf("Your result: \n");
	print_matrix(mat_trans(m1));
	printf("Expected result: \n");
	print_matrix(correct_mat_trans(m1));
}

void test_mat_mult(void)
{
	int data1[] = {
		2, 5, 7,
		5, 8, 9,
		3, 0, 2,
		1, 6, 6
	};
	int data2[] = {
		6, 3, 1, 5,
		4, 4, 5, 3,
		8, 9, 0, 3
	};

	matrix *m1 = malloc(sizeof(matrix));
	m1->rows = 4;
	m1->cols = 3;
	m1->data = data1;

	matrix *m2 = malloc(sizeof(matrix));
	m2->rows = 3;
	m2->cols = 4;
	m2->data = data2;

	printf("Your result: \n");
	print_matrix(mat_mult(m1, m2));
	printf("Expected result: \n");
	print_matrix(correct_mat_mult(m1, m2));
}

void test_combine_string(void)
{
	char *s1 = "pomme";
	char *s2 = " de terre";
	char *s3 = malloc(64 * sizeof(char));
	char *s4 = malloc(64 * sizeof(char));
	printf("s1 = pomme | s2 = de terre\n");
	correct_combine_string(s1, s2, s3);
	printf("Expected result: %s\n", s3);
	combine_string(s1, s2, s4);
	printf("Your result: %s\n", s4);
	
}

int main(void)
{
	//test_facto();
	//test_fibo();
	//test_bubble_sort();
	//test_int_palindrome();
	//test_mat_trans();
	//test_mat_mult();
	//test_combine_string();

	return EXIT_SUCCESS;
}
