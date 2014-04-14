/*************************************************************************
	> File Name: class.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Fri 11 Apr 2014 10:19:08 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
#include<fstream>
std::ifstream file("a.txt");
class DemoClass
{
	private:
		std::string name ;
		int iv ;
		double *dv ;
		std::ifstream infile ;
	public:
		DemoClass():name("DemoClass")
		{
			std::cout<<"no parameter"<<std::endl;
			std::cout<<name<<std::endl;
		}
		DemoClass(std::ifstream file):name("DemoClass"),iv(0) , dv(0) , infile(file)
		{
			std::cout<<"one parameter"<<std::endl;
			std::cout<<name<<std::endl;
		}
};

int main(int argc , char **argv)
{
	DemoClass c1 ;
	DemoClass c2(file);
	return 0 ;
}
