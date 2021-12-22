#include <iostream>
#include <vector>

struct Book {
    std::string title;
    std::string ismb;
};

int main()
{
    std::vector<Book> books;
    Book b1, b2, b3;
    b1.title = "Senor de los anillos";
    b1.ismb = "6441kajnc";

    b2.title = "Pocahontas";
    b2.ismb = "01972391872381yhdsagdhjagdhjdaghs9812y31";

    books.push_back(b1);
    books.push_back(b2);

    b3.title = "100 anos de soledad";
    b3.ismb = "asdadsljadkslajdksladjksldjasjdhakjda123yuias";
    books.push_back(b3);

    return 0;
}
