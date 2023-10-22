#include <ostream>
#include "List.h"

template <typename T>
class ListArray : public List<T> {
        private: 
                T* arr;
                int max;
                int n;
                static const int MINSIZE = 2;
                void rresize(int new_size);
        public: 
                ListArray(){
                        T arr[MINSIZE];
                        this->T* arr = T* arr;
                        this-> max = 2;
                        this-> n = 2;

                };

                ~ListArray(){
                delete[] arr;
                }

                T operator[](int pos);
                friend std::ostream&operator<<(std::ostream &out, const ListArray<T> &list);
                void insert(int pos, T e){
                }

		void insert(int pos, T e){
			arr[pos]=e;
			/*lanza una excepción si pos no es valida*/
		}
		void append(T e){
			arr[size-1]=e;
		}
		void prepend(T e){
			arr[0]=e;
		}
		T remove(int pos){
			T b;
			arr[pos]=b;
			delete arr[pos];
			return b;
			/*lanza una excepción si la posición lo es válida*/
		}
		T get(int pos){
			return arr[pos];
		}
		int search (T e){
			int i=0;
			for(int i; i<=size-1; i++){
				if(arr[i]==e){
					return i;
				}
			}
			if(i>=size){
				return -1;
			}
		}
		bool empty(){
			
		}
		int size(){
		
		}
};




