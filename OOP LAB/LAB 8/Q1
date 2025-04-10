#include<iostream>
using namespace std;

class Complex{
	private:
		float real;
		float imaginary;

	public:
		Complex(){
			real = 0;
			imaginary = 0;
		}

		Complex(float r, float i){
			real = r;
			imaginary = i;
		}

		Complex operator+(Complex c){
			Complex result;
			result.real = real + c.real;
			result.imaginary = imaginary + c.imaginary;
			return result;
		}

		Complex operator-(Complex c){
			Complex result;
			result.real = real - c.real;
			result.imaginary = imaginary - c.imaginary;
			return result;
		}

		Complex operator*(Complex c){
			Complex result;
			result.real = (real*c.real) - (imaginary*c.imaginary);
			result.imaginary = (real*c.imaginary) + (imaginary*c.real);
			return result;
		}

		Complex operator/(Complex c){
			Complex result;
			float denominator = (c.real*c.real+c.imaginary*c.imaginary);
			result.real = ((real*c.real) + (imaginary*c.imaginary))/denominator;
			result.imaginary = ((imaginary*c.real) - (real*c.imaginary))/denominator;
			return result;
		}

		friend float magnitude(Complex c);

		friend ostream& operator<<(ostream &out, Complex c);
};

float mySqrt(float number){
	float guess = number / 2;
	float prevGuess;

	do{
		prevGuess = guess;
		guess = (guess + number / guess) / 2;
	} 
	    while ((prevGuess - guess > 0.0001) || (guess - prevGuess > 0.0001));

	return guess;
}

float magnitude(Complex c) {
	float square = c.real * c.real + c.imaginary * c.imaginary;
	return mySqrt(square);
}

ostream& operator<<(ostream &out, Complex c){
	out << "(" << c.real;
	if (c.imaginary >= 0)
		out<< " + "<<c.imaginary << "i)";
	else
		out<<" - "<< -c.imaginary << "i)";
	return out;
}

int main(){
	Complex c1(3, 4);
	Complex c2(1, 2);

	Complex sum = c1+c2;
	Complex diff = c1-c2;
	Complex prod = c1*c2;
	Complex div = c1/c2;

	cout<<"First Complex Number: "<<c1<<endl;
	cout<<"Second Complex Number: "<<c2<<endl;

	cout<<"Addition: " <<sum<<endl;
	cout<<"Subtraction: "<<diff<<endl;
	cout<<"Multiplication: "<<prod<<endl;
	cout<<"Division: "<<div<<endl;
	cout<<"Magnitude of First: "<<magnitude(c1)<<endl;
	cout<<"Magnitude of Second: "<<magnitude(c2)<<endl;

}
