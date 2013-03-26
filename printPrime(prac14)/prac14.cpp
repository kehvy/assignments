/*
 * prac14.cpp
 *	Prints prime numbers upto N number.
 *  Created on: Mar 23, 2013
 *      Author: Vijaywargi
 */



#include <iostream>
#include <cstdlib>


using namespace std;

int main()
{
	int n;
	cout << "Enter upto what number you want to print prime numbers :";
	cin >> n;
	int j,count=0;

	for(int i=1;i<=n;i++)
	{
		for(j=2;j<=i;j++)
	    {
			if(i%j==0)
	        {
	            break;
	        }
	    }


	    if(i==j)
	    {
	    	cout << i <<"\t";
	    	count++;
	    	if(count%10==0)
	    		cout << endl;
	    }
	}
	cout << "\nTotal prime numbers upto " << n <<": " << count;
	return 0;
}
