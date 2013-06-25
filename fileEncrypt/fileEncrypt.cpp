/*
 * fileEncrypt.cpp
 *
 *  Created on: Jun 21, 2013
 *      Author: Vijaywargi
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(){
	ofstream fout;
	fout.open("samplefile.txt");

	fout <<"This is a sample file";
	fout.close();

	ifstream fin;
	fin.open("samplefile.txt");
	fout.open("encrypted.txt");

	char ch;
	/*int count=0;
	while(!fin.eof()) {
				fin.get(ch);
				count++;
			}

	fin.seekg(0,ios::beg);

	for (int i = 0; i < count; ++i) {
	*/
	while(!fin.eof())
	{
			fin.get(ch);
			ch=ch+1;
			fout<<ch;

		}

	fin.close();
	fout.close();

	fout.open("decrypted.txt");
	fin.open("encrypted.txt");
	while(!fin.eof()){
		fin.get(ch);
		ch=ch-1;
		fout.put(ch);
	}

	fin.close();
	fout.close();

	return 0;
}
