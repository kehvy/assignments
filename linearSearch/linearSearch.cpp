/*
 * linearSearch.cpp
 *
 *  Created on: Apr 5, 2013
 *      Author: Vijaywargi
 */




#include <iostream>
#include<cstdlib>

using namespace std;

void linearSearch(int arr[], int length, int data) //search for index when data is provided
{
	int flag=0;
	int index;
	for(int i=0; i<length; i++)
	{
		if(arr[i] == data)
		{
			flag=1;
			index=i;
		}
	}
	if(flag==1)
		cout << "Element " << data <<  " found at index " << index << endl;
	else
		cout << "Element not found in array." << endl;
}
/*void linearSearch2(int arr[], int length, int index)  // search for data when index is provided
{
	int flag=0;
	int data;
	for (int i = 0; i < length; ++i)
	{
		if (i==index)
		{
			flag=1;
			data=i;
		}

	}

	if(flag==1)
		cout << "Element at " << index << " position is " << arr[data];
	else
		cout << "No such index exists.";
}

*/

int main()
{
	cout << "Enter array size:";
	int size;
	cin >> size;
	int arr[size];
	cout << "Enter array elements " << endl;
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}

	cout << "Which element you want to find ? " << endl;
	int n;
	cin >> n;
	linearSearch(arr, size, n);


	/* cout<< "\nWhich index you want to access in given array?";
	int index;
	cin >> index;
	linearSearch2(arr,size,index); */

	return 0;
}

