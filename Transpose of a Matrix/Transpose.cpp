#include<iostream>
using namespace std;
int main ()
{
    int A[10][10], m, n, i, j;
   
    cin >> m >> n;
  
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
   
    
    for(i=0;i<n;i++)
    {
      	for(j=0;j<m;j++)
        {
          	cout<<A[j][i]<<" ";
        }
      cout<<"\n";
    }
}