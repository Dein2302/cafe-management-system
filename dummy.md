## order processing
- display halaman awal
==========================
ketik 0 untuk input pesanan
ketik 1 untuk masuk ke Queue management 
ketik 2 untuk masuk ke Queue management admin
ketik 3 untuk masuk ke rekap transaksi 
==========================

- staff membuka list menu
==========================
0. kembali ke halaman awal
menu:
1. kopi es (10000)
2. es teh (5000)
3. kopi susu (7000)
4. espresso choco (12000)
==========================
input nomor menu pesanan(nomor) :

- staff menerima pesanan, lanjut menambah pesanan atau checkout
==========================
1 untuk checkout 0 untuk kembali menginput pesanan :

- memilih pembayaran cash/non tunai
0 untuk cash
1 untuk non tunai

- staff telah menerima keseluruhan pesanan, masuk ke pembayaran
==========================
Pesanan :
-2 kopi es (10000)
-1 kopi susu (5000)
==========================
Total 15000
==========================
Masukan total cash yang diterima :
50000
- memunculkan struk pemesanan
==========================
Queue : 1
20/01/2025
==========================
Pesanan :
-2 kopi es (10000)
-1 kopi susu (5000)
==========================
Metode Pembayaran : Cash
Total 15000
Cash yang diterima : 50000
Kembalian : 35000
==========================
Ketik 0 untuk ke halaman utama

- transaksi berhasil, pesanan masuk ke antrean

## order processing Non cash
- display halaman awal
==========================
ketik 0 untuk input pesanan
ketik 1 untuk masuk ke Queue management 
==========================

- staff membuka list menu
==========================
0. kembali ke halaman awal
menu:
1. kopi es (10000)
2. es teh (5000)
3. kopi susu (7000)
4. espresso choco (12000)
==========================
input nomor menu pesanan(nomor) :

- staff menerima pesanan, lanjut menambah pesanan atau checkout
==========================
1 untuk checkout 0 untuk kembali menginput pesanan :

- memilih pembayaran cash/non tunai
0 untuk cash
1 untuk non tunai

- staff telah menerima keseluruhan pesanan, masuk ke pembayaran
==========================
Pesanan :
-2 kopi es (10000)
-1 kopi susu (5000)
==========================
Total 15000
==========================
1 untuk pembayaran berhasil
0 untuk kembali ke memilih metode pembayaran

- memunculkan struk pemesanan
==========================
Queue : 1
12/01/2025
==========================
Pesanan :
-2 kopi es (10000)
-1 kopi susu (5000)
==========================
Metode Pembayaran : non tunai
Total 15000
Cash yang diterima : 50000
==========================
Ketik 0 untuk ke halaman utama

- transaksi berhasil, pesanan masuk ke antrean


## queue management
- display halaman awal
==========================
ketik 0 untuk input pesanan
ketik 1 untuk masuk ke Queue management 
ketik 2 untuk masuk ke Queue management admin
ketik 3 untuk masuk ke rekap transaksi 
==========================

- masuk ke list queue management
==========================
list antrean masuk:
1, 2, 3, 4, 5
masukan nomor untuk detail rinci(0 untuk ke menu utama) :

- menampilkan detail dari antrian
==========================
Status : MASUK
Queue : 1
==========================
Pesanan :
-2 kopi es (10000)
-1 kopi susu (5000)
==========================
0 untuk mengubah status menjadi SELESAI
1 untuk kembali ke list antrean 

## owner order managemnet
- display halaman awal
==========================
ketik 0 untuk input pesanan
ketik 1 untuk masuk ke Queue management 
ketik 2 untuk masuk ke Queue management admin
ketik 3 untuk masuk ke rekap transaksi 
==========================

- masukan password admin
input password (ketik 0 untuk ke menu utama) :

- menampilkan list antrian
==========================
queue information :
1, 
2, list sedang diproses : es kopi(1), es coklat(2), kopi susu(3), total 30000
3, list selesai : es kopi(1), es coklat(2), kopi susu(3), total 30000
masukkan nomor antrean untuk info lebih detail (ketik 0 untuk ke menu utama):

- menampilkan detail pesanan :
==========================
Queue : 1
==========================
Pesanan :
-2 kopi es (10000)
-1 kopi susu (5000)
==========================
Total 15000
Cash yang diterima : 50000
Kembalian : 35000
==========================
0 untuk kembali ke menu utama admin :

## Financial Control Sales Admin
- display halaman awal
==========================
ketik 0 untuk input pesanan
ketik 1 untuk masuk ke Queue management 
ketik 2 untuk masuk ke Queue management admin
ketik 3 untuk masuk ke rekap transaksi 
==========================

- rekapan transaksi
Input tanggal penjualan (dd/mm/yyyy) (ketik 0 untuk ke menu utama) :

- menampilkan omzet penjualan
==========================
Total omzet penjualan hari ini : 5000000
cash : 3000000
non cash : 200000
==========================
0 untuk kembali ke input tanggal penjualan :
