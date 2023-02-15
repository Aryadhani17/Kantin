#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;


void menu();
void login();
void header();
int main();
void cetakTxt(int baris,string arr[][4],string nama,int bayar);
void cetakCmd(string arr[][4],string nama);
void cari(string arr[][3]);
void milih();
void pesan(string arr[][3]);
void urutNama(string arr[][3]);
void urutHarga(string arr[][3]);


int main(){
	login();
	return 0;
}


void header(){
	system("cls");
	cout<<"============================================\n"
	    <<"||   SELAMAT DATANG DI APLIKASI KANTIN    ||\n"
	    <<"||      SMK NEGERI 3 BANJARBARU           ||\n"
	    <<"============================================\n";
}


void login(){
	header();
	string un,pw;
	cout<<"Username: ";cin>>un;
	cout<<"Password: " ;cin>>pw;
	if(un == "arya" and pw =="admin")
      	menu();
	else
	    login();
}



//prosedur menu
void menu(){
	//kolom 0 =nomor
	//kolom 1 = nama makanan
	//kolom 2 = harga
	string makanan[10][3]={{"1","Nasi Goreng","15000"},
	                       {"2","Mi Goreng","17000"},
	                       {"3","Lotong sate","20000"},
	                       {"4","Nasi Pecel","10000"},
	                       {"5","Nasi Remes","17000"},
	                       {"6","Soto Ayam","16000"},
	                       {"7","Air putih","2000"},
	                       {"8","Es teh",  "\t5000"},
	                       {"9","Es Jeruk","7000"},
	                       {"10","Jus Jeruk","8000"},	
};
    
    int pilihan;
    header();
    cout<<"  Menu;\n"
        <<"1. Mulai Pesan\n"
        <<"2. Lihat Daftar Menu\n"
		<<"3. cari Barang\n"
		<<"4. Keluar"
		<<"\n Masukkan Pilihan:  ";
		cin>>pilihan;
		
	if (pilihan == 1)
	    pesan(makanan);
	    
	else if (pilihan == 2){
		header();
		cout<<"\n Pilihan:"
		    <<"\n1. Urutkan Berdasarkan Nama Makanan\n"
		    <<"\n2. Urutkan Berdasarkan Harga";
		    cout<<"\n\nMasukkan Pilihan: ";
		    int urut;
		    cin>>urut;
		    if (urut == 1){
		    	urutNama(makanan);
		    	milih();
			}
			else if(urut == 2){
				urutHarga(makanan);
				milih();
			}
			else{
				cout<<"Salah input";
				milih();
			}
	} 
	
	else if (pilihan == 3){
		cari(makanan);
		milih();
	}
	else if (pilihan == 4)
	    int keluar();
	else{
		cout<<"salah input";
		menu();
	}


}

//prosedur milih
void milih(){
	cout<<"\n1. Kembali ke menu utama "
	    <<"\n2. Keluar";
	cout<<"\nMasukkan Pilihan :";
	int milih;
	cin>>milih;
	if(milih==1)
	   menu();
	else if (milih==2)
	   int keluar();
}
int keluar(){
	return 0;
	
}

//prosedur untuk mencetak array ke dalam txt file
void cetakTxt(int baris,string arr[][4],string nama,int bayar){
	ofstream out;
	out.open(nama);
	out<<"\tNo. \tMakanan \tJUmlah \tTotal \n";
	for(int i=0; i<baris; i++){
		for(int j=0;j<4; j++){
			out<<arr[i][j]<<"\t";
		}
		out<<endl;
	}
	    out<<"\n\nTotal Yang Harus dibayar: "<<bayar;
	out.close();


}

void cetakCmd (string arr[][4],string nama){
	string teks;
	ifstream in;
	in.open(nama);
	{
		cout<<teks<<"\n";
	}
	in.close();
}



void cari(string arr[][3])
{
	string cari;
	cout<<"\nMasukkan Kata Kunci pencarian: ";
	cin>>cari;
	cout<<"Hasil Pencarian\n";
	for (int i=0;i=10;i++){
		for(int j=0;j=3;j++){
			if(arr[i][j].find(cari,0) !=string::npos){
				cout<<arr[i][j]<<endl;
			}
		}
	}
}


void urutNama(string arr[][3]){
	for (int max=9; max = 0; max--){
		for (int i=0; i<max;i++){
			if(arr[i][1]>arr[i+1][1]){
				swap(arr[i],arr[i+1]);
			}
		}
	}
	
	for (int i=0;i<10;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
}



void urutHarga(string arr[][3]){
	for (int max=9;max>0;max--){
		for (int i=0 ;i<max;i++){
			if(stoi(arr[i][2])>stoi(arr[i+1][2])){
				swap(arr[i],arr[i+1]);
			}
		}
	}
	
	
	for (int i=0;i<10;i++){
		for(int j=0; j<3; j++){
			cout<<arr[i][j]<<"\t";	
		}
		cout<<endl;
	}

}

void pesan(string arr[][3]){
	header();
	for (int i=0;i<10;i++){
		for (int j=0;j<3;j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	string nama;
	cout<<"\nMasukkan Nama Pelanggan: ";
	cin>>nama;
	
	
	int nPesan;
	int pesanan;
	int jumlah;
	int total;
	int bayar=0;
	int harganya;
	cout<<"\n\n=================================================\n"
	    <<"Berapa Jenis Makanan yang ingin di Pesan?  ";
	    cin>>nPesan;
	    string struk [nPesan][4];
	for ( int i=0; i<nPesan; i++){
		cout<<"\nPesanan"<<i+1<<" :";
		cin>>pesanan;
		cout<<"Jumlah Pesanan :";
		cin>>jumlah;
		
		if(pesanan == 1){
			harganya=stoi(arr[0][2]);
			total=jumlah*harganya;
		}
		else if(pesanan == 2){
			harganya=stoi(arr[1][2]);
			total=jumlah*harganya;
		}
		else if(pesanan == 3){
			harganya=stoi(arr[2][2]);
			total=jumlah*harganya;
		}
		else if(pesanan == 4){
			harganya=stoi(arr[3][2]);
			total=jumlah*harganya;
		}
		else if(pesanan == 5){
			harganya=stoi(arr[4][2]);
			total=jumlah*harganya;
		}
		else if(pesanan == 6){
			harganya=stoi(arr[1][2]);
			total=jumlah*harganya;
		}
		else if(pesanan == 7){
			harganya=stoi(arr[6][2]);
			total=jumlah*harganya;
		}
		else if(pesanan == 8){
			harganya=stoi(arr[7][2]);
			total=jumlah*harganya;
		}
		else if(pesanan == 9){
			harganya=stoi(arr[8][2]);
			total=jumlah*harganya;
		}
		else if(pesanan == 10){
			harganya=stoi(arr[9][2]);
			total=jumlah*harganya;
		}
		else
		    cout<<"Menu tidak terdaftar";
		    
		bayar=bayar+total;
		
	    struk[i][0]=to_string(i+1);
		struk[i][1]=arr[pesanan-1][1];
		struk[i][2]=to_string(jumlah);
		struk[i][3]=to_string(total);
	}    
	
	cetakTxt(nPesan, struk, nama, bayar);
	cetakCmd(struk, nama);
	
	milih();
}
