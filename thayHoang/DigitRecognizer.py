from __future__ import unicode_literals, print_function, division
import os 
import numpy as np 
import matplotlib.pyplot as plt 
import pandas as pd 
from tensorflow.keras import layers 
from matplotlib import pyplot


from keras.datasets import mnist 
from sklearn.metrics import accuracy_score 
from skimage.feature import hog 
from sklearn.svm import LinearSVC
from sklearn import svm, metrics
from sklearn.model_selection import GridSearchCV


(x_train, y_train), (x_test, y_test) = mnist.load_data()


#Hog from data 
x_train_feature = []
for _ in range(len(x_train)):
    feature = hog(x_train[_], orientations = 9, pixels_per_cell = (14, 14), cells_per_block = (1, 1), block_norm = "L2")
    x_train_feature.append(feature)
x_train_feature = np.array(x_train_feature, dtype = np.float32)

x_test_feature = [] 
for _ in range(len(x_test)):
    feature = hog(x_test[_], orientations = 9, pixels_per_cell = (14, 14), cells_per_block = (1, 1), block_norm = "L2")
    x_test_feature.append(feature)
x_test_feature = np.array(x_test_feature, dtype = np.float32)

#Train 
model = LinearSVC(C=150)
model = svm.SVC()
model.fit(x_train_feature, y_train)
y_predict = model.predict(x_test_feature)

#print Accuracy score 
print(str(accuracy_score(y_test,  y_predict)*100) + '%')
