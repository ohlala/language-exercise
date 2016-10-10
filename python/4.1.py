# -*- coding: utf-8 -*-
"""
Created on Fri Jan 02 22:34:19 2015

@author: lenovo
"""
x = int(raw_input())
count = 0
summ = 0
a = 1
b = 2
c = 3
while(a<x):
    a = b + c
    b = a + c
    c = a + b   
    count += 3     
    if a % 2 == 0:
        summ += a
    if b % 2 == 0:
        summ += b
    if c % 2 == 0:
        summ += c
print summ
        


'''
def fff(a):
    if a == 1 :
        return 1
    if a == 2 :
        return 2
    return fff(a-1)+fff(a-2)

x = int(raw_input())
summ = 0
i=1
while(fff(i)<=x):
    b = fff(i)
    if b % 2 == 0:
        summ += b
    i += 1
print summ
'''