/*************************************************************************
	> File Name: str_vec.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Sat 12 Apr 2014 10:00:28 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
int main()
{
	std::vector<std::string *> spvec ;
	std::string str ;
	while(std::cin >> str)
	{
		std::string *pstr = new std::string ;
		*pstr = str ;
		spvec.push_back(pstr);
	}
	std::vector<std::string *>::iterator iter ;
	for(iter = spvec.begin() ; iter != spvec.end() ; ++iter)
	{
		std::cout<<**iter << "   " <<(**iter).size() <<std::endl;
	}

	for(iter = spvec.begin() ; iter != spvec.end() ; ++iter)
	{
		delete *iter ;
	}
	return 0  ;
}
