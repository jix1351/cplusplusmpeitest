    #include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// вар 25

int main(){
    setlocale(LC_ALL,"rus");
    float A = 0.7;
    float X1 = -2*A;
    float dX = A/5;
    int N;

    wcout << L"Впишите N:\n" ;
    string input;
    cin >> input;
    // проверка на правильность ввода
    while(true) {
        try {
            if(stof(input) - float(stoi(input)) != 0 or input.contains('.')){
                wcout << L"Только Целые числа! Повтори ввод:\n";
                cin >> input;
            }else{
                N = stoi(input);
                break;
            }
        }
        catch (invalid_argument) {
            wcout << L"Только числа! Повтори ввод:\n";
            cin >> input;
        }
    }
    wcout << L"№" << "   X"<<"      Y\n";
    double X = X1;
    for(int i=0;i<N;i++){
        double Y;
        // иной формат ввывода if else
        X<=0
            ? Y = (8*A)/(pow(X,2)+ 4*pow(A,2))
            : Y = A*(pow(M_E,(X/A))+ pow(M_E,(-X/A)));
        cout << i+1 <<"  "<< setprecision(2) << fixed << X << "   "<< setprecision(4) << Y  <<'\n'; // fixed чтобы float/float = 0!!!
        X+=dX;
    }
    return 0;
}