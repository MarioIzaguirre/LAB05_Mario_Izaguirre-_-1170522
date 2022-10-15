#pragma once
#include <string> 
class ListM
{
	/// <summary>
	/// Nodo simplemente enlazado
	/// </summary>
public:
	struct Node
	{
	public:
		/// <summary>
		/// Información de número
		/// </summary>
		std::string data;

		/// <summary>
		/// Información de color
		/// </summary>
		std::string color;

		/// <summary>
		/// Apuntador hacia siguiente Nodo
		/// </summary>
		Node* next;
	};

public:
	/// <summary>
	/// Apuntador al primer Nodo dentro de la lista (cabeza)
	/// </summary>
	Node* header = nullptr;

	/// <summary>
	/// Agrega un elemento al INICIO de la lista
	/// </summary>
	/// <param name="item">Elemento a agregar</param>
	void Add(std::string item, std::string color);

	/// <summary>
	/// Elimina en la posición 0
	/// </summary>
	/// <param name="index">Posición/Índice (base 0) dentro de la lista</param>
	/// <exception cref="System.ArgumentOutOfRangeException">index menor a 0 o index mayor o igual a Count</exception>
	void Remove();

	///<summary>
	///método para desplegar los elementos de la lista
	///<summary>
	std::string mostrarLista(Node* elemento);

	///<summary>
	///método para desplegar el primer elemento de la lista
	///<summary>
	std::string mostrarPrimero();

	/// <summary>
	/// Cuenta la cantidad de elementos en la lista
	/// </summary>
	/// <returns>Cantidad de elementos en la lista</returns>
	int Count();

	/// <summary>
	/// Elimina todos los elementos de la Lista.
	/// </summary>
	void Clear();
};

