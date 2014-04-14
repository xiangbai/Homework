/*************************************************************************
	> File Name: make.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Sat 12 Apr 2014 09:24:37 PM CST
 ************************************************************************/

#include<iostream>
#include<string>

std::string make_piural(std::size_t ctr , const std::string &word , const std::string &ending = "s")
{
	return (ctr == 1) ? word :word+ending ;
}
int main()
{
	std::cout<<"singular version : "<<make_piural(1 , "success" , "es") <<"\t\tpiural version : "<<make_piural(0 ,"success" , "es" )<<std::endl<< "singular version: "<<make_piural(1 , "failure") <<"\t\tpiural version : "<<make_piural(0 , "failure") <<std::endl;
	return 0 ;
}
