#include <ostream>
#include "List.h"
#include "Node.h"

template <typename T>
class ListLinked : public List<T> {
	private:
		Node<T>* first;
		int n;

	public: 
		void insert(int pos, T e){
			if(pos < 0 || pos >n){
				throw std::out_of_range ("fuera de rango1");
			}
			if(n == 0){
				n++;
				first = e;
			
			}
			else{
				T* aux=first;
				T* prevaux=nullptr;
				for(int i=0; i != pos; i++){
					prevaux = aux;
					aux= aux->next;
				}
				prevaux->next =e;
				e->next = aux;
				n++;

			}
		}

		void append (T e){
			T* aux = first;
			for(int i=0; i<n; i++){
				aux = aux->next;
			}
			aux-> next = e;
			n++;
		}

		void prepend(T e){
			e->next = first;
			first = e;
			n++;
		}

		T remove(int pos){
			if (pos<0 || pos >n-1){
				throw std::out_of_range("fuera de rango 2");
			}
			
			delete get(pos);
			n--;

			
		}

		T get(int pos){
			if(pos<0 || pos >n-1){
				throw std::out_of_range("fuera de rango 3");
			}
			T* aux = first;
			T* prevaux = nullptr;

			for(int i=0; i<pos;i++){
				prevaux=aux;
				aux = aux->next;
			}
			return aux;
		}

		int search(T e){
			T* aux = first;
			int i=0;
			for(i=0; i<n; i++){
				if(aux == e){
					return e;
				}
				else{
					aux=aux->next;
				}
			}
			if(i>=n){
				return -1;
			}

		}

		bool empty(){
			if(n==0){
				return true;
			}
			else{
				return false;
			}
		}

		int size(){
			return n;
		}

		ListLinked(){
			*first = nullptr;
			n=0;
		}

		~ListLinked(){
			T* aux=first;
			T* prevaux=nullptr;
			for(int i=0; i< n; i++){
				prevaux = aux;
				aux = aux->next;
				delete prevaux;
			}
		}

		T operator[] (int pos){
		if (pos<0 || pos > n-1){
			throw std::out_of_range("fuera de rango 4");
		}
		else{
			T* aux = first;
			for(int i=0; i!= pos; i++){
				aux = aux -> next;

			}
			return aux;
		}
		}

		friend std::ostream&operator<<(std::ostream &out, const ListLinked<T> &list){
			out << list << std::endl;
			return out;
		}

};
