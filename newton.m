%Exp 2.2.4
%????????? f(x)=x^3+2x^2+3x-1=0 ? [0,1] ???

function newton
%clc;clear;
format long
i=0;
e=0.000001;
x=0.5;
result=fun(x);
while abs(result)>=e
    x1=x-(fun(x)/dfun(x));
    result=fun(x1);
    i=i+1;
    x=x1;
    fprintf('x=%i\n',x1);
    %The value of x will be printed in each iteration.
end

function f=fun(x)
format long
f=x*x*x+2*x*x+3*x-1;

function df=dfun(x)
format long
df=3*x*x+4*x+3;