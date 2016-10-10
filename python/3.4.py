# -*- coding: utf-8 -*-
"""
Created on Sun Dec 28 22:33:37 2014

@author: lenovo
"""

import math
n = int(raw_input())

def is_prime(m):
    for i in range (2,int(math.sqrt(m)+1)):
        if m % i == 0:
            return False
    return True
        
def shuwei(m):
    a = 0
    while m !=0:
        m = m / 10 
        a += 1
    return  a
     
i = 2
summ = 0

while i < n+1:
    if is_prime(i):
        summ += 1
        for j in range (1,shuwei(i)+1):
            a = i % 10
            b = i / 10 
            i = b + a * 10 ** shuwei(b)
            if is_prime(i) == False:
                summ -= 1
                break
    i += 1
print summ

