#pragma once
#include "No.h"
#include <iostream>
#include<limits>
#include <list>
#include<map>
#include <vector>
#define INF -1
using namespace std;

class Grafo
{
private:
	int V;
	list<pair<int, int>> *adj_list;
	No* vertices;
public:
	Grafo(int V);
	void criaAdjacente(int x, int y, int _peso);
	void imprimeGrafo();
	void removeAdjacencia(int x, int y);
	void setaInformacao(int i, std::string _nome);
	void imprimeVertices();
	int retAdjacentes(int x, int* _adjacentes);
	~Grafo();
};

