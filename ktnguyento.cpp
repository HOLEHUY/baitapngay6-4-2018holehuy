#include<iostream>
#include<cmath>
using namespace std;
bool kt(int soA) 
{
	if (soA < 2) 
	{
		return false;
	}
	else if (soA>2)
	{
		if (soA % 2 == 0)  
		{
			return false;
		}
		for (int i = 3; i < sqrt((float)soA); i += 2)  
		{
			if (soA%i == 0)  
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{int n;
 cout<<"nhap n:";
 cin>>n;
 if(kt(n)==true) cout<<n<<" la SO NGUYEN TO";
 else cout<<n<<" KHONG la SO NGUYEN TO";
 return 0;
}
