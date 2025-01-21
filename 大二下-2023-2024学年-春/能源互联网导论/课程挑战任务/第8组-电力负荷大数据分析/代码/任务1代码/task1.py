import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
from sklearn.manifold import LocallyLinearEmbedding
from sklearn.decomposition import PCA
from datetime import datetime, timedelta
import lttb
from function import Cluster
import tslearn.metrics as metrics
from sklearn.cluster import KMeans
from sklearn_extra.cluster import KMedoids
from PyEMD import CEEMDAN

# data = pd.read_csv('2016/Apt1_2016.csv', header=None)
# Cluster1 = Cluster(data, option=1)
# Cluster1.plot_denoise()
# Cluster1.plot_downsample()
# Cluster1.plot_elbow(ran=range(2, 5), option=1)
# Cluster1.kmedoids_DTW(Cluster1.processed_data, n=2)
# Cluster1.plot_typical_day()

# apartmentsData = pd.DataFrame()
# for idx in range(1, 115):
#     filename = '2016/Apt' + str(idx) + '_2016.csv'
#     data = pd.read_csv(filename, header=None)
#     Cluster_f = Cluster(data, option=1)
#     apartmentsData['Apt' + str(idx)] = Cluster_f.find_typical_day()
#     print('Apt' + str(idx))
# apartmentsData.to_csv('apartmentsData.csv', index=False)

# df = pd.read_csv('apartmentsData.csv')
# Cluster2 = Cluster(df, option=2)
# Cluster2.plot_elbow(df=Cluster2.processed_data, ran=range(2, 11), option=2)
# Cluster2.kmedoids_DTW(df=Cluster2.processed_data, n=5)

# data = pd.read_csv('2016/Apt1_2016.csv', header=None)
# Cluster3 = Cluster(data, option=3)
# temperature = pd.read_excel('apartment2016.xlsx')['temperature']
#
# plt.figure(figsize=(12, 5))
# Min = min(len(temperature), len(Cluster3.processed_data))
# plt.scatter(temperature[0:Min], Cluster3.processed_data[0:Min])
# plt.show()

# day1 = Cluster1.data.iloc[0:1440, :]
# day1.loc[:, 'Power'] = data.iloc[0:1440, 1]
# plt.rcParams['font.sans-serif'] = ['STsong']
# plt.figure(figsize=(10, 6))
# plt.subplot(2, 3, 1)
# plt.plot(day1['Power'])
# plt.title('原始数据')
# for idx in day1.index:  # 月平均值
#     if day1.loc[idx, 'Power'] < 0.4:
#         row = day1.loc[idx, 'Minute']
#         col = day1.loc[idx, 'Month&weekday']
#         day1.loc[idx, 'Power'] = Cluster1.weekly_data.loc[row, col]
# plt.subplot(2, 3, 2)
# plt.plot(day1['Power'])
# plt.title('处理1')
#
# for idx in day1.index[10:-10]:
#     if abs(day1.loc[idx, 'Power'] - day1.loc[idx - 1, 'Power']) / day1.loc[idx - 1, 'Power'] > 0.5:
#         day1.loc[idx, 'Power'] = day1.loc[idx - 10:idx + 10, 'Power'].mean()
# plt.subplot(2, 3, 3)
# plt.plot(day1['Power'])
# plt.title('处理2_1')
#
# for idx in day1.index[10:-10]:
#     if abs(day1.loc[idx, 'Power'] - day1.loc[idx - 1, 'Power']) / day1.loc[idx - 1, 'Power'] > 0.5:
#         day1.loc[idx, 'Power'] = day1.loc[idx - 10:idx + 10, 'Power'].mean()
# plt.subplot(2, 3, 4)
# plt.plot(day1['Power'])
# plt.title('处理2_2')
#
# for idx in day1.index[15:-15]:
#     if abs(day1.loc[idx, 'Power'] - day1.loc[idx - 1, 'Power']) / day1.loc[idx - 1, 'Power'] > 0.5:
#         day1.loc[idx, 'Power'] = day1.loc[idx - 10:idx + 10, 'Power'].mean()
# plt.subplot(2, 3, 5)
# plt.plot(day1['Power'])
# plt.title('处理2_3')
#
# MA = day1['Power'].rolling(window=4).mean()
# MA_fill = MA.fillna(day1['Power'])
# day1.loc[:, 'Power'] = MA_fill
# plt.subplot(2, 3, 6)
# plt.plot(day1['Power'])
# plt.title('处理3')
#
# plt.show()
