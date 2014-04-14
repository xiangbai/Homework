/*************************************************************************
	> File Name: max.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Tue 08 Apr 2014 08:58:15 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
int max_one(int num_one , const int *num_two)
{
	if(num_one > *num_two)
		return num_one ;
	else
		return *num_two ;
}
int main()
{
	int num_one , num_two ;
	std::cout<<"please input the number :";
	std::cin >>num_one >>num_two ;
	std::cout<<"the max one of "<<num_one <<" and "<<num_two <<" is " <<max_one(num_one , &num_two)<<std::endl;
}
