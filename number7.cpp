#include <iostream>
#include <cmath>
using namespace std;
// 2.5.1
// 25

int main(){
    setlocale(0,"");
    string input;
    wcout << L"Введите значение заданной величины:\n";
    cin >> input;
    float N;
    while (true) {
        try {
            N = stof(input);
            break;
        }catch(invalid_argument){
            wcout << L"Только числа! Повтори ввод:\n";
            cin >> input;
        }
    }
    float matrix[6][3];
    wcout << L"Введите значения массива:\n";
    for(int i=0;i<6;i++){
        for(int j=0;j<3;j++){
            wcout << L"[" << i + 1 << L"]" << L"[" << j + 1 << L"]" << L":";
            cin >> input;
            while (true) {
                try {
                    matrix[i][j] = stof(input);
                    break;
                }catch(invalid_argument){
                    wcout << L"Только числа! Повтори ввод:\n";
                    wcout << L"[" << i + 1 << L"]" << L"[" << j + 1 << L"]" << L":";
                    cin >> input;
                }
            }
        }
    }
    int calc = 0;
    wcout << L"Абсолютная величина суммы элементов превышают заданную велечину в строках:\n";
    for(int i=0;i<6;i++){
        float sum=0;
        for(int j=0;j<3;j++){
            sum += matrix[i][j];
        }
        if(abs(sum)>N){
            calc++;
            wcout << L"№ " << i+1 << endl;
        }
    }
    wcout << L"Общее кол-во таких элементов: " << calc;
    return 0;
}