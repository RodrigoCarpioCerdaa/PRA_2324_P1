#include <iostream>
#include <ostream>

template <typename T>

int class vac {
	public: 
		vac(int N, T c[], T d[], int P){
			this->N = N;
			this->c[] = c[];
			this->d[] = d[];
			this->P = P;
		}
		int vaccines(int *c, int *d, int N, int P){
			for(int i=0; i<N-1; i++){
				int v[2]={c[i], d[i]};
			}
			return d[N-1];
		}
	private:
		int N;
		T c[N];
		T d[N];
		int P;

};

int main(){
	int d[3]={8,4,5};
	int c[3]={6,5,5};
	int P = 10;
	int N=3;
	vac(N, c[], d[], P);
	std::cout << vac::vaccines(c, d, N, P) << std::endl;

}

