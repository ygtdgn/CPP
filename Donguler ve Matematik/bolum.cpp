#include<iostream>
using namespace std;
int main(){
    int a,b,bolum,kal;
    cout<<"bir a sayisi gir arkadas";cin>>a;
    cout<<"bir b sayisi gir arkadas";cin>>b;
    for(kal=a;kal>=b;kal=kal-b){
        bolum++;
    }
    
    cout<<bolum<<" Bölüm"<<kal<<"Kalan"<<endl;
}