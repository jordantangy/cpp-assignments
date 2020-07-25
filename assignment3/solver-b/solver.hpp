#include <iostream>
#include <complex>


namespace solver{
    
    class RealVariable{
        public:
        double _a;
        double _b;
        double _c;
        int _pow;
        
        public:
        RealVariable();
        RealVariable& operator*(double num);
        RealVariable& operator*(RealVariable& other);
        RealVariable& operator-(double num);
        RealVariable& operator-(RealVariable& other);
        RealVariable& operator+(double num);
        RealVariable& operator+(RealVariable& other);
        RealVariable& operator==(double num);
        RealVariable& operator==(RealVariable& other);
        RealVariable& operator^(double num);
        RealVariable& operator/(double num);
        RealVariable& operator/(RealVariable& other);
        
        
    };
    class ComplexVariable{
        public:
        double _a ;
        double _b ;
        double  _c ;
        double  _pow;
        double _i;
        
        public:
        ComplexVariable();
         ComplexVariable& operator*(double num);
        ComplexVariable& operator*(ComplexVariable& other);
        ComplexVariable& operator-(double num);
        ComplexVariable& operator-(ComplexVariable& other);
        ComplexVariable& operator+(double num);
        ComplexVariable& operator+(std::complex<double> complex);
        ComplexVariable& operator+(ComplexVariable& other);
        ComplexVariable& operator==(double num);
        ComplexVariable& operator==(ComplexVariable& other);
        ComplexVariable& operator^(double num);
        ComplexVariable& operator/(double num);
        ComplexVariable& operator/(ComplexVariable& other);

    };

     double solve(RealVariable& x);
     std::complex<double> solve(ComplexVariable x);


    RealVariable& operator*(double num, RealVariable& x);
    RealVariable& operator+(double num, RealVariable& x);

    ComplexVariable& operator*(double num, ComplexVariable& x);
    ComplexVariable& operator+(double num, ComplexVariable& x);
}