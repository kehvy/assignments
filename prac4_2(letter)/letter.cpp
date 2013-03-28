/*
 * letter.cpp
 *
 *  Created on: Mar 27, 2013
 *      Author: Vijaywargi
 */




#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

int main()
{
	string first_name,friend_name;
	char gender;
	int age;



	cout << "Enter the name of the person you want to write to: ";
	cin >> first_name;
	label2: cout << first_name << "'s age: ";
			cin >> age;
			if(age<=0 || age >=110)
			{	cout << "You're kidding.!!"<<endl;
				goto label2;
			}
	cout << "another friend name: ";
	cin >> friend_name;
	label: cout << friend_name << "'s gender: (m/f)";
			cin >> gender;
			if(gender!='m' && gender!='M' && gender != 'f' && gender!='F')
			{
				cout << "Please enter correct option."<<endl;
				goto label;
			}




	cout << endl<<endl<<"Dear " << first_name <<"," <<endl;
	cout <<"How are you? I am fine. Missed you on this occasion of holi. How was this festival to you?" << endl;
	cout << "By the way, have you seen " << friend_name << " lately?";
	if(gender=='m' || gender == 'M')
		cout << "If you see " << friend_name << " ask him to call me.";
	else
		cout << "If you see " << friend_name << " ask her to call me.";
	cout << "I know you just had you birthday and you are " << age << " years old.";
	if(age<=12)
		cout << "Next year you'll be " << age+1 << ".";
	if(age==17)
		cout << "Next year you will be able to vote.! ";
	if(age>70)
		cout << "I hope you are enjoying your retirement.";
	cout << endl<<"Yours sincerely," <<endl <<endl << "Khushbu";
	return 0;
}
