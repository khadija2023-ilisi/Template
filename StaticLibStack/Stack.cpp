#include "pch.h"
#include <assert.h>
#include "Stack.h"
//using namespace Algo;
/*amespace Algo{
	class Node {
	private:
		T* data;//data
		Node* next;//pointeur sur le suivant
	public:
		///*T* getData() const;
		//void setDATA(T*);
		//donner l'accessiblité aux champs prives a la class stack
		friend class Stack;
		//si on ravaille avec une classe comme etant notre noeud
		//il faut implementer destructeur 
	};
};

void Algo::Stack::push(T* A)
{
	Node* Elem = new Node();
	assert(Elem != 0);//sinon on trouve un message d'erreur en mode debugage
	//try catch();on les utilise pour les client en mode release
	Elem->data = A;
	Elem->next = this->head;
	this->head = Elem;
	
}//end of method pop

void Algo::Stack::pop()
{
	assert(!this->empty());
	Node* supp = this->head;
	this->head = supp->next;
	delete supp;
	supp = 0;
}

bool Algo::Stack::empty() const
{
	return (this->head == 0);
}

T* Algo::Stack::top() const
{
	assert(!this->empty());
	return this->head->data;
}

Stack* Algo::Stack::creator()
{
	Stack* S = new Stack();
	assert(S);
	return S;
}

void Algo::Stack::garbage(Stack* S)
{
	assert(S);
	delete S;//on fait l'appel au destructeur
}

Algo::Stack::Stack()
{
	this->head = 0;
}

Algo::Stack::~Stack()
{
	while (this->head)
		this->pop();
}
//* a ne pas utiliser
T* Node::getData() const
{
	return this->data;
}

void Node::setDATA(T* dat)
{
	this->data = dat;
}
*/
