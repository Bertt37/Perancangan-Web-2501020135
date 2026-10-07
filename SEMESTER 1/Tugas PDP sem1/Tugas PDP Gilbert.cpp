// PRAKTEK VARIABEL

// 1. Buat program dengan deklarasi variabel “n” bernilai 10

// #include <iostream>
// using namespace std;

// int main(){
//     // Deklarasi Variabel
//     int n = 10;

//     cout << "n = " << n; // menampilkan output
// }

// 2. Analisis program dibawah ini

// #include <iostream>
// #include <string> // untuk menggunakan library string

// int main()
// {
//     std::string name; // untuk mendeklarasikan variabel nama sebagai string
//     name = "Gilbert" ;// untuk mengisi variabel nama

//     std::cout<<name<<"\n";// menampilkan isi variabel nama
// }

// 3. Buat program dengan menggunakan konstanta

// #include <iostream>
// using namespace std;

// int main(){
//     const int TahunLahir = 2007; // untuk mendeklarasikan tahunlahir
//     cout<< "Tahun Lahir = "<< TahunLahir << endl; // menampilkan output
// }


// PRAKTEK TIPE DATA

// 1. Buat program dengan deklarasi tipe data dan variabel “nilai”

// #include <iostream>
// using namespace std;

// int main(){
//     // Deklarasi tipe data dan variabel
//     int nilai = 98;
//     cout<<"Nilai Anda = " << nilai << endl; // menampilkan output
// }

// 2. Buat program untuk menghitung luas persegi panjang

// #include <iostream>
// using namespace std;

// int main(){
//     int panjang = 10;
//     int lebar =15;
//     int luas; // tidak diinput datanya karena variabel inilah yang akan dicari nilainya

//     luas = panjang * lebar; // rumus mencari luas persegi panjang
//     cout << "Luas = "<< luas << endl;// menampilkan output dari luas
// }

// 3. Buat program untuk menghitung luas segitiga

// #include <iostream>
// using namespace std;

// int main(){
//     int alas = 4;
//     int tinggi = 3;
//     float luas; // karena data yang dimasukkan terdapat bilangan desimal

//     luas = 0.5 * alas * tinggi; // Untuk menghitung luas segitiga
//     cout << "Luas Segitiga = " << luas << endl; // menampilkan output dari luas
// }

// 4. Buat program menggunakan #define untuk menghitung volume tabung

// #include <iostream>
// #define phi 3.14 // agar nilainya pasti / tidak dapat diubah

// using namespace std;

// int main(){
//     // memasukkan nilai variabel
//     int jari_jari = 7;
//     int tinggi = 24;
//     double volume; // menggunakan double agar dapat menginput nilai decimal

//     volume = phi * jari_jari*jari_jari * tinggi; // Rumus mencari volume
//     cout << "Volume = " << volume << endl; // menampilkan output
// }

// 5. Buat program biodata singkat

// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string nama , asalsekolah , alasanmasukti; // karena untuk menginput teks
//     int umur; // untuk menginput nilai
//     long long nim; // karena longlong dapat menyimpan angka ± 9 kuadriliun

//     // menginput variabel
//     nama = "Gilbert I. Simanjuntak";
//     nim = 2501020135;
//     umur = 18;
//     asalsekolah = "SMA TUNAS BANGSA";
//     alasanmasukti = "Karena Saya Minat Dengan Jurusan Teknik Informatika dan juga Prospek Kerjanya.";

//     // menampilkan output
//     cout << "Nama = " << nama << endl;
//     cout << "NIM = " << nim << endl;
//     cout << "Umur = " << umur << " Tahun" << endl;
//     cout << "Asal Sekolah = " << asalsekolah << endl;
//     cout << "Alasan Masuk TI = " << alasanmasukti << endl;
// }