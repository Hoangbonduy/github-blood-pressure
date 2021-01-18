#include "Section2.h"

void Section2() {
    system("cls");

    ifstream InFileForSection2;

    InFileForSection2.open("BloodPressureData.txt");
    

    while (!InFileForSection2.eof()) {
        string DataFormFile;
        InFileForSection2 >> DataFormFile;
        if (!DataFormFile.empty()) cout << DataFormFile << endl;
    }
}