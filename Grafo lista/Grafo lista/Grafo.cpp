#include "Grafo.h"

Grafo::Grafo(int V) {
	this->tamanho = V;
	adj_list = new list<pair<int, int>>[tamanho];
	vertices = new No[tamanho];
}

void Grafo::criaAdjacente(int x, int y, int _peso)
{
	adj_list[x].push_back(make_pair(y,_peso));
}

void Grafo::imprimeGrafo()
{
	list<pair<int, int>>::iterator it;

	for (int i = 0;  i < tamanho; i++) {
		for (it = adj_list[i].begin(); it != adj_list[i].end(); it++)
		{
			cout <<  it->first << ", " << it->second << " ";
		}
		cout << endl;
	}
	
}

void Grafo::removeAdjacencia(int x, int y, int _peso)
{
	adj_list[x].remove(make_pair(y, _peso));
}

void Grafo::setaInformacao(int i, string _nome)
{
	if (i < tamanho) {
		No* no = new No(_nome);
		vertices[i] = *no;
	}
	else {
		cout << "Erro, vertice invalido" << endl;
	}
}

void Grafo::imprimeVertices()
{
	for (size_t j = 0; j < tamanho; j++)
	{
		std::cout << vertices[j].mostraNome();
	}
}

int Grafo::retAdjacentes(int x, int* _adj)
{
	int count = 0;
	list<pair<int, int>>::iterator it;

	for (it = adj_list[x].begin(); it != adj_list[x].end(); it++)
	{
		_adj[count] = it->first;
		count++;
	}

	return count++;
}


Grafo::~Grafo()
{
}
