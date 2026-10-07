#include <iostream>
using namespace std;

int main () {
    int pilihan;

    do{
        cout << "Pilih Soal\n";
        cout << "=================\n";
        cout << "1. Soal 1\n";
        cout << "2. Soal 2\n";
        cout << "3. Soal 3\n";
        cout << "4. Soal 4\n";
        cout << "5. Soal 5\n";
        cout << "6. SELESAI\n";
        cout << "=================\n";
        cout << "Masukkan Pilihan: ";
        cin >> pilihan;

        if (pilihan == 1){
            cout << "=================\n";
            //for
            cout << "Menggunakan for" << endl;
            for(int i = 1; i <= 100; i++){
                cout << "Bilangan ke- " << i << endl;
            }
            
            //while
            int i = 1;
            cout << "Menggunakan while" << endl;
            while(i <= 100){
                cout << "Bilangan ke- " << i << endl;
                i++;
            }

            //do-while
            int j = 1;
            cout << "Menggunakan do-while" << endl;
            do {
                cout << "Bilangan ke- " << j << endl;
                j++;
            }
            while (j <= 100);
        }
        else if (pilihan == 2){
            cout << "=================\n";
            //for loop
            cout << "Deret dengan for loop : (";
            for (int i = 20; i>=0; i-=2){
                cout << i;
                if (i > 0) cout << ",";
            }
            cout << ")\n";

            //while loop
            cout << "Deret dengan while loop : (";
            int i = 20;
            while (i >= 0){
                cout << i;
                if (i > 0) cout << ",";
                i -= 2;
            }
            cout << ")\n";

            //do-while loop
            cout << "Deret dengan do-while loop : (";
            int k = 20;
            do{
                cout << k;
                if (k > 0) cout << ",";
                k -= 2;
            }while (k >=0);
            cout << ")\n";
        }
        else if (pilihan == 3){
            cout << "=================\n";
            int i = 1;
            while(i <= 100){
                if (i % 2 == 0){
                    cout << i << " Adalah Bilangan Genap" << endl;
                }else{
                    cout << i << " Adalah Bilangan Ganjil" << endl;
                }
                i++;
            }
        }
        else if (pilihan == 4){
            cout << "=================\n";
            for (int i = 1; i <= 10; i++){
                if (i == 5) {continue;}
                if (i == 8) {break;}
                cout << i << endl;
            }
        }
        else if (pilihan == 5){
            cout << "=================\n";
            for (int a = 5; a >= 1; a--){
                for (int z = 1; z <= a; z++){
                    cout << "*";
                }
                cout << endl;
            }
        }
        else if (pilihan == 6){
            cout << "=================\n";
            cout << "Terimakasih :)";
        }
        else{
            cout << "=================\n";
            cout << "Menu tidak ada\n";
            cout << "=================\n";
        }
    }while (pilihan != 6);
    return 0;
}