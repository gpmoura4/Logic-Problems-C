int main () {

    char nome[20];
    double salario;
    double vendas;

    scanf("%s",nome);
    scanf("%lf",&salario);
    scanf("%lf",&vendas);

    printf("Seu nome é %s\n",nome);
    printf("Seu salário é %.2lf\n",salario);
    printf("Suas vendas são %.2lf\n",vendas);

    salario = salario + (0.15*vendas);

    printf("TOTAL= R$ %.2lf", salario);

    return 0;
}