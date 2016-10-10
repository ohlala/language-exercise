# -*- coding: utf-8 -*-
"""
Created on Wed Dec 24 21:47:26 2014

@author: lenovo
"""

def f1(a):
    if a % 3 == 0:
        return True
    else:
        return  False
    
def f2(a):
    if a % 5 == 0:
        return True
    else:
        return False
        


sum = 0  
n = int(raw_input())
for i in range(1,n):
    if f1(i) or f2(i):
         sum +=  i
print sum