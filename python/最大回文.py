# -*- coding: utf-8 -*-
"""
Created on Tue Jan 27 10:14:50 2015

@author: lenovo
"""


def ishuiwen(a):
    c = 0
    b = a
    if(a<10):
        n = 1 
    elif(a<100):
        n = 2
    elif (a<1000):
        n = 3
    elif(a<10000):
        n = 4
    elif(a<100000):
        n = 5
    elif(a<1000000):
        n = 6
    elif (a<10000000):
        n = 7
    elif(a<100000000):
        n = 8
    elif(a<1000000000):
        n = 9
    while(a!=0):
        c = c + a % 10 * (10**(n-1))
        n = n -1
        a = a / 10
    if c == b:
        return True
    else:
        return False    
        
n = int(raw_input())
a = 10**(n)
mmax = 0
for i in range(a-1,a-10,-1):
    for j in range(a-1,0,-1): 
        x= j*i
        if(mmax<x):
            if(ishuiwen(x)):
               mmax = x

print mmax