#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char str[] = "Hello";
	char str_1[] = "World";
	char str_2[] = "Hello";
	cout<<strcmp(str,str_2);//it compares exact string
	//output - if equal = 0
	//if first string>second = 1;
	//if second>first = -1;
	//but strncmp compares upto n chars
	char str_3[] = "Hell";
	cout<<endl<<strncmp(str,str_3,4);
}
