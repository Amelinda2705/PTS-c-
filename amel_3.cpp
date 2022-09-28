#include <iostream>
using namespace std;

int main()
{
    int luas, keliling;
    int r;
    float phi;
    
    cout << "Aplikasi Hitung Luas dan Keliling lingkaran" <<endl;
    cout <<"masukkan jari-jari= "; cin >> r;
    
    phi = 3.14;
    keliling = 2*phi*r;
    cout <<"keliling segitiga= "<<keliling<<endl;
    
    luas = phi*r*r;
    cout <<"luas segitiga= "<<luas;
}