#include <stdio.h> 
#include <string.h>

#define TAMANHO 4 // Define o tamanho máximo para as strings

// Função para ler uma string e imprimir o resultado
void ler_e_imprimir_string(char texto[], int tamanho)
{
    printf("Digite uma palavra\n"); 
    fgets(texto, tamanho, stdin); // Lê a entrada do usuário até o tamanho máximo permitido (inclui o ENTER)

    // A função strcspn encontra a posição do caractere '\n' (ENTER) na string
    int posicao_enter = strcspn(texto, "\n"); 
    texto[posicao_enter] = '\0'; // Substitui o '\n' pelo terminador de string '\0'

    printf("Palavra: %s\n", texto); // Exibe a palavra digitada
}

int main()
{
    char texto1[TAMANHO]; // Declara a variável para armazenar a primeira palavra
    char texto2[TAMANHO]; // Declara a variável para armazenar a segunda palavra

    // Chama a função para ler e imprimir a primeira palavra
    ler_e_imprimir_string(texto1, TAMANHO);
    // Chama a função para ler e imprimir a segunda palavra
    ler_e_imprimir_string(texto2, TAMANHO);

    // Exibe as palavras digitadas
    printf("Texto 01: %s\n", texto1);
    printf("Texto 02: %s\n", texto2);

    // Declara a variável para armazenar a string concatenada
    char texto_concatenado[TAMANHO + TAMANHO];

    int i = 0;

    // Copia os caracteres de texto1 para texto_concatenado
    for(i = 0; i < TAMANHO - 1; i++)
    {
        texto_concatenado[i] = texto1[i]; // Atribui o caractere de texto1 à nova string
        printf("%c", texto1[i]); // Imprime cada caractere de texto1
    }

    // Copia os caracteres de texto2 para texto_concatenado, continuando após texto1
    for(int j = 0; j < TAMANHO - 1; j++)
    {
        texto_concatenado[i + j] = texto2[j]; // Atribui o caractere de texto2 à nova string
        printf("%c", texto2[j]); // Imprime cada caractere de texto2
    }

    // Adiciona o terminador nulo '\0' no final da string concatenada
    texto_concatenado[i + TAMANHO - 2] = '\0'; 

    // Exibe a string concatenada
    printf("Concatenado: %s\n", texto_concatenado);

    return 0; // Finaliza o programa
}
