#include <iostream>
using namespace std;
#define offset	"\t\t\t\t\t\t"

#define ELOCHKA 

void main()

//������� ����� ����� �� ���������� legacy-����

{
	setlocale(LC_ALL, "Russian");

#if defined ELOCHKA
	//#����_���������� ������
	//�� ������������� ��� ����� ����� �����������:
	cout << offset << "� ����� �������� ������. ����";
	cout << endl;
	cout << endl;
	cout << offset << "� ���� �������� ������,\n";
	cout << offset << "� ���� ��� �����,\n";
	cout << offset << "����� � ����� ��������,\n";
	cout << offset << "������� ����.\n";
	cout << endl;
	cout << offset << "������ �� ���� �������:\n";
	cout << offset << "\"���, ������, ���-���!\"\n";
	cout << offset << "����� ������� ��������:\n";
	cout << offset << "\"������, �� ��������!\"\n";
	cout << endl;
	cout << offset << "�������� ����� ���������\n";
	cout << offset << "��� ������� ������.\n";
	cout << offset << "����� ����, �������� ����\n";
	cout << offset << "������ ��������.\n";
	cout << endl;
	cout << offset << "��! ���� �� ���� �������\n";
	cout << offset << "��� ������� �������,\n";
	cout << offset << "������� ����������\n";
	cout << offset << "���������, �����.\n";
	cout << endl;
	cout << offset << "����� ������� ��������,\n";
	cout << offset << "� � ������� ��������,\n";
	cout << offset << "������ �� ���� ������\n";
	cout << offset << "��� ����� �������.\n";
	cout << endl;
	cout << offset << "������ ���, ��������,\n";
	cout << offset << "H� �������� � ��� ������\n";
	cout << offset << "� �����, ����� �������\n";
	cout << offset << "�������� ��������!\n";
	cout << endl;


#endif 
}
// ��������� #define (����������) � ������� ����������������  (������) � ���������� �����������, ���_�������� ���_��������.
//	� ����� ������ offset ��� ��� �������, � ��������� ��� �������� �������. 
//����� ��� ���������� ����� ��� ������� - �� ������� ���� �������� �������.
//#if defined � #endif ��� ��������� �������� ����������.