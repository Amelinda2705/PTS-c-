#include <iostream>
using namespace std;

int main()
{
    cout<<"aplikasi hitung rata-rata"<<endl;
    
    cout<<"masukan nilai kehadiran= ";
    int angka1;
    cin >>angka1;
    
    cout<<"masukan nilai tugas= ";
    int angka2;
    cin >>angka2;
    
    cout<<"masukan nilai uts= ";
    int angka3;
    cin >>angka3;
    
    cout<<"masukan nilai uas= ";
    int angka4;
    cin >>angka4;
    
    int hasil;
    hasil=(angka1+angka2+angka3+angka4)/4;
    cout<<"hasil rata-rata="<<hasil;
}