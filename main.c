#include <stdio.h>
#include <stdlib.h>

// Estruturas de dados
typedef struct
{
	int dia;
	int mes;
	int ano;
} data;

typedef struct
{
	char cpf[11];
	char nome[100];
} cliente;

typedef struct
{
	int id;
	float valor;
} compra;

typedef struct
{
	char cpf[11];
	int id;
	data d;
} clientescompras;

// Interface Gráfica
void printHeader()
{
	
}

void mainMenu()
{
	
}

void searchMenu()
{
	
}

// Funções de busca
cliente findClienteOnArray()
{
	
}

bool hasClienteOnArray()
{
	
}
// Funções auxiliares

// Inicialização do programa
void fillDatabase()
{
	
}

void start()
{
	cliente clientes[];
	compra compras[];
	clientescompras clicom[];
	
	fillDatabase();
	
	printHeader();
	while true {
		mainmenu();
	}
}

int main(int argc, char *argv[]) {
	start();
}
