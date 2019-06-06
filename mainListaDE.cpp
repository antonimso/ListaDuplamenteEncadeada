#include <iostream>
using namespace std;

//elemento da lista - Nó ou nodo
struct Nodo{
	int info;
	struct Nodo *ant;
	struct Nodo *prox;	
}no;

int main(int argc, char** argv) {
	struct Nodo *inicio = NULL, *tmp, *p;
	int v;
	while(1){
		cout << "Informe o Valor: "<< endl;
		cin >> v;
		if(v == 0){
			break;
		}
		
		// cria um novo nodo  para ser inserido na lista
		tmp = (struct Nodo*) new Nodo;
		tmp->info = v;
		tmp->prox = NULL;
		
		if(inicio==NULL){
			//lista vazia
			inicio = tmp;
			tmp->ant = tmp->prox = NULL;
		}else{
			//p ira percorrer a lista
			p=inicio;
			while(p->prox != NULL && p->info != v){
				p = p->prox;
			}
			if(p->info != v){
				p->prox = tmp;
				tmp->ant = p;
			}
		}
	}//fim do while
	
	//mostrando a lista
	
	p=inicio;
	while(p != NULL){
		cout<< p->info;
		p = p->prox;
	}//fim do while(p!=null)
	cout << endl;
	
}//fim do main.






