#include <iostream>
using namespace std;

int main() {
    int pilihan, jumlah, harga, total, bayar, kembalian;
    char ulang;

    cout << "==============================" << endl;
    cout << "       MINI KASIR MAKANAN     " << endl;
    cout << "==============================" << endl;

    do {
        cout << "\nDAFTAR MENU" << endl;
        cout << "1. Soto  : Rp15000" << endl;
        cout << "2. Rawon : Rp20000" << endl;

        cout << "\nPilih menu (1/2): ";
        cin >> pilihan;

        if (pilihan == 1) {
            harga = 15000;
            cout << "Menu: Soto" << endl;
        } 
        else if (pilihan == 2) {
            harga = 20000;
            cout << "Menu: Rawon" << endl;
        } 
        else {
            cout << "Pilihan tidak tersedia!" << endl;
            return 0;
        }

        cout << "Jumlah pesanan: ";
        cin >> jumlah;

        total = harga * jumlah;

        cout << "\n========== STRUK ==========" << endl;
        cout << "Harga       : Rp" << harga << endl;
        cout << "Jumlah      : " << jumlah << endl;
        cout << "Total       : Rp" << total << endl;

        cout << "Uang bayar  : Rp";
        cin >> bayar;

        if (bayar >= total) {
            kembalian = bayar - total;
            cout << "Kembalian   : Rp" << kembalian << endl;
            cout << "Terima kasih sudah membeli!" << endl;
        } else {
            cout << "Uang pembayaran kurang!" << endl;
        }

        cout << "\nPesan lagi? (y/t): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "\nTerima kasih!" << endl;

    return 0;
}
