#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL,"rus");
    string input;
    wcout << L"Введите кол-во значений массива:\n";
    cin >> input;
    int N;
    while (true) {
        try {
            if (stof(input) - float(stoi(input)) != 0 or input.contains('.')) {
                wcout << L"Только Целые числа! Повтори ввод:\n";
                cin >> input;
            } else {
                if(stoi(input)<2){
                    wcout << L"Массив значений должен быть больше 1! Повтори ввод:\n";
                    cin >> input;
                }else{
                    N = stoi(input);
                    break;
                }
            }
        }catch(invalid_argument){
            wcout << L"Только числа! Повтори ввод:\n";
            cin >> input;
        }
    }
    float A[N];
    wcout << L"Введите значение массива:\n";
    for (int i = 0; i < N; i++) {
        cout << "[" << i + 1 << "]" << ":";
        cin >> input;
        while (true) {
            try {
                A[i] = stof(input);
                break;
            }catch(invalid_argument){
                wcout << L"Только числа! Повтори ввод:\n";
                cout << "[" << i + 1 << "]" << ":";
                cin >> input;
            }
        }
    }
    //алгоритм
    int maximum;
    for(int i=1;i<N;i++){
        if(i==0){
             maximum = A[i]*A[i-1];
        }else{
             if(maximum < A[i]*A[i-1]){
                 maximum = A[i]*A[i-1];
             }
        }
    }
    wcout << L"Максимальное произведение A[i]A[i-1]: ";
    cout << maximum << endl;
}