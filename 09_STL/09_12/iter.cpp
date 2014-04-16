/*************************************************************************
	> File Name: iter.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Wed 16 Apr 2014 07:39:48 PM CST
 ************************************************************************/

#include<iostream>
#include <vector>
bool findNum(std::vector<int>::iterator begin , std::vector<int>::iterator end , int num)
{
	while(begin !=  end )
	{
		if(*begin == num )
		{
			return true ;
		}
		++begin;
	}
	return false ;
}
std::vector<int>::iterator findNum1(std::vector<int>::iterator begin , std::vector<int>::iterator end , int num)
{
	while(begin != end)
	{
		if(*begin == num)
		{
			return begin ;
		}
		++begin ;
	}
	return end ;
}
int main(int argc , char **argv)
{
	std::vector<int> vec ;
	for(std::size_t i = 1 ; i < 11 ; i++)
	{
		vec.push_back(i);
	}

	std::cout<< findNum(vec.begin() , vec.end() , 11)<<std::endl;

	std::cout<< *(findNum1(vec.begin() , vec.end() , 5))<<std::endl;
	return 0 ;
}
