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

    //��������� ������ ������������ � �������� ����, �������� ������������ �� ������� �����������
    BookList(BookList* next = nullptr) {
            Next = next;
    }

    //������� ���������� ������� �������� ����� �� ������� ������� ��������� �����
    //������� ��������� ���� ����� � ������ �� ��������� �� ������
    void AddItem(Book1 book,BookList **head, BookList ** tail);

    //������� ������
    void Show(BookList* head);

    void ShowHead(BookList* head);

    void DeleteSelected(BookList** head, int position);

    Book1 Search(BookList* head, string name, bool *index);

    void FindAndEdit(BookList**head);

    void FixingId(BookList** head);
};



