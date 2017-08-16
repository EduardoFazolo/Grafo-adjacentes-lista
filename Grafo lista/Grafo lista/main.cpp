#pragma once
#include <iostream>
#include "Grafo.h"
using namespace std;
int main() {
	Grafo* g = new Grafo();
	g->criaAdjacente(1, 2, 20);
	g->imprimeGrafo();
}