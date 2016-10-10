# -*- coding: utf-8 -*-
"""
Created on Wed Dec 24 22:23:58 2014

@author: lenovo
"""
import math

def is_preim(a):
    for j in range(2, int(math.sqrt(a) + 1)):
        if a % j ==0:
             
           return False
    return True

summ=0    
n = int(raw_input())
for i in range (2,n+1):
    if is_preim(i)==True:
        summ = summ + i
print summ   
    