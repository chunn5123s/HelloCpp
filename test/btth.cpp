// Hàm rút gọn tất cả phân số
void simplifyAll(PS dsPS[], int n) {
    for (int i = 0; i < n; i++) {
        simplify(dsPS[i]);
    }
}

// Hàm đếm phân số âm
void countPSAmcountPSAm(PS dsPS[], int n, int &negCount) {
    posCount = negCount = 0;
    for (int i = 0; i < n; i++) {
        if (dsPS[i].tu * dsPS[i].mau < 0) negCount++;
    }
}

// Hàm tìm phân số dương đầu tiên
PS FindFirstPos(PS dsPS[], int n) {
    for (int i = 0; i < n; i++) {
        if (dsPS[i].tu * dsPS[i].mau > 0) return dsPS[i];
    }
    return {0, 0};
}

// Hàm tìm phân số nhỏ nhất
void findMin(PS dsPS[], int n, PS &minPS) {
    minPS = dsPS[0];
    for (int i = 1; i < n; i++) {
        if (dsPS[i].tu * minPS.mau < minPS.tu * dsPS[i].mau) minPS = dsPS[i];
    }
}

// Hàm sắp xếp phân số tăng dần
void sortPS(PS dsPS[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // So sánh nhân chéo
            if (dsPS[i].tu * dsPS[j].mau > dsPS[j].tu * dsPS[i].mau) {
                swap(dsPS[i], dsPS[j]);
            }
        }
    }
}
