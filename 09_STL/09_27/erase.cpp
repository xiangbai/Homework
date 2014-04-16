/*************************************************************************
	> File Name: erase.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Wed 16 Apr 2014 08:13:25 PM CST
 ************************************************************************/

#include<iostream>
#include <string>
#include <list>
#include <deque>
#include <vector>
#include <algorithm>

int main(int argc , char **argv)
{
	std::string str ;
	std::string search("hello");
	std::vector<std::string> vec ;
	std::list<std::string> lst1 ;

	while(std::cin >> str)
	{
		vec.push_back(str);
		lst1.push_back(str);
	}
	std::list<std::string> lst(vec.begin() , vec.end());



	std::list<std::string>::iterator it =find(lst.begin() , lst.end() , search) ;

	if(it != lst.end())
	{
		lst.erase(it);
	}
	for(std::list<std::string>::iterator iter = lst.begin() ; iter != lst.end() ; ++iter)
	{
		if(*iter == "ni")
		{
			iter = lst.erase(iter);
			--iter ;
		}
	}
	for(std::list<std::string> ::iterator iter = lst.begin() ; iter != lst.end() ; ++iter)
	{
		std::cout<< *iter << std::endl;
	}
	for(std::list<std::string> ::iterator iter = lst1.begin() ; iter != lst1.end() ; ++iter)
	{
		std::cout<< *iter << std::endl;
	}
}
