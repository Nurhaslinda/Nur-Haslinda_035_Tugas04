#include<iostream>
#include<conio.h>

using namespace std;

main(){
	
	int jumlah_b, n, harga=0, harga_total, i=1, jawab;
	
	cout<<"||==================================||"<<endl;
	cout<<"||PROGRAM MENGHITUNG TOTAL BELANJAAN||"<<endl;
	cout<<"||==================================||"<<endl<<endl;
	
	cout<<"Silahkan Masukan Data Di Bawah Ini"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"Jumlah Barang="; cin>>jumlah_b;
	while(i<=jumlah_b){
		cout<<"Masukkan Harga Barang ke "<<i<<" ="; cin>>n;
		harga=harga+n;
		i++;
	}
	cout<<"----------------------------------------"<<endl<<endl;
	
	if (harga>=500000){
		harga_total=harga-(harga*0.1);
	}
	else if(harga>200000 && jumlah_b<=500000){
		harga_total=harga-(harga*0.5);
	}
	else if(harga<=200000){
		harga_total=harga;	
	}
	
	cout<<"\n------------------------------------------"<<endl;
	cout<<"Harga Asli="<<harga<<endl;
	cout<<"Harga Setelah Di Diskon="<<harga_total<<endl;
	
	return 0;
}
