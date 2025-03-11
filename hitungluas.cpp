#include <iostream>
 using namespace std;

 float Luas, Panjang, Lebar;

 void InputData()
 {
    cout << "Masukan panjangnya : ";
    cin >> Panjang;
    cout << "Masukin lebarnya : ";
    cin >> Lebar;
 }
 float HitungLuas()
 {
    return Panjang * Lebar;
 }
 void TampilData()
 {
    cout << "Luas Persegi Panjang : " << HitungLuas();
 }

 int main()
 {
    InputData();
    TampilData();
 }

 //trrgrg