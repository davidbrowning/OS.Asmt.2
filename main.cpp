#include<iostream> 
#include<string>
#include<iomanip>
#include "compute-pi.hpp"
#include "compute-e.hpp"
#include "compute-fib.hpp"


void standardErrorMessage(){
	std::cout << "Expected arguments:" << std::endl;
	std::cout << "-fib [n] computes fibonacci of [n]" <<std::endl;
	std::cout << "-e [n] computes e to [n] iteration" << std::endl;
	std::cout << "-pi [n] displayes pi to [n] digits" << std::endl;
return;
}

int main(int argc, char* argv[])
{
	if(argc != 3){
		standardErrorMessage();
		return 1;
	}

	std::string argument = "no";
	int num = 0;
	try{argument = argv[1];}
		catch(...){
			std::cout << "unexpected argument!" << std::endl;
			standardErrorMessage();
			return 1;
		} //pass the argument to a string for comparison.
	try{num = std::stoi(argv[2]);}
		catch(...){
			std::cout << "unexpected argument!" << std::endl;
			standardErrorMessage();
			return 1;
		}
	if(argument == "-fib"){
		if(0 <= num && num <= 40){
			computeFibonacci(num);
		}
		else{standardErrorMessage();
		}
}
	else if(argument == "-e"){
		if(0 < num && num <=30){
			computeE(num);
		}
		else{standardErrorMessage();
		}
	}
	else if(argument == "-pi"){
		if(0 < num && num <= 30){
			computePi(num);
		}
		else{standardErrorMessage();
		}	
	}
	
	else{
		standardErrorMessage();
	}		
	
return 0;
}

