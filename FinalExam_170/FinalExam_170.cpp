#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int jumlah;
	string tipe;
	Node* next;
	Node* prev;
};

class ManajemenProduk {
private:
	Node* START;
public:
	ManajemenProduk() {
		START = NULL;
	}

	void tambahProduk() {
		string nama ;
		int jumlah;
		string tipe;

		Node* nodeBaru = new Node();
		cout << "========== TAMBAH PRODUK ==========" << endl;
		cout << "Nama Produk : ";
		getline(cin, nama);
		cout << "Jumlah Produk : ";
		cin >> jumlah;
		cin.ignore(); // Membersihkan buffer input
		cout << "Tipe Produk : ";
		getline(cin, tipe);
		cout << "Produk berhasil ditambahkan!" << endl;
	}
	void tampilkanSemuaProduk() {
		cout << "========== SEMUA DATA PRODUK ==========" << endl;
		if (START == NULL) {
			cout << "Belum ada data produk yang tersimpan." << endl;
		}
		else {
			Node* current = NULL;
		}
	}
	void cariProdukByNama() {
		cout << "========== CARI PRODUK BERDASARKAN NAMA ==========" << endl;
		if (START == NULL) {
			cout << "Belum ada data produk yang tersimpan." << endl;
		}
		else {
			string targetNama;
			cout << "Nama Produk yang dicari: ";
			getline(cin, targetNama);
			Node* current = NULL;
			int posisi = 0;
			while (current != NULL) {
				posisi++;
				if (START = NULL);
			}
			if (current == NULL) {
				cout << "Nama produk " << targetNama << " TIDAK DITEMUKAN" <<
					endl;
			}
		}
	}
	void algorithmaSortByJumlahProduk() {
		if ( START == NULL || START->next == NULL) {
			return; // Tidak perlu sorting jika hanya terdapat 0 atau 1 node
		}
		Node* current ;
		Node* last = NULL;
		current = NULL;
		//isi disini
	}
};
int main() {
	ManajemenProduk manajemenProduk;
	int pilihan;
	do {
		cout << "========== APLIKASI MANAJEMEN DATA PRODUK ==========" << endl;
		cout << "1. Tambah Produk" << endl;
		cout << "2. Tampilkan Semua Produk" << endl;
		cout << "3. Cari Produk berdasarkan Nama" << endl;
		cout << "4. Urutkan Produk berdasarkan Jumlah" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();

		switch (pilihan) {
		case 1: {
			manajemenProduk.cariProdukByNama();
			break;
		}
		case 2: {
			manajemenProduk.tambahProduk();
			break;
		}
		case 3: {
			manajemenProduk.tampilkanSemuaProduk();
			break;
		}
		case 4: {
			manajemenProduk.cariProdukByNama();
			break;
		}
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;

	} while (pilihan != 5);
	return 0;
}

//2. doublelinklist dan singlelinklist
//3. yaitu dengan meng implementasikan array, dan pointer 
//4. ketika sedang mengontrol suatu sistem operasi, seperti membaca urutan pada operasi.
//5. A. 7 B. Preorder yaitu ketika sebelum subpohon ini di kunjungi oleh akarnya 
