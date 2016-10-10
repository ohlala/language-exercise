# -*- coding: utf-8 -*-
"""
Created on Sun Dec 28 01:07:02 2014

@author: lenovo
"""

def month_day(year,month):
    if month in (1,3,5,7,8,10,12):
        return 31
    elif month in (4,6,9,11):
        return 30
    else:
        if year % 100!=0 and year % 4 ==0 or year %400 == 0:
            return 29
        else:
            return 28

summ = 0
days = 0
for yea in range (1901,2001):
    for mon in range (1,13):
        for day in range(1,month_day(yea,mon)):
            if days % 7 == 6 and day == 1:
                summ += 1
            days += 1 
print summ 
                
    