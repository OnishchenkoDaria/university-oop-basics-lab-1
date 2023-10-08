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
    //виданлення обраної по назві книги (ввод користувача)
    void DeleteSelected(BookList** head, int position);

    //знайти по назві книгу (ввод користувача)
    Book1 Search(BookList* head, string name, bool *index);

    ////редагування властивостей (полів об'єкту)
    void FindAndEdit(BookList**head);

    //після сортування/видалення - виправлення порядку ід предмету
    void FixingId(BookList** head);

    //сортування вставкою: початок
    void InsertionSort(BookList** head);
    //сортування вставкою: кінець

    //merge sort: початок
    void FindHalf(BookList* head, BookList** Part1, BookList** Part2);

    void MergeSort(BookList** head);

    BookList* SortedResult(BookList* Part1, BookList* Part2);
    //merge sort: кінець

    //quick sort: початок
    void solveSort(BookList** Realhead, BookList** Realtail);
     
    BookList* devide(BookList* head, BookList* tail);
   
    void Swap(BookList* prev, BookList* temp);
    //quick sort: кінець

    //bubble sort: "інші алгоритми сортування": початок
    BookList* BubbleSort(BookList* head);
    //bubble sort: "інші алгоритми сортування": кінець

    //counting sort: швидкі non-comparison sort: початок
    void CountingSort(BookList** head);

    int FindLength(BookList* head);
    //counting sort: швидкі non-comparison sort: кінець 

    bool BoolFind(BookList* head, Book1 book);
};



