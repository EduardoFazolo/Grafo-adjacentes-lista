#pragma once
#include <iostream>
#include "Grafo.h"
using namespace std;
int main() {
	int tamanho = 5;
	int *v = new int[tamanho];

	Grafo* g = new Grafo(5);
	g->criaAdjacente(2, 5, 20);
	g->criaAdjacente(2, 1, 35);
	g->criaAdjacente(2, 2, 35);
	g->criaAdjacente(1, 0, 20);
	g->removeAdjacencia(2,1, 35);
	
	cout << "Numero de adj:" <<  g->retAdjacentes(2, v) << endl;
	
	cout << "Vetor: " << endl;
	for (size_t i = 0; i < tamanho; i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	
	g->imprimeGrafo();
}