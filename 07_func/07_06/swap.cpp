/*************************************************************************
	> File Name: swap.cpp
	> Author: wang
	> Mail:xiangbai@qq.com 
	> Created Time: Tue 08 Apr 2014 09:06:53 PM CST
 ************************************************************************/

#include<iostream>
#include<string.h>
#include<stdlib.h>
void swap(int *num_one , int *num_two)
{
	int temp ;
	temp = *num_one ;
	*num_one = *num_two ;
	*num_two = temp ;
}
void swap(int **num_one , int **num_two)
{
	int *temp ;
	temp = *num_one ;
	*num_one = *num_two ;
	*num_two = temp ;
}
int main()
{
	int num_one , num_two ;
	std::cout<<"input the number :";
	std::cin>>num_one >> num_two ;
	std::cout<<"before swap is "<<num_one << " and " << num_two <<std::endl; 
	swap(&num_one , &num_two);
	std::cout<<"after swap is "<<num_one << " and " << num_two <<std::endl; 

	int *num_One , *num_Two ;
	num_One = &num_one ;
	num_Two = &num_two ;

	std::cout<<"before swap is "<<*num_One << " and " << *num_Two <<std::endl; 
	swap(&num_One , &num_Two);
	std::cout<<"after swap is "<<*num_One << " and " << *num_Two <<std::endl; 
}

