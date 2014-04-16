/*************************************************************************
	> File Name: list.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Wed 16 Apr 2014 07:57:48 PM CST
 ************************************************************************/

#include<iostream>
#include <list>
#include <deque>
#include <vector>
int main(int argc , char **argv)
{
	std::vector<int> vec ;
	std::deque<int> deq1 ;
	std::deque<int> deq2 ;
	for(std::size_t i = 1 ; i < 31 ; i++)
	{
		vec.push_back(i);
	}
	std::list<int> lst(vec.begin() , vec.end());
	for(std::list<int> ::iterator iter = lst.begin() ; iter != lst.end() ; ++iter)
	{

		if(*iter % 2 == 0)
		{
			deq1.push_back(*iter);
		}
		else
		{
			deq2.push_back(*iter);
		}
	}
	for(std::deque<int> ::iterator iter = deq1.begin() ; iter != deq1.end() ; ++iter)
	{
		std::cout<<*iter<<"  " ;
	}
	std::cout<<std::endl;
	for(std::deque<int>::iterator iter = deq2.begin() ; iter != deq2.end() ; ++iter)
	{
		std::cout<<*iter << "  " ;
	}
	std::cout<<std::endl;
	return 0 ;
}
