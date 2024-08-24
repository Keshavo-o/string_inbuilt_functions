#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char str[]="Hello";
	char target[10];
	char target_1[10];
	strncpy(target,str,3);//first 3 like Hel into target
	strcpy(target_1,str);//Whole str into target_1
	cout<<target;
	cout<<endl<<target_1;
}
