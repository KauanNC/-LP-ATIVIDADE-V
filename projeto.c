#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct produto
{
    char nome[200];
    char validade[200];
    float preco;
    int estoque;
};

void atualizarEstoque(int *quantidadeEstoque, float preco, int quantidadeProduto)
{
    *quantidadeEstoque -= quantidadeProduto;
    printf("Quantidade atual no estoque: %d\n", *quantidadeEstoque);
    printf("Preço total em estoque: %f\n", *quantidadeEstoque * preco);
}
int main()
{
    setlocale(LC_ALL, "portuguese");
    int  opcao, escolha,tipodepagamento, produtos;

    printf("Você é cliente ou funcionário?\n");
    printf("1 - Funcionário \n2 - Cliente\n");
    printf("Informe a opção desejada:");
    scanf("%d", &escolha);

    system("clear||cls");

    struct produto cadastro;
    
    switch (escolha)
    {
    case 1:
       do
       {
        printf("===== OPÇÕES DISPONÍVEIS =====\n");
        printf("1 - Cadastro de produtos \n 2 - exibir estoque\n");
        printf("Informe a opção desejada:");
        scanf("%d", &opcao);
        printf("===============================\n");
        system("cls||clear");
     
       switch (opcao)
        {  
            case 1:
            printf("Informe o nome do produto:");
            scanf("%s", cadastro.nome);
             printf("Informe a quantidade no estoque:");
            scanf("%d", &cadastro.estoque);
            printf("Informe o valor do produto: ");
            scanf("%f", &cadastro.preco);
            printf("Digite a data de validade : ");
            scanf("%s", cadastro.validade);
            
            system("cls||clear");
            fflush(stdin);
            break;
          case 2:
        printf("=========EXIBIÇÃO DE ESTOQUE=========\n");
        printf("Nome do produto: %s\n", cadastro.nome);
        printf("Quantidade em estoque: %d\n", cadastro.estoque);
        printf("Preço do produto: %.2f$\n", cadastro.preco);
        printf("validade do produto : %s\n", cadastro.validade);
        printf("======================================\n");
        return 0;
        break;
        default :
        return 0;
        break;
    }
    } while (opcao !=3);
    
    case 2:
    do
    {
    printf("===== OPÇÕES DISPONÍVEIS =====\n");
    printf("1 - Realização de Compras \n2 - Nota Fiscal\n");
    printf("===============================\n");
    printf("Informe a opção desejada:");
    scanf("%d", &opcao);

    system("clear||cls");
    fflush(stdin);

    switch (opcao)
    {
    case 1:
        printf("nome do produto:");
        scanf("%s", cadastro.nome);
        printf("o valor do produto: ");
        scanf("%f", &cadastro.preco);
        printf("Digite a quantidade desejada:");
        scanf("%d", &cadastro.estoque);
        
    system("clear||cls");
    fflush(stdin);
        do
        {
        system("clear||cls");
        printf("==========TIPO DE PAGAMENTO===========\n");
        printf("1 - Dinheiro\n2 - Cartão\n");
        printf("======================================\n");
        printf("Qual tipo de pagamento :");
        scanf("%d", &tipodepagamento);
        }while (tipodepagamento !=1 && tipodepagamento!=2);
    system("clear||cls");
        break;

    case 2:
        printf("=========NOTA FISCAL=========\n");
        printf("Nome do produto: %s\n", cadastro.nome);
        printf("quantidade desejada: %d\n", cadastro.estoque);
        printf("Preço: %.2f$\n", cadastro.estoque * cadastro.preco);
        printf("tipo de pagamento : %d\n", tipodepagamento);
        printf("======================================\n");
        return 0;
        break;

    default:
       return 0;
        break;
    }
    } while (opcao !=3);
}
return 0;
}
