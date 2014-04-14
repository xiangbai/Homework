/*************************************************************************
	> File Name: string_vec.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Sat 12 Apr 2014 08:18:26 PM CST
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<stdexcept>
void get_line(const std::string &filename , std::vector<std::string> &lines)
{
	std::ifstream fin ;
	std::string line ;
	fin.close();
	fin.clear() ;
	fin.open(filename.c_str());
	if(!fin)
	{
		throw std::runtime_error("open error");
	}
	while(getline(fin , line))
	{
		lines.push_back(line);
	}
	fin.close() ;
	fin.clear();
}
int main(int argc , char*argv[])
{
	std::vector<std::string> lines ;
	std::string word ;
	get_line(argv[1] , lines);
	for(std::vector<std::string>::iterator iter = lines.begin() ; iter != lines.end(); ++iter)
	{
		std::istringstream sin(*iter);
		while(sin>>word)
		{
			std::cout<<word<<std::endl;
		}
		sin.clear() ;
	}
	return 0 ;
}
