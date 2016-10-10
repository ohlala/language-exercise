# -*- coding: utf-8 -*-
"""
Created on Tue Jan 27 11:14:21 2015

@author: lenovo
"""

s = raw_input()
dic = {}
a = s.strip()
t = tuple(a)
dic[t] = []
dic[t].append(a)
s = raw_input()
while (s != ''):
    a = s.strip()
    t = tuple(a) 
    temp = 0
    for key in dic:
        flag = 1
        for i in a:  
            if (i in key)==False:
                flag = 0
                break
        if flag == 1:
            dic[key].append(a)
            temp = 1
    if temp == 0:
       dic[t] = []
       dic[t].append(a)

    s = raw_input()
 
dicc =[]   
for key in dic :
    dicc.append(dic[key]);
dicc.sort
print dicc