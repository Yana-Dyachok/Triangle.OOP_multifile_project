#pragma once
class Triangle//����  Triangle
{
private:
	int x1, x2, x3, y1, y2, y3;//���������� ����������  ������ ����������
	double perimetr, p, S, r, R;//���������� ��������, ������������, ����� ����������, ����� ��������� �� ��������� ����
	double AB, BC, AC;//���������� ������� ����������
public:
	Triangle(void);//����������� �� �������������
	Triangle(int, int, int, int, int, int);//����������� � �����������
	void Out();// ����� �������� ���������� ���������� ����� �������;
	double getPerimetr();//����� ������� �������� ����������;
	double area();//����� ������� ����� ����������;
	double inscribedRadius();//����� ������� ����� ��������� ����;
	double describedRaadius();//����� ������� ����� ��������� ����
};