#include<iostream>

using namespace std;

struct AlamatDetail {
	char kota[25];
	char desa[25];
};

struct mahasiswa {
	char NIM[12];
	char nama[50];
	AlamatDetail alamat;
	int umur;
};

int main() {
	mahasiswa mhs[3];

	for (int i = 0; i < 3; i++) {
		cout << " Masukkan NIM = ";
		cin.getline(mhs[i].NIM, 12);
		cout << " Masukkan Nama = ";
		cin.getline(mhs[i].nama, 50);
		cout << " Alamat = ";
		cout << "\n\tMasukkan Desa = ";
		cin.getline(mhs[i].alamat.desa, 25);
		cout << "\tMasukkan Kota = ";
		cin.getline(mhs[i].alamat.kota, 25);
		cout << " Masukkan Umur = ";
		cin >> mhs[i].umur;
	}
}