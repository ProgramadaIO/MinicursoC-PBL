#include <stdio.h>

void calculo() { //Função dos cálculos que com certeza vai se tornar várrias futuramente

}

int cadastro() { // função cadastro
    int i, diaNascimento[50], mesNascimento[50], anoNascimento[50], sexo[50], possuiMicrocefalia[50];
    int possuiCardio[50], possuiDiabetes[50], possuiPlanoSaude[50], resultado;
    float peso[50];
    //definindo vetores para facilitar os calculos
    

    do {
        printf("Qual o dia do nascimento da criança? "); //as perguntas 
        scanf("%d", &diaNascimento[i]);
        printf("Qual o mês do nascimento da criança? ");
        scanf("%d", &mesNascimento[i]);
        printf("Qual o ano do nascimento da criança? ");
        scanf("%d", &anoNascimento[i]);
        printf("Qual o sexo da criança? \n1. Feminino \n2. Masculino \n");
        scanf("%d", &sexo[i]);
        printf("Qual o peso da criança? ");
        scanf("%f", &peso[i]);
        printf("A criança possui hidrocefalia? \n1. Sim \n2. Não \n");
        scanf("%d", &possuiMicrocefalia[i]);
        printf("A criança possui problema cardíaco? \n1. Sim \n2. Não \n");
        scanf("%d", &possuiCardio[i]);
        printf("A criança possui diabetes? \n1. Sim \n2. Não \n");
        scanf("%d", &possuiDiabetes[i]);
        printf("A criança possui plano de saúde? \n1. Sim \n2. Não \n");
        scanf("%d", &possuiPlanoSaude[i]);
        i++;

        calculo(); // a função cálculo vai ser chamada aqui e vai passar como parâmetro as informações necessárias para outra função

        printf("1. Ver o resultado parcial \n2. Continuar cadastrando \n3. Sair do cadastro \n"); // a opção 3 está finalizando o programa e a intenção é voltar ao menu,
        scanf("%d", &resultado);                                                                 // acredito que pode haver uma forma melhor para fazer isso

        if (resultado == 1) { // em construção
            //resultado parcial
        } else if (resultado == 3) {
            return 0;
        }
    } while (resultado == 2);

}

int main () {
    int resultado;
    // menu onde vai poder ver o resultado completo (pensei em por isso no if do cadastro mas n desenvolvi ainda)
    printf("MENU \n1. Fazer novo cadastro \n2. Ver relatório completo \n3. Sair \n");
    scanf("%d", &resultado);

    switch (resultado) {
    case 1:
        cadastro();
        break;
    case 2:
        //resultadoCompleto();
        break;
    case 3:
        break;
    default:
        break;
    }
    
    return 0;
}