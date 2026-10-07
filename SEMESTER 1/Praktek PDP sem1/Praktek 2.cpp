// pakai using namespace std
/*#include <iostream>
using namespace std;

int main() {
cout << "Hello World";
return 0;
}*/

//tidak pakai using namespace std
// #include <iostream>

// int main() {
//     std::cout << "Hello Everyone";
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

int main(){
    //deklarasi Variabel
    string nama;
    int usia;
    const int tahunsaatini = 2025;

    //Data Variabel
    nama = "Gilbert";
    usia = 18;

    //Output Variabel
    cout << "Nama : " << nama << endl;
    cout << "Usia : " << usia << " Tahun" << endl;
    cout << "Tahun Saat Ini : " << tahunsaatini << endl;
    return 0;
}