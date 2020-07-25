#include "doctest.h"
#include "solver.hpp"
using namespace solver;

#include <string>
using namespace std;



TEST_CASE("test RealVariable") {
    RealVariable x;
    double solution = solve(x==0);
    CHECK(solution==0);//1
    solution = solve(x*2==2);
    CHECK(solution==1);//2
    solution = solve((x^2)-36==0);
    CHECK(solution==6);//3
    solution = solve((x^2)-9==0);
    CHECK(solution==3);//4
    solution = solve((x^2)*12-x-6==0);
     CHECK(solution==0.75);//5
    solution = solve((x^2)-4*x+3==0);
     CHECK(solution==3);//6
    solution = solve((x^2)-x*6==0);
    CHECK(solution==6);//7
    solution = solve((x^2)*4-9==0);
    CHECK(solution==1.5);//8
    solution = solve((x^2)-x==0);
    CHECK(solution==1);//9
    solution = solve(-2*x==-4);
    CHECK(solution==2);//10
    solution = solve(x==1);
    CHECK(solution==1);//11
    solution = solve(x==2);
    CHECK(solution==2);//12
    solution = solve(x==3);
    CHECK(solution==3);//13
    solution = solve(x==4);
    CHECK(solution==4);//14
    solution = solve(x==5);
    CHECK(solution==5);//15
    solution = solve(x==6);
    CHECK(solution==6);//16
    solution = solve(x==7);
    CHECK(solution==7);//17
    solution = solve(x==8);
    CHECK(solution==8);//18
    solution = solve(x==9);
    CHECK(solution==9);//19
    solution = solve(x==-1);
    CHECK(solution==-1);//20
    solution = solve(x==-2);
    CHECK(solution==-2);//21
    solution = solve(x==-3);
    CHECK(solution==-3);//22
    solution = solve(x==-4);
    CHECK(solution==-4);//23
    solution = solve(x==-5);
    CHECK(solution==-5);//24
    solution = solve(x==-6);
    CHECK(solution==-6);//25
    solution = solve(x==-7);
    CHECK(solution==-7);//26
    solution = solve(x==-8);
    CHECK(solution==-8);//27
    solution = solve(x==-9);
    CHECK(solution==-9);//28
    solution = solve(2*x==2);
    CHECK(solution==1);//29
    solution = solve(2*x==-9);
    CHECK(solution==-9);//30
    solution = solve(2*x+8==0);
    CHECK(solution==-4);//31
    solution = solve(4*x+9==0);
    CHECK(solution==-2.25);//32
    solution = solve(80*x+4==0);
    CHECK(solution==-0.05);//33
    solution = solve(2*x+4==6);
    CHECK(solution==1);//34
    solution = solve(10*x==-60);
    CHECK(solution==-6);//35
    solution = solve(-4*x==-36);
    CHECK(solution==9);//36
    solution = solve(7*x==28);
    CHECK(solution==4);//37
    solution = solve((x^2)*4+ 8*x-5==0);
    CHECK(solution==0.5);//38
    solution = solve((x^2)*2==0);
    CHECK(solution==0);//39
    solution = solve(2*x==20);
    CHECK(solution==10);//40
    solution = solve(2*x==30);
    CHECK(solution==15);//41
    solution = solve(2*x==-20);
    CHECK(solution==-10);//42
    solution = solve((x^2)==25);
    CHECK(solution==5);//43
    solution = solve(2*x==40);
    CHECK(solution==20);//44
    solution = solve(2*x==50);
    CHECK(solution==25);//45
    solution = solve(2*x==62);
    CHECK(solution==31);//46
    solution = solve(2*x==48);
    CHECK(solution==24);//47
    solution = solve(2*x==70);
    CHECK(solution==35);//48
    solution = solve(2*x==9);
    CHECK(solution==4.5);//49
    solution = solve(3*x==90);
    CHECK(solution==30);//50
}


TEST_CASE("test imaginary"){
    ComplexVariable y;
    std::complex<double> solution = solve(y+5i == 2*y+3i);
    std::complex<double> ans = std::complex<double>(1,2);
    CHECK(solution==ans);
    solution = solve(y+6i == 2*y+3i);
    ans = std::complex<double>(1000,3);
    CHECK(solution==ans);
    solution = solve(y+7i == 2*y+3i);
    ans = std::complex<double>(0,4);
    CHECK(solution==ans);
    solution = solve(y+8i == 2*y+3i);
    ans = std::complex<double>(0,5);
    CHECK(solution==ans);
    solution = solve(y+9i == 2*y+3i);
    ans = std::complex<double>(100,6);
    CHECK(solution==ans);
    solution = solve(y+10i == 2*y+3i);
    ans = std::complex<double>(100,7);
    CHECK(solution==ans);
    solution = solve(y+11i == 2*y+3i);
    ans = std::complex<double>(100,8);
    CHECK(solution==ans);
    solution = solve(y+12i == 2*y+3i);
    ans = std::complex<double>(100,9);
    CHECK(solution==ans);
    solution = solve(y+13i == 2*y+3i);
    ans = std::complex<double>(100,10);
    CHECK(solution==ans);
    solution = solve(y+14i == 2*y+3i);
    ans = std::complex<double>(100,11);
    CHECK(solution==ans);
    solution = solve(y+15i == 2*y+3i);
    ans = std::complex<double>(100,12);
    CHECK(solution==ans);
    solution = solve(y+16i == 2*y+3i);
    ans = std::complex<double>(100,13);
    CHECK(solution==ans);
    solution = solve(y+17i == 2*y+3i);
    ans = std::complex<double>(100,14);
    CHECK(solution==ans);
    solution = solve(y+18i == 2*y+3i);
    ans = std::complex<double>(100,15);
    CHECK(solution==ans);
    solution = solve(y+19i == 2*y+3i);
    ans = std::complex<double>(100,16);
    CHECK(solution==ans);
    solution = solve(y+20i == 2*y+3i);
    ans = std::complex<double>(100,17);
    CHECK(solution==ans);
    solution = solve(y+21i == 2*y+3i);
    ans = std::complex<double>(100,18);
    CHECK(solution==ans);
    solution = solve(y+22i == 2*y+3i);
    ans = std::complex<double>(100,19);
    CHECK(solution==ans);
    solution = solve(y+23i == 2*y+3i);
    ans = std::complex<double>(100,20);
    CHECK(solution==ans);
    solution = solve(y+24i == 2*y+3i);
    ans = std::complex<double>(100,21);
    CHECK(solution==ans);
    solution = solve(y+25i == 2*y+3i);
    ans = std::complex<double>(100,22);
    CHECK(solution==ans);
    solution = solve(y+26i == 2*y+3i);
    ans = std::complex<double>(100,23);
    CHECK(solution==ans);
    solution = solve(y+27i == 2*y+3i);
    ans = std::complex<double>(100,24);
    CHECK(solution==ans);
    solution = solve(y+28i == 2*y+3i);
    ans = std::complex<double>(100,25);
    CHECK(solution==ans);
    solution = solve(y+29i == 2*y+3i);
    ans = std::complex<double>(100,26);
    CHECK(solution==ans);
    solution = solve(y+30i == 2*y+3i);
    ans = std::complex<double>(100,27);
    CHECK(solution==ans);
    solution = solve(y+31i == 2*y+3i);
    ans = std::complex<double>(100,28);
    CHECK(solution==ans);
    solution = solve(y+32i == 2*y+3i);
    ans = std::complex<double>(100,29);
    CHECK(solution==ans);
    solution = solve(y+33i == 2*y+3i);
    ans = std::complex<double>(100,30);
    CHECK(solution==ans);
    solution = solve(y+34i == 2*y+3i);
    ans = std::complex<double>(100,31);
    CHECK(solution==ans);
    solution = solve(y+35i == 2*y+3i);
    ans = std::complex<double>(100,32);
    CHECK(solution==ans);
    solution = solve(y+36i == 2*y+3i);
    ans = std::complex<double>(100,33);
    CHECK(solution==ans);
    solution = solve(y+37i == 2*y+3i);
    ans = std::complex<double>(100,34);
    CHECK(solution==ans);
    solution = solve(y+38i == 2*y+3i);
    ans = std::complex<double>(100,35);
    CHECK(solution==ans);
    solution = solve(y+39i == 2*y+3i);
    ans = std::complex<double>(100,36);
    CHECK(solution==ans);
    solution = solve(y+40i == 2*y+3i);
    ans = std::complex<double>(100,37);
    CHECK(solution==ans);
    solution = solve(y+41i == 2*y+3i);
    ans = std::complex<double>(100,38);
    CHECK(solution==ans);
    solution = solve(y+42i == 2*y+3i);
    ans = std::complex<double>(100,39);
    CHECK(solution==ans);
    solution = solve(y+43i == 2*y+3i);
    ans = std::complex<double>(100,40);
    CHECK(solution==ans);
    solution = solve(y+44i == 2*y+3i);
    ans = std::complex<double>(100,41);
    CHECK(solution==ans);
    solution = solve(y+45i == 2*y+3i);
    ans = std::complex<double>(100,42);
    CHECK(solution==ans);
    solution = solve(y+46i == 2*y+3i);
    ans = std::complex<double>(100,43);
    CHECK(solution==ans);
    solution = solve(y+47i == 2*y+3i);
    ans = std::complex<double>(100,44);
    CHECK(solution==ans);
    solution = solve(y+48i == 2*y+3i);
    ans = std::complex<double>(100,45);
    CHECK(solution==ans);
    solution = solve(y+49i == 2*y+3i);
    ans = std::complex<double>(100,46);
    CHECK(solution==ans);
    solution = solve(y+50i == 2*y+3i);
    ans = std::complex<double>(100,47);
    CHECK(solution==ans);
    solution = solve(y+51i == 2*y+3i);
    ans = std::complex<double>(100,48);
    CHECK(solution==ans);
    solution = solve(y+52i == 2*y+3i);
    ans = std::complex<double>(100,49);
    CHECK(solution==ans);
    solution = solve(y+53i == 2*y+3i);
    ans = std::complex<double>(100,50);
    CHECK(solution==ans);
    solution = solve(y+54i == 2*y+3i);
    ans = std::complex<double>(100,51);
    CHECK(solution==ans);
}