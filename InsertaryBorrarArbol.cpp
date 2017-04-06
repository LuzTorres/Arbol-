// Metodos del arbol

// Insertar por Ref 
//Borrar izquierda sube 
//Buscar por Profundidad, Anchura nivel

//Insertar
bool Insertar(int Dato.int Ref){
	Nodo*aux=BuscarP(Ref);
	Nodo (Dato,aux);     // Este se guarda en una lista

	aux->Hijos.Add(new Nodo (Dato, aux));

	Nodo*aux= BuscarP(Dato);
	if (aux!=Null)
	{
	    //Mensaje de error
	    return false;
	}

	Nodo*aux= BuscarP(Dato);
	Nodo*aux2= BuscarP(Ref);
	if (aux!=Null \\ aux2==Null)  //++=+ //--=+
	{
		//Mensaje de error
		return false;
	}
	aux2->Hijos.Add(new Nodo(Dato,aux2));
	return true;
}aux->Hijos.Add(new Nodo(Dato,aux));

//Borrar

int BorrarI(int Ref){{
	Nodo*aux= BuscarP(Ref);
	if (aux==Null)
	{
		//Error mensaje; se debe buscar al hijo izquierdo
		return;
	}
}
if (aux->Hijos.isVacio())
{
	aux->Padre->Hijos.delete(Ref);
	aux->Padre=Null;
}
else{
	aux->Dato=aux->Hijos[0]->Dato;
	aux->Hijos[0]->Padre=Null;
	aux->Hijos.delete(Ref);
}
return true;
}