from __future__ import unicode_literals, print_function
import numpy as np
import pandas as pd 
from numpy import random
import matplotlib.pyplot as plt

pop_size = 50
vector_size = 25
x_best = y_best = 0
x_standard_deviation = 1
y_standard_deviation = 1

def f(x, y):
    return x**2 + y**2

def gauss_distribution(x_best, standard_deviation):
    x = random.normal(loc = x_best, scale = standard_deviation, size = (25, 1))
    return x 

def sort_generation(x_vector):
    for _ in (0, len(x_vector)):
        for __ in (1, len(x_vector) - 1):
            if _ < __:
                _, __ = __, _                                           

    new_vector = [_ for _ in range(25)]
    return new_vector 

def print_vector(x_vector):
    i = 1
    for _ in x_vector:
        print(_, end = ' ')
    print(' ')


x_ancestor = gauss_distribution(10, 1)
y_ancestor = gauss_distribution(-10, 1)
first_children = []
local_minimum = f(0, 0)

for _ in x_ancestor:
    for __ in y_ancestor:
        first_children.append(f(_, __))
        if local_minimum < f(_, __):
            local_minimum = f(_, __)     
            x_best = _  
            y_best = __ 
            
print('X_ancestor:')
print_vector(x_ancestor)

print('Y_ancestor:')
print_vector(y_ancestor)

print('Local_minimum: ' + str(local_minimum))
print('X best: ' + str(x_best))
print('Y best: ' + str(y_best))


    

