#ifndef EBOOKHEADERDEF
#define EBOOKHEADERDEF

#include <string>
#include "Book.hpp"

class Ebook : public Book
{
    public:
        Ebook();
        std::string hiddenUrl;
};

#endif