# Computational-Physics

A notebook for the course of Computational Physics. 

The note are mainly put in this README file. At the same time, Some contents are removed in that I can not find a good solution to displaying formulas in a MD file. The topics are organized as following list:

  * Monte Carlo Method
  * Bisection
  * Newton Iteration
  * Secant Method
  * Interpolation
  * Polyfit

---

##Monte Carlo Method
随机抽样法(random sampling)

####投针问题
可用于计算π值。

主要实现思路是运用下面产生随机数的方法，产生0-1的随机数，分别要赋予x,y，产生一个二维坐标，落在一个1x1范围的二维坐标系里。

然后通过计算中心点 (0.5,0.5) 到该随机产生的坐标的距离，是否大于圆的半径0.5，从而判断点是否落在圆内。

从而计算π的值。

####乘同取余法产生随机数
Please refer to file `MonteCarlo.c` for detail.

##Bisection

二分法是求方程根最简单的一种方法，其基本思想是将方程根所在区间 [xl,xu] 平分成两个小区间，再判断根在哪个小区间，然后将有根的小区间再一分为二，重复上面过程，直到有根区间小于解的精度要求为止。

在方程的根或零点附近，通常 f(x) 要改变符号。因此，如果 f(x) 在区间 [xl,xu] 是连续的实函数，并且 f(xl) 和　f(xu) 有相反的符号，即
f(xl)⋅f(xu)<0

Please refer to file `bisec.m` and `demo_bisec.m` for detail.

##Newton Iteration
牛顿(Newton)迭代法的思想是在方程近似解 xk 附近，将非线性方程线性化，用近似线性方程的根（切线方程与x轴的交点）作为非线性方程的近似根。

Please refer to file `newton.m` for detail.

##Scent Method
前面介绍的二分法是取中点 xr=(xl+xu)/2 作为试探根，而弦截法（secant method）用连接点 (xl,f(xl)) 和 (xu,f(xu)) 的弦与x轴的交点作为试探根。

Please refer to file `secant.m` and `demo_secant.m` for detail.

##Interpolation
插值法可以用来确定两个物理量 x, y 之间的函数关系 y=f(x).

假设一系列观测点和对应的测量值之间的列表函数关系为:
yi=y(xi),i=1,2,⋯,n

插值方法的目标就是根据这个对应关系寻求 f(xi) 的一个近似函数关系 f(xi),得到的 f(x) 称为插值函数，xi 称为插值点（或称节点）。

##Polyfit

Please refer to file `multifit.m` for detail.