#pragma once
#include <stdio.h>
#define N 6
struct List // Создание нового типа данных
{
    int value; // информационная часть
    List* next; // служебная часть
    List(int val = 0, List* p = NULL) // конструктор
    {
        value = val;
        next = p;
    }
};

List* Insert_first(int n, List* head); // Включение элемента в начало списка
List* Add_last(int n, List* head); // Включение элемента в конец списка
List* Insert_Sort(int n, List* head); // Включение элемента в упорядоченный список
List* Insert_Number(int Num, int n, List* head); // Включение элемента  в список по номеру
List* Creat_list(); // Создание списка (добавляя элементы в начало)
List* Delete_first(int& n, List* head); // Удаление элемента из начала списка
List* Delete_last(int& n, List* head); // Удаление элемента из конца списка
List* Delete_value(int n, List* head); // Удаление элемента из списка по значению
List* Delete_Number(int Num, List* head); // Удаление элемента из списка по номеру
List* Find_insert(List* head, int *cnt); //Определение количества вхождений числа в список
bool DelDuplicates(List* head);
void Print_list(List* head); // Печать содержимого списка


