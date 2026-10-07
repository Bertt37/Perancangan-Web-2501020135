#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Character {
    protected:
    string nama;
    int level;
    int hp;
    int power;

    public:
    Character(string n, int l, int h, int p):
    nama(n), level(l), hp(h), power(p){}

    virtual void info(){
        cout << "\n=== Info Karakter ===" << endl;
        cout << "Nama : " << nama << endl;
        cout << "Level : " << level << endl;
        cout << "HP : " << hp << endl;
        cout << "Power : " << power << endl;
    }

    virtual void attack()=0;

    virtual ~Character() {}
};

class Knight:public Character{
    public:
    Knight(string n, int l, int h, int p):
    Character(n,l,h,p){}
    void attack() override{
        int damage = rand() % 1000 + 1;
        cout << nama << " melakukan short attack dengan damage " << damage << " poin" << endl;
    }
};

class Golem:public Character{
    public:
    Golem(string n, int l, int h, int p):
    Character(n,l,h,p){}
    void attack()override{
        int damage = rand() % 3000 +1;
        cout << nama << " melakukan long attack dengan damage " << damage << " poin" << endl;
    }
};

class Archer:public Character{
    public:
    Archer(string n, int l, int h, int p) :
    Character(n,l,h,p){}
    void attack() override{
        int damage = rand() % 3000 + 1;
        cout << nama << " melakukan long attack dengan damage " << damage << " poin" << endl;
    }
};

int main(){
    srand(time(0));

    int pilihan;
    string namacharacter;

    while(true){
        cout << "Pilih Jenis Karakter Anda!" << endl;
        cout << "1. Knight" << endl;
        cout << "2. Golem" << endl;
        cout << "3. Archer" << endl;
        cout << "Masukkan Pilihan Anda : ";
        cin >> pilihan;

        if(pilihan >= 1 && pilihan <=3){
            break;
        }
        else {
            cout << "Pilihan Anda Tidak Valid! Silahkan Memilih Kembali\n" << endl;
        }
    }
    cin.ignore();
    cout << "Masukkan Nama Karakter Anda : " ;
    getline(cin,namacharacter);

    Character*c=nullptr;

    if(pilihan == 1){
        c= new Knight(namacharacter,10,1500,500);
    }
    else if(pilihan == 2){
        c= new Golem(namacharacter,8,3000,400);
    }
    else if(pilihan == 3){
        c= new Archer(namacharacter,12,1200,600);
    }

    c->info();
    c->attack();

    delete c;
    return 0;
}