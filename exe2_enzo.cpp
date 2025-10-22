#include <iostream>
using namespace std;

// EXERCÍCIO: VOCÊ DEVE CRIAR UMA FUNÇÃO NOMEADA somar_tres_inteiros QUE IRÁ RECEBER 3 NÚMEROS INTEIROS E RETORNAR A SOMA ENTRE OS TRÊS NÚMEROS
// VOCÊ DEVE CHAMAR A FUNÇÃO NO MAIN, ARMAZENAR EM UMA VARIÁVEL CHAMADA soma E IMPRIMIR A VARIÁVEL

int somar_tres_inteiros(int num1, int num2, int num3){
    int soma = num1+num2+num3;

}

int main(){
    int soma_total = somar_tres_inteiros(3, 6, 5);
    cout << soma_total << endl;

}
