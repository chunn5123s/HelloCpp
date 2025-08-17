void NhapDate(DATE &date) {
    bool check = false;
    while (!checkcheck) {
        cout << "Nhap vao Ngay: ";
        cin >> date.day;
        cout << "Nhap vao Thang: ";
        cin >> date.month;
        cout << "Nhap vao Nam: ";
        cin >> date.year;

        if (date.year >= 1900 && date.year <= 2100 && 
            date.month > 0 && date.month <= 12 && 
            date.day > 0 && date.day <= DayMax(date)) {
            checkcheck = true;
        } else {
            if (date.year < 1900 || date.year > 2100) {
                cout << "Nhap sai nam (nam phai trong khoang 1900 den 2100)" << endl;
            }
            if (date.month <= 0 || date.month > 12) {
                cout << "Nhap sai thang (thang phai trong khoang 1 den 12)" << endl;
            }
            if (date.day <= 0 || date.day > DayMax(date)) {
                cout << "Nhap sai ngay (ngay khong hop le trong thang)" << endl;
            }
        }
    }
}
