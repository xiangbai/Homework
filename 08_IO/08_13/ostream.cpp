/*************************************************************************
	> File Name: ostream.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Sat 12 Apr 2014 07:59:28 PM CST
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<string>
#include<stdexcept>
std::ofstream &open_file(std::ofstream &fout , std::string filename)
{
	fout.close();
	fout.clear();
	fout.open(filename.c_str());
	if(!fout)
	{
		throw std::runtime_error("file open failure");
	}
	return fout ;
}
int main(int argc , char *argv[])
{
	std::ofstream fout ;
	open_file(fout , argv[1]) ;
	std::string str ;
	while(std::cin>>str)
	{
		fout<<str <<std::endl;
	}
	fout.close();
	fout.clear();
}	

