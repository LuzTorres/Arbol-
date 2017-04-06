//Inicio de Arbol
class Nodo
{
public: Nodo*Padre
Lista<Nodo*> Hijos;    //Atributo hijo?
Dato dato;
	Nodo(dato);
	this->dato=dato;
	this->Padre=Null;

	Nodo(dato, Nodo*Padre);{
		this->dato=dato;
		this->Padre=Padre;
	}
	
};

// Arbol 

class NodoA
{
public: Nodo*Padre
Lista<Nodo*>Hijos;
int dato;
Nodo(int dato){
	this->Dato=Dato;
	this->Padre=Null;
}
Nodo (int Dato; Nodo*Padre){
	this->Dato=Dato;
	this->Padre=Padre;
}
};


//Creando la raiz del arbol de donde nace todo

class Arbol
{
public: NodoA*Raiz;
	Arbol(int Dato){
		Raiz=new NodoA (Dato);
	}
	//La raiz nula del arbol vacio
	Arbol(){
		this->Raiz=Null;
	}
	
};