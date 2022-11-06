#include<iostream>

using namespace std;
int main(){
    int n,k,sum=0;
    cout<<"Bir sayi gir arkadas";cin>>n;
    //for döngüsüyle
    /*for(k=1;k<=n;k++){
        sum=sum+k;
    }*/
    //do while ile
    /*do{
        sum = sum + k;
        k++;
    }
    //while ile
    while (k<=n);*/
    /*while(k<=n){
        sum = k + sum;
        k++;
    }*/
    //formül ile
    //sum = n*(n+1)/2;
    cout<<"1'den "<<n<<"'e/a  toplamin "<<sum<<endl;
}
