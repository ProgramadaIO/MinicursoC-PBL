#include <stdio.h>

void calculo() {

}

int cadastro() {
    int diaNascimento, mesNascimento, anoNascimento, sexo, possuiHidrocefalia, possuiCardio, possuiDiabetes, possuiPlanoSaude, resultado;
    float peso;

    do {
        printf("Qual o dia do nascimento da criança? ");
        scanf("%d", &diaNascimento);
        printf("Qual o mês do nascimento da criança? ");
        scanf("%d", &mesNascimento);
        printf("Qual o ano do nascimento da criança? ");
        scanf("%d", &anoNascimento);
        printf("Qual o sexo da criança? \n1. Feminino \n2. Masculino \n");
        scanf("%d", &sexo);
        printf("Qual o peso da criança? ");
        scanf("%f", &peso);
        printf("A criança possui hidrocefalia? \n1. Sim \n2. Não \n");
        scanf("%d", &possuiHidrocefalia);
        printf("A criança possui problema cardíaco? \n1. Sim \n2. Não \n");
        scanf("%d", &possuiCardio);
        printf("A criança possui diabetes? \n1. Sim \n2. Não \n");
        scanf("%d", &possuiDiabetes);
        printf("A criança possui plano de saúde? \n1. Sim \n2. Não \n");
        scanf("%d", &possuiPlanoSaude);

        calculo();

        printf("1. Ver o resultado parcial \n2. Continuar cadastrando \n3. Sair do cadastro \n");
        scanf("%d", &resultado);

        if (resultado == 1) {
            //resultado parcial
        } else if (resultado == 3) {
            return 0;
        }
    } while (resultado == 2);

}

int main () {
    int resultado;

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