#include<iostream>
using namespace std;
struct tim
{
  int hour;
  int minute;
  int sec;
};
int main()
{
 	tim t1,t2,d;
 
  cin>>t1.hour>>t1.minute>>t1.sec;
   cin>>t2.hour>>t2.minute>>t2.sec;
  
  if(t2.sec > t1.sec)
    {
        --t1.minute;
        t1.sec += 60;
    }
  if(t2.minute > t1.minute)
    {
        --t1.hour;
        t1.minute += 60;
    }
 d.hour=t1.hour-t2.hour;
  d.minute=t1.minute-t2.minute;
  d.sec=t1.sec-t2.sec;
  cout<<d.hour<<":"<<d.minute<<":"<<d.sec;
  
    
}