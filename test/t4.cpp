#include <iostream>
#include <vector>
#include <iomanip> // Thư viện để định dạng số

using namespace std;

int main() {
    const int soSinhVien = 50;
    const int soMonHoc = 5;
    vector<vector<float>> diemSinhVien(soSinhVien, vector<float>(soMonHoc));
    vector<float> diemTrungBinh(soSinhVien, 0);

    // Nhập điểm cho từng sinh viên
    for (int i = 0; i < soSinhVien; ++i) {
        cout << "Nhập điểm cho sinh viên thứ " << i + 1 << ":\n";
        float tongDiem = 0;
        for (int j = 0; j < soMonHoc; ++j) {
            cout << "  Điểm môn " << j + 1 << ": ";
            cin >> diemSinhVien[i][j];
            tongDiem += diemSinhVien[i][j];
        }
        // Tính điểm trung bình
        diemTrungBinh[i] = tongDiem / soMonHoc;
    }

    // Xuất điểm trung bình của từng sinh viên
    cout << "\n--- Điểm trung bình của từng sinh viên ---\n";
    cout << fixed << setprecision(2); // Hiển thị 2 chữ số thập phân
    for (int i = 0; i < soSinhVien; ++i) {
        cout << "Sinh viên thứ " << i + 1 << ": " << diemTrungBinh[i] << endl;
    }

    return 0;
}
