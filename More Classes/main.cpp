#include <iostream>
#include <string>
#include "Number.hpp"

class Point {
public: 
	double x;
	double y;

	Point(double oX, double oY) : x(oX), y(oY) { // Делегирование
		std::cout << "!\n";
	}
	Point(double oC) : Point(oC, oC) {} // Делегирование 

	void print() {
		std::cout << '(' << x << "; " << y << ")\n";
	}
	Point() : Point(0., 0.) {}
	
	Point(const Point& other) { // Конструктор копирования
		std::cout << "COPY\n";
		this->x = other.x;
		this->y = other.y;
	}

	double distanceTo(const Point other) {
		return sqrt(
			pow(other.x - x, 2) + 
			pow(other.y - y, 2)
		);
	}

	void printMemory() {
		std::cout << this << std::endl;
	}

	void setPos(double x, double y) { // Чтобы не использовать this, перед именем переменной можно добавить "землю", к примеру: _x, _y.
		this->x = x;
		this->y = y;
	}
};

class Number;



int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	// Класс Point
	
	/*Point p1(5.5, 7.7);
	Point p2(10.);
	Point p3; // По умолчанию
	p1.print();
	p2.print();
	p3.print();
	
	Point p4 = p2; // Конструктор копирования
	p4.print();

	std::cout << p1.distanceTo(p4) << std::endl;
	std::cout << Point(2.,2.).distanceTo((1., 1.)) << std::endl;

	std::cout << "--------------------------------------------\n";

	std::cout << &p1 << std::endl;
	p1.printMemory();

	p4.setPos(7., 15.);
	p4.print();*/

	Number n1(7), n2(15), n4(2);
	Number n3 = n1.sum(n2);
	std::cout << n3.getValue() << std::endl;
	
	

	std::cout << n1.sum(n2).mult(Number(3)).div(n4).diff(Number(5)).getValue() << std::endl;


	return 0;
}