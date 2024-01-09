#include <iostream>
using namespace std;

int main() {
    int pilihan;
    int jumlahTiket;
    double hargaPerTiket;
    double totalHarga;

    cout << "Pilihan Tiket:\n";
    cout << "1. Ekonomi\n";
    cout << "2. Bisnis\n";
    cout << "3. Eksekutif\n";

    cout << "Pilih jenis tiket: ";
    cin >> pilihan;

    cout << "Masukkan jumlah tiket: ";
    cin >> jumlahTiket;

    switch (pilihan) {
        case 1:
            hargaPerTiket = 100000.0;
            break;
        case 2:
            hargaPerTiket = 200000.0;
            break;
        case 3:
            hargaPerTiket = 300000.0;
            break;
        default:
            cout << "Pilihan tidak valid.\n";
            return 1;
    }

    totalHarga = jumlahTiket * hargaPerTiket;

    if (totalHarga > 500000) {
        totalHarga *= 0.9;  // Potongan 10%
    } else if (totalHarga > 300000) {
        totalHarga *= 0.95;  // Potongan 5%
    } else if (totalHarga > 200000) {
        totalHarga *= 0.98;  // Potongan 2%
    }

    cout << "Total yang harus dibayar: " << totalHarga << " Rp\n";

    return 0;
}
