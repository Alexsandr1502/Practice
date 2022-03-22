#define _CRT_SECURE_NO_WARNINGS 
#include "Header.h"
#include <conio.h>
#include <stdio.h>
#include <math.h> 
#include <iostream>


List* Insert_first(int n, List* head)
{
    List* q = new List(n, head);
    return q;
}
List* Add_last(int n, List* head)
{
    List* q = new List(n), * p = head;
    if (head == NULL) return q;
    while (p->next != NULL)
        p = p->next;
    p->next = q;
    return head;
}
List* Insert_Sort(int n, List* head)
{
    List* q = new List(n), * p = head;

    if (head == NULL) return q;

    if (n < head->value) // ��������� �������� � ������ ������
    {
        q->next = head;
        return q;
    }

    while (p->next != NULL)
        if (n < p->next->value) // ��������� �������� � �������� ������
        {
            q->next = p->next;
            p->next = q;
            break;
        }
        else
            p = p->next;
    p->next = q; // ��������� �������� � ����� ������
    return head;
}
List* Insert_Number(int Num, int n, List* head)
{
    List* p = head, * q = new List(n);
    int i = 1;
    if (head == NULL) return q;
    if (Num == 1) // ��������� �������� � ������ ������
    {
        q->next = head;
        return q;
    }
    while (p->next != NULL)
        if (Num == i + 1) // ��������� �������� � �������� ������
        {
            q->next = p->next;
            p->next = q;
            return head;
        }
        else
        {
            i++;
            p = p->next;
        }
    if (Num == i + 1) // ��������� �������� � ����� ������
        p->next = q;
    else
        puts("������ ������ � ������ ���!");
    return head;
}
List* Creat_list()
{
    char str[N];
    List* head = NULL;
    puts("�������� ������. ������� �����:");
    for (;;)
    {
        gets_s(str);
        if (!str[0]) break;
        head = Insert_first(atoi(str), head); // ����� ������� "��������� �������� � ������ ������"
    }
    return head;
}
List* Delete_first(int& n, List* head)
{
    List* p = head;
    if (p == NULL)puts("������ ����!");
    else
    {
        n = p->value;
        head = head->next;
        delete p;
    }
    return head;
}
List* Delete_last(int& n, List* head)
{
    List* p = head;
    if (p == NULL) { puts("������ ����!"); return NULL; }
    if (head->next == NULL) // ���� ������� � ������
    {
        n = head->value;
        delete head;
        return NULL;
    }
    while (p->next->next != NULL)
        p = p->next;
    n = p->next->value;
    delete p->next;
    p->next = NULL;
    return head;
}
List* Delete_value(int n, List* head)
{
    List* p = head, * t;
    if (head == NULL) { puts("������ ����!"); return NULL; }
    if (head->value == n) // �������� �������� �� ������ ������
    {
        t = head;
        head = head->next;
        delete t;
        return head;
    }
    while (p->next != NULL) // �������� �������� �� �������� ������
        if (p->next->value == n)
        {
            t = p->next;
            p->next = p->next->next;
            delete t;
            return head;
        }
        else p = p->next;
    puts("������ �������� � ������ ���!");
    return head;
}
List* Delete_Number(int Num, List* head)
{
    List* p = head, * t;
    int i = 1;
    if (head == NULL) { puts("������ ����!"); return NULL; }
    if (Num == 1) // �������� �������� �� ������ ������
    {
        t = head;
        head = head->next;
        delete t;
        return head;
    }
    while (p->next != NULL)
        if (Num == i + 1) // �������� �������� �� �������� ������
        {
            t = p->next;
            p->next = p->next->next;
            delete t;
            return head;
        }
        else
        {
            i++;
            p = p->next;
        }
    puts("������ ������ � ������ ���!"); // ������ ������ � ������ ���
    return head;
}
List* Delete_Copies(int Num, List* head)
{
        
}
void Print_list(List* head)
{
    List* p = head;
    puts("\n PRINT LIST");
    if (p == NULL) puts("������ ����!");
    else
        while (p != NULL)
        {
            printf("%d ", p->value);
            p = p->next;
        }
}