#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;
main()
{
	char str[] = "Hello";
	char str_1[] = "World";
	strncat(str,str_1,5); // appends World(str_1) into str in end 
	cout<<str<<endl<<str_1;
}
