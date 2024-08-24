#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char str[]="Hello world";
	//unlike strchr gives the first occurence of a char in string it  gives the last occurence of char in a string
	char * pos = strrchr(str,'r');
	cout<<"The position is : "<<pos-str;
}
