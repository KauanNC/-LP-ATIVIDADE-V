#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produto
{
    char nome[200];
    float preco;
    int estoque;
};

void atualizarEstoque(int *quantidadeEstoque, float preco, int quantidadeProduto)
{
    *quantidadeEstoque -= quantidadeProduto;
    printf("Quantidade atual no estoque: %d\n", *quantidadeEstoque);
    printf("Preço total em estoque: %f\n", *quantidadeEstoque * preco);
}

void notaFIscal()
{
}
int main()
{
    setlocale(LC_ALL, "portuguese");
    int  opcao, escolha, quantidadeDesejada, produtos;

    printf("Você é cliente ou funcionário?\n");
    printf("1 - Funcionário \n2 - Cliente\n");
    printf("Informe a opção desejada:");
    scanf("%d", &escolha);

    system("clear||cls");

    struct produto cadastro;

    switch (escolha)
    {
    case 1:
    
        printf("===== OPÇÕES DISPONÍVEIS =====\n");
        printf("1 - Cadastro de produtos \n 2 - Sair do programa\n");
        printf("Informe a opção desejada:");
        scanf("%d", &opcao);
        printf("===============================\n");
        system("cls||clear");

        if (opcao == 1)
        {  
            printf("Informe o nome do produto:");
            scanf("%s", cadastro.nome);
            printf("Informe o valor do produto: ");
            scanf("%f", &cadastro.preco);
            printf("Informe a quantidade no estoque:");
            scanf("%d", &cadastro.estoque);
            
    
            system("cls||clear");
            fflush(stdin);

            printf("===== OPÇÕES DISPONÍVEIS =====\n");
            printf("1 - Cadastrar mais produtos \n 2 - exibir estoque\n");
            printf("Informe a opção desejada:");
            scanf("%d", &opcao);
            printf("===============================\n");
            system("cls||clear");


        }
        else if (opcao == 2)
        {
            return 0;
        }

        system("cls||clear");
        break;
    }
    printf("===== OPÇÕES DISPONÍVEIS =====\n");
    printf("1 - Realização de Compras \n2 - Nota Fiscal ('Encerramento do Programa) \n");
    printf("===============================\n");
    printf("Informe a opção desejada:");
    scanf("%d", &opcao);

    system("clear||cls");
    fflush(stdin);

    switch (opcao)
    {
    case 1:
        printf("Informe o nome do produto:");
        scanf("%s", cadastro.nome);
        printf("Informe o valor do produto: ");
        scanf("%f", &cadastro.preco);
        printf("Informe a quantidade no estoque:");
        scanf("%d", &cadastro.estoque);
        break;

    case 2:
        printf("Nome do produto: %s\n", cadastro.nome);
        printf("Digite a quantidade desejada: ");
        scanf("%d", &quantidadeDesejada);
        printf("Preço: %f\n", cadastro.estoque * cadastro.preco);
        break;


    default:
        break;
    return 0;
    }
}