/*************************************************************************
	> File Name: vector.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Wed 16 Apr 2014 07:51:22 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
#include <string>

int main(int argc , char **argv)
{
	std::string str ;
	std::vector<std::string> vec ;
	while(std::cin >> str)
	{
		vec.push_back(str);
	}
	for(std::vector<std::string>::iterator iter = vec.begin() ; iter != vec.end() ; ++iter)
	{
		std::cout<<*iter<<std::endl;
	}
}
