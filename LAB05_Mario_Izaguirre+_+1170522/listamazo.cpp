#pragma once
#include "mazo.h"
#include <string> 
//método para agregar elementos a la lista
void ListM::Add(std::string item, std::string color)
{
	//se crea el nuevo nodo
	Node* nuevoNodo = new Node();
	//el nuevo nodo va a tener como valor, el dato ingresado por el usuario
	nuevoNodo->data = item;
	//el nuevo nodo va a apuntar al nodo que estaba previamente antes que el
	nuevoNodo->next = header;
	//el nuevo nodo va a tener como color, rojo si es true y negro si es false
	nuevoNodo->color = color;
	//el nuevo header va a apuntar al nuevo elemento que se acaba de añadir
	header = nuevoNodo;
};

void ListM::Remove()
{
	header = header->next;
};
std::string ListM::mostrarPrimero()
{
	return header->data + ", " + header->color;
};
std::string ListM::mostrarLista(Node* elemento)
{
	//se comprueba
	if (elemento->next == nullptr)
	{
		//devuelve el dato
		return elemento->data + ", " + elemento->color;
	}
	//devuelve el dato, mas los datos que siguen
	return elemento->data + ", " + elemento->color + " " + mostrarLista(elemento->next);
};
int ListM::Count()
{
	//variable contador
	int cantidad = 0;
	//nodo que nos ayudará a pasar por la lista
	Node* temporal = header;
	//condición, si es null, es decir que se acaba la lista, se acaba el ciclo
	while (temporal != nullptr)
	{
		//cada ciclo se le suma uno a cantidad
		cantidad += 1;
		//temporal adquiere el valor del siguiente nodo hasta que el siguiente sea null
		temporal = temporal->next;
	};
	//se devuelve el valor del contador
	return cantidad;
};
void ListM::Clear()
{
	//el header vuelve a ser null, para poder volver a llenar la lista
	header = nullptr;
};