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
		friend std::ostream&operator<<(std::ostream &out, const ListArray<T< &list);
		void insert(int pos, T e){
		}

		



};
