#pragma once
#include <stdio.h>
#define N 6
struct List // �������� ������ ���� ������
{
    int value; // �������������� �����
    List* next; // ��������� �����
    List(int val = 0, List* p = NULL) // �����������
    {
        value = val;
        next = p;
    }
};

List* Insert_first(int n, List* head); // ��������� �������� � ������ ������
List* Add_last(int n, List* head); // ��������� �������� � ����� ������
List* Insert_Sort(int n, List* head); // ��������� �������� � ������������� ������
List* Insert_Number(int Num, int n, List* head); // ��������� ��������  � ������ �� ������
List* Creat_list(); // �������� ������ (�������� �������� � ������)
List* Delete_first(int& n, List* head); // �������� �������� �� ������ ������
List* Delete_last(int& n, List* head); // �������� �������� �� ����� ������
List* Delete_value(int n, List* head); // �������� �������� �� ������ �� ��������
List* Delete_Number(int Num, List* head); // �������� �������� �� ������ �� ������
List* Find_insert(List* head, int *cnt); //����������� ���������� ��������� ����� � ������
bool DelDuplicates(List* head);
void Print_list(List* head); // ������ ����������� ������


