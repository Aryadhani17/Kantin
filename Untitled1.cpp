#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int pilihan();

//Header
void header (string nama_lengkap){
	cout<<"===================================================\n";
	cout<<"\t  KALKULATOR SEDERHANA by "<<nama_lengkap<<"\n";
	cout<<"===================================================\n\n";
}

int penjumlahan(){
 float bil1, bil2, hasil;
 cout<<"1. Operasi Penjumlahan"<<endl;
 cout<<"   Masukkan bilangan pertama : "; cin>>bil1;
 cout<<"   Masukkan bilangan kedua   : "; cin>>bil2;
 hasil = bil1 + bil2;
 cout<<"   Hasil dari "<<bil1<<" + "<<bil2<<" adalah = "<<hasil<<endl;
 pilihan();
}
int pengurangan(){
 float bil1, bil2, hasil;
 cout<<"2. Operasi Pengurangan"<<endl;
 cout<<"   Masukkan bilangan pertama : "; cin>>bil1;
 cout<<"   Masukkan bilangan kedua   : "; cin>>bil2;
 hasil = bil1 - bil2;
 cout<<"   Hasil dari "<<bil1<<" - "<<bil2<<" adalah = "<<hasil<<endl;
 pilihan();
}
int perkalian(){
 float bil1, bil2, hasil;
 cout<<"3. Operasi Perkalian"<<endl;
 cout<<"   Masukkan bilangan pertama : "; cin>>bil1;
 cout<<"   Masukkan bilangan kedua   : "; cin>>bil2;
 hasil = bil1 * bil2;
 cout<<"   Hasil dari "<<bil1<<" * "<<bil2<<" adalah = "<<hasil<<endl;
 pilihan();
}
int pembagian(){
 float bil1, bil2, hasil;
 cout<<"4. Operasi Pembagian"<<endl;
 cout<<"   Masukkan bilangan pertama : "; cin>>bil1;
 cout<<"   Masukkan bilangan kedua   : "; cin>>bil2;
 hasil = bil1 / bil2;
 cout<<"   Hasil dari "<<bil1<<" / "<<bil2<<" adalah = "<<hasil<<endl;
 pilihan();
}
int pangkat(){
 float bil, hasil;
 cout<<"5. Operasi Pangkat 2"<<endl;
 cout<<"  Masukkan bilangan : "; cin>>bil;
 hasil = bil * bil;
 cout<<"  Hasil dari "<<bil<<" pangkat 2 adalah = "<<hasil<<endl;
 pilihan();
}
int keluar(){
 cout<<"=====================================================================================\n";
 cout<<"Terima kasih telah menggunakan Program Kalkulator Sederhana ini"<<endl;
 cout<<"Program ini dibuat oleh Aryadhani Faturrahman, Siswa dari SMKN 3 Banjarbaru"<<endl;
 cout<<"=====================================================================================";
 exit(0);
}
int salah(){
 char arya;
 cout<<"Perintah yang anda masukkan salah !"<<endl;
}
int pilihan(){
 float pilihan;
 cout<<endl;
 cout<<"Masukkan pilihan anda : "; cin>>pilihan;
 if(pilihan==1){
  penjumlahan();
 }
 else if(pilihan==2){
  pengurangan();
 }
 else if(pilihan==3){
  perkalian();
 }
 else if(pilihan==4){
  pembagian();
 }
 else if(pilihan==5){
  pangkat();
 } 
 else if(pilihan==6){
  keluar();
 }
 else {
  salah();
 }
}
int main(){
 header("Maharaja Arya");
 cout<<"\tProgram Kalkulator Sederhana"<<endl;
 cout<<"\t        2 Bilangan"<<endl;
 cout<<"\t----------------------------"<<endl;
 cout<<"Pilih Operator"<<endl;
 cout<<"--------------"<<endl;
 cout<<"1. Penjumlahan"<<endl;
 cout<<"2. Pengurangan"<<endl;
 cout<<"3. Perkalian"<<endl;
 cout<<"4. Pembagian"<<endl;
 cout<<"5. Pangkat 2"<<endl;
 cout<<"6. Exit Program"<<endl;
 pilihan();
 
 getch();
}
