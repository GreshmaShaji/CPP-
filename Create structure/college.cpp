#include<iostream>
#include<string.h>
using namespace std;
struct College
{
char name[100];
char city[100];
int establishmentYear;
float passPercentage;
};
int main()
{
  	College s1[20],temp;
  	int n,i,j;
     cout<<"Enter the number of colleges\n";
 	cin>>n;
  for(i=0;i<n;i++)
  {
    cout<<"Enter the details of college "<<i+1<<"\n";
  	cout<<"Enter name\n";
     cin>>s1[i].name;
    cout<<"Enter city\n";
    cin>>s1[i].city;
    cout<<"Enter year of establishment\n";
    cin>>s1[i].establishmentYear;
    cout<<"Enter pass percentage\n";
    cin>>s1[i].passPercentage;
  }
  cout<<"Details of colleges\n";
   for (i = 1; i < n; i++)
      for (j = 0; j < n - i; j++) {
         if (strcmp(s1[j].name, s1[j + 1].name) > 0) {
            temp = s1[j];
            s1[j] = s1[j + 1];
            s1[j + 1] = temp;
         }
      }
 
   for (i = 0; i < n; i++)
   {
     	
     	cout<<"College:"<<i+1<<"\n";
  	cout<<"Name:"<<s1[i].name<<"\n";
    
    cout<<"City:"<<s1[i].city<<"\n";
    
    cout<<"Year of establishment:"<<s1[i].establishmentYear<<"\n";
   
    cout<<"Pass percentage:"<<s1[i].passPercentage<<"\n";
    
   }
}