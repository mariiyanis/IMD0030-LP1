#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double pi = 3.14;
    float r{};
    float h{};
    double volumeCilindro;
    
    cout << "Digite o raio e a altura, respectivamente: " << endl;
    cin >> r;
    cin >> h;
    
    volumeCilindro = pi * r * r * h;
    
    cout << "Volume: " << volumeCilindro << endl;
    
    return 0;
}
