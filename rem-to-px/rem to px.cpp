#include<iostream>

using namespace std;

int main(){
	float px, rem, ent;
	z:cout<<"\n pikseli reme cevirmek icin [1] \n\n remi pixele cevirmek icin [2] \n\n Uygulamadan Cikmak Icin [3] \n\n Yaz arkadas: ";
	cin>>ent;
	if(ent==1){
		cout<<"Bir px degeri gir arkadas:  ";cin>>px;
		rem=px*16;
		cout<<px<<" px "<<rem<<" rem ediyor.";
		goto z;
	}
	else if(ent==2){
		cout<<"Bir rem degeri gir arkadas:  ";cin>>rem;
		px=rem/16;
		cout<<rem<<" rem "<<px<<" px ediyor.";
		goto z;
	}
	else if(ent==3){
		exit(0);
	}
	else{
		cout<<"Hatali giris arkadas yeniden dene!";
		goto z;
	}
	return 0;	
}
