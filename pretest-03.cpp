/*
Nama program			: converter
Nama					: Fadlan Mulya Priatna
NPM						: 140810180041
Tanggal pembuatan		: 26 Februari 2019
Deskripsi progrram		: 
*/

#include <iostream>		//library
using namespace std;

struct r_mhs{
	char npm[14];
	char nama[40];
	float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData(int& n){
	cout<<"jumlah mahasiswa : ";cin>>n;
}
void inputMhs(larikMhs& mhs, int n){
	cout<<"Input mahasiswa"<<endl;
	for(i=0;i<=n;i++){
		cout<<"mahasiswa ke-"<<i+1;
		cout<<"NPM : ";cin>>mhs[i].npm;
		cout<<"Nama : ";cin>>mhs[i].nama;
		cout<<"IPK : ";cin>>mhs[i].ipk;
	}
}
void cetakMhs(larikMhs mhs, int n){
	for(i=0;i<=n;i++){
		cout<<;
	}
}
void sortNPM(larikMhs& mhs, int n){
	for(i=0;i<=n;i++){
	}
}

int main(){
	banyakData(n);
	inputMhs(mhs, n);
	cetakMhs(mhs, n);
	sortNPM(mhs, n);
}
