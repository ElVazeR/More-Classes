#include "Number.hpp"

Number::Number() : value(0) {}
Number::Number(int value): value(value){}
Number::Number(const Number& other) {
	this->value = other.value;
}

int Number::getValue() { return value; }
void Number::setValue(int value) { this->value = value; }

Number Number::sum(const Number other) {
	return Number(value + other.value);
}

Number Number::diff(const Number other) {
	return Number(value - other.value);
}

Number Number::mult(const Number other) {
	return Number(value * other.value);
}

Number Number::div(const Number other) {
	return other.value == 0 ? 0 : Number(value / other.value);
}