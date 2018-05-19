// test18.5.15.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class MyClass
{
public:
    MyClass(int i = 0)
    {
        cout << i;
    }
    MyClass(const MyClass &x)
    {
        cout << 2;
    }
    MyClass &operator=(const MyClass &x)
    {
        cout << 3;
        return *this;
    }
    ~MyClass()
    {
        cout << 4;
    }
};
void prim(int m, int n)
 {
     if (m >= n)
     {
         while (       m%n ) n++;
         m/=n;
         prim(m, n);
         cout << n << endl;
     }
 }

int _tmain(int argc, _TCHAR* argv[])
{
	int a[3][4];
	int **b=new int*[3];
	for(int i=0;i<3;i++)
		b[i]=new int[4];
	int num=0;
	for(int i=0;i<3;i++)
		for(int j=0;j<4;j++)
		{
			a[i][j]=num++;
			b[i][j]=num++;
		}
	int *p=b[0];
	for(int i=0;i<3;i++)
		for(int j=0;j<4;j++)
		{
			cout<<&b[i][j]<<endl;
		}
	cout<<"a:"<<a<<endl;
	cout<<"a+1的地址"<<(b+1)<<endl;
	cout<<"a+1指向元素的地址"<<&**(b+1)<<endl;
	cout<<"a+1:"<<(*(a+1)+1)<<endl;
	cout<<"a+1:"<<(a+3)<<endl;
		
	for(int i=0;i<12;i++)
		cout<<"*(p+i)"<<*(p+i)<<endl;

	while(1);
}

