#include <iostream>

using namespace std;

struct mahasiswa {
	string NIM;
	string nama;
	string alamat;
	int umur;
};

int main() {
	mahasiswa mhs1, mhs2;

	mhs1.NIM = "20220140149";
	mhs1.nama = "Affra Adi";
	mhs1.alamat = " Bekasi ";
	mhs1.umur = 20;

	cout << " Masukkan NIM : ";
	cin >> mhs2.NIM;
	cout << " Masukkan Nama : ";
	cin >> mhs2.nama;
	cout << " Masukkan Alamat : ";
	cin >> mhs2.alamat;
	cout << "Masukkan Umur : ";
	cin >> mhs2.umur;
}