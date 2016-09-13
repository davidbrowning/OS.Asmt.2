#include"compute-pi.hpp"

double computePi(int x){
/*
3.1415926535897932384626433832795028841971
*/

double pi = 3.1415926535897932384626433832795028841971;
std::cout << std::setprecision(x) << pi << std::endl;
return pi;
}
