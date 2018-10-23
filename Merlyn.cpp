#include <iostream>
#include "EntityHolder.h"

EntityHolder tree;

void merlyn(char* input);
void stoopid(char* input);
void voodooman(char* input);

int main(int argc, const char* argv[]) {
    if(argc > 1){
        std::cout << "Do not enter more than one argument";
        return 0;
    }
    if(argc == 1){

    }
    return 0;
}

//Im thinking of having the whole program have a bunch of nodes that have multiple pointers.
//It will work out to be a tree of some sorts visually when im done