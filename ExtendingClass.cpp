#include <iostream>
#include "Book.cpp"
#include "Ebook.cpp"

int main(int argc, char *aregv[])
{
    Ebook mybook;
    mybook.title = "Guide to Scientific Computing in C++";
    mybook.author = "Joe-Pitt-Francis, Jonathan Wiley";
    std::cout << " Authors : " << mybook.author << std::endl;
    std::cout << " Title : " << mybook.title << std::endl;
    std::cout << " Format : " << mybook.format << std::endl;

    mybook.set_year(2017);
    std::cout << " Year of Publication : " << mybook.get_year();
    std::cout << std::endl;

    mybook.hiddenUrl = "https://ebook.example.com/example-book";
    std::cout << " URL : " << mybook.hiddenUrl << std::endl;

    return 0;
}