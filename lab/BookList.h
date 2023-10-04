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

    void InsertionSort(BookList** head);

    void FindHalf(BookList* head, BookList** Part1, BookList** Part2);

    void MergeSort(BookList** head);

  //  void QuickSort(BookList** Realhead, BookList** tail);

    BookList* SortedResult(BookList* Part1, BookList* Part2);

    //BookList* findPivot(BookList* head, BookList* tail);

  //  void QuickSort(BookList* head, BookList* tail);
    void solveSort(BookList** Realhead, BookList** Realtail);

    BookList* devide(BookList* head, BookList* tail);
   
    void Swap(BookList* prev, BookList* temp);

   // void CountingSort(BookList* head);

    void BucketSort(BookList** head);

    BookList* BubbleSort(BookList* head);

    int findMin(BookList* head);

    int findMax(BookList* head);

    void CountingSort(BookList** head);

    int FindLength(BookList* head);
    // void QuickSortSummon(BookList** head, BookList *tail);
};



