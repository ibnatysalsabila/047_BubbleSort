// BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {

    while (true) {
        cout << "Masukan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 20)  //jika n kurang dari atau sama dengan 20
            break;    //keluar dari loop
        else {        //jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";    //output ke layar
        }
    }
    cout << endl;                                         //output baris kosong
    cout << "========================" << endl;           //output ke layar
    cout << "Masukkan Elemen Array" << endl;              //output ke layar
    cout << "========================" << endl;           //output ke layar

    for (int i = 0; i < n; i++) {                 //looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << "; ";    //output ke layar
        cin >> arr[i];
    }
}
