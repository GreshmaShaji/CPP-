#include<iostream>
using namespace std;

int main()
{
   int row, col, m1[10][10], m2[10][10], sum[10][10];
  	cin>>row;
 	 cin>>col;
  	for (int i = 0;i<row;i++ )
    {
    	 for (int j = 0;j < col;j++ )
         {
       		cin>>m1[i][j];
   		  }
   }
    for (int i = 0;i<row;i++ )
    {
    	 for (int j = 0;j<col;j++ ) 
         {
      		 cin>>m2[i][j];
    	 }
   	}
  for (int i = 0;i<row;i++ )
  {
      for (int j = 0;j<col;j++ ) 
      {
        sum[i][j]=m1[i][j]+m2[i][j];
        cout<<sum[i][j]<<" ";
      }
     cout<<"\n";
   }

   return 0;
}