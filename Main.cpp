#include <iostream>
#include <limits>
#define Mbyte (1024*1024)
int main (int argc, char** argv) {
   int i = 1; int g = 0;
   while (true)
   {
    int *p = new int [1024];
    if (p == NULL) break;
    if ((i%Mbyte) == 0) 
    {
    std::cout << i <<std::endl;
    g++; i = 0;
    std::cout <<"Occupy "<< sizeof(int)*g <<" Gygabytes"<<std::endl; 
    }
    i++;
    }
    std::cout << "all memory is occypied"<<std::endl;
  

    return 0;
}
