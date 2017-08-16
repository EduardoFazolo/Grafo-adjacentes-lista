#include "Grafo.h"

Grafo::Grafo(int V) {
	this->V = V;
	adj_list = new list<pair<int, int>>[V];
}

void Grafo::criaAdjacente(int x, int y, int _peso)
{
	adj_list[x].push_back(make_pair(y,_peso));
}

void Grafo::imprimeGrafo()
{
	list<pair<int, int>>::iterator it;

	for (int i = 0;  i < V; i++) {
		for (it = adj_list[i].begin(); it != adj_list[i].end(); it++)
		{
			cout <<  it->first << ", " << it->second << " ";
		}
		cout << endl;
	}
	
}

//void Grafo::removeAdjacencia(int x, int y)
//{
//	matriz[x][y] = INF;
//}
//
//void Grafo::setaInformacao(int i, std::string _nome)
//{
//	No* no = new No(_nome);
//	vertices[i] = *no;
//}
//
//void Grafo::imprimeVertices()
//{
//	for (size_t j = 0; j < tamanho; j++)
//	{
//		std::cout << vertices[j].mostraNome();
//	}
//}
//
//int Grafo::retAdjacentes(int x, int* _adj)
//{
//	int count = 0;
//
//	for (size_t j = 0; j < tamanho; j++)
//	{
//		if (matriz[x][j] != INF) {
//			_adj[count] = j;
//			count++;
//		}
//
//	}
//
//	return count;
//}


Grafo::~Grafo()
{
}
