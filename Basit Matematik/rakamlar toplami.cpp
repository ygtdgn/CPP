#include <iostream>  
using namespace std;  
int main()  
{  
int a,sum=0,b;    
cout<<"Bir sayi gir arkadas: ";cin>>a;//bir sayi istiyor ona da 'a' diyoruz    
while(a>0) //rakamlari toplami icin 0'dan farkli bir sayi gerek burada onu sorguluyoruz.
{    
b=a%10; //sayiyi 10'a bolunca kalanimiz bize birler basamagini veriyor.
sum=sum+b;//birler basamagini toplama ekliyoruz.
a=a/10;//diger basamaklari da bulabilmek icin 'a' sayisini 10'a bolerek basamak dusuruyoruz.   
}    
cout<<"Senin rakamlarinin toplami suna esittir arkadas= "<<sum<<endl;    
return 0;  
}  
