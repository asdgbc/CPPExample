#include<iostream>

int main(){
	//×××
	int age = 39;
	const int * pt = &age;

	*pt += 1;	//INVALID because pt pints to a const int
	cin >> *pt;	//INVALID for the same reason

	*pt = 20;	//INVALID because pt points to const int 
	age = 20;	//VALID because age is not declared to be const
	//×××

	//×××
	const float g_earth =9.80;
	const float * pe = &g_earth;	//VALID

	const float g_moon = 1.63;
	//C++禁止将const的地址赋给非const指针，当然我们可以使用强制类型转换来突破这一限制
	float * pm = &g_moon;	//INVALID 
	//×××

	//×××
	const int ** pp2;
	int * p1;
	const int n = 13;
	pp2 = &p1;	//not allowed, but suppose it were
	*pp2 = &n;	//valid, both const, but sets p1 to point at n
	*p1 = 10;	//valid, but changes const n
	//×××

	//***
	int sloth = 3;
	const int * ps = &sloth;	//a pointer to const int
	int * cosnt finger = &sloth;	//a const pointer to int
	//***

}
