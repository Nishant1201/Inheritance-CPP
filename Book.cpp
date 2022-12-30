#include "Book.hpp"

// This overrides the default constructor
Book::Book()
{   
    // std::cout << "Book instance created with default constructor \n";
    author = "not assigned yet";
    title = "not assigned yet";
    publisher = "not assigned yet";
    format = "not assigned yet";
}

// Overridden copy constructor (mimics system version)
Book::Book(const Book& book)
{   
    // std::cout << " Invoking copy constructor " << std::endl;
    author = book.author;
    title = book.title;
    publisher = book.publisher;
    format = book.format;
    price = book.price;
    my_year = book.get_year();
}

// Parametrized constructor
Book::Book(std::string book_title)
{
    title = book_title;
}

void Book::set_year(int year)
{
    my_year = year;
}

int Book::get_year() const
{
    return my_year;
}