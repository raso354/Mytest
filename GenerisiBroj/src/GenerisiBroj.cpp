//============================================================================
// Name        : GenerisiBroj.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <random>
#include <functional>
#include <chrono>

using namespace std;

int main()
{
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	default_random_engine generator(seed);
	uniform_int_distribution<int> distribution(1,1000);
	//int a = distribution(generator);
	auto dice = bind ( distribution, generator );
	//int wisdom = dice()+dice()+dice();
	//cout << a<<endl;
	cout << dice()<<endl;
	return 0;
}
