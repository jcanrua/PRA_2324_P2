#include <vector>

template <typename T>
int busqueda_binaria(T X, std::vector<T>& V, int ini, int fin){
	if(ini > fin){
		return -1;
	}
	
	int medio = (ini+fin)/2;

	if(V[medio] == X){
		return medio;
	}
	else if(V[medio] > X){
		return busqueda_binaria(X, V, medio+1, fin);
	}
	else{
		return busqueda_binaria(X, V, ini, medio-1);
	}
}

