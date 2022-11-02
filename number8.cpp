#include <iostream>
using namespace std;
// 2.5.2
// 25

int main(){
    setlocale(LC_ALL,"rus");
    string input;
    wcout << L"Введите количество элементов массива и строк-столбцов матрицы:\n";
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
    float C[N];
    wcout << L"Введите значение массива:\n";
    for (int i = 0; i < N; i++) {
        cout << "[" << i + 1 << "]" << ":";
        cin >> input;
        while (true) {
            try {
                C[i] = stof(input);
                break;
            }catch(invalid_argument){
                wcout << L"Только числа! Повтори ввод:\n";
                cout << "[" << i + 1 << "]" << ":";
                cin >> input;
            }
        }
    }
    float matrix[N][N];
    wcout << L"Введите значение квадратной матрицы:\n";
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout << "[" << i + 1 << "]" << "[" << j + 1 << "]" << ":";
            cin >> input;
            while (true) {
                try {
                    matrix[i][j] = stof(input);
                    break;
                }catch(invalid_argument){
                    wcout << L"Только числа! Повтори ввод:\n";
                    cout << "[" << i + 1 << "]" << "[" << j + 1 << "]" << ":";
                    cin >> input;
                }
            }
        }
    }
    // алгоритм
    for(int i=0;i<N;i++){
        if(matrix[i][i]==0){
            for(int j=0;j<N;j++){
                matrix[j][i] += C[j];
            }
        }
    }
    cout << "\n";
    wcout << L"Измененная матрица:\n";
    float sum=0;
    // вывод матрицы
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout << matrix[i][j] << " ";
            if(i==j){
               sum+=matrix[i][j];
            }
        }
        cout << "\n";
    }
    wcout << L"Сумма главной диагонали: " << sum;
}
