// //Nomor 1
#include <iostream>
using namespace std;

// Fungsi untuk menampilkan nama dan jenis kelamin
void profil() {
    string nama = "Gilbert Isran";
    string jenis_kelamin = "Laki-laki";
    cout << "=== Profil Pribadi ===" << endl;
    cout << "Nama          : " << nama << endl;
    cout << "Jenis Kelamin : " << jenis_kelamin << endl << endl;
}
// Fungsi untuk menampilkan data mahasiswa
void mahasiswa() {
    string nim = "2501020135";
    string jurusan = "Teknik Informatika";
    int semester = 1;
    double target_ipk = 3.80;
    cout << "=== Data Mahasiswa ===" << endl;
    cout << "NIM           : " << nim << endl;
    cout << "Jurusan       : " << jurusan << endl;
    cout << "Semester      : " << semester << endl;
    cout << "Target IPK    : " << target_ipk << endl << endl;
}
int main() {
    profil();
    mahasiswa();
    return 0;
}

//Nomor 2
#include <iostream>
using namespace std;

int bil1, bil2, bil3;

void aritmatika(){
    float pertambahan = bil1 + bil2 + bil3;
    float pengurangan = bil1 - bil2 - bil3;
    float pembagian = bil1 / bil2 / bil3;
    float perkalian = bil1 * bil2 * bil3;
    cout << "A + B + C = " << pertambahan << endl;
    cout << "A - B - C = " << pengurangan << endl;
    cout << "A : B : C = " << pembagian << endl;
    cout << "A x B x C = " << perkalian << endl;
}
int main (){
    cout << "A : ";
    cin >> bil1;
    cout << "B : ";
    cin >> bil2;
    cout << "C : ";
    cin >> bil3;

    aritmatika();
}

//Nomor 3
#include <iostream>
using namespace std;

float sisi;

void kubus(){
    float luas = 6 * sisi * sisi;
    float keliling = 12 * sisi;
    cout << "Luas Kubus = " << luas << endl;
    cout << "Keliling Kubus = " << keliling << endl;
}
int main (){
    cout << "Masukkan Panjang Sisi Kubus : ";
    cin >> sisi;

    kubus();
}

//Nomor 4
#include <iostream>
using namespace std;

void bintang(){
    for (int i = 1; i <= 6; i++){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main(){
    bintang();
    return 0;
}

