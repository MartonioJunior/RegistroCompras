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

// Interface Gr�fica
void printHeader()
{
	
}

void mainMenu()
{
	
}

void searchMenu()
{
	
}

// Fun��es de busca
cliente findClienteOnArray()
{
	
}

bool hasClienteOnArray()
{
	
}
// Fun��es auxiliares

// Inicializa��o do programa
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
