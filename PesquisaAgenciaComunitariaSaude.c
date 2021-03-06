#include <stdio.h>
#include <stdlib.h>

void lerArquivo() {

    FILE *resultados;
    resultados = fopen("Resultados.txt", "r");

    if (resultados == NULL){
        printf("Arquivo vazio!");
    } else {

        char info[1000];
        while (fgets(info, 1000, resultados) != NULL){
           printf("%s", info);
        }
    }

    fclose(resultados);

}

void calculoEInserirArquivo(int *contador, int i){

    FILE *resultados;
    resultados = fopen("Resultados.txt", "w");
    fprintf(resultados, "Quantidade de crianças cadastradas: %d\n", i);
    fprintf(resultados, "Quantidade de crianças que nasceram no ano corrente: %d\n", contador[0]);
    fprintf(resultados, "Percentual de meninas: %d\n", (contador[1]*100) / i);
    fprintf(resultados, "Percentual de meninos: %d\n", (contador[2]*100) / i);
    fprintf(resultados, "Percentual de crianças com microcefalia: %d\n", (contador[3]*100) / i);
    fprintf(resultados, "Percentual de crianças com problema cardíaco: %d\n", (contador[4]*100) / i);
    fprintf(resultados, "Percentual de crianças sem plano de saúde: %d\n", (contador[5]*100) / i);
    fclose(resultados);
}

int cadastro(int *contador, int i) { // função cadastro
    int diaNascimento[50], mesNascimento[50], anoNascimento[50], sexo[50], possuiMicrocefalia[50];
    int possuiCardio[50], possuiDiabetes[50], possuiPlanoSaude[50], resultado;
    float peso[50];
    //definindo vetores para facilitar os calculos
    
/*contador[0] = nascidos no ano corrente
contador[1] = sexo feminino
contador[2] = sexo masculino
contador[3] = possui microcefalia
contador[4] = possui problema cardiaco
contador[5] = não possui plano de saude*/

    do {
        printf("\n\n====PESQUISA DA AGENCIA COMUNITARIA DE SAUDE====\n\n");
        printf("Qual o dia do nascimento da criança? "); //as perguntas 
        scanf("%d", &diaNascimento[i]);
        printf("Qual o mês do nascimento da criança? ");
        scanf("%d", &mesNascimento[i]);
        printf("Qual o ano do nascimento da criança? ");
        scanf("%d", &anoNascimento[i]);
        if(anoNascimento[i] == 2020){
            contador[0]++;
        }
        printf("Qual o sexo da criança? \n1. Feminino \n2. Masculino \n");
        scanf("%d", &sexo[i]);
        if(sexo[i] == 1){
            contador[1]++;
        }else if(sexo[i] == 2){
            contador[2]++;
        }
        printf("Qual o peso da criança? ");
        scanf("%f", &peso[i]);
        printf("A criança possui microcefalia? \n1. Sim \n2. Não \n");
        scanf("%d", &possuiMicrocefalia[i]);
        if(possuiMicrocefalia[i] == 1){
            contador[3]++;
        }
        printf("A criança possui problema cardíaco? \n1. Sim \n2. Não \n");
        scanf("%d", &possuiCardio[i]);
        if(possuiCardio[i] == 1){
            contador[4]++;
        }
        printf("A criança possui diabetes? \n1. Sim \n2. Não \n");
        scanf("%d", &possuiDiabetes[i]);
        printf("A criança possui plano de saúde? \n1. Sim \n2. Não \n");
        scanf("%d", &possuiPlanoSaude[i]);
        if(possuiPlanoSaude[i] == 2){
            contador[5]++;
        }
        i++;

            
         //a função cálculo vai ser chamada aqui e vai passar como parâmetro as informações necessárias para outra função

        printf("1. Ver o resultado parcial \n2. Continuar cadastrando \n3. Ver resultado total \n4. Sair do cadastro \n");
        scanf("%d", &resultado);

        if (resultado == 1 || resultado == 3) {
            calculoEInserirArquivo(contador, i);
            lerArquivo();
        }
    } while (resultado == 1 || resultado == 2);

}

int main () {
    int k, i = 0, resultado, contador[6]; // esse contador armazena e incrementa a cada informação que é necessária para os calculos
    for(k=0; k<6; k++){
        contador[k] = 0; // inicializando todas as posições em 0
    }
    cadastro(contador, i);
}
