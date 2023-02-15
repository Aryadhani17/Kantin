#include <iostream>
#include <fstream>
using namespace std;

//Prosedur Header
void header (string nama_lengkap){
	cout<<"===================================================\n";
	cout<<"\t  NILAI UTS "<<nama_lengkap<<"\n";
	cout<<"===================================================\n\n";
}
//prosedur sorting digunakan untuk mengurutkan data
void sorting(int size, string arr[]){
	for (int max = size-1; max >=0; max--){
		for (int i=0; i<max; i++){
			if (arr[i]>arr[i+1]){
				swap (arr[i], arr[i+1]);
			}
		}
	}
}
//Prosedur cari
void cari(string arr[ ],int size,string keyword)
{
	for(int i=0;i< size;i++){
		if (arr[i].find(keyword,0) !=string::npos){
			cout<<arr[i];
		}
		cout<<endl;
	} 
}
//Prosedur cetakTxt
void cetaktxt (int size, string arr[], string nama){
	ofstream out;
	
	out.open(nama);
	for (int i = 0; i < size; i++){
		out << arr[i] << endl;
	}
	out << endl;
	out.close();
}
//Prosedur cetakCmd
void cetakcmd (int size, string arr[], string nama){
	string teks;
	ifstream in;
	
	in.open(nama);
	while (getline (in, teks)){
		cout << teks << '\n';
	}
	in.close();
}
//Fungsi Main
int main() {
	
	header("Aryadhani Faturrahman");
	float jumlah, rata;
	string uts [6] = {"90", "70", "65", "85", "80", "75"};
	  
	cout << "\nNilai UTS sebelum diurutkan: \n";
	cetaktxt (6, uts, "BelumUrut.txt");
	cetakcmd (6, uts, "BelumUrut.txt");
	
	cout << "\nNilai UTS setelah diurutkan: \n";
	sorting (6, uts);
	cetaktxt (6, uts, "SudahUrut.txt");
	cetakcmd (6, uts, "SudahUrut.txt");
	
	jumlah=90+70+65+85+80+75;
    rata=jumlah/6;     
    cout<<"Nilai Total = "<<jumlah<<endl;
    cout<<"Nilai Rata-rata = "<<rata<<endl;
    string keyword;
	cout<<"\nMasukkan Kata Kunci Pencarian: "; 
	cin>>keyword;
	cari(uts, 6, keyword);
	cout<<"===================================================\n";
	cout<<"\t        Program Selesai \n";
	cout<<"===================================================";
	return 0;
}
