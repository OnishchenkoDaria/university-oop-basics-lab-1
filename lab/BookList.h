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
    //���������� ������ �� ���� ����� (���� �����������)
    void DeleteSelected(BookList** head, int position);

    //������ �� ���� ����� (���� �����������)
    Book1 Search(BookList* head, string name, bool *index);

    ////����������� ������������ (���� ��'����)
    void FindAndEdit(BookList**head);

    //���� ����������/��������� - ����������� ������� �� ��������
    void FixingId(BookList** head);

    //���������� ��������: �������
    void InsertionSort(BookList** head);
    //���������� ��������: �����

    //merge sort: �������
    void FindHalf(BookList* head, BookList** Part1, BookList** Part2);

    void MergeSort(BookList** head);

    BookList* SortedResult(BookList* Part1, BookList* Part2);
    //merge sort: �����

    //quick sort: �������
    void solveSort(BookList** Realhead, BookList** Realtail);
     
    BookList* devide(BookList* head, BookList* tail);
   
    void Swap(BookList* prev, BookList* temp);
    //quick sort: �����

    //bubble sort: "���� ��������� ����������": �������
    BookList* BubbleSort(BookList* head);
    //bubble sort: "���� ��������� ����������": �����

    //counting sort: ����� non-comparison sort: �������
    void CountingSort(BookList** head);

    int FindLength(BookList* head);
    //counting sort: ����� non-comparison sort: ����� 

    bool BoolFind(BookList* head, Book1 book);
};



