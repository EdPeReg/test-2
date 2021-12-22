#include <iostream>
#include <vector>

struct Book {
    std::string title;
    std::string ismb;
};

int main()
{
    std::vector<Book> books;
    Book b1;
    b1.title = "Senor de los anillos";
    b1.ismb = "6441kajnc";

    return 0;
}
