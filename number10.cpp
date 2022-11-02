#include <iostream>
#include <cmath>

using namespace std;

// инпут заданной величины
float input_set_value(){
    string input;
    wcout << L"Введите значение заданной величины:\n";
    cin >> input;
    float set_value;
    while (true) {
        try {
            set_value = stof(input);
            break;
        }catch(invalid_argument){
            wcout << L"Только числа! Повтори ввод:\n";
            cin >> input;
        }
    }
    return set_value;
}
// инпут кол-ва столбцов и строк
int* line_column_range(){
    string input;

    int* result = new int[2];

    wcout << L"Введите кол-во строк:\n";
    cin >> input;
    while (true) {
        try {
            if (stof(input) - float(stoi(input)) != 0 or input.contains('.')) {
                wcout << L"Только Целые числа! Повтори ввод:\n";
                cin >> input;
            } else {
                if(stoi(input)<2){
                    wcout << L"Кол-во строк должно быть больше 1! Повтори ввод:\n";
                    cin >> input;
                }else{
                    result[0] = stoi(input);
                    break;
                }
            }
        }catch(invalid_argument){
            wcout << L"Только числа! Повтори ввод:\n";
            cin >> input;
        }
    }
    wcout << L"Введите кол-во столбцов:\n";
    cin >> input;
    while (true) {
        try {
            if (stof(input) - float(stoi(input)) != 0 or input.contains('.')) {
                wcout << L"Только Целые числа! Повтори ввод:\n";
                cin >> input;
            } else {
                if(stoi(input)<2){
                    wcout << L"Кол-во строк должно быть больше 1! Повтори ввод:\n";
                    cin >> input;
                }else{
                    if(stoi(input)==result[0]){
                        wcout << L"Кол-во строк равно кол-ву столбцов. Необходимо "
                                 "задать прямугольную матрицу! Повторите ввод кол-ва столбцов: \n";
                        cin >> input;
                    }else{
                        result[1] = stoi(input);
                        break;
                    }
                }
            }
        }catch(invalid_argument){
            wcout << L"Только числа! Повтори ввод:\n";
            cin >> input;
        }
    }
    return result;
}

// создание и заполнения массива значениями
float** create_massive_fill_it(int line, int column){
    string input;
    float** A;
    A = new float*[line];
    wcout << L"Введите значение прямоугольной матрицы:\n";
    for(int i=0;i<line;i++){
        A[i] = new float[column];
        for(int j=0;j<column;j++){
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
void algorithm(float** massive,const int* range,float set_value){
    int count_of_abs = 0;
    for(int i=0;i<range[0];i++){
        if (fabs(massive[i][1]) > set_value){
            count_of_abs++;
        }
    }
    if(count_of_abs == range[0]){
        float artitmetic_mean;
        float max_arithmetic_mean;
        int max_arithmetic_mean_column;
        for(int i = 0; i<range[1];i++){
            for(int j = 0; j<range[0];j++){
                if(i==0){
                    max_arithmetic_mean+=massive[i][j];
                }else{
                    artitmetic_mean+=massive[i][j];
                }
            }
            if(i==0){
                max_arithmetic_mean/=range[1];
                max_arithmetic_mean_column = i;
            }else{
                if(max_arithmetic_mean<(artitmetic_mean/range[1])){
                    max_arithmetic_mean = (artitmetic_mean/range[1]);
                    max_arithmetic_mean_column = i;
                }
            }

        }
        for(int i=0;i<range[0];i++){
            massive[max_arithmetic_mean_column][i]/=massive[0][i];
        }
    }else{
        wcout << L"В первом столбце не все элементы по модолю больше заданной величины!" << endl;
    }
}

int main(){
    setlocale(0,"");
    float set_value = input_set_value();

    int* range = line_column_range();
    float** massive = create_massive_fill_it(range[0],range[1]);
    algorithm(massive, range ,set_value);
    cout<< range[0] << " " << range[1] << endl;
    for(int i=0; i<range[0];i++){
        for(int j=0;j<range[1];j++){
            cout << massive[i][j] << " ";
        }
        cout << "\n";
    }
}