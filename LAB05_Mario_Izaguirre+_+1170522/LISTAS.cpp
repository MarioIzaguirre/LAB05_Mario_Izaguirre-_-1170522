#pragma once
#include <string>
#include "LISTA.h"

using namespace std;

void List::Add(int item) //Añadir metodo 
{
	// crea un nuevo nodo
	Node* nuevo_nodo = new Node();
	//Dato
	nuevo_nodo->data = item;
	// apuntador al siguiente nodo
	nuevo_nodo->next = header;
	header = nuevo_nodo;
}
std:: string List::mostrarLista(Node* elemento) // mostrar la lista 
{
	if (elemento->next == nullptr)
	{
		return std::to_string(elemento->data);
	}
	return std::to_string(elemento->data) + "," + mostrarLista(elemento->next);
}
int List::Count() //cuenta la cantidad de elementos en la lista 
{
	int cont = 0;
	Node* aux = header;
	while (aux != nullptr)
	{
		cont += 1; 
		aux = aux->next; 
	}
	return  cont; 
}
bool List::Contains(int item) // Verifica si el elemento indicado se encuentra en la lista
{
	Node* aux = header;
	bool existe;
	while (aux != nullptr)
	{
		if (item == aux->data)
		{
			return existe = true;
		}
		else
		{
			existe = false;
		}
		aux = aux->next;
	};
	return aux;
}
int List::IndexOf(int item) //método para saber en que posición se encuentra un elemento, de 0 a n
{
	int cont;
	Node* aux = header;
	if (List::Contains(item))
	{
		cont = 0;
	}
	while (aux->data != item)
	{
		cont += 1;
		aux = aux->next;
	};
	if (cont >= 0)
	{
		return cont;
	}
	else
	{
		return -1;
	}
};
void List::Clear() // método clear para borrar la lista y poder hacer otra
{
	header = nullptr;
};
void List::SetItem(int index, int item) // Sirve para sustituir un valor en la posicion dada
{
	Node* aux = header;
	while (index > 0)
	{
		aux = aux->next;
		index--;
	}
	aux->data = item;
};
int List::GetItem(int index) /// Obtiene el valor del elemento en la posición indicada de la lista
{
	Node* aux = header;
	while (index > 0)
	{
		aux = aux->next;
		index--;
	}
	return aux->data;
};
int List::LastIndexOf(int item) //método que devuelve la posición del último elemento con el valor especificado
{
	Node* aux = header;
	int indice = 0;
	int ultimoIndice = -1;
	for (size_t i = 0; i < List::Count(); i++)
	{
		if (aux->data == item)
		{
			ultimoIndice = indice;
		}
		aux = aux->next;
		indice += 1;
	}
	return ultimoIndice;
};
void List::RemoveAt(int index) //Sirve para eliminar la cabesa de la lista
{ 
	Node* aux1 = header;
	Node* aux2 = header;
	int contador = 0;
	if (index == 0)
	{
		header = header->next;
	}
	else
	{
		while (index > contador)
		{
			aux1 = aux1->next;
			contador += 1;
		}
		contador = 0;
		while ((index - 1) > contador)
		{
			aux2 = aux2->next;
			contador += 1;
		}
	}
	aux2->next = aux1->next;
};
bool List::Remove(int elemento) //método remove, donde se indica un elemento a eliminar
{
	int indice = List::IndexOf(elemento);
	List::RemoveAt(indice);
	return true;
};
void List::Insert(int index, int item) //método para insertar un valor en un índice indicado por el usuario
{
	if (index < (List::Count() - 1)) // en caso que el índice no sea el último
	{
		Node* aux1 = header;
		Node* aux2 = header;
		int contador = 0;
		while (contador < index)
		{
			aux1 = aux1->next;
			contador += 1;
		}
		contador = 0;
		while (contador < (index - 1))
		{
			aux2 = aux2->next;
			contador += 1;
		}
		Node* nuevo_nodo = new Node();
		nuevo_nodo->data = item;
		nuevo_nodo->next = aux1;
		aux2->next = nuevo_nodo;
	}
	else  // si se desea ingresar al final 
	{
		Node* aux = header;
		while (aux->next != nullptr)
		{
			aux = aux->next;
		}
		Node* nuevo_nodo = new Node();
		nuevo_nodo->data = item;
		nuevo_nodo->next = nullptr;
		aux->next = nuevo_nodo;
	}
};
