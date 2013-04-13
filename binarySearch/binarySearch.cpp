/*
 * binarySearch.cpp
 *
 *  Created on: Apr 6, 2013
 *      Author: Vijaywargi
 */



#include<iostream>
#include<cstdlib>

using namespace std;

void binarySearch(int [],int,int);

int main()
{
	cout << "Enter array size:";
	int size;
	cin >> size;
	int arr[size];
	int data;
	cout << "Enter array elements in sorted form" << endl;
	for (int i = 0; i < size; ++i)
	{
		cin >> arr[i];
	}

	/* cout << "Array is " << endl;
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	} */
	cout << endl << endl;

	cout << "Which element you want to find? ";
	cin >> data;
	binarySearch(arr,size,data);
	return 0;
}
void binarySearch(int array[],int length, int element)
{
	int bottom=0,top=length-1,mid,found=0;
	while((bottom<=top) && !(found))
	{
		mid = (bottom + top) / 2;
		if(element > array[mid])
			bottom = mid + 1;
		else if(element < array[mid])
			top = mid-1;
		else
			found++;
	}
	if(found==1)
		cout << "Element " << element << " found at index " << mid << endl;
	else
		cout << "Element not found" << endl;
}
