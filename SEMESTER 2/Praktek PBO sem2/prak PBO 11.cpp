#include <iostream>
using namespace std;

class Kepri {
public:
    virtual void infoDaerah() {
        cout << "Provinsi Kepulauan Riau" << endl;
    }
    virtual ~Kepri() {
        cout << "Destructor Kepri dipanggil" << endl;
    }
};

class TanjungPinang : public Kepri {
public:
    void infoDaerah() override {
        cout << "Kota Tanjung Pinang - Ibukota Provinsi Kepri" << endl;
    }
    ~TanjungPinang() {
        cout << "Destructor TanjungPinang dipanggil" << endl;
    }
};

class Batam : public Kepri {
public:
    void infoDaerah() override {
        cout << "Kota Batam - Pusat Industri dan Perdagangan" << endl;
    }
    ~Batam() {
        cout << "Destructor Batam dipanggil" << endl;
    }
};

int main() {
    Kepri* daerah;

    daerah = new TanjungPinang();
    daerah->infoDaerah();
    delete daerah;

    cout << endl;

    daerah = new Batam();
    daerah->infoDaerah();
    delete daerah;

    return 0;
}