/*************************************************************************
  > File Name: file_in.cpp
  > Author: wang
  > Mail:xiangbai@qq.com 
  > Created Time: Sat 12 Apr 2014 07:05:27 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>
#include<stdexcept>
void getwords(std::vector<std::string> &words , const std::string &line)
{
	std::istringstream sin(line) ;   //字符串流
	std::string word ;
	while(sin>>word)
	{
		words.push_back(word);
	}
	sin.clear();
}
int fileToVector(std::string filename  , std::vector<std::string> &svec , std::vector<std::string> &words)
{
	std::ifstream fin ;
	fin.open(filename.c_str());
	if(!fin)
	{
		return 1 ;
	}
	std::string line;
	while(getline(fin , line))
	{
		svec.push_back(line);
		getwords(words , line);
	}
	fin.close();
	if(fin.eof())
	{
		return 4 ;
	}
	if(fin.bad())
	{
		return 2 ;
	}
	if(fin.fail())
	{
		return 3 ;
	}
}

int main(int argc , char *argv[])
{
	std::vector<std::string> svec ;
	std::vector<std::string> words ;
	std::string filename;
	std::cout<<"Enter filename :"<<std::endl;
	std::cin>>filename ;
	int fileflag = fileToVector(filename,svec,words);
	switch(fileflag)
	{
		case 1:
			std::cout<<"error:can not open file: "<<filename<<std::endl ;
			break ;
		case 2:
			std::cout<<"error system failturn"<<std::endl;
			break;
		case 3:
			std::cout<<"error:read failure"<<std::endl;
			break;
	}
	std::cout<<"Vector :" << std::endl;
	for(std::vector<std::string>::iterator iter = svec.begin() ; iter != svec.end() ; ++iter)
	{
		std::cout<<*iter<<std::endl;
	}
	std::cout<<"words :"<<std::endl;

	for(std::vector<std::string>::iterator iter = words.begin() ; iter != words.end() ; ++iter)
	{
		std::cout<<*iter<<std::endl;
	}
	return 0 ;
}
