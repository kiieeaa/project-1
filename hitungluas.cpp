#include <iostream>
using namespace std;

float Luas, Panjang, Lebar;

void InputData()
{
    cout << "masukkan panjangnya : ";
    cin >> Panjang;
    cout << "masukan lebarnya :";
    cin >> Lebar;
}
float HitungLuas()
{
    return Panjang * Lebar;
}
void TampilkanData()
{
    cout << "Luas persergi panjang : " << HitungLuas();
}
int main()
{
    InputData();
    TampilkanData();
}
