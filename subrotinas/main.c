#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int somar(int num, int num2);

void hello();

int somar(int num, int num2) { return num + num2; }
int subtrair(int num, int num2) { return num - num2; }
int multiplicacao(int num, int num2) { return num * num2; }
void hello() { printf("Hello World!\n"); }

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

struct Carro {
    char marca[50];
    char modelo[50];
    int ano;
};

typedef struct {
    char marca[50];
    char modelo[50];
} Roupas;

typedef struct {
    char cabelo[50];
    char cor[50];
} Caracteristicas;

bool buscarCaracteres(const char *palavra) {
    for (int i = 0; i < strlen(palavra); i++) {
        if (palavra[i] == 'a') {
            return true;
        }
    }
    return false;
}

void palavraEncontrada(const char *palavra) {
    if (buscarCaracteres(palavra)) {
        printf("Palavra encontrada\n");
    } else {
        printf("Palavra não encontrada\n");
    }
}
void imprimirCaracteristicas() {
    Caracteristicas individuo;
    strcpy(individuo.cabelo, "castanho");
    strcpy(individuo.cor, "branco");
    printf("Cabelo: %s\n", individuo.cabelo);
    printf("Cor: %s\n", individuo.cor);
}

int main() {
    palavraEncontrada("green");

    int array[] = {1, 2, 3, 4, 5};
    array[1] = 10;
    printf("%d\n", array[1]);

    Pessoa pessoa1;
    Pessoa pessoa2;
    strcpy(pessoa1.nome, "Gustavo");
    strcpy(pessoa2.nome, "João");
    pessoa1.idade = 20;
    pessoa2.idade = 19;
    printf("%d\n", pessoa1.idade);
    printf("%d\n", pessoa2.idade);
    printf("%s\n", pessoa1.nome);
    printf("%s\n", pessoa2.nome);

    hello();
    printf("%d\n", somar(4, 3));
    printf("%d\n", subtrair(4, 3));

    imprimirCaracteristicas();
    return 0;
}