#include <iostream>
#include <string>
using namespace std;

struct data{
	string nama;
	;long long int stambuk;
	string kelas;
};

void tampilan (struct data *identitas)
{
	cout<<"nama : "<<identitas->nama<<endl;
	cout<<"Stambuk : "<<identitas->stambuk<<endl;
	cout<<"kelas :"<<identitas->kelas<<endl;
}

int main()
{
	data identitas_mhs;
	cout<<"nama : "; cin>>identitas_mhs.nama;
	cout<<"Stambuk :"; cin>>identitas_mhs.stambuk;
	cout<<"kelas :"; cin>>identitas_mhs.kelas;
	tampilan(&identitas_mhs);
	
	return 0;
}
