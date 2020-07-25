#include <iostream>
#include <complex>


namespace solver{
    
    class RealVariable{
        private:
        double a;
        double b;
        double c;
        int pow;
        
        public:
        RealVariable(){
            a = b = c = 0;
        }
        RealVariable& operator*(double num);
        RealVariable& operator-(double num);
        RealVariable& operator+(double num);
        RealVariable& operator+(RealVariable& other);
        RealVariable& operator-(RealVariable& other);
        RealVariable& operator==(double num);
        RealVariable& operator==(RealVariable& other);
        RealVariable& operator^(double num);
        RealVariable& operator/(double num);
    };
    class ComplexVariable{
        private:
        std::complex<double> a;
        std::complex<double> b;
        std::complex<double> c;
        
        public:
        ComplexVariable(){
            a = b = c = 0;
        }
        ComplexVariable& operator*(double num);
        ComplexVariable& operator-(double num);
        ComplexVariable& operator+(double num);
        ComplexVariable& operator+(ComplexVariable& other);
        ComplexVariable& operator+(std::complex<double> other);
        ComplexVariable& operator-(ComplexVariable& other);
        ComplexVariable& operator==(double num);
        ComplexVariable& operator==(ComplexVariable& other);
        ComplexVariable& operator^(double num);
        ComplexVariable& operator/(double num);

    };

     double solve(RealVariable x);
     std::complex<double> solve(ComplexVariable x);


    RealVariable& operator*(double num, RealVariable& x);
    RealVariable& operator+(double num, RealVariable& x);

    ComplexVariable& operator*(double num, ComplexVariable& x);
    ComplexVariable& operator+(double num, ComplexVariable& x);
}