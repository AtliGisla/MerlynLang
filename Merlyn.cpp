#include <iostream>
#include <fstream>
#include "include/EntityHolder.hpp"

EntityHolder tree;

//defines a new merlyn in the tree
void merlyn(Word input);

//defines a new stoopid in the tree
void stoopid(Word input);

//defines a new voodooman in the tree
void voodooman(Word input);

//function that interprets operators and returns the answer
Word math(Word input);

//function that prints to the outstream
void scream(Word input);

//function that takes in user input
Word what();

int main(int argc, const char* argv[]) {

    if(argc > 1){
        std::cout << "Invalid arguments";
        return 0;
    }
    if(argc == 1){
        std::ifstream file (argv[1]);
        if(file.is_open()){
            Word line();

        }
        else{
            std::cout << "Unable to open file";
        }
    }
    return 0;
}