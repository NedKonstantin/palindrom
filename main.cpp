// ������� 4 - ��������� ��� ����������� �����-�����������
// � �� ���������� � �������� ���������� ����������� �����

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;


int main()
{
    // ����� ��� ����������� ��������� � ������ �������������
    // ����� ���������� �����
    povtor:
    // ���������� ���������� N1 � N2 ���������� ����������� �����
    unsigned int N1, N2;
    cout << "Vvedite pervoe chislo N1: ";
    cin >> N1;
    cout << "Vvedite vtoroe chislo N2: ";
    cin >> N2;
    // ������� �������� ������������ ����� ������ � �����
    // ��������� ����������� �����
    if (N2 < N1)
    {
        cout << "N2 dolgno bit bolshe N1 !!!\n"
             << "poprobuite eshce raz!" << endl;
             goto povtor;
    }
    // ���������� � ������������� ����������, ����������� ����������
    // ����� � �������� ����������
    unsigned int S = N2 - N1 + 1;
    // ���������� ������� ��� �������� ����� ���������
    int natural[S];
    // ���������� � ������������� ������� �������� ���������
    unsigned int element = N1, i = 0;
    // ���� ��� ������ ���� ����� ��������� � ��������� ������
    do
    {
        natural[i] = element;
        element++;
        i++;
    }
        while (element <= N2);
    // ����� �� ������� �������� � ���������� ����� ���������
        cout << "V diapazone chisel N1 i N2 nahoditsya "
             << S << " elementov: \n" << endl;
    // �������� ������� ��� �������� ������� ����� ���������
    void bsrav ( int*, int);
    // ������� ��� �������� ������� ����� ���������
    bsrav (natural, S);
    // ��������, ����������� ������������ ������� ���������
    // ������ ���������
    cout << "Press ENTER to continue..." << endl;
    cin.ignore (10, '\n');
    cin.get ();
    return 0;
}
///////////////////////////////////////////////////////////////////////////////
    // ������������ ��� �������� ������� ����� ��������� ����������� �����
    // � �������� ���������� ����������� � ����������� ������� ���������� ��
    // �������
void bsrav (int natural[], int S)
{
    // �������� ��������� �� ������� �������, � ������� ���������
    // ����� ��������� ���������
    int* elnat = natural;
    // ���������� � ������������� �������� �����-�����������
    int kol = 0;
    // ���������� � ������������� ������� �������� �������, � �������
    // ��������� ����� ��������� ���������
    int z = 0;
    // ���� ��� �������� ������� ����� �� ��������� ���������
    do
    {
        // ������������� ���������� ��� �������� ����������
        // ���� � ����� �� ��������� ��������� � ���������� �����
        // ����� �� ������������ ��� �����
        int a = *elnat;
        int c = a;
        int b = 0;
        // ���� ��� �������� ���������� ���� � ����� �� ��������� ���������
        while (a != 0)
        {
            a = a/10;
            b++;
        }
        // ���������� � ������������� ������� ��� �������� ����,
        // ������������ ����� �� ��������� ���������
        int chislo[b];
        // ���� ��� ����������� � ������ � ��������� ������
        // ����, ������������ ����� �� ��������� ���������
        for (int i = 0; i < b; i++)
        {
            int y = c % 10;
            chislo[i] = y;
            c = c/10;
        }
///////////////////////////////////////////////////////////////////////////////
    // ���������� � ������������� ���������� m, ���������� ��������
    // ���������� �������� � �������, � ������� �������� �����,
    // ������������ ����� �� ��������� ���������
    int m = b - 1;
    // ���� ��� �������� �����, �������� ��� ����������� ��� ���
    for (int n = 0; n <= b/2; n++)
    {
        // ������� ����������� ������� � ���������� ���������
        // ������� ����
        if (chislo[n] != chislo[m])
        {
            // ����� �� �������� �����������
            goto mark;
        }
    --m;
    }
    // ����� �� ������� ���������� ���� ����� �������� �����������
    // � ����� �����
    cout << "Chislo palindrom: " << *elnat << endl;
    // ���������� �������� �����-�����������
    kol++;
    // �����, ������������, ��� ������������ ���������� ���������
    // � ������, ���� ����� �� �������� �����������
    mark:
    // ������� � ���������� ����� ���������
    z++, elnat++;
    }
    // ������� ���������� ������
    while (z < S);
    // ����� �� ������� ���������� � ���������� �����-�����������
    // � �������� ���������� ����������� �����
    cout << "Vsego chisel-palindromov: " << kol << endl;
}
///////////////////////////////////////////////////////////////////////////////










