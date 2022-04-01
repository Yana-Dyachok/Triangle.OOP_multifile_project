#include "triangle.h"
#include <stdio.h>// cout не ідентифікується, тому використовуємо printf і бібліотеку відповідну
#include <cmath>
using namespace std;
Triangle::Triangle() {//конструктор за замовчуванням
	x1 = 0;  x2 = 0; x3 = 0; y1 = 0; y2 = 0; y3 = 0;//обнулюємо координати
}
Triangle::Triangle(int x1, int x2, int x3, int y1, int y2, int y3) {//конструктор з параметрами
	this->x1 = x1;
	this->x2 = x2;
	this->x3 = x3;
	this->y1 = y1;
	this->y2 = y2;
	this->y3 = y3;
}
void Triangle::Out(){//метод виводить координати трикутника через пропуск;
	printf("x1=%d\t", x1);
	printf("x2=%d\t", x2);
	printf("x3=%d\t", x3);
	printf("y1=%d\t", y1);
	printf("y2=%d\t", y2);
	printf("y3=%d\n", y3);
}
double Triangle::getPerimetr() {//метод повертає периметр трикутника;
	AB = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	BC= sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	AC= sqrt((x3- x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	perimetr = AB + BC + AC;//розраховуємо периметр трикутника
	return perimetr;
}
double Triangle::area() {//метод повертає площу трикутника;
	p = perimetr/2;//напівпериметр трикутника
	S = sqrt(p*((p - AB)*(p - BC)*(p - AC)));//розраховуємо площу трикутника за формулою Герона
	return S;
}
double Triangle::inscribedRadius() {//метод повертає радіус вписаного кола;
	r = S / p; return r;//розраховуємо та повертаємо радіус вписаного кола
}
double Triangle::describedRaadius() {//метод повертає радіус описаного кола
	R = ((AB*BC*AC)/S)/4; return R;//розраховуємо та повертаємо радіус описаного кола
}