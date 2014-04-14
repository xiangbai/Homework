/*************************************************************************
	> File Name: ifstream.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Sat 12 Apr 2014 05:45:58 PM CST
 ************************************************************************/
#include<iostream>
#include<fstream>
#include<stdexcept>
#include<string>
std::istream &get(std::istream &in)
{
	std::string str;  //从文件流中读出内容
	while(in>>str , !in.eof())
	{
		if(in.bad())
		{
			throw std::runtime_error("IO stream corrupted");
		}
		if(in.fail())
		{
			std::cerr<<"bad data , try again"<<std::endl;
			in.clear();
			in.ignore(200 , ' ');
			continue ;
		}
		std::cout<<str <<std::endl;
	}
	in.clear();
	return in ;
}
int main()
{
	std::ifstream fin;
	fin.open("a.txt");  //打开文件流
	if(!fin)
	{
		std::cerr<<"error: unable to open input file "<<fin <<std::endl;
		return -1 ;
	}
	double dval ;
	get(fin);
	std::cout<<"the function end"<<std::endl;
	std::cout<<"input dval:"<<std::endl;
	std::cin>>dval ;
	std::cout<<"dval = "<<dval<<std::endl;
	return 0 ;
}
