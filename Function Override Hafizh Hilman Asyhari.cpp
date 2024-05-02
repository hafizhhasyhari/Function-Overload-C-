#include <iostream>

using namespace std;

// function luas persegi
void luas (double sisi) {
	double hasil;
	hasil = sisi*sisi ;
	cout << "luas dari Persegi adalah : " << hasil << endl;
}

// function luas persegi panjang
void luas(double panjang, double lebar) {
	double hasil;
	hasil = panjang*lebar;
	cout << "luas dari Persegi Panjang adalah : " << hasil << endl;
}

//function luas segitiga
void luas (float alas, float tinggi) {
	float hasil ;
	hasil = 0.5*alas*tinggi;
	cout << "luas dari Segitiga adalah : " << hasil << endl;
}

//funtion keliling persegi
void keliling (double sisi) {
	double hasil;
	hasil = 4*sisi;
	
	cout << "keliling dari Persegi adalah : " << hasil << endl;
}

//function keliling persegi panjang
void keliling (double panjang, double lebar) {
	double hasil;
	hasil = 2*panjang + 2*lebar;
	cout << "keliling dari Persegi Panjang adalah : " << hasil << endl;
}

// function keliling segitiga
void keliling (float sisi1, float sisi2, float sisi3) {
	float hasil;
	hasil= sisi1+sisi2+sisi3;
	cout << "keliling dari segitiga adalah : " << hasil << endl;
}

int main () {
	int ulang; 
	do {
			int pilih;

	cout << "----------------------------------------------------------" << endl;
	cout << " Selamat Datang di Kalkulator Penghitung Luas dan Keliling" << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << endl;
	cout<< "Masukan Pilihan Anda" << endl;
	cout << "1. Keliling " << endl;
	cout << "2. Luas " << endl;
	cout << "Pilihan 	: ";
	cin >> pilih;
	cout << endl;
	cout << "----------------------------------------------------------" << endl;
	cout << endl;
	
	if (pilih==1) {
		int pilihan;
		cout << "Pilihan anda 	: Keliling" << endl;
		cout << "1. Keliling Persegi" << endl;
		cout << "2. Keliling Persegi Panjang" << endl;
		cout << "3. Keliling Segitiga" << endl;
		cout << "Pilihan 	: ";
		cin >> pilihan;
		cout << endl;
		cout << "----------------------------------------------------------" << endl;
		cout << endl;
		switch (pilihan) {
			case 1 :
				double sisi;
				cout << "Menghitung keliling persegi" << endl;
				cout << "Masukan Panjang sisi 	: " ;
				cin >> sisi;
				
				keliling(sisi);
				break;
			case 2 :
				double panjang;
				double lebar ;
				cout << "Menghitung keliling persegi panjang" << endl;
				cout << "Masukan Panjang 	: " ;
				cin >> panjang;
				cout << "Masukan Lebar 		: " ;
				cin >> lebar;
				
				keliling(panjang, lebar);
				break;
			case 3 :
				float sisi1, sisi2, sisi3;
				cout << "Masukan Sisi 1 : " ;
				cin >> sisi1;
				cout << "Masukan Sisi 2 : " ;
				cin >> sisi2;
				cout << "Masukan Sisi 3 : " ;
				cin >> sisi3;
				
				keliling (sisi1,sisi2, sisi3);
				break;
			default:
   				 cout << "Maaf, format nilai tidak sesuai" << endl;	
		}
		
		
	} else if (pilih==2) {
		
		int pilihan;
		cout << "Pilihan anda : Luas " << endl;
		cout << "1. Luas Persegi" << endl;
		cout << "2. Luas Persegi Panjang" << endl;
		cout << "3. Luas Segitiga" << endl;
		cout << "Pilihan 	: ";
		cin >> pilihan;
		cout << endl;
		cout << "----------------------------------------------------------" << endl;
		cout << endl;
		switch (pilihan) {
			case 1 :
				double sisi;
				cout << "Menghitung luas persegi" << endl;
				cout << "Masukan Panjang sisi : " ;
				cin >> sisi;
				
				luas (sisi);
				break;
			case 2 :
				double panjang;
				double lebar ;
				cout << "Menghitung luas persegi panjang" << endl;
				cout << "Masukan Panjang 	: " ;
				cin >> panjang;
				cout << "Masukan Lebar 		: " ;
				cin >> lebar;
				
				luas(panjang, lebar);
				break;
			case 3 :
				float alas, tinggi;
				cout << "Menghitung luas segitiga" << endl;
				cout << "Masukan Alas 	: " ;
				cin >> alas;
				cout << "Masukan Tinggi : " ;
				cin >> tinggi;
				
				
				luas (alas, tinggi);
				break;
			default:
   				 cout << "Maaf, format nilai tidak sesuai" << endl;	
		}	
	}
	cout << "Tekan 1 jika ingin mengulagi program ==> ";
	cin >> ulang ;
	
	//fungsi untuk membersihkan program sebelumnya ketika program diulang
	system ("cls");
	} 
	//program akan terulang jika user menekan 1
		while (ulang == 1);
	
}

