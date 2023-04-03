#include <iostream>

using namespace std;

struct AlamatDetail {
	string kota;
	string desa;
};

struct mahasiswa {
	string NIM;
	string nama;
	AlamatDetail alamat;
	int umur;
};

int main() {
	mahasiswa mhs;

	cout << " Masukkan NIM = ";
	cin >> mhs.NIM;
	cout << " Masukkan Nama = ";
	cin >> mhs.nama;
	cout << " Masukkan Alamat : ";
	cout << "\n\tMasukkan Desa = ";
	cin >> mhs.alamat.desa;
	cout << "\tMasukkan Kota = ";
	cin >> mhs.alamat.kota;
	cout << " Masukkan Umur = ";
	cin >> mhs.umur;

	cout << "\nNIM = " << mhs.NIM;
	cout << "\nNama = " << mhs.nama;
	cout << "\nDesa  = " << mhs.alamat.desa;
	cout << "\nKota = " << mhs.alamat.kota;
	cout << "\nUmur = " << mhs.umur;
}