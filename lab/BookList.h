#pragma once
#include "Node.h"
#include "Book1.h"
class BookList //:
    //public Node
{
private: 
    Book1 Book;
    int Id{};
    BookList* Next;
public:

    //створення нового конструктора у дочірому класі, перегруз конструктора як приклад поліморфізму
    BookList(BookList* next = nullptr) {
            Next = next;
    }

    //перепис віртувальної функції базового класу під відповідні потреби дочірного класу
    //функція додавання нової книги у список із перевірокю на голову
    void AddItem(Book1 book,BookList **head, BookList ** tail);

    //функція виводу
    void Show(BookList* head);

    void ShowHead(BookList* head);

    void DeleteSelected(BookList** head, int position);

    Book1 Search(BookList* head, string name, bool *index);

    void FindAndEdit(BookList**head);

    void FixingId(BookList** head);
};



