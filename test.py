import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import vispy

path = "/Users/Mus/Downloads/genome_Mustafa_Caglar_v4_Full_20200126015749.txt" #19 header

data = pd.read_csv(path, sep="\t", header=19)

XChrom = data[data.chromosome=='X']
x = np.linspace(0,XChrom.position.max(), num=XChrom.position.max(), dtype=int)
XChrom.index = XChrom.position
y = np.zeros(XChrom.position.max())
y[(XChrom.index)-1] = 1

vispy.plot(x,y)