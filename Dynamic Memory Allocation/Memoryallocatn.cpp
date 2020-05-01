#include<iostream>
#include<cstdlib>
int main(){
  int n,c=0,d=0,i;
  std::cin>>n;
  int *ptr;
  ptr=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
    	std::cin>>*(ptr+i);
  }
  for(i=0;i<n;i++)
  {
    	if(*(ptr+i)%2!=0)
        {
          	c++;
        }
    	else
        {
          	d++;
        }
  }
  std::cout<<c<<"\n"<<d;
  return 0;
}