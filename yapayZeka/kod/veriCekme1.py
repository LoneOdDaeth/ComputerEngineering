import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

veriler=pd.read_csv('veriler.csv')
print(veriler)

boykilo=veriler[['boy','kilo']]
print(boykilo)

class insan:
    boy=180
    def kosmak(self,a):
        return a+50

yusuf=insan()
print(yusuf.boy)
print(yusuf.kosmak(30))