#include <iostream>
using namespace std;

int a, b;
void input() {
    cout << "Masukkan nilai A: ";
    cin >> a;

    cout << "Masukkan nilai B: ";
    cin >> b;
}

int penjumlahan(int bil1, int bil2) {
    return bil1 + bil2;
}

int pengurangan(int bil1, int bil2) {
    return bil1 - bil2;
}

int perkalian(int bil1, int bil2) {
    return bil1 * bil2;
}

int pembagian(int bil1, int bil2) {
    return bil1 / bil2;
}

int main() {
    int pilihan;

    do
    {
        system("cls");
        cout << "========Menu=========" << endl;
        cout << "1.penjumlahan" << endl;
        cout << "2.pengurangan" << endl;
        cout << "3.perkalian" << endl;
        cout << "4.penmbagian" << endl;
        cout << "5.keluar" << endl;
        cout << "Masukkan menu yang ingin di pilih (1/2/3/4/5)";

        switch (pilihan)
        {
        case 1:
            input();
            cout << "Hasil penjumlahan = " << penjumlahan(a, b) << endl;
            system("pause");
            break;
        default:
            break;
        }
    } while (true);
}