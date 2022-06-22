#include <iostream>
using namespace std;
class BF {
private:
  int *nim;
  int nm[5];
  string *nama;
  string nam[5];

public:
  void input() {
    cout << "Masukkan Data Mahasiswa Yang Berhasil Masuk ke Babak Final "
            "Parmatika "
         << endl;
    cout << "=================================================================="
            "==="
         << endl;
    for (int i = 0; i < 5; i++) {
      cout << "Masukkan NIM Mahasiswa : ";
      cin >> nm[i];
      cout << "Masukkan Nama Mahasiswa : ";
      cin >> nam[i];
    }
  }
  void proses() {
    cout << "\n======================================================"
            "==="
         << endl;
    cout << "\tData Mahasiswa";
    cout << "\n======================================================"
            "==="
         << endl;
    nim = new int[5];
    nama = new string[5];
    for (int i = 0; i < 5; i++) {
      *nim = nm[i];
      nim += 1;
      *nama = nam[i];
      nama += 1;
    }
  }
  void output() {
    nim -= 5;
    nama -= 5;
    cout << "Menampilkan data mahasiswa : " << endl;
    for (int i = 0; i < 5; i++) {
      cout << "\nNama Mahasiswa ke-" << i + 1 << " : ";
      cout << *nama;
      nama += 1;
      cout << "\nNim Mahasiswa" << " : ";
      cout << *nim;
      nim += 1;
    }
  }
};
int main() {
  BF studi;
  studi.input();
  studi.proses();
  studi.output();
}