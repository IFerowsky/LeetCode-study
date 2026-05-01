#include <iostream>
#include <ctime>
#include <cstdio>

int main(){
    srand(time(NULL));
    for (size_t i = 0; i < 100000; i++)
    {
        std::cout << rand() % 201 - 100 << " ";
    }
    

    return 0;
}