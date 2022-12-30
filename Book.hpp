#ifndef BOOKHEADERDEF
#define BOOKHEADERDEF

#include <string>

class Book
{
    private:
        int my_year;

    public:
        Book();         // default constructor
        Book(const Book& book); // copy constructor
        Book(std::string book_title); // parametrized constructor
        std::string author, title, publisher, format;
        float price;
        void set_year(int year);
        int get_year() const;
};

#endif