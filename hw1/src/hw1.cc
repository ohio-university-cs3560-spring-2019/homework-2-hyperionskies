/*
	Alexander Ford
	CS 3560, HW 1
*/

#include <iostream>
#include <string>
#include "../include/hw1.h"
using namespace std;

string strreplace(string s1, string s2, string s3){
	size_t i = s3.find(s1);
	size_t l1 = s1.length();
	string s = s3;
	//cout << "i: " << i << " l1: " << l1 << " size: " << s3.size();
	while(i != -1){
		s.erase(i,l1);
		s.insert(i,s2);
		i = s.find(s1);
		//cout << i <<endl;
	//cout << "i: " << i << " l1: " << l1 << " size: " << s3.size();
	}

	return s;
}