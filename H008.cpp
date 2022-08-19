#include <iostream>
#include <cstring>
#include <locale>
using namespace std;

string Meio (string M) {
    int i = M.length();

    if ((i % 2) == 0) {
        return M.substr (i/2 - 1, 2);
    }
    return M.substr(i/2, 1);
}

int main () {
    setlocale(LC_ALL, "Portuguese");
    string input;

    cout << "Insira a palavra para mostrar os caracteres centrais: ";
    cin >>input;
    string Resultado = Meio (input);

    cout << "Os caracteres centrais são: " << Resultado << endl;
    return 0;
}
