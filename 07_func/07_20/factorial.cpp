/*************************************************************************
	> File Name: factorial.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Sat 12 Apr 2014 09:10:10 PM CST
 ************************************************************************/

#include<iostream>
int factorial(int val)
{
	int result = 1 ;
	for(int i = 1 ; i <= val ; i++)
	{
		result *= i ;
	}
	return result ;
}

int main()
{
	int val = 5 ;
	std::cout<<"factorial : "<<factorial(val) << std::endl;
	return 0  ;
}
