#include<iostream>
using namespace std;
int main()
{
  int n,mark[10];
 cin>>n;
  for(int i=0;i<n;i++)
  {
    	cin>>mark[i];
  }
  for(int i=0;i<n;i++)
  {
    	if(mark[0]<mark[i])
          	mark[0]=mark[i];
  }
  cout<<mark[0];
          	
          	
}