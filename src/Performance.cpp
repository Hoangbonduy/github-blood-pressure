#include "Performance.h"

void Menu() {
    cout << endl << endl << endl << "\t\t\t" << "1. Nhap thong tin";
    cout << endl << endl << "\t\t\t" << "2. Xuat thong tin";
    cout << endl << endl << "\t\t\t" << "3. Phien ban";
}

int User_Choose() {
    cout << endl << endl << "Nhap lua chon cua ban vao day: ";
    long long choose;
    cin >> choose;
    while (choose != 1 && choose != 2 && choose != 3) {
        cout << "Vui long nhap lai lua chon vao day: ";
        cin >> choose;
    }
    return choose;
}