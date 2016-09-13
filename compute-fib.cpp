#include "compute-fib.hpp"

int computeFibonacci(int x){
/*
fibonacci 1 1 2 3 5 8 13 21 
*/
	std::cout << "0 ";
	if(x == 0){ return 0; }
	int first = 1;
	int second = 1;
	std::cout << first << " ";
	if(x == 1){ return 0; }
	std::cout << second << " ";
	int next = 0;
	for(int i = 0; i < x-3; ++i){
		next = first + second;
		std::cout << next << " ";
		first = second;
		second = next;
	}
	std::cout << std::endl;


return 0;
}
