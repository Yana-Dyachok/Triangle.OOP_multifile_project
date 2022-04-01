#pragma once
class Triangle//клас  Triangle
{
private:
	int x1, x2, x3, y1, y2, y3;//ініціалізуємо координати  вершин трикутника
	double perimetr, p, S, r, R;//ініціалізуємо периметр, напівмериметр, площу трикутника, площу вписаного та описаного кола
	double AB, BC, AC;//ініціалізуємо сторони трикутника
public:
	Triangle(void);//конструктор за замовчуванням
	Triangle(int, int, int, int, int, int);//конструктор з параметрами
	void Out();// метод виводить координати трикутника через пропуск;
	double getPerimetr();//метод повертає периметр трикутника;
	double area();//метод повертає площу трикутника;
	double inscribedRadius();//метод повертає радіус вписаного кола;
	double describedRaadius();//метод повертає радіус описаного кола
};