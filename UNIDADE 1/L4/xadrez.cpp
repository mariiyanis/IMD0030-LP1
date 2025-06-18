#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<vector<char>> tabuleiro(8, vector<char>(8, '-'));
    int i;
    int j;
    int linhaTorre{};
    int colunaTorre{};

    // obtendo a posição dos movimentos
    cout << "Digite a linha da torre: ";
    cin >> linhaTorre;
    cout << "Agora, digite a coluna da torre: ";
    cin >> colunaTorre;

    if (linhaTorre < 1 || linhaTorre > 8 || colunaTorre < 1 || colunaTorre > 8) {
        cout << "ERRO!!! As linhas e colunas devem estar entre 1 e 8!!!!" << endl;
        return 1;
    }

    int iTorre = linhaTorre - 1;
    int jTorre = colunaTorre - 1;

    for (int i = 0; i < 8; i++) {
        tabuleiro[i][jTorre] = 'X';
        tabuleiro[iTorre][i] = 'X';
    }
    
    tabuleiro[iTorre][jTorre] = 'T';

    cout << "Movimento da Torre na posição (" << linhaTorre << ", " << colunaTorre << "): " << endl;
    
    cout << "  ";
    for(j = 0; j < 8; ++j) {
        cout << j + 1 << " ";
    }
    cout << endl;

    // impressão as linhas com os movimentos
    for (int i = 0; i < 8; i++) {
        cout << i + 1 << " "; 
        for (int j = 0; j < 8; j++) {
            cout << tabuleiro[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
