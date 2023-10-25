#include <ostream>
#include "List.h"

template <typename T>
class ListArray : public List<T> {
        private: 
                T* arr;
                int max;
                int n;
                static const int MINSIZE = 2;
                void resize(int new_size){
			if(new_size == max){
				return;
			}
			T* newarr = new T[new_size];
			int new_max;
			for (int i=0;i<new_size;i++){
				newarr[i]=arr[i];
			}
			delete[] arr;
			arr=newarr;
			max=new_max;
		};
        public: 
                ListArray(){
                        max = MINSIZE;
			n = 0;
                        arr = new T[MINSIZE];

                }

                ~ListArray(){
                	delete[] arr;
                }

                T operator[](int pos){
			if(pos>n-1 || pos<0){
				throw std::out_of_range("pos fuera de rango");
			}
			return arr[pos];
		}
                //friend std::ostream&operator<<(std::ostream &out, const ListArray<T> &list);
               

		void insert(int pos, T e){
			if(pos>n-1 || pos<0){
				throw std::out_of_range("pos fuera de rango");
			}
			arr[pos]=e;
		}
		void append(T e){
			arr[n-1]=e;
		}
		void prepend(T e){
			arr[0]=e;
		}
		T remove(int pos){
			if(pos>n-1 || pos<0){
				throw std::out_of_range("pos fuera de rango");
			}
			T removed = arr[pos];
			for (int i=pos; i<=n-1;i++){
				arr[i] = arr[i+1];
			}


		}
		T get(int pos){
			if(pos>n-1 || pos<0){
				throw std::out_of_range("pos fuera de rango");
			}
			return arr[pos];
		}
		int search (T e){
			int i=0;
			for(int i; i<=n-1; i++){
				if(arr[i]==e){
					return i;
				}
			}
			if(i>=n){
				return -1;
			}
		}
		bool empty(){
			if(n==0){
				return 1;
			}
			else{
				return 0;	
			}	
		}
		int size(){
			return n;
		}
};




