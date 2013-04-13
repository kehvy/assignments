/*
 * largestSmallest.cpp
 *
 *  Created on: Apr 13, 2013
 *      Author: Vijaywargi
 */





#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{

	cout << "Enter array size:";
	int size;
	cin >> size;
	int arr[size];

	cout << "Enter  array elements ";
	for (int i = 0; i < size; ++i) {
		cin >> arr[i];

	}
	cout <<"Array elements are :";
	for(int i=0;i<size;i++)
	{
		cout << arr[i] << " " ;
	}
	int max=arr[0];
	for(int i=0;i<size;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	cout << "\nlargest element : " << max <<endl;

	int min=arr[0];
	for(int i=0;i<size;i++)
	{
		if(arr[i]<min)
			min=arr[i];
	}
	cout << "smallest element : " << min <<endl;
	return 0;
}
