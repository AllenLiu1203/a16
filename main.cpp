//
//  main.cpp
//  advanced16
//
//  Created by 劉世翔 on 2019/5/31.
//  Copyright © 2019年 劉世翔. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>

int add(void);

int main(void){
    
    printf("%d\n", add());
    
    
    system("pause");
    
    return 0;
}
int add(void)
{
    
    static int sum_num=0;
    int a;
    
    for(a=2;a<=100;a+=2){
        sum_num+=a;
    }
    return sum_num;
}
