/*************************************************************************
	> File Name: Foo.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Wed 16 Apr 2014 07:06:37 PM CST
 ************************************************************************/

#include<iostream>
#include <list>
class Foo{
	public:
		Foo(int num):_val(num){}
		int get_val()
		{
			return _val ;
		}
	private:
		int _val ;
};

int main(int argc , char **argv)
{
	std::list<Foo> ls(10 , Foo(0));
	for(std::list<Foo>::iterator it = ls.begin() ; it != ls.end() ; ++it)
	{
		std::cout<< it->get_val() << " " << std::endl; 
	}
}
