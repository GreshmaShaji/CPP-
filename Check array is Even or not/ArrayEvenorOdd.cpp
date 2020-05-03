#include<iostream>
using namespace std;
int typeofarray(int n,int a[]);
int main()
{
  	int n,a[20],i;
     cout<<"Enter the number of elements in the array";
  	cin>>n;
  	cout<<"\nEnter the elements in the array";
  	for(i=0;i<n;i++)
    {
      	cin>>a[i];
    }
  	typeofarray(n,a);
  	if(typeofarray(n,a)==1)
    	cout<<"\nThe array is Even";
  	else if(typeofarray(n,a)==2)
      	cout<<"\nThe array is Odd";
  	else
      	cout<<"\nThe array is Mixed";
}
int typeofarray(int n,int a[])
{
  	int c=0,i,d=0;
  	for(i=0;i<n;i++)
    {
      	if(a[i]%2==0)
          	c++;
      	else 
          	break;
    }
  	for(i=0;i<n;i++)
    {
      	if(a[i]%2!=0)
          	d++;
      	else 
          	break;
    }
  	if(c==n)
      	return 1;
  	else if(d==n)
      	return 2;
  	else
      	return 3;
}
  	