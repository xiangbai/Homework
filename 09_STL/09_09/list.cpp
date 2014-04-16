/*************************************************************************
	> File Name: list.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Wed 16 Apr 2014 07:14:35 PM CST
 ************************************************************************/

#include <iostream>
#include <list>
#include <vector>
int main(int argc , char **argv)
{
	std::vector<std::string> svec ;
	svec.push_back("leilei");
	svec.push_back("yiyi");
	svec.push_back("xiaoxi");
	std::list<std::string> lst(svec.begin() , svec.end());
	for(std::list<std::string>::reverse_iterator iter = lst.rbegin() ; iter != lst.rend() ; ++iter)
	{
		std::cout<<*iter<<std::endl ;
	}
}
