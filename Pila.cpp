#include "Pila.h"


Pila::Pila() {
	head = nullptr;
	contador = 0;
}

void Pila::addFront(String^ dt) {
	Node^ pnt = gcnew Node();
	pnt->dato = dt;
	pnt->next = head;
	head = pnt;
	contador++;
}

void Pila::RemoveFront() {
	if (head != nullptr) {
		Node^ pnt = gcnew Node();
		pnt = head->next;
		delete head;
		head = pnt;
		contador--;
	}
}

int Pila::tamaño() {
	return contador;
}

Pila::~Pila() {
	while (head != nullptr)
	{
		RemoveFront();
	}
}

String^ Pila::GetFrot() {
	if (head != nullptr)
	{
		return head->dato;
	}
	else
	{
		return "";
	}

}

