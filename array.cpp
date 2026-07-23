#include <iostream>
using namespace std;

int main()
{
    //Deklarasi Array disertai inisialisasi
    int dataku[5] = [10, 20, 30, 40, 50];
    //Deklarasi Tanpa inisialisasi
    int datamu[5];

    //Cara akses (membaca atau mengambil isi array)
    cout << "isi data kedua : " <<  dataku[1] << endl;
    //Mengisi error
    dataku[1] = 200;
    cout << "Isi data kedua setelah diubah : " << dataku[1] << endl;

    //Mengisi data dengan perintah satu perahu
    cout << "Isikan data pertama : ";
    cin >> datamu[0];
    cout << "Tuliskan data kedua : ";
    cin >> datamu [1];
    cout << "Tuliskan data ketiga : ";
    cin >> datamu [2];
    cout << "Tuliskan data Keempat : ";
    cin >> datamu [3];
    cout << "Tuliskan data Kelima : ";
    cin >> datamu [4];
    cout << endl;


    //Menampilkan data dengan perintah satu persatu
    cout << "data pertama = " << datamu[0] << endl;
    cout << "data Kedua = " << datamu[1] << endl;
    cout << "data Ketiga = " << datamu[2] << endl;
    cout << "data Keempat = " << datamu[3] << endl;
    cout << "data Kelima = " << datamu[4] << endl;
    cout << endl;

    cout << "Input array menggunakan for" << endl;
    // mengisi data melalui perulangan
    for  (int i = 0; i <= 4; i++)
    {
        cout << "isikan data ke-" << (i + 1) << " : ";
        cin >> datamu[i];
    }
    cout << endl;

    


}