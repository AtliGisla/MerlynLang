#ifndef WORD_HPP
#define WORD_HPP

class Word {
    private:
        char* value;
        unsigned long size;
        unsigned long capacity;

    public:
        public Word();
        public ~Word();
};

#endif //WORD_H