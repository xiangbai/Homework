/*************************************************************************
	> File Name: person.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Fri 11 Apr 2014 09:42:57 PM CST
 ************************************************************************/

#include<iostream>
class Person
{
	private:
		std::string c_name ;
		std::string c_address ;
	public:
		Person(const std::string &name , const std::string &address):c_name(name) , c_address(address)
		{
			
		}
		std::string get_name()const
		{
			return this->c_name ;
		}
		std::string get_address()const
		{
			return this->c_address ;
		}
};
int main()
{
	Person person("lili" , "china");
	std::cout<<person.get_name()<<"  come from "<< person.get_address() <<std::endl;
	return 0 ;
}
