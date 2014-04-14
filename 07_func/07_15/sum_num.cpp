/*************************************************************************
	> File Name: sum_num.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Tue 08 Apr 2014 09:34:11 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<stdlib.h>
int sum_num(int num_one , int num_two)
{
	return num_one + num_two ;
}
int main(int argc , char *argv[])
{
	std::cout<<"the argv sum is " << atof(argv[1]) + atof(argv[2]) <<std::endl;
	int num_one , num_two ;
	std::cout<<"Enter two number :";
	std::cin>>num_one >> num_two ;
	std::cout<<"the sum is "<<sum_num(num_one , num_two)<<std::endl;
}
