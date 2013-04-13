/*
 * arrayMenudriven.cpp
 *	A menudriven program to display sum of all the elements of 2D array
 *  Created on: Apr 8, 2013
 *      Author: Vijaywargi
 */


#include<iostream>
#include<cstdlib>
#include<conio.h>

using namespace std;


void showdata(int arr[50][50] , int m, int n) //to display elements of an array
{
	for (int i = 0; i < m; ++i) {
		cout << endl;
			for (int j = 0; j < n; ++j) {
				cout << arr[i][j];
				cout << " ";
			}
		}

}

void sum(int arr[50][50] , int m, int n) // to display sum of all elements of an array
{
	int sum=0;
	for (int i = 0; i < m; ++i) {
			for (int j = 0; j < n; ++j) {
					sum+= arr[i][j];

				}
			}
	cout << "sum: " << sum;

}
int main()
{
	int m,n;

	int arr1[50][50],num;

	while(1)
	{
	cout << "\n\n\nEnter an option : ";
	cout << "\n1. Input elements into matrix of size m * n " << endl << "2. Display elements of matrix of size m * n" << endl << "3.  Display sum of all elements of matrix of size m * n " << endl ;
	cout << "4. Exit" << endl;
	cin >> num;

		switch(num)
		{
		case 1:

			cout << "Rows: ";
			cin >> m;
			cout << "Columns: ";
			cin >> n;
			cout << "Enter elements" << endl;
			for (int i = 0; i < m; ++i) {
					for (int j = 0; j < n; ++j) {
						cout << "arr1[" << i << "][" << j << "]=";
						cin >> arr1[i][j];
					}
				}


			break;
		case 2:
			showdata(arr1,m,n);

			break;
		case 3:
			sum(arr1,m,n);

			break;
		case 4:
			exit(0);
			break;
		default:
			cout << "invalid choice";
			break;
		}
	}
	return 0;
}

