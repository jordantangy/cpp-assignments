#include <iostream>
#include <complex>
#include "solver.hpp"


solver::RealVariable& solver::RealVariable::operator*(double num){
    return *this;
}
solver::RealVariable& solver::RealVariable::operator-(double num){
    return *this;
}
solver::RealVariable& solver::RealVariable::operator+(double num){
    return *this;
}
solver::RealVariable& solver::RealVariable::operator+(RealVariable& other){
    return *this;
}
solver::RealVariable& solver::RealVariable::operator-(RealVariable& other){
    return *this;
}
solver::RealVariable& solver::RealVariable::operator==(double num){
    return *this;
}
solver::RealVariable& solver::RealVariable::operator==(RealVariable& other){
    return *this;
}
solver::RealVariable& solver::RealVariable::operator^(double num){
    return *this;
}
solver::RealVariable& solver::RealVariable::operator/(double num){
    return *this;
}
solver::RealVariable& solver::operator*(double num, RealVariable& x){
    return x;
}
solver::RealVariable& solver::operator+(double num, RealVariable& x){
    return x;
}




solver::ComplexVariable& solver::ComplexVariable::operator*(double num){
    return *this;
}
solver::ComplexVariable& solver::ComplexVariable::operator-(double num){
    return *this;
}
solver::ComplexVariable& solver::ComplexVariable::operator+(double num){
    return *this;
}
solver::ComplexVariable& solver::ComplexVariable::operator+(ComplexVariable& other){
    return *this;
}
solver::ComplexVariable& solver::ComplexVariable::operator+(std::complex<double> other){
    return *this;
}
solver::ComplexVariable& solver::ComplexVariable::operator-(ComplexVariable& other){
    return *this;
}
solver::ComplexVariable& solver::ComplexVariable::operator==(double num){
    return *this;
}
solver::ComplexVariable& solver::ComplexVariable::operator==(ComplexVariable& other){
    return *this;
}
solver::ComplexVariable& solver::ComplexVariable::operator^(double num){
    return *this;
}
solver::ComplexVariable& solver::ComplexVariable::operator/(double num){
    return *this;
}
solver::ComplexVariable& solver::operator*(double num, ComplexVariable& x){
    return x;
}
solver::ComplexVariable& solver::operator+(double num, ComplexVariable& x){
    return x;
}

 double solver::solve(RealVariable x){
    return 0.0;
}
 std::complex<double> solver::solve(ComplexVariable x){
    std::complex<double> temp(0,0);
    return temp;
}