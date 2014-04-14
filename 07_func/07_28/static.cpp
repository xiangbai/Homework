/*************************************************************************
	> File Name: static.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Sat 12 Apr 2014 09:41:34 PM CST
 ************************************************************************/

#include<iostream>
std::size_t count_calls()
{
	static std::size_t count = -1 ;
	return ++count ;
}
int main(int argc , char **argv)
{
	for(int i = 0 ; i < 10 ; i++)
	{
		std::cout<<"the count_calls is "<<count_calls() <<std::endl;
	}
	return 0 ;
}
