/*************************************************************************
	> File Name: sum_vec.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Tue 08 Apr 2014 09:23:29 PM CST
 ************************************************************************/

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<vector>
double sum(std::vector<double>::iterator begin , std::vector<double>::iterator end)
{
	double sum = 0.0 ;
	while(begin != end)
	{
		sum += *begin ;
		++begin;
	}
	return sum ;
}
int main()
{
	std::vector<double> dvec ;
	double dvel;
	while(std::cin>>dvel)
	{
		dvec.push_back(dvel);
	}
	std::vector<double>::iterator begin = dvec.begin();
	std::vector<double>::iterator end = dvec.end();
	std::cout<<"after sum "<< sum(dvec.begin() , dvec.end()) <<std::endl;
}
