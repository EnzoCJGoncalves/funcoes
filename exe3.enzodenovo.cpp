#include <iostream>
using namespace std;

//EXERCÍCIO: VOCÊ DEVE CRIAR UMA FUNÇÃO NOMEADA escolhe_maior_entre_tres_numeros QUE IRÁ RECEBER TRÊS NÚMEROS INTEIROS E DEVE RETORNAR O MAIOR ENTRE OS TRÊS
// NO main, VOCÊ DEVE:
// -PEDIR AO USUÁRIO PARA DIGITAR TRÊS NÚMEROS INTEIROS POSITIVOS E ARMAZENE-OS EM TRÊS VARIÁVEIS
// -CHAMAR A FUNÇÃO escolhe_maior_entre_tres_numeros E ARMAZENAR O RETORNO DA FUNÇÃO EM UMA VARIÁVEL NOMEADA maior
// -IMPRIMIR UMA MENSAGEM COM O MAIOR NÚMERO

// EXEMPLO:
// Digite três inteiros: 4 9 2
// 9 é o maior número entre 4, 9 e 2.

int escolhe_maior_entre_tres_numeros(int a, int b, int c){

    if(a>b && a>c){
        return a;
    }else if(b>a && b>c){
        return b;
    }else{
        return c;
    }
}

int ler_num(){
    int a;
    cin >> a;

    return a;
}

int main(){

    int num1, num2, num3, maior;

    cout << "Digite tr�s n�meros inteiros: " << endl;

    num1 = ler_num();
    num2 = ler_num();
    num3 = ler_num();

    maior = escolhe_maior_entre_tres_numeros(num1, num2, num3);

    cout << maior << " � o maior n�mero entre " << num1 << ", " << num2 << " e " << num3 << ".";

}
