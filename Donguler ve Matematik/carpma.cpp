//çarpma operatörü kullanmadan çarpma işlemi yapmak
//çarpma işlemi aslında a sayısını b sayısı kadar toplamak olduğu için döngülerle birlikte bunu uyguluyoruz
#include<iostream>
using namespace std;
int main(){
    int a,b,i,mult=0;
    cout<<"bir a sayisi gir arkadas";cin>>a;
    cout<<"bir b sayisi gir arkadas";cin>>b;
    /*for(i=1;i<=b;i++)
    {
        mult = mult + a;
    }*/
    /*while(i<b){
        mult = mult + a;
        i++;
    }*/
    /*do{
        mult = mult + a;
        i++;
    }while(i<b);*/
    cout<<mult<<endl;
}