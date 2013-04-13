/*
 * palindromeString.cpp
 *
 *  Created on: Apr 4, 2013
 *      Author: Vijaywargi
 */



#include<iostream>
#include<cstdlib>
#include<cstring>


using namespace std;

int main()
{
	char str[100];
	cout << "Enter a string to know whether its palindrome or not: " << endl;
	cin >> str;
	int length=strlen(str);
	int flag=0;
	for (int i = 0; i < length; ++i) {

		if(str[i]!=str[length-i-1])
			flag++;

	}
	if(flag==0)
		cout << str << " is palindrome string.";
	else
		cout << str << " is not palindrome string.";

	/*char str2[100];
	strcpy(str2,str);
	strrev(str2);

	if(strcmp(str,str2)==0)
		cout << "Palindrome";
	else
		cout << "Not palindrome";
	*/
	return 0;

}
