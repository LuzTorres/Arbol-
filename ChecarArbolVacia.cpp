//Checar que estre vacia

Nodo*BuscarP(int Ref){
	if (this-Raiz->Dato==Ref)
	return this-Raiz;
if (this-Raiz->Hijo.isVacio())
return Null;
if (this-Raiz->Hijos[0]->Dato==Ref)
return Hijos[0];
this-Raiz->Hijos[0]->Hijos[0]

Nodo*BuscarP(int Ref, Nodo*aux){
	if (aux->Dato==Ref)
	{
		return aux;
	}
	if (aux->Hijos.isVacio())
	{
		return Null;
	}
	return BuscarP(Ref, aux->Hijos[0]);
}
for (int i = 0; i < aux->Hijos.Size(); ++i)
{
	Nodo*aux2 BuscarP(Ref,aux->Hijos[i]);
	if (aux2!=Null)
	{
		return aux2;
	}
}
//Entonces no hay hijos
return Null;

}