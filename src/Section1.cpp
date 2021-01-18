#include "Section1.h"

void Section1() {
    system("cls");
    long long cao,thap,ngay,thang,nam;
    cout << "Nhap huyet ap (cao) cua ban vao day: ";
    cin >> cao;
    while (cao <= 0) {
        cout << "Vui long nhap lai: ";
        cin >> cao;
    }
    cout << endl << "Nhap huyet ap (thap) cua ban vao day: ";
    cin >> thap;
    while (thap <= 0) {
        cout << "Vui long nhap lai: ";
        cin >> thap;
    }
    cout << endl << "Nhap ngay ban vao day: ";
    cin >> ngay;
    while (ngay <= 0 || ngay > 31) {
        cout << "Vui long nhap lai: ";
        cin >> ngay;
    }
    cout << endl << "Nhap thang ban vao day: ";
    cin >> thang;
    while (thang <= 0 || thang > 12) {
        cout << "Vui long nhap lai: ";
        cin >> thang;
    }
    cout << endl << "Nhap nam ban vao day: ";
    cin >> nam;
    while (nam <= 0) {
        cout << "Vui long nhap lai: ";
        cin >> nam;
    }
    
    ofstream OutFileForSection1;

    OutFileForSection1.open("BloodPressureData.txt");
    
    OutFileForSection1 << ngay << "/" << thang << "/" << nam << ":" << cao << "/" << thap << endl; 
}