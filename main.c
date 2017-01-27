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
cliente findClienteOnArray(char cpf[11], cliente[] clientes)
{
	int index = 0;
	for (c in clientes)
		if (c.cpf == cpf)
			return c;
}

cliente findClienteOnArray(char[100] nome, cliente[] clientes)
{
	int index1, index2;
	bool isEqual = true;
	index1 = 0;
	for (c in clientes)
	{
		index2 = 0;
		for (s in nome)
		{
			if (c.nome[index2] != s)
				isEqual = false;
			index2++;
		}
		if (isEqual)
			return c;
		index++;
	}
	return null;
}

bool hasClienteOnArray()
{
	
}
// Funções auxiliares
data createData(){

}

compra createCompra(){

}

clientescompras createClienteCompraLink(){

}

data getData(clientescompras clicom){
	
}

cliente getCliente(clientescompras clicom){

}

compra getCompra(clientescompras clicom){

}

clientescompras getClienteCompra
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
