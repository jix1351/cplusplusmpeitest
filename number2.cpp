#include <iostream>
#include <cmath>

using namespace std; // общее пространство имен

int main(){
    int n = 20;
    float x = 0.5;
    int result;
    double first_multiplier = pow((pow(M_E,(x/n))),1/2.);
    double second_multiplier = 0;
    for(int k=1;k<=n;k++){
        second_multiplier+= (atan(x-(k/(k+1)))/pow(pow(M_E,k+1),1/k));
    }

    cout << first_multiplier * second_multiplier;
}