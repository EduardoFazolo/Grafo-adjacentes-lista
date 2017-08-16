#include "Grafo.h"

Grafo::Grafo(int tamanho) {
	//tamanho = adj_list.size();
	adj_list.resize(tamanho);
}

void Grafo::criaAdjacente(int x, int y, int _peso)
{
	list<int, int> l;
	//adj_list.insert(adj_list.begin + x, list<y,_peso>)
	adj_list.at(x) = adj_list.insert(make_pair(y, _peso));
}

void Grafo::imprimeGrafo()
{
	//vector<pair<int, int>>::iterator i;

	for (int i = 0; i < adj_list.size(); i++)
	{
			cout << adj_list[i].first << ", " << adj_list[i].second;
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
