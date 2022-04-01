/*Написати клас Triangle (трикутник), що містить цілочисельні поля координати вершин трикутника x1, y1, x2, y2, x3, y3.
Реалізувати конструктори:по замовчуванню, що обнулює координати вершин трикутника; з параметрами, що отримує координати вершин трикутника та ініціаліхує їх.
Реалізувати методи:
void Out() - виводить координати трикутника через пропуск; 
double area() - повертає площу трикутника;
double perimeter() - повертає периметр трикутника;
double inscribedRadius() - повертає радіус вписаного кола;
double describedRaadius() - повертає радіус описаного кола;*/
#include <iostream>
#include "triangle.h"
using namespace std;
int main()
{
	Triangle Triangle1(0, 3, 7, 5, 2, 5);//створюємо об'єкт Triangle1
	Triangle1.Out();//виводимо значення координат
	cout <<"Perimetr= "<< Triangle1.getPerimetr()<<endl;//виводимо периметр трикутника
	cout << "Area -S = " << Triangle1.area() << endl;//виводимо площу трикутника
	cout << "Inscribed radius - r = " << Triangle1.inscribedRadius() << endl;//виводимо радіус вписаного кола
	cout << "Described radius - R = " << Triangle1.describedRaadius() << endl;//виводимо радіус описаного кола
}