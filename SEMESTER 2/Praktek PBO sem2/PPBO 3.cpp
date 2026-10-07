#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class stadion{
private:
    double a;
    double b;

public:
    stadion(double panjang, double lebar){
        a = panjang / 2.0;
        b = lebar / 2.0;
        cout << "Constructor dipanggil : Objek stadion dibuat." << endl;
    }
    double hitungluas() {
        return M_PI * a * b;
    }
    ~stadion(){
        cout << "Destructor dipanggil : Objek stadion dihapus" << endl;
    }
};

int main (){
    string nama;
    cout << "Masukkan nama stadion : ";
    cin >> nama;
    double panjang, lebar;
    cout << "Masukkan Panjang Stadion : ";
    cin >> panjang;
    cout << "Masukkan Lebar Stadion : ";
    cin >> lebar;

    stadion s(panjang,lebar);
    cout << "Luas stadion adalah : " << s.hitungluas() << " M^2" << endl;
}