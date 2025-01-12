#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const string MENU_CAFE[4][3] = {
    {"1", "kopi es", "10000"},
    {"2", "es teh", "5000"},
    {"3", "kopi susu", "7000"},
    {"4", "espresso choco", "12000"}
};

const string HALAMAN_UTAMA[4][3] = {
    {"0", "Input pesanan", "0"},
    {"1", "Masuk ke queue management", "0"},
    {"2", "Masuk ke queue management admin", "1"},
    {"3", "Masuk ke rekap transaksi", "1"}
};

const string PASSWORD = "nadya";

const string METODE_PEMBAYARAN[2][3] = {
    {"0", "Cash", "0"},
    {"1", "Qris", "1"}
};

const string LINESPACING = "==========================";

void menampilkanMenuUtama() {
    int totalMenu = sizeof(MENU_CAFE) / sizeof(MENU_CAFE[0]);
    cout << LINESPACING << "\n";
    for (int i = 0; i < totalMenu; i++) {
        cout << MENU_CAFE[i][0] << " " << MENU_CAFE[i][1] << " Rp." << MENU_CAFE[i][2] << "\n";
    }
    cout << LINESPACING << "\n";
}

void displayHalamanAwal() {
    int daftarPerintah = sizeof(HALAMAN_UTAMA) / sizeof(HALAMAN_UTAMA[0]);
    cout << LINESPACING << "\n";
    for (int i = 0; i < daftarPerintah; i++) {
        cout << HALAMAN_UTAMA[i][0] << " " << HALAMAN_UTAMA[i][1] << "\n";
    }
    cout << LINESPACING << "\n";
}

int main() {
    menampilkanMenuUtama();
    displayHalamanAwal();
    return 1;
}