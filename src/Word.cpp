#include "Word.hpp"
#define INITIAL_CAPACITY 4

Word::Word(){
    capacity = INITIAL_CAPACITY;
    size = 0;
    value = new char[capacity];
}

Word::~Word(){
    delete[] value;
}