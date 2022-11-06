#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int a;
	
	cout<<"Bir Sayi Gir Arkadas: ";cin>>a;
	if(a%2==0){
		cout<<a<<" Sayisi cift arkadas";
	}
	else{
		cout<<a<<" Sayisi tek arkadas";
	}
	return 0;
}
