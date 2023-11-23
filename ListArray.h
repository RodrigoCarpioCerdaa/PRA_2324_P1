#include <ostream>
#include <iostream>
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
			if(pos>n || pos<0){
				throw std::out_of_range("pos fuera de rango1");
			}
			return arr[pos];
		}
		friend std::ostream& operator<<(std::ostream &out, const ListArray<T> &objeto){
			std::cout << "List => [";
			for (int i = 0; i < objeto.n; i++) {
            			out  << " " << std::endl << objeto.arr[i];
       			}
			std::cout << std::endl << "]";
			return out;
		
		}

		friend ListArray<T> operator + (ListArray<T>& a, ListArray<T>& b){
			return ListArray<T>(a+b);
		}

		void insert(int pos, T e){
			if(pos>n || pos<0){
				throw std::out_of_range("pos fuera de rango2");
			}
			if(n==max){
				resize(2*max);
			}
			if (n>0){
				for(int i=n; i>pos; i--){
					arr[i] = arr[i-1];
				}
			}
			arr[pos]=e;
			n++;
		}
		void append(T e){
			arr[n-1]=e;
		}
		void prepend(T e){
			arr[0] = e;
		}
		T remove(int pos){
			if(pos>n || pos<0){
				throw std::out_of_range("pos fuera de rango3");
			}
			T a = arr[pos];
			for (int i=pos; i<=n-1;i++){
				arr[i] = arr[i+1];
			}
			return a; 
		}
		T get(int pos){
			if(pos>n || pos<0){
				throw std::out_of_range("pos fuera de rango4");
			}
			return arr[pos];
		}
		int search (T e){
			for(int i=0; i<=n-1; i++){
				if(arr[i]==e){
					return i;
				}
			}	
			return -1;
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




