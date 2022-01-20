#include "correction.h"

unsigned long correct_facto(unsigned long n)
{
	if (n == 0)
		return 1;
	return n*correct_facto(n-1);
}

unsigned long correct_fibo(unsigned long n)
{
	unsigned long f = 0;
	unsigned long F = 1;
	
	while (n > 0)
	{
		unsigned long tmp = f;
		f = F;
		F += tmp; 
		n--;
	}
	return f;
}

void correct_bubble_sort(int* arr, int size)
{
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

int correct_int_palindrome(int n)
{
	int sum = 0;
    int realn = n;
    while (n > 0)
    {
        int r = n % 10;
        sum = (sum*10)+r;
        n=n/10;
    }
    return sum == realn;
}

matrix* correct_mat_trans(matrix* m)
{
	matrix *result = malloc(sizeof(matrix));
	result->rows = m->cols;
	result->cols = m->rows;
	result->data = calloc(result->rows*result->cols, sizeof(int));

	for (int i = 0; i < m->rows; i++)
	{
		for (int j = 0; j < m->cols; j++)
		{
			result->data[j*m->rows+i] = m->data[i*m->cols+j];
		}
	}
	return result;
}

matrix* correct_mat_mult(matrix* m1, matrix* m2)
{
	matrix *result = malloc(sizeof(matrix));
	result->rows = m1->rows;
	result->cols = m2->cols;
	result->data = calloc(result->rows*result->cols, sizeof(int));

	for (int i = 0; i < result->rows; i++)
	{
		for (int j = 0; j < result->cols; j++)
		{
			for (int k = 0; k < m2->rows; k++)
			{
				result->data[i*result->cols+j] += m1->data[i*m1->cols+k]*m2->data[k*m2->cols+j];
			}
		}
	}
	
	return result;
}

void correct_combine_string(char* s1, char* s2, char* s)
{
    size_t size1 = strlen(s1);
    size_t size2 = strlen(s2);

    int i, j = 0;

	while (i < size1)
	{
		*(s+i) = *(s1+i);
		i++; 
	}

    while (j < size2)
    {
        *(s+i+j) = *(s2+j);
		j++;
    }
    *(s+i+j) = 0;
}
