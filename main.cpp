#include <stdio.h>
#include <math.h>

// вар 25 СИ
int main()
{
    int N = 10; // кол-во значений аргумента X
    double A = 0.55;
    int B = 1;
    double massiv[N];
    double result;
    double step;
    step = (B-A)/(N-1);// высчитывание одного шажков между A и B

    //высчитаем шажки и запишем в массив шагов
    double step_number=0.55;
    for(int i=0;i<N;i++){
        massiv[i] = step_number;
        step_number+=step;
    };
    printf("  X\tY\n");
    for(int i=0;i<N;i++){
        printf("%d ",i+1);
        printf("%1.3lf",massiv[i]);
        printf(" %5.4lf",(abs(massiv[i]-M_PI)*pow(M_E,(3./massiv[i])))
                            /(logf(1.7*pow(massiv[i],1/3.)+massiv[i]*pow(massiv[i],1/2.))));
        printf("\n");
    }
    return 0;
}
