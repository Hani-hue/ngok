#include <iostream>
using namespace std;

int arr[20]; // membuat array dengan panjang data 20
int n;       // membuat variable inputan n

void input()
{
    cout << "Memasukkan Jumlah Data pada Array : "; // Membuat Inputan jumlah element Array
    cin >> n;                                       // Memanggil variable inputan n
}

if (n <= 20)
{ // membuat kondisi n tidak lebih dari 20
    break;
}
else
    ;
{
    cout << "\nArray yang anda masukkan maksimal 20 elemen.\n"; // menampilkan pesan jika data lebih dari 20
}
}
cout << endl;                        // membuat jarak per baris program
cout << "=================" << endl; // membuat tampilan susunan data element array
cout << "Masukkan Element Array" << endl;
cout << "=================" << endl;

for (int i = 0; i < n; i++) // menggunakan perulangan for untuk menyimpan data pada array
{
    cout << "Data ke-" << (i + 1) << ": "; // memasukkan atau menginputkan nilai data n
    cin >> arr[i];                         // menyimpan nilai data n kedalam array arr
}
}

void insertionSort()
{ // Procedure Insertionsort

    int temp; // membuat variable data temporer atau penyimpanan sementara
    int j, i; // membuat variable j sebagai penanda

    for (i = 1; i <= n; i++)
    {
        // step 1
        temp = arr[i]; // step 2
        j = i - 1;     // step 3

        while (j >= 0 && arr[j] > temp) // step 4
    }
}