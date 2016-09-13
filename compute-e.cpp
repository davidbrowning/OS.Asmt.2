#include"compute-e.hpp"


double computeE(int x){
/*
handle cases up to three and less than 0
Then, starting at 2, add each iteration to n (which initially stores 2) until you've reached x
create factorial(int i) function. 
return e.
*/
double e = 0;
	
	for(int i = 0; i <= x; ++i){
		double nfactorial = 1;
		if(i != 1){
			for(int j = i; j>1;--j){
				nfactorial *= j;
			}
		}
		e += 1/nfactorial; 
	}
std::cout << std::setprecision(15) << e << std::endl;
return e;
}
