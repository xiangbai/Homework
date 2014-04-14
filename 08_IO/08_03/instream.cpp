/*************************************************************************
	> File Name: instream.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Sat 12 Apr 2014 05:33:29 PM CST
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<stdexcept>
std::istream &get(std::istream &in)
{
	int ival ;
	while(in>>ival , !in.eof())
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
		std::cout<<ival <<std::endl;
	}
	in.clear();
	return in ;
}
int main()
{
	double dval ;
	get(std::cin);
	std::cout<<"the function end"<<std::endl;
	std::cin>>dval ;
	std::cout<<"dval = "<<dval<<std::endl;
	return 0 ;
}
