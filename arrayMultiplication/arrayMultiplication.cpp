/*
 * arrayMultiplication.cpp
 *
 *  Created on: Apr 13, 2013
 *      Author: Vijaywargi
 */



#include <iostream>
using namespace std;

void displayArray(int[][50], int[][50], int, int, int);
void multiplication(int[][50], int[][50], int, int, int);
int main()
{
	cout << "Enter array size "<< endl;
	int m,n,l1,l2;
	cout << "Size for array A (m * l):" << endl;
	cout << "Rows: ";
	cin >> m;
	cout << "Columns: ";
	cin >> l1;
	cout << "Size for array B (l * n):" << endl;
	cout << "Rows: ";
	cin >> l2;
	cout << "Columns: ";
	cin >> n;
	try
	{
		if(l1==l2)
		{

		int A[50][50], B[50][50];

		cout <<"Enter first array: " ;
		for(int i=0; i<m; i++)
		{
			for(int j=0; j<l1; j++)
			{
				cin >> A[i][j];
			}
		}

		cout << endl << "Enter second array: ";
		for(int i=0; i<l2; i++)
		{
			for(int j=0; j<n; j++)
			{
				cin >> B[i][j];
			   }
		}

		displayArray(A,B,m,n,l1);
		multiplication(A,B,m,n,l1);
		}
		else
			throw "Try again.";
	} catch (const char *str)
	{
		cerr << "Matrices cannot be multiplied, " << str;
	}


	return 0;
}


void multiplication(int first[50][50], int second[50][50], int m, int n,int l)
{
	int mul[50][50];
	mul[0][0] = 0;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<l; j++)
		{
			for(int k=0; k<l; k++)
				mul[i][j] = mul[i][j] + first[i][k] * second[k][j];
		}
	}
	cout << endl << "Multiplication of Array A and Array B:" << endl;
	for(int i=0; i<m; i++)
	{
		cout << endl;
		for(int j=0; j<n; j++)
		{
			cout << mul[i][j] << " ";
		}
	}
}

void displayArray(int first[50][50], int second[50][50], int m, int n, int l)
{
	cout << endl << "Array A: ";
		for(int i=0; i<m; i++)
		{
			cout << endl;
			for(int j=0; j<l; j++)
			{
				cout << first[i][j] << " ";
			}
		}

		cout << endl << endl << "Array B: ";
		for(int i=0; i<l; i++)
		{
			cout << endl;
			for(int j=0; j<n; j++)
			{
				cout << second[i][j] << " ";
			}
		}

}
