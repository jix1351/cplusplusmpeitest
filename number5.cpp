#include <iostream>
// 25 вар
// 1.4.2

using namespace std;

int main() {

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
    float X[N];
    wcout << L"Введите значение массива (последнее значение обязательно должно быть отрицательным!):\n";
    for (int i = 0; i < N; i++) {
        cout << "[" << i + 1 << "]" << ":";
        cin >> input;
        while (true) {
            try {
                    // проверка последнего значения на отрицательность
                    if(i==N-1){
                        if(stof(input)>0){
                            wcout << L"Последнее число массива должно быть отрицательным! Повтори ввод:\n";
                            cout << "[" << i + 1 << "]" << ":";
                            cin >> input;
                        }else{
                            X[i] = stof(input);
                            break;
                        }
                    }else{
                        X[i] = stof(input);
                        break;
                    }
            }catch(invalid_argument){
                wcout << L"Только числа! Повтори ввод:\n";
                cout << "[" << i + 1 << "]" << ":";
                cin >> input;
            }
        }
    }
    // алгоритм
    int minus_count = 0;
    for(int i=0;i<N;i++){
        X[i]<0
            ? minus_count+=1
            : X[i] /= X[i+1];
    }
    // вывод
    wcout << L"Кол-во отрицательных чисел:" << minus_count << endl;
    wcout << L"Измененный массив: [";
    for(int i=0;i<N;i++){
        if(i != N-1){
            cout << X[i] << ", ";
        } else {
            cout << X[i] <<"]";
        }
    }
    cout<<endl;
}