# -*- coding: utf-8 -*-
"""
Created on Thu Jan 15 14:11:04 2015

@author: lenovo
"""
def has_no_e(a):
    for letter in a:
        if letter == 'e':
            return False
    return True   

def avoids(word,forbidden):
    for letter in word:
        if letter == forbidden:
            return False
    return True   

def uses_only(word,available):
    for letter in word:
        if not letter in available:
            return False
    return True
            
def is_abcdedarian(word):
    i = 0
    while(i<len(word)-1):
        if word[i]>word[i+1]:
            return False
        i += 1
    return True

f = open('words.txt')
summ = 0
count_e = 0
for line in f:
    word = line.strip()
    summ = summ + 1
    if is_abcdedarian(word):
        print word
#print count_e * 1.0 / summ /100 
