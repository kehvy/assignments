/*
 * arrayAddition.cpp
 *	add two 2D array
 *  Created on: Apr 13, 2013
 *      Author: Vijaywargi
 */




#include <iostream>
#include<cstdlib>

using namespace std;

void displayArray(int[50][50], int[50][50], int, int);
void addition(int[50][50], int[50][50], int, int);

int main()
{
	cout << "Enter array size "<< endl;
	int m,n;
	cout << "Rows: ";
	cin >> m;
	cout << "Columns: ";
	cin >> n;

	int A[50][50], B[50][50];

	cout <<"Enter first array: " ;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin >> A[i][j];
		}
	}

	cout << endl << "Enter second array: ";
	for(int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
			{
				cin >> B[i][j];
			}
		}

	displayArray(A,B,m,n);

	addition(A,B,m,n);

	return 0;
}
void addition(int first[50][50], int second[50][50], int m, int n)
{
	int sum[50][50];
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			sum[i][j] = first[i][j] + second[i][j];
		}
	}

	cout << endl << endl << "Addition of array A and array B is :";
	for(int i=0; i<m; i++)
	{
		cout << endl;
		for(int j=0; j<n; j++)
		{
			cout << sum[i][j] << " ";
		}
	}
}
void displayArray(int first[50][50], int second[50][50], int m, int n)
{
	cout << endl << "Array A: ";
		for(int i=0; i<m; i++)
		{
			cout << endl;
			for(int j=0; j<n; j++)
			{
				cout << first[i][j] << " ";
			}
		}

		cout << endl << endl << "Array B: ";
		for(int i=0; i<m; i++)
		{
			cout << endl;
			for(int j=0; j<n; j++)
			{
				cout << second[i][j] << " ";
			}
		}

}
