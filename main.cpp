#include <iostream>
#include <string>
#include <stdlib.h>  //Librari Untuk Menyimpan File
#include <fstream>
#include <conio.h>
using namespace std;

struct buku
{
	int ID;
	string judul_buku;
	string pengarang_buku;
	int stok_buku;
	int tahun_terbit;
	int jumlah_halaman;
	int harga_buku;
};

buku a; // varibale buku


//Fungsi Untuk Menyimpan Buku
void VarTulis()
{
	ofstream myfile;
	
	myfile.open("Buku.txt", ios::app); //untuk membuka file Buku.txt
	
	cout << "Data Telah Ditambahkan" << endl;
	
	if(!myfile.fail())
	{
		//untuk menulis ke dalam Buku.txt
		myfile << a.ID << endl;
		myfile << a.judul_buku << endl;
		myfile << a.pengarang_buku << endl;
		myfile << a.stok_buku << endl;
		myfile << a.tahun_terbit << endl;
		myfile << a.jumlah_halaman << endl;
		myfile << a.harga_buku << endl;
		myfile.close();
	}else
	{
		cout << "File Tidak DI Temukan" << endl;
	}
}

void ReadBuku()
{
	
	ifstream myfile("Buku.txt");
	string line;
	
	if(myfile.is_open())
	{
		while(getline(myfile, line))
		{
			cout << line << endl;
		}
		myfile.close();
	}
	else
	{
		cout << "File gagal dibuka!!!";
	}
}

/*void cari(int ID)
{
	ifstream myfile;
	myfile.open("Buku.txt")
	
	while (myfile.read(char*)&)	
}*/

void update()
{
	int masukanlagi = 1;
	
	while(masukanlagi != 0)
	{
		system("cls");
			cout << "Masukan ID Buku\t:";
			cin >> a.ID;
			cout << "Masukan Judul Buku\t:";
			cin >> a.judul_buku;
			cout << "Masukan Pengarang Buku\t:";
			cin >> a.pengarang_buku;
			cout << "Masukan Stok Buku\t:";
			cin >> a.stok_buku;
			cout << "Masukan Tahun Terbit Buku\t:";
			cin >> a.tahun_terbit;
			cout << "Masukan Jumlah Halaman Buku\t:";
			cin >> a.jumlah_halaman;
			cout << "Masukan Harga Buku\t:";
			cin >> a.harga_buku;
			
			VarTulis();
			cout << "Input Data Buku lagi ? tekan 1 kalo ya:";
			cin >> masukanlagi;
		
	}
}

void hapus()
{
	
}

int main()
{	

		
	int choice;
	string username, password;
	
		system("cls");
		
		cout << "_____________________________________Welcome To Library IDB Indonesia________________________________________________" << endl;
		cout << "=====================================================================================================================" << endl;
		
		//Tampilan Ussername
		cout << "Masukan Username	:";
		cin >> username;
	
		//Tampilan Password
		cout << "Masukan Password	:";
		cin >> password; 
		
		//Pernyataan Jika password benar
		if (username == "LibraryIDB")
		{	
			system("cls");
			//Jika password benar
			if(password == "12345678")
			{
				//Tampilan Utama
				menu:
				system("cls");
				cout << "_______________________________________________________________________________________________________________________\n";
				cout << "_______________________________________________________________________________________________________________________\n\n";
			
				cout << "                          Selamat Datang Di Perpustakaan Institut Digital Bisnis Indonesia                             \n\n";
	
				cout << "_______________________________________________________________________________________________________________________\n";
				cout << "_______________________________________________________________________________________________________________________\n\n\n";
				cout << "\t\t\t\t\t 1. Masukan Data Buku \t\t\t\t\t" << endl;			//Create
				cout << "\t\t\t\t\t 2. Tampilkan Data Buku \t\t\t\t\t" << endl;		//Read
				cout << "\t\t\t\t\t 3. Edit Data Buku \t\t\t\t\t" << endl;				//Upload
				cout << "\t\t\t\t\t 4. Hapus Data Buku \t\t\t\t\t" << endl;			//Delete
				cout << "\t\t\t\t\t 5. Peminjaman Buku \t\t\t\t\t" << endl;
				cout << "\t\t\t\t\t 6. Pengembalian Buku \t\t\t\t\t" << endl;
				cout << "\t\t\t\t\t 7. Cari Data Buku \t\t\t\t\t" << endl;
				cout << "\t\t\t\t\t 8. Exit \t\t\t\t\t" << endl << endl <<endl;
				cout << "_______________________________________________________________________________________________________________________" << endl;
				cout << "_______________________________________________________________________________________________________________________" << endl << endl << endl;
			
				//Untuk Memilih Menu
				cout << "Silahkan Masukan salah satu Angka 1-8 untuk ke Menu berikutnya		: ";
				cin >> choice;
			
				//Untuk Menu 1 - 8
				switch (choice)
				{
					case 1 :
						system("cls");
						cout << "========================================================================================================" << endl << endl;
						cout <<"                                    Ini Masuk Di Menu Menambahkan Data B                                 " << endl << endl;
						cout << "========================================================================================================" << endl << endl;
					
						cout << "======================================= Masukan Data Buku ==============================================" << endl;
						cout << "Masukan ID Buku\t:";
						cin >> a.ID;
						cout << "Masukan Judul Buku\t:";
						cin >> a.judul_buku;
						cout << "Masukan Pengarang Buku\t:";
						cin >> a.pengarang_buku;
						cout << "Masukan Stok Buku\t:";
						cin >> a.stok_buku;
						cout << "Masukan Tahun Terbit Buku\t:";
						cin >> a.tahun_terbit;
						cout << "Masukan Jumlah Halaman Buku\t:";
						cin >> a.jumlah_halaman;
						cout << "Masukan Harga Buku\t:";
						cin >> a.harga_buku;
					
						VarTulis();
					
						goto menu;
						break;
					
					case 2 :
						system("cls");
						cout << "---------------------------------------------------------------------------------------------------";
						cout << "					Ini Masuk Di Menu Tampilkan Data Buku						";
						cout << "---------------------------------------------------------------------------------------------------";
						cout << "\n\n\n\n";
						ReadBuku();
						break;
					
					case 3 :
						cout << endl << "Ini Masuk Di Menu Edit Data Buku";
						break;
					
					case 4 :
						cout << endl << "Ini Masuk Di Menu Hapus Data Buku\n";
						update();
						break;
					
					case 5 :
						cout << endl << "Ini Masuk Di Menu Peminjaman Buku";
						break;
					
					case 6 :
						cout << endl << "Ini Masuk Di Menu Pengembalian Buku";
						break;
					
					case 7 :
						cout << endl << "Ini Masuk Di Menu Cari Data Buku";
						break;
					
					case 8 :
						exit(0);
				}
			}
		
			//Jika Pasword Salah
			else
			{
				cout << "Pasword Salah!!!!" << endl;
			}	
		}
	
		//Jika Username Salah
		else
		{
			cout << "Username Salah!!!" << endl;
		}

	
	
	return 0;
	
}
