/*************************************************************************
	> File Name: noname.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Fri 11 Apr 2014 10:10:36 PM CST
 ************************************************************************/

#include<iostream>
#include<string>
class NoName
{
	private:
		std::string *pstring ;
		int ival ;
		double dval ;
	public:
		NoName();
		NoName(std::string *pstr , int iv , double dv);
};
NoName::NoName()
{

}
NoName::NoName(std::string *pstr , int iv , double dv)
{
	pstring = pstr ;
	ival = iv ;
	dval = dv ;
}
int main()
{
	std::string *pstr = NULL ;
	NoName name1 ;
	NoName name2(pstr , 2 , 2.2);
	return 0 ;
}
