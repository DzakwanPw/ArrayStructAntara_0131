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
}