#include<iostream>
using namespace std;
int gt(int a)
{int s=1;
 for(int i=1;i<=a;i++) s=s*i;
return s;
}
int main()
{int n;
 cout<<"nhap n :"<<endl;
 cin>>n;
 cout<<"ket qua n! = "<<gt(n)<<endl;
 return 0;
}
