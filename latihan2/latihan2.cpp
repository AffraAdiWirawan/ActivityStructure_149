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