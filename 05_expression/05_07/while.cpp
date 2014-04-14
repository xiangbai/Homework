/*************************************************************************
	> File Name: while.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Sat 12 Apr 2014 09:52:18 PM CST
 ************************************************************************/

#include<iostream>
int main(int argc , char *argv[])
{
	int ival ;
	while(std::cin >> ival)
	{
		if(ival == 42)
			break ;
		else
			std::cout<<ival <<std::endl;
	}
	return 0 ;
}
