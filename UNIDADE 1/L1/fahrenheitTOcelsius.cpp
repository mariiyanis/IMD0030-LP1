#include <iostream>
using namespace std;

int main()
{
    float temperaturaFahrenheit{};
    float temperaturaCelsius;
    
    cout << "Digite a temperatura em Fahrenheit: ";
    cin >> temperaturaFahrenheit;
    
    temperaturaCelsius = 5.0 / 9.0 * (temperaturaFahrenheit - 32);
    
    cout << "A temperatura em Celsius é: " << temperaturaCelsius << endl;

    return 0;
}
