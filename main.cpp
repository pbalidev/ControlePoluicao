#include <cstdlib>
#include <cstdio>
#include <locale>
#include <Windows.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	SetConsoleOutputCP (CP_UTF8);
    float indice;

    cout << "Digite o índice de poluição: ";
    cin >> indice;

    if (indice >= 0.5) {
        cout << "Todos os grupos devem suspender suas atividades." << endl;
    } else if (indice >= 0.4) {
        cout << "Indústrias do 1º e 2º grupo devem suspender suas atividades." << endl;
    } else if (indice >= 0.3) {
        cout << "Indústrias do 1º grupo devem suspender suas atividades." << endl;
    } else {
        cout << "Índice de poluição dentro dos limites aceitáveis." << endl;
    }

    return 0;
}
