# -*- coding: utf-8 -*-
"""
Created on Sun Dec 19 11:59:04 2021

@author: Joseph
"""
import sys
numCows = int(sys.stdin.readline().strip())
cowList = str(sys.stdin.readline().strip())
counter = 0
for i in range(3, numCows+1):
    i2 = i
    for x in range(0, numCows-i+1):
        photo = cowList[x:i2]
        i2 += 1
        gCount = 0
        hCount = 0
        for char in photo:
            if char == "G":
                gCount += 1
            elif char == "H":
                hCount += 1
        if gCount == 1 or hCount == 1:
            counter += 1
sys.stdout.write(str(counter) + '\n')