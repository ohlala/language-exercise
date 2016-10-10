# -*- coding: utf-8 -*-
"""
Created on Fri Dec 12 21:22:42 2014

@author: lenovo
"""
import math 
a=float(raw_input())
b=float(raw_input())
c=float(raw_input())
angle=math.acos((a**2+b**2-c**2)/(2*a*b))
angle=angle/2/(math.pi)*360
print format(angle,'.1f')
