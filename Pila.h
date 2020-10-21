#pragma once
#include "Node.h"
ref class Pila
{
	Node^ head;
public:

	int contador;
	Pila();
	void addFront(String^ dt);
	void RemoveFront();
	int tamaño();
	String^ GetFrot();

	~Pila();


};


