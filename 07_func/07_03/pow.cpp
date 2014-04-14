/*************************************************************************
	> File Name: pow.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Tue 08 Apr 2014 08:45:55 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<stdlib.h>
int pow(int a , int b);
int main()
{
	std::cout<<"pow(2 , 3) = "<<pow(2 , 3) <<std::endl;
	return 0 ;
}
int pow(int a , int b)
{
	int i = 0 ;
	int mult = 1 ;
	std::cout<<a <<"  " << b <<std::endl ;
	while(i < b)
	{
		mult *= a ;
		std::cout<<"a = "<< a <<std::endl;
		++i ;
	}
	return mult;
}
