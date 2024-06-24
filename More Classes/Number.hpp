#ifndef _NUMBER_HPP_
#define _NUMBER_HPP_


class Number {
private:
	int value;
public:
	Number();
	Number(int value);
	Number(const Number& other);
	
	int getValue();
	void setValue(int value);

	Number sum(const Number other);
	Number diff(const Number other);
	Number mult(const Number other);
	Number div(const Number other);

};









#endif // _NUMBER__HPP