#include <iostream>
using namespace std;

// EXERCÍCIO: CRIAR UMA FUNÇÃO NOMEADA cumprimentar_alunos QUE DEVE RECEBER O PRIMEIRO E O ÚLTIMO NOME DE UM ALUNO(A) E IMPRIMIR NA TELA UMA MENSAGEM DE BOM DIA À SUA ESCOLHA.
// VOCÊ DEVE CHAMAR A FUNÇÃO DENTRO NO main PARA 5 ALUNOS DIFERENTES

void cumprimentar_alunos(string nome1, string nomeu){
    cout << "Bom dia, " << nome1 << " " << nomeu << endl;
}

int main(){

    cumprimentar_alunos("Enzo", "Gon�alves");
    cumprimentar_alunos("Eliasafe", "Mendes");
    cumprimentar_alunos("Elias", "Ciriaco");
    cumprimentar_alunos("Thomaz", "Pedri");
    cumprimentar_alunos("Leonardo", "Henning");
}
