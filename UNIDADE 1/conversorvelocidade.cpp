#include <iostream>
using namespace std;

int main()
{
    float vms{};
    float vkmh;
    
    cout << "Digite a velocidade em m/s: ";
    
    cin >> vms;
   
    vkmh = vms * 3.6;
   
    cout << "O valor da velocidade em km/h é: " << vkmh << "." << endl;
    
    return 0;
}
