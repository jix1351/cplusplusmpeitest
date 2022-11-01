#include <iostream>
#include <cmath>
using namespace std;
// 2.5.1
// 25

int main(){
    string input;
    wcout << L"Введите значение заданной величины\n";
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

    for(int i=0;i<6;i++){
        for(int j=0;j<3;j++){
            cout << "[" << i + 1 << "]"<< "[" << j+1 << "]" << ":";
            cin >> input;
            while (true) {
                try {
                    matrix[i][j] = stof(input);
                    break;
                }catch(invalid_argument){
                    wcout << L"Только числа! Повтори ввод:\n";
                    cout << "[" << i + 1 << "]"<< "[" << j+1 << "]" << ":";
                    cin >> input;
                }
            }
        }
    }
    int calc = 0;
    for(int i=0;i<6;i++){
        float sum=0;
        for(int j=0;j<3;j++){
            sum += abs(matrix[i][j]);
        }
        if(sum>N){
            calc++;
            cout << i+1 << endl;
        }
    }
    cout << calc;
    return 0;
}