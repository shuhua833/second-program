#include<iostream>
int main()

{
int i ,n,f1=0,f2=1,next=0;
std::cout<<"enter the number of terms";
std::cin>>n;
std::cout<<"fibonaci series "<<std::endl;
for(i=0;i<=n;i++)
{
std::cout<<f1<<std::endl;
next=f1+f2 ;
f1=f2;
f2=next;
}
return 0;
}
