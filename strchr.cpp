#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char str[] = "hello world";
	//strchr actually returns a pointer pointing to the first occurence of the desired character
	cout<<strchr(str,'e')<<endl; // output - ello world
	cout<<strchr(str,'l')<<endl; // output - llo world
	char *ptr = strchr(str,'e');
	cout<<"Element found at "<<ptr-str;
	//str is base address of string and ptr is base address of the target 
	//the difference in both gives the index of the target
	//understand it as
	/*
	string[5] = Hello (H-0, e-1, l-3 ....)
	now suppose base address of H is 4 and l is 4 + 4 + 4;
	differnee in them is 8 (in bits)
	ie 8/2 = 2 ;
	ie 2nd poition in terms of array
	*/
}
