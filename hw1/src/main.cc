/*
	Alexander Ford
	CS 3560, HW 1
*/

#include <iostream>
#include <string>
#include "../include/hw1.h"
using namespace std;

int main(int argc, char *argv[]){
	string s1 = argv[1], s2 = argv[2], temp, s3;
	
	getline(cin,temp);

	//then iteratively take file
	while(cin){
		s3.append(temp);
		s3.append("\n");
		getline(cin,temp);
	}
	s3.pop_back();

	s3 = strreplace(s1,s2,s3);
	//cout << s3 << endl;
	//give output; command line	
	cout << s3;


	return 0;
}