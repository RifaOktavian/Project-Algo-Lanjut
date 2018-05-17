#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <stdio.h>
#include <fstream>
using namespace std;
typedef struct
{
	int stock;
}qty;
typedef struct
{
	int harga;
	string merk;
	qty ukuran[6];
}stok;
typedef struct
{
	string napel,alamat,;
	string merk;
	int ukuran, jangka,tagihan;
	long ktp,hp;
}datapeminjam;
FILE *data1;
datapeminjam pelanggan[100];
stok sepatu[100];
void admin(int b);

int hargasatuan,x;
int main()
{
	
	//data1 = fopen("data peminjaman.txt","r");
	
	//DEKLARASI STOK
	/*sepatu[0].merk="nike";
	sepatu[0].harga=25000;
	sepatu[1].merk="adidas";
	sepatu[1].harga=20000;
	sepatu[2].merk="NB";
	sepatu[2].harga=15000;*/
	for(int j=0;j<3;j++)
	{
		for(int i=0;i<6;i++)
		{
			sepatu[j].ukuran[i].stock=1;
		}
	}
	
	int a,b,pin;
	string uber; awal :
	system("cls");
	cout<<"\tPROGRAM PENYEWAAN SEPATU";
	cout <<"\n\nMasuk Sebagai : \n1. |ADMIN| 2. |BUKAN|\n\nPilihan : ";cin>>a;
	if (a==1)
	{
		 cout<<"\t\t|LOGIN|";
		 cout<<"\n\n|USER ID: ";cin>>uber;
		 cout<<"|PIN\t: ";cin>>pin;
		 if ((pin==123456) && (uber=="admin"))
		 {
			menu:
			system("cls");
			cout<<"\tPROGRAM PENYEWAAN SEPATU\n";
			cout<<"\nMENU ADMIN\n\t1. Cek Stok Sepatu\n\t2. Tambah Stok Sepatu\n\t3. Daftar Peminjam\n\t4. Pemasukkan\n\t5. Keluar\n\t6. kembali ke login";
			cout<<"\nMasukkan Pilihan\t: ";cin>>b;
			admin(b);
			if(b==6)
			{
				goto awal;
			}
			cout<<endl;
			system("PAUSE");
			goto menu;
		 }	 
		 else
		 {
			 goto awal;
		 }
	}	
	else if (a==2)
	{
		
			//user();
			system("PAUSE");
			goto awal;
	}
}
void admin(int b)
{
	data1 = fopen("data peminjaman.txt","r");
	int ar,uk,qt;
	bool found;
	switch (b)
	{
		case 1:
		{
			
			//MENU ADMIN 1
			cout<<"\tPROGRAM PENYEWAAN SEPATU\n\n";
			cout<<"1. Cek Stok Sepatu"<<endl;
			for (int i=0;i<3;i++)
			{
				cout<<"\n\ti. "<<sepatu[i].merk<<endl;
				for (int j=0;j<6;j++)
				{
					cout <<"\n\t\tUkuran\t: "<<40+j;
					cout<<"\n\t\tStok\t: "<<sepatu[i].ukuran[j].stock;
				}
			}
		}break;
		
		case 2:
		{
			//MENU ADMIN 2
			cout<<"\tPROGRAM PENYEWAAN SEPATU\n\n";
		
			cout <<"2. Tambah Stok Sepatu"<<endl;
			cout <<"1.Nike \n2.adidas \n3.NB" << endl;
			cout <<"Pilih merk yang ingin ditambahkan	:";cin >>ar;
				if(ar == 1){
					cout << "Pilih ukuran (40-45)";cin>>uk;
					switch(uk)
					{
						case 40:
						{
							cout<<"\nMasukkan tambahan ukuran : ";cin>>qt;
							sepatu[0].ukuran[0].stock=sepatu[0].ukuran[0].stock+qt;
							
						}break;
						case 41:
						{
							cout<<"\nMasukkan tambahan ukuran : ";cin>>qt;
							sepatu[0].ukuran[1].stock=sepatu[0].ukuran[1].stock+qt;
						}break;
						case 42:
						{
							cout<<"\nMasukkan tambahan ukuran : ";cin>>qt;
							sepatu[0].ukuran[2].stock=sepatu[0].ukuran[2].stock+qt;
						}break;
						case 43:
						{
							cout<<"\nMasukkan tambahan ukuran : ";cin>>qt;
							sepatu[0].ukuran[3].stock=sepatu[0].ukuran[3].stock+qt;
						}break;
						case 44:
						{
							cout<<"\nMasukkan tambahan ukuran : ";cin>>qt;
							sepatu[0].ukuran[4].stock=sepatu[0].ukuran[4].stock+qt;
						}break;
						case 45:
						{
							cout<<"\nMasukkan tambahan ukuran : ";cin>>qt;
							sepatu[0].ukuran[5].stock=sepatu[0].ukuran[5].stock+qt;
						}break;
					}
				}
				if(ar == 2){
					cout << "Pilih ukuran (40-45)";cin>>uk;
					switch(uk)
					{
						case 40:
						{
							cout<<"\nMasukkan tambahan ukuran : ";cin>>qt;
							sepatu[1].ukuran[0].stock=sepatu[1].ukuran[0].stock+qt;
						}break;
						case 41:
						{
							cout<<"\nMasukkan tambahan ukuran : ";cin>>qt;
							sepatu[1].ukuran[1].stock=sepatu[1].ukuran[1].stock+qt;
						}break;
						case 42:
						{
							cout<<"\nMasukkan tambahan ukuran : ";cin>>qt;
							sepatu[1].ukuran[2].stock=sepatu[1].ukuran[2].stock+qt;
						}break;
						case 43:
						{
							cout<<"\nMasukkan tambahan ukuran : ";cin>>qt;
							sepatu[1].ukuran[3].stock=sepatu[1].ukuran[3].stock+qt;
						}break;
						case 44:
						{
							cout<<"\nMasukkan tambahan ukuran : ";cin>>qt;
							sepatu[1].ukuran[4].stock=sepatu[1].ukuran[4].stock+qt;
						}break;
						case 45:
						{
							cout<<"\nMasukkan tambahan ukuran : ";cin>>qt;
							sepatu[1].ukuran[5].stock=sepatu[1].ukuran[5].stock+qt;
						}break;
					}
				}
				if(ar == 3){
					cout << "Pilih ukuran (40-45)";cin>>uk;
					switch(uk)
					{
						case 40:
						{
							cout<<"\nMasukkan tambahan ukuran : ";cin>>qt;
							sepatu[2].ukuran[0].stock=sepatu[2].ukuran[0].stock+qt;
						}break;
						case 41:
						{
							cout<<"\nMasukkan tambahan ukuran : ";cin>>qt;
							sepatu[2].ukuran[1].stock=sepatu[2].ukuran[1].stock+qt;
						}break;
						case 42:
						{
							cout<<"\nMasukkan tambahan ukuran : ";cin>>qt;
							sepatu[2].ukuran[2].stock=sepatu[2].ukuran[2].stock+qt;
						}break;
						case 43:
						{
							cout<<"\nMasukkan tambahan ukuran : ";cin>>qt;
							sepatu[2].ukuran[3].stock=sepatu[2].ukuran[3].stock+qt;
						}break;
						case 44:
						{
							cout<<"\nMasukkan tambahan ukuran : ";cin>>qt;
							sepatu[2].ukuran[4].stock=sepatu[2].ukuran[4].stock+qt;
						}break;
						case 45:
						{
							cout<<"\nMasukkan tambahan ukuran : ";cin>>qt;
							sepatu[2].ukuran[5].stock=sepatu[2].ukuran[5].stock+qt;
						}break;
					}
				}
		}break;
		case 3:
		{
			//MENU ADMIN 3
			int p;
			string q;
			cout<<"\tPROGRAM PENYEWAAN SEPATU";
			char pilih;
			int z;
				z=0;
				while(feof(data1)==10){
					fread(&pelanggan[z],sizeof(pelanggan[z]),1,data1);
					z++;
				}
			cout<<"\n\n3. Daftar Peminjam";
			cout<<"\n\ta. Urutkan Daftar Peminjam\n\tb. Cari Berdasar Nama";
			cout<<"\nMasukkan Pilihan\t: ";cin>>pilih;
			if(pilih=='a')
			{
				string temp;
				int i,j;
				for(i=1;i<x;i++)
				{
				temp=pelanggan[i].napel;
				j=i-1;
				while ((temp<pelanggan[j].napel)&(j>=0));
				{
					pelanggan[j+1].napel=pelanggan[j].napel;
					j=j-1;
					pelanggan[j+1].napel=temp;
				}
			}
			for(i=0;i<x;i++)
			{
				cout << "\n\tNama	:" << pelanggan[i].napel;
				cout << "\n\tAlamat	:" << pelanggan[i].alamat;
				cout << "\n\tNo.KTP	:" << pelanggan[i].ktp;
				cout << "\n\tNo.HP	:" << pelanggan[i].hp;
				cout << "\n\tJangka Waktu Peminjaman" << endl;
				cout << "\n\t\tDalam Satuan Hari	:" << pelanggan[i].jangka;
				//BILL
				cout << "\nTotal tagihan Pembayaran " << endl ;
				cout << setw(15) << setfill('=')<<""<<"Rincian Barang :" <<setw(15) << setfill('=')<< "" << endl;
				cout << "\nSepatu " << pelanggan[i].merk << "\nUkuran " << pelanggan[i].ukuran << endl;
				//TOTAL HARGA
				cout << "\nDengan Waktu Peminjaman "<< pelanggan[i].jangka << ": Rp." << pelanggan[i].tagihan << endl;
			}
				
			}
			else if(pilih=='b')
			{
				cout<<"\n\tb. Cari Berdasar Nama";
				cin.ignore();
				cout<<"\n\t\tSilahkan Masukkan Nama yang dicari (Maks. 100 Karakter) : ";getline(cin, q);
				found=false;
				p=0;
				while ((p<100)&(!found))
				{
					if (pelanggan[p].napel==q)
					found=true;
					else
					p=p+1;
				}
				if(found){
							cout << q << "ditemukan dalam Data Pelanggan.";
							cout << "\n\tNama	:" << pelanggan[p].napel;
							cout << "\n\tAlamat	:" << pelanggan[p].alamat;
							cout << "\n\tNo.KTP	:" << pelanggan[p].ktp;
							cout << "\n\tNo.HP	:" << pelanggan[p].hp;
							cout << "\n\tJangka Waktu Peminjaman" << endl;
							cout << "\n\t\tDalam Satuan Hari	:" << pelanggan[p].jangka;
							//BILL
							cout << "\nTotal tagihan Pembayaran " << endl ;
							cout << setw(15) << setfill('=')<<""<<"Rincian Barang :" <<setw(15) << setfill('=')<< "" << endl;
							cout << "\nSepatu " << pelanggan[p].merk << "\nUkuran " << pelanggan[p].ukuran << endl;
							//TOTAL HARGA
							cout << "\nDengan Waktu Peminjaman "<< pelanggan[p].jangka << ": Rp." << pelanggan[p].tagihan << endl;}
				else
						{cout<<"\nTidak ada "<<q<<" dalam Data Pelanggan.";
					}
			}
		}break;
		case 4:
		{
			int total;
			cout<<"\tPROGRAM PENYEWAAN SEPATU";
			cout<<"\n\n5. Pemasukkan\n";
			total=0;
			for(int i=0;i<100;i++)
			{
				total=total+pelanggan[i].tagihan;
			}
			cout<<"Saldo = "<<total;
		}break;
		case 5:
		{
			exit(0);
		}break;	
		default:
		{
			cout<<"Pilihan Salah !\nSilahkan Tekan Enter\n\n";
		}
	}
	fclose(data1);
}
