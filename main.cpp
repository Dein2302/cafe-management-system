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

