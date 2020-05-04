#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  	int len;
    char str[50];
  	gets(str);
  	len=strlen(str);
  	cout<<"The number of letters in the name is "<<len;
}