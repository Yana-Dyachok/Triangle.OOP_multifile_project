#include "triangle.h"
#include <stdio.h>// cout �� ��������������, ���� ������������� printf � �������� ��������
#include <cmath>
using namespace std;
Triangle::Triangle() {//����������� �� �������������
	x1 = 0;  x2 = 0; x3 = 0; y1 = 0; y2 = 0; y3 = 0;//��������� ����������
}
Triangle::Triangle(int x1, int x2, int x3, int y1, int y2, int y3) {//����������� � �����������
	this->x1 = x1;
	this->x2 = x2;
	this->x3 = x3;
	this->y1 = y1;
	this->y2 = y2;
	this->y3 = y3;
}
void Triangle::Out(){//����� �������� ���������� ���������� ����� �������;
	printf("x1=%d\t", x1);
	printf("x2=%d\t", x2);
	printf("x3=%d\t", x3);
	printf("y1=%d\t", y1);
	printf("y2=%d\t", y2);
	printf("y3=%d\n", y3);
}
double Triangle::getPerimetr() {//����� ������� �������� ����������;
	AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	BC= sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	AC= sqrt((x3- x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	perimetr = AB + BC + AC;//����������� �������� ����������
	return perimetr;
}
double Triangle::area() {//����� ������� ����� ����������;
	p = perimetr/2;//������������ ����������
	S = sqrt(p*((p - AB)*(p - BC)*(p - AC)));//����������� ����� ���������� �� �������� ������
	return S;
}
double Triangle::inscribedRadius() {//����� ������� ����� ��������� ����;
	r = S / p; return r;//����������� �� ��������� ����� ��������� ����
}
double Triangle::describedRaadius() {//����� ������� ����� ��������� ����
	R = ((AB*BC*AC)/S)/4; return R;//����������� �� ��������� ����� ��������� ����
}