// Case 1

#include <iostream>
using namespace std;

int main() {
    float ipk;

    cout << "Masukkan IPK anda : ";
    cin >> ipk;

    if (ipk >4)
    cout << "semua nilai mata kuliah adalah A dan predikat lulusan SUMMA CUMLAUDE" << endl;
    else if (ipk >3.81)
    cout << "ada nilai mata kuliah yang B dan predikat lulusan MAGNA CUMLAUDE" << endl;
    else if (ipk >3.51)
    cout << "ada nilai mata kuliah yang C dan predikat lulusan CUMLAUDE" << endl;
    else if (ipk >2.76)
    cout << "beberapa nilai mata kuliah C dan predikat lulusan SANGAT MEMUASKAN" << endl;
    else if (ipk >2.01)
    cout << "rata-rata nilai mata kuliah C dan predikat lulusan CUKUP MEMUASKAN" << endl;
    else
    cout << "Tidak lulus dan Harus mengulang" << endl;

    return 0;
}