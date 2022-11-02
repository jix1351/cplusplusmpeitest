#include <iostream>
using namespace std;
// 2.5.3
// 25

// заполнение матрицы значениями
float** matrix_filler_5(){
    string input;
    float** A;
    A = new float*[5];
    wcout << L"Введите значение квадратной матрицы:\n";
    for(int i=0;i<5;i++){
        A[i] = new float[5];
        for(int j=0;j<5;j++){
            cout << "[" << i + 1 << "]" << "[" << j + 1 << "]" << ":";
            cin >> input;
            while (true) {
                try {
                    A[i][j] = stof(input);
                    break;
                }catch(invalid_argument){
                    wcout << L"Только числа! Повтори ввод:\n";
                    cout << "[" << i + 1 << "]" << "[" << j + 1 << "]" << ":";
                    cin >> input;
                }
            }
        }
    }
    return A;
}
// заполнение массива значениями
float* massive_filler_5(){
    float* B;
    B = new float[5];
    string input;
    wcout << L"Введите значение массива:\n";
    for (int i = 0; i < 5; i++) {
        cout << "[" << i + 1 << "]" << ":";
        cin >> input;
        while (true) {
            try {
                B[i] = stof(input);
                break;
            }catch(invalid_argument){
                wcout << L"Только числа! Повтори ввод:\n";
                cout << "[" << i + 1 << "]" << ":";
                cin >> input;
            }
        }
    }
    return B;
}

float* algorithm(float** A,float* B){
    for(int i=0;i<5;i++){
        float P = 0;
        for(int j=0;j<5;j++){
            P+=A[i][j];
        }
        if(P<B[i]){
            B[i] = P;
        }
    }
    return B;
}

int main(){
    setlocale(0,"");
    float* result = algorithm(matrix_filler_5(), massive_filler_5());
    wcout << L"Вывод массива B:\n";
    cout << "[";
    for(int i=0;i<5;i++){
        i!=4
            ?cout << result[i] <<", "
            :cout << result[i]<< "]";
    }
}