#include<iostream>
int main()
{
 	int n,regno[10],StuNo,flag=0;
  	std::cin>>n;
  	for(int i=0;i<n;i++)
    {
      	std::cin>>regno[i];
    }
  	std::cin>>StuNo;
  	for(int i=0;i<n;i++)
    {
      	if(StuNo==regno[i])
        {
          	flag=1;
           	break;}
         else
           	flag=flag+2;
    }
  if(flag==1)
    	std::cout<<"She passed her exam";
  else
    	std::cout<<"She failed";
}
           
           
           
           
