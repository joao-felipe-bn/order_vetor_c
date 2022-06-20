#include<stdio.h>
#include<conio.h>
void ordenaDecrescente(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        for (int j = i; j < tamanho - 1; j++)
        {
            if (vetor[i] < vetor[j])
            {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

void ordenaCrescente(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        for (int j = i; j < tamanho - 1; j++)
        {
            if (vetor[i] > vetor[j])
            {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

void mostrarVetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho - 1; i++)
    {
        printf("%d ", vetor[i]);
    }
}

int main()
{
    int vetor[] = {5,6,2,4,3,1};
    int tamanho = sizeof(vetor) / sizeof(int);

    printf("Vetor antes da ordenação: ");
    mostrarVetor(vetor, tamanho);
    printf("\n");

    ordenaDecrescente(vetor, tamanho);
    printf("Vetor depois da ordenação (decrescente): ");
    mostrarVetor(vetor, tamanho);
    
    ordenaCrescente(vetor, tamanho);
    printf("Vetor depois da ordenação (crescente): ");
    mostrarVetor(vetor, tamanho);
    
    printf("\n");

}
