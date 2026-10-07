// nomor 1
// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <numeric>   // Untuk std::accumulate
// #include <iomanip>   // Untuk std::setprecision

// int main() {
//     // Contoh data PM2.5 (12 pembacaan, setiap 2 jam mulai pukul 00:00)
//     std::vector<double> data_pm25 = {45, 55, 120, 30, 80, 150, 60, 90, 110, 40, 70, 130};

//     // Waktu pembacaan (dalam jam, mulai 00:00)
//     std::vector<std::string> waktu = {
//         "00:00", "02:00", "04:00", "06:00", "08:00", "10:00",
//         "12:00", "14:00", "16:00", "18:00", "20:00", "22:00"
//     };

//     // 1. Menampilkan seluruh data pembacaan sensor
//     std::cout << "\n=== Seluruh Data Pembacaan Sensor PM2.5 ===" << std::endl;
//     for (size_t i = 0; i < data_pm25.size(); ++i) {
//         std::cout << "Waktu " << waktu[i] << " : " << data_pm25[i] << " µg/m³" << std::endl;
//     }

//     // 2. Menentukan kategori kualitas udara per jam
//     std::cout << "\n=== Kategori Kualitas Udara Per Jam ===" << std::endl;
//     for (size_t i = 0; i < data_pm25.size(); ++i) {
//         double nilai = data_pm25[i];
//         std::string kategori;
//         if (nilai <= 50) {
//             kategori = "Baik";
//         } else if (nilai <= 100) {
//             kategori = "Sedang";
//         } else {
//             kategori = "Tidak sehat";
//         }
//         std::cout << "Waktu " << waktu[i] << " : " << nilai << " µg/m³ - Kategori: " << kategori << std::endl;
//     }

//     // 3. Menghitung nilai rata-rata harian PM2.5
//     double total = std::accumulate(data_pm25.begin(), data_pm25.end(), 0.0);
//     double rata_rata = total / data_pm25.size();
//     std::cout << "\n=== Rata-Rata Harian PM2.5 ===" << std::endl;
//     std::cout << "Rata-rata : " << std::fixed << std::setprecision(2) << rata_rata << " µg/m³" << std::endl;

//     // 4. Menentukan periode waktu dengan polusi tertinggi
//     auto max_it = std::max_element(data_pm25.begin(), data_pm25.end());
//     double max_nilai = *max_it;
//     size_t indeks_max = std::distance(data_pm25.begin(), max_it);
//     std::string periode_max = waktu[indeks_max];
//     std::cout << "\n=== Periode Waktu dengan Polusi Tertinggi ===" << std::endl;
//     std::cout << "Polusi tertinggi : " << max_nilai << " µg/m³ pada waktu " << periode_max << std::endl;

//     return 0;
// }

// nomor 2
// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <iomanip> // Untuk std::fixed dan std::setprecision

// int main()
// {
//     // Contoh data waktu lari (dalam detik, 8 atlet)
//     std::vector<float> waktu_lari = {10.5, 9.8, 11.2, 10.1, 9.5, 10.8, 9.9, 11.0};

//     // Nama atlet (sesuai urutan waktu lari)
//     std::vector<std::string> nama_atlet = {
//         "Atlet 1", "Atlet 2", "Atlet 3", "Atlet 4",
//         "Atlet 5", "Atlet 6", "Atlet 7", "Atlet 8"
//     };

//     // 1. Menampilkan semua waktu lari
//     std::cout << "\n== Semua Waktu Lari ==" << std::endl;
//     for (size_t i = 0; i < waktu_lari.size(); ++i) {
//         std::cout << nama_atlet[i] << " : " << std::fixed << std::setprecision(2)
//                   << waktu_lari[i] << " detik" << std::endl;
//     }

//     // 2. Mengurutkan waktu dari yang paling cepat ke paling lambat (ascending)
//     std::vector<float> waktu_sorted = waktu_lari; // Salin untuk sorting
//     std::sort(waktu_sorted.begin(), waktu_sorted.end());
//     std::cout << "\n== Waktu Lari Terurut (Cepat ke Lambat) ==" << std::endl;
//     for (size_t i = 0; i < waktu_sorted.size(); ++i) {
//         std::cout << std::fixed << std::setprecision(2) << waktu_sorted[i] << " detik" << std::endl;
//     }

//     // 3. Mengetahui siapa atlet yang memperoleh waktu tercepat
//     auto min_it = std::min_element(waktu_lari.begin(), waktu_lari.end());
//     float waktu_tercepat = *min_it;
//     size_t indeks_tercepat = std::distance(waktu_lari.begin(), min_it);
//     std::string atlet_tercepat = nama_atlet[indeks_tercepat];
//     std::cout << "\n== Atlet dengan Waktu Tercepat ==" << std::endl;
//     std::cout << atlet_tercepat << " dengan waktu " << std::fixed << std::setprecision(2)
//               << waktu_tercepat << " detik" << std::endl;

//     // 4. Menghitung selisih antara waktu tercepat dan waktu paling lambat
//     float waktu_paling_lambat = *std::max_element(waktu_lari.begin(), waktu_lari.end());
//     float selisih = waktu_paling_lambat - waktu_tercepat;
//     std::cout << "\n== Selisih Waktu Tercepat dan Paling Lambat ==" << std::endl;
//     std::cout << "Selisih: " << std::fixed << std::setprecision(2) << selisih << " detik" << std::endl;

//     return 0;
// }

// Nomor 3
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <numeric>
// #include <cmath>
// #include <iomanip>
// #include <random> // Untuk generate data acak simulasi

// int main() {
//     // Simulasi data amplitudo (1000 elemen, nilai acak 1.0–5.5, plus pola gempa contoh)
//     std::vector<double> amplitudo(1000);
//     std::random_device rd;
//     std::mt19937 gen(rd());
//     std::uniform_real_distribution<> dis(1.0, 5.5);

//     for (size_t i = 0; i < amplitudo.size(); ++i) {
//         amplitudo[i] = dis(gen);
//     }

//     // Tambahkan pola gempa contoh: 3 nilai berturut-turut > 6.5 pada indeks 100–102
//     amplitudo[100] = 7.0;
//     amplitudo[101] = 7.5;
//     amplitudo[102] = 8.0;

//     // Tambahkan aftershock contoh pada indeks 150 (dalam 200 data setelah gempa)
//     amplitudo[150] = 7.2;

//     // 1. Membaca data amplitudo dari array (menampilkan 20 elemen pertama untuk demo)
//     std::cout << "=== Data Amplitudo (Pertama 20 Elemen) ===" << std::endl;
//     for (size_t i = 0; i < 20; ++i) {
//         std::cout << "Indeks " << i << ": "
//                   << std::fixed << std::setprecision(2)
//                   << amplitudo[i] << std::endl;
//     }

//     // 2. Menentukan indikasi gempa (3 nilai berturut-turut > 6.5)
//     std::cout << "\n=== Deteksi Gempa ===" << std::endl;
//     bool gempa_ditemukan = false;
//     size_t indeks_gempa = 0;

//     for (size_t i = 0; i < amplitudo.size() - 2; ++i) {
//         if (amplitudo[i] > 6.5 && amplitudo[i + 1] > 6.5 && amplitudo[i + 2] > 6.5) {
//             gempa_ditemukan = true;
//             indeks_gempa = i;
//             std::cout << "Gempa terdeteksi pada indeks "
//                       << i << " - " << i + 2 << std::endl;
//             break; // Deteksi pertama saja
//         }
//     }

//     if (!gempa_ditemukan) {
//         std::cout << "Tidak ada gempa terdeteksi." << std::endl;
//     }

//     // 3. Mendeteksi pola aftershock (dalam 200 data setelah gempa, ada nilai > 6.5)
//     std::cout << "\n=== Deteksi Aftershock ===" << std::endl;
//     if (gempa_ditemukan) {
//         bool aftershock_ditemukan = false;
//         size_t start_aftershock = indeks_gempa + 3; // Mulai setelah pola gempa
//         size_t end_aftershock =
//             std::min(start_aftershock + 200, amplitudo.size());

//         for (size_t i = start_aftershock; i < end_aftershock; ++i) {
//             if (amplitudo[i] > 6.5) {
//                 aftershock_ditemukan = true;
//                 std::cout << "Aftershock terdeteksi pada indeks "
//                           << i << std::endl;
//                 break; // Deteksi pertama saja
//             }
//         }

//         if (!aftershock_ditemukan) {
//             std::cout << "Tidak ada aftershock terdeteksi." << std::endl;
//         }
//     } else {
//         std::cout << "Tidak ada gempa, sehingga aftershock tidak diperiksa."
//                   << std::endl;
//     }

//     // 4. Menghitung statistik
//     std::cout << "\n=== Statistik Amplitudo ===" << std::endl;

//     // Nilai maksimum
//     double max_val = *std::max_element(amplitudo.begin(), amplitudo.end());
//     std::cout << "Nilai maksimum: "
//               << std::fixed << std::setprecision(2)
//               << max_val << std::endl;

//     // Nilai minimum
//     double min_val = *std::min_element(amplitudo.begin(), amplitudo.end());
//     std::cout << "Nilai minimum: "
//               << std::fixed << std::setprecision(2)
//               << min_val << std::endl;

//     // Nilai median
//     std::vector<double> sorted_amplitudo = amplitudo;
//     std::sort(sorted_amplitudo.begin(), sorted_amplitudo.end());
//     size_t n = sorted_amplitudo.size();
//     double median;
//     if (n % 2 == 0) {
//         median = (sorted_amplitudo[n / 2 - 1] + sorted_amplitudo[n / 2]) / 2.0;
//     } else {
//         median = sorted_amplitudo[n / 2];
//     }
//     std::cout << "Nilai median: "
//               << std::fixed << std::setprecision(2)
//               << median << std::endl;

//     // Nilai standar deviasi
//     double sum = std::accumulate(amplitudo.begin(), amplitudo.end(), 0.0);
//     double mean = sum / n;
//     double variance = 0.0;

//     for (double val : amplitudo) {
//         variance += (val - mean) * (val - mean);
//     }
//     variance /= n;
//     double std_dev = std::sqrt(variance_
//     }

// nomor 4
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <numeric>
// #include <iomanip>
// #include <string>

// int main() {
//     // Data penjualan: 5 cabang x 7 hari (dalam juta rupiah, contoh)
//     std::vector<std::vector<double>> penjualan = {
//         {1.2, 1.5, 0.8, 2.0, 1.8, 1.3, 1.7}, // Cabang 1
//         {1.0, 1.2, 1.4, 1.6, 1.9, 1.1, 1.5}, // Cabang 2
//         {0.9, 1.3, 1.0, 1.7, 1.4, 1.6, 1.2}, // Cabang 3
//         {1.1, 1.4, 1.5, 1.8, 2.1, 1.0, 1.6}, // Cabang 4
//         {0.8, 1.0, 1.2, 1.3, 1.5, 1.7, 1.9}  // Cabang 5
//     };

//     const int num_cabang = 5;
//     const int num_hari = 7;
//     const double target = 1.0; // Target 1 juta per cabang per hari

//     // Nama cabang dan hari untuk output
//     std::vector<std::string> nama_cabang =
//         {"Cabang 1", "Cabang 2", "Cabang 3", "Cabang 4", "Cabang 5"};
//     std::vector<std::string> nama_hari =
//         {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};

//     // 1. Menampilkan tabel penjualan seluruh cabang
//     std::cout << "=== Tabel Penjualan Seluruh Cabang ===" << std::endl;
//     std::cout << std::setw(10) << "Cabang/Hari";
//     for (const auto& hari : nama_hari) {
//         std::cout << std::setw(10) << hari;
//     }
//     std::cout << std::endl;

//     for (int i = 0; i < num_cabang; ++i) {
//         std::cout << std::setw(10) << nama_cabang[i];
//         for (int j = 0; j < num_hari; ++j) {
//             std::cout << std::setw(10)
//                       << std::fixed << std::setprecision(1)
//                       << penjualan[i][j];
//         }
//         std::cout << std::endl;
//     }

//     // 2. Menghitung total penjualan setiap cabang
//     std::vector<double> total_cabang(num_cabang, 0.0);
//     for (int i = 0; i < num_cabang; ++i) {
//         total_cabang[i] =
//             std::accumulate(penjualan[i].begin(), penjualan[i].end(), 0.0);
//     }

//     std::cout << "\n=== Total Penjualan Setiap Cabang ===" << std::endl;
//     for (int i = 0; i < num_cabang; ++i) {
//         std::cout << nama_cabang[i] << ": "
//                   << std::fixed << std::setprecision(1)
//                   << total_cabang[i] << " juta" << std::endl;
//     }

//     // 3. Menghitung total penjualan per hari (akumulasi dari semua cabang)
//     std::vector<double> total_hari(num_hari, 0.0);
//     for (int j = 0; j < num_hari; ++j) {
//         for (int i = 0; i < num_cabang; ++i) {
//             total_hari[j] += penjualan[i][j];
//         }
//     }

//     std::cout << "\n=== Total Penjualan Per Hari ===" << std::endl;
//     for (int j = 0; j < num_hari; ++j) {
//         std::cout << nama_hari[j] << ": "
//                   << std::fixed << std::setprecision(1)
//                   << total_hari[j] << " juta" << std::endl;
//     }

//     // 4. Menentukan cabang dengan total penjualan tertinggi
//     auto max_cabang_it =
//         std::max_element(total_cabang.begin(), total_cabang.end());
//     int indeks_max_cabang =
//         std::distance(total_cabang.begin(), max_cabang_it);

//     std::cout << "\n=== Cabang dengan Total Penjualan Tertinggi ==="
//               << std::endl;
//     std::cout << nama_cabang[indeks_max_cabang]
//               << " dengan total "
//               << std::fixed << std::setprecision(1)
//               << *max_cabang_it << " juta" << std::endl;

//     // 5. Menentukan hari dengan performa terburuk (total penjualan terendah)
//     auto min_hari_it =
//         std::min_element(total_hari.begin(), total_hari.end());
//     int indeks_min_hari =
//         std::distance(total_hari.begin(), min_hari_it);

//     std::cout << "\n=== Hari dengan Performa Terburuk ===" << std::endl;
//     std::cout << nama_hari[indeks_min_hari]
//               << " dengan total "
//               << std::fixed << std::setprecision(1)
//               << *min_hari_it << " juta" << std::endl;

//     // 6. Mencari apakah terdapat hari di mana seluruh cabang
//     //    mengalami penjualan di bawah target 1 juta
//     std::cout << "\n=== Hari di Mana Seluruh Cabang di Bawah Target 1 Juta ==="
//               << std::endl;
//     bool ada_hari_bawah_target = false;

//     for (int j = 0; j < num_hari; ++j) {
//         bool semua_bawah_target = true;
//         for (int i = 0; i < num_cabang; ++i) {
//             if (penjualan[i][j] >= target) {
//                 semua_bawah_target = false;
//                 break;
//             }
//         }
//         if (semua_bawah_target) {
//             ada_hari_bawah_target = true;
//             std::cout << nama_hari[j] << std::endl;
//         }
//     }

//     if (!ada_hari_bawah_target) {
//         std::cout
//             << "Tidak ada hari di mana seluruh cabang di bawah target."
//             << std::endl;
//     }

//     // 7. Mengurutkan total penjualan cabang dari tertinggi ke terendah
//     std::vector<std::pair<double, std::string>> cabang_sorted;
//     for (int i = 0; i < num_cabang; ++i) {
//         cabang_sorted.push_back({total_cabang[i], nama_cabang[i]});
//     }

//     std::sort(cabang_sorted.begin(), cabang_sorted.end(),
//               std::greater<>());

//     std::cout
//         << "\n=== Total Penjualan Cabang Terurut (Tertinggi ke Terendah) ==="
//         << std::endl;
//     for (const auto& p : cabang_sorted) {
//         std::cout << p.second << ": "
//                   << std::fixed << std::setprecision(1)
//                   << p.first << " juta" << std::endl;
//     }

//     return 0;
// }
