#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int a,b,topla,cikar,carp,bol;
	cout<<"Senin A degerin ne arkadas:"; cin>>a;
	cout<<"Senin B degerin ne arkadas:"; cin>>b;
	topla=a+b;cikar=a-b;carp=a*b;bol=a/b;
	cout<<"a+b="<<topla<<endl;
	cout<<"a-b="<<cikar<<endl;
	cout<<"a*b="<<carp<<endl;
	cout<<"a/b="<<bol<<endl;
	return 0;
}
