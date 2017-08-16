#pragma once
#include <iostream>
#include "Grafo.h"
using namespace std;
int main() {
	Grafo* g = new Grafo(5);
	g->criaAdjacente(2, 5, 20);
	g->criaAdjacente(2, 1, 35);
	g->criaAdjacente(1, 2, 22);
	
	g->imprimeGrafo();
}