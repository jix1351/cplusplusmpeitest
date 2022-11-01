#include <iostream>
using namespace std;
// 25 вар
// 1.4.1
int main(){
    // инпут и проверка
    setlocale(LC_ALL,"russian");
    int N;
    string input;
    wcout << L"Введите кол-во значений фибаначи:\n";
    cin >> input;
    while(true) {
        try {
            if(stof(input) - float(stoi(input)) != 0 or input.contains('.')){
                wcout << L"Только Целые числа! Повтори ввод:\n";
                cin >> input;
            }else{
                if(stoi(input)<=0){
                    wcout << L"Введи положительное число! Повтори ввод:\n";
                    cin >> input;
                }else{
                    N = stoi(input);
                    break;
                }
            }
        } catch (invalid_argument) {
            wcout << L"Только числа! Повтори ввод:\n";
            cin >> input;
        }
    }
    long long M[N]; M[0] = M[1] = 1;
    for(int i=2;i<N;i++){
        M[i] = M[i-1] + M[i-2];
    }
    // аутпут
    for(int i=0;i<N;i++){
        cout <<i+1<<") "<< M[i] << " \n";
    }
}