#include<iostream>
using namespace std;
int main()
{
    int m,n,a[10][10],i,j;
  	cin>>m>>n;
  	for(i=0;i<m;i++)
    {
      	for(j=0;j<n;j++)
        {
          	cin>>a[i][j];
        }
    }
  	
  	for(i=0;i<m;i++)
    {
      	int max=a[i][0];
      	for(j=0;j<n;j++)
        {
          	if(a[i][j]>max)
              	max=a[i][j];
        }
      	cout<<max<<"\n";
    }
}