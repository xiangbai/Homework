/*************************************************************************
	> File Name: cout_p.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Sat 12 Apr 2014 09:05:11 PM CST
 ************************************************************************/

#include<iostream>
int main(int argc , char *argv[])
{
	int i ;
	for(i = 1 ; i < argc ; i++)
	{
		std::cout<<argv[i] <<std::endl;
	}
	return 0 ;
}
