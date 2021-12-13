#pragma once
/*Générécité :travailler avec une class sans type et on affecte le type qu'apres
le besoin*/
namespace Algo {
	template<class T>
	class Stack
	{
	public:
		void push(T* A) {
			Node<T>* Elem = new Node();
			assert(Elem != 0);//sinon on trouve un message d'erreur en mode debugage
			//try catch();on les utilise pour les client en mode release
			Elem->data = A;
			Elem->next = this->head;
			this->head = Elem;
		}
		void pop() {
			assert(!this->empty());
			Node* supp = this->head;
			this->head = supp->next;
			delete supp;
			supp = 0;
		}
		bool empty() const {

			return (this->head == 0);
		}
		T* top() const {
			assert(!this->empty());
			return this->head->data;
		}
		static Stack* creator() {
			Stack* S = new Stack();
			assert(S);
			return S;
		}
		static void garbage(Stack* S) {
			assert(S);
			delete S;//on fait l'appel au destructeur
		}
	private:
		/*l'utilisation d'une classe vrapper dans une autre
		* en .h et l'implementer en .cpp augmente la 
		* securite carpersonne ne peut voir l'implementation
		*/
		class Node<T> *head;
		Stack() {
			this->head = 0;
		}
		~Stack() {
			while (this->head)
				this->pop();
		}
	};
	template<class I>
	class Node {
	private:
		I* data;//data
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


