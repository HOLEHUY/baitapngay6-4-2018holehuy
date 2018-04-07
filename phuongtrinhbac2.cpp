#include<iostream>
#include<cmath>
using namespace std;
float delta(int a, int b, int c)
{ return b*b-4*a*c;
}
int main()
{
float a,b,c,x1,x2;
cout<<" phuong trinh bac hai co dang ax^2+bx+c=0 \n";
cout<<"nhap a : "<<endl; cin>>a;
cout<<"nhap b : "<<endl; cin>>b;
cout<<"nhap c : "<<endl; cin>>c;
if (a==0)
  if (b==0)
   {
    if (c==0)
     cout<<"PTVSN \n";
   else 
     cout<<"PTVN \n";
    }
  else 
   cout<<"Phuong trinh co nghiem duy nhat x= "<<(-c/b)<<endl;
else 
 if (delta(a,b,c)<0)
  cout<<"PTVN \n";
 else 
  if (delta(a,b,c)==0)
  cout<<"Phuong trinh co nghiep kep: "<<(-b/(2*a))<<endl;

   else
  {
     cout<<"Phuong trinh co 2 nghiem phan biet x1, x2 \n";
     cout<<"x1= "<<((-b+sqrt(delta(a,b,c)))/(2*a))<<endl;
     cout<<"x2= "<<((-b-sqrt(delta(a,b,c)))/(2*a))<<endl;	
  }
  return 0;
}
