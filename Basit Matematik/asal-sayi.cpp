#include<iostream>
#include<string.h>

using namespace std;

int main(){
	int a, b; 
	bool asal = true;
	
	cout<<"Bir tam sayi gir arkadas: ";cin>>a; //tam sayi degerini aliyoruz
	
	if(a==0 || a==1){ //0 ve 1 asal olmadigi icin once onlari eliyoruz
		asal = false;
	}
	
	for(b = 2; b <= a/2; b++){ //aradigimiz sayi 2 ye bolundugunde 2'den buyuk esit olacak
		if(a % b == 0){ //bu sayinin 2'ye modunu aldigimizda 0 verirse asal olmayacak
			asal = false;
			break;
		} 
	}
	if(asal){
		cout<< a <<" Sayisi asaldir arkadas";
	}else{
		cout<< a <<" Sayisi asal degildir arkadas";
	}
	return 0;
}
