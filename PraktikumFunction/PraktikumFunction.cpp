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
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            input();
            cout << "Hasil penjumlahan = " << penjumlahan(a, b) << endl;
            system("pause");
            break;
        case 2:
            input();
            cout << "Hasil pengurangan = " << pengurangan(a, b) << endl;
            system("pause");
            break;
        case 3:
            input();
            cout << "Hasil perkaliann = " << perkalian(a, b) << endl;
            system("pause");
            break;
        case 4:
            input();
            cout << "Hasil pembagian = " << pembagian(a, b) << endl;
            system("pause");
            break;
        case 5:
            break;
        default:
            cout << "menu tidak tersedia silahkan pilih lagi" << endl;
            break;
        }
    } while (pilihan != 5);
}