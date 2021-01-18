#include "Performance.cpp"
#include "Section1.cpp"
#include "Section2.cpp"
#include "Section3.cpp"
bool IsOnScreen = true;
void TurnBack() {
    cout << endl << "An phim bat ky de quay tro ve man hinh chinh: ";
    string TurnBackChoose;
    cin >> TurnBackChoose;
    system("cls");
}
int main() {
    
    while (IsOnScreen) {
       
       Menu();

       int choose = User_Choose();

       if (choose == 1) {
         Section1();
         TurnBack();
       }
       else if (choose == 2) {
         Section2();
         TurnBack();
       }
       else if (choose == 3) {
         Section3();
         TurnBack();
       }
    }
}