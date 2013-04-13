/*
 * sortingMenuDriven.cpp
 *	A menudriven program to sort array using different sorting method
 *  Created on: Apr 10, 2013
 *      Author: Vijaywargi
 */




#include<iostream>
#include<cstdlib>

using namespace std;

void beforeSort(int[],int);
void showArray(int[],const int);
void insertionSort(int[],const int);
void selectionSort(int[],const int);
void bubbleSort(int[],const int);
void exchangeSort(int[],const int);
void shellSort(int[],const int);
void quickSort(int[],int, int);
int partition(int[],int,int);


int main()

{
	int size;
	cout << "No. of elements (Size of array): ";
	cin >> size;
	//const int size=5;
	int arr[size];

		while(1)
			{
			cout << "\n\nSelect an option" << endl;
			cout << "1.Enter data elements into array." << endl;
			cout << "2.Display data elements of array." << endl;
			cout << "3.Sort array using insertion sort method." << endl;
			cout << "4.Sort array using selection sort method." << endl;
			cout << "5.Sort array using bubble sort method." << endl;
			cout << "6.Sort array using exchange sort method." << endl;
			cout << "7.Sort array using shell sort method." << endl;
			cout << "8.Sort array using quick sort method." << endl;
			cout << "9.Exit." << endl;
			int option;
			cin >> option;




				switch(option)
				{
				case 1:
					cout << "Enter elements : ";
						for (int i = 0; i < size; ++i)
						{
							cin >> arr[i];
						}


						break;

				case 2:
						showArray(arr,size);

						break;

				case 3:

					cout << "Insertion Sort " <<endl;
						beforeSort(arr,size);
						insertionSort(arr,size);


						break;

				case 4:
					cout << "Selection Sort " <<endl;
						beforeSort(arr,size);
						selectionSort(arr,size);


						break;

				case 5:
					cout << "Bubble Sort " <<endl;
						beforeSort(arr,size);
						bubbleSort(arr,size);


						break;

				case 6:
					cout << "Exchange Sort " <<endl;
						beforeSort(arr,size);
						exchangeSort(arr,size);


						break;

				case 7:
					cout << "Shell Sort " <<endl;
						beforeSort(arr,size);
						shellSort(arr,size);


						break;

				case 8:
					cout << "Quick Sort " <<endl;
						beforeSort(arr,size);
						quickSort(arr,0,size-1);


						break;

				case 9:
					cout << "Terminated !!";
						exit(0);
						break;

				default:
						cout << "Invalid choice";
						break;
				}

			}


	return 0;
}

void beforeSort(int array[], const int length)
{
	cout << "Array before sorting:  ";
	for (int i = 0; i < length; ++i)
		{
			cout << array[i] << " ";
		}
}
void showArray(int array[], const int length)
{

	cout << "Array is : ";
	for (int i = 0; i < length; ++i)
	{
		cout << array[i] << " ";
	}
}

void insertionSort(int array[], const int length)
{
	int i, j, key;
	for(i = 1; i < length; i++)
	{
		key = array[i];
		j = i - 1;
		while((j >= 0) && (array[j] > key))
		{
			array[j+1] = array[j];
			j--;
		}
		array[j+1] = key;
	}
	cout << endl << "Array after sorting: ";
	for(int i=0;i<length;i++)
	{
		cout << " " << array[i];
	}

}

void selectionSort(int array[], const int length)
{
	int i, j, temp, small;
	for(i = 0; i < length-1; i++)
	{
		small = i;
		for(j=i+1; j < length; j++)
		{
			if(array[j] < array[small])
				small = j;
		}
		if(small != i)
		{
			temp = array[i];
			array[i] = array[small];
			array[small] = temp;
		}
	}
	cout << endl << "Array after sorting: ";
	for(int i=0;i<length;i++)
	{
		cout << " " << array[i];
	}

}

void bubbleSort(int array[], const int length)
{

	int i, j, temp;
	for (i = 0; i < length-1; ++i)
	{
		for(j=0 ; j < (length-1-i); j++)
		{
			if(array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}

	cout << endl << "Array after sorting: ";
	for(int i=0;i<length;i++)
	{
		cout << " " << array[i];
	}

}

void exchangeSort(int array[], const int length)
{
	int i, j, temp;
	for(i=0; i<length-1; i++)
	{
		for(j=i+1; j<length; j++)
		{
			if(array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	cout << endl << "After sorting: ";
	for(int i=0; i<length; i++)
	{
		cout << array[i] << " ";
	}

}

void shellSort(int array[], const int length)
{
	int temp, flag=1, d;
	d = length;
	while(flag || (d>1))
	{
		flag=0;
		d = (d+1)/2;
		for(int i=0; i<(length-d); i++)
		{
			if(array[i] > array[i+d])
			{
				temp = array[i];
				array[i] = array[i+d];
				array[i+d] = temp;
				flag=1;
			}
		}
	}
	cout << endl << "After Sorting: ";
	for(int i=0; i<length; i++)
	{
		cout << array[i] << " ";
	}
}


void quickSort(int array[], int bottom, int top)
{
	int middle;

	if(bottom < top)
	{
		middle = partition(array, bottom, top);
		quickSort(array, bottom, middle);
		quickSort(array, middle+1, top);
	}
	cout << endl << "After sorting: ";
	for(int i=0; i<top+1; ++i)
		cout << array[i] << " ";

}
int partition(int array[], int bottom, int top)
{
	int i, j, temp, x;
	i = bottom-1;
	j = top + 1;
	x = array[bottom];

	do
	{
		do
		{
			j--;
		}while(x > array[j]);
		do
		{
			i++;
		}while(x<array[i]);
		if(i<j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}while(i<j);
	return j;
}
