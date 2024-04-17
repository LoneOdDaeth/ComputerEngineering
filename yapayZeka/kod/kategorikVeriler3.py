#kütüphaneler
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

#Veri Önişleme
#veri yükleme
veriler=pd.read_csv('eksikveriler.csv')
print(veriler)

#eksik veriler
#nan olan değerler yerine o sütunun ortalamasını yaz
from sklearn.impute import SimpleImputer
imputer=SimpleImputer(missing_values=np.nan,strategy='mean')
yas=veriler.iloc[:,1:4].values
print(yas)
imputer=imputer.fit(yas[:,1:4])
yas[:,1:4]=imputer.transform(yas[:,1:4])
print(yas)


#ülke verilerini alacağız onlar kategorik
#encoder katagorik-->Numeric
ulke=veriler.iloc[:,0:1].values
print(ulke)

from sklearn import preprocessing
le=preprocessing.LabelEncoder()
ulke[:,0]=le.fit_transform(veriler.iloc[:,0])
print(ulke)

ohe=preprocessing.OneHotEncoder()
ulke=ohe.fit_transform(ulke).toarray()
print(ulke)

print(list(range(22)))

#numpy dizileri dataframe dönüşümü
sonuc1=pd.DataFrame(data=ulke, index=range(22),columns=['fr','tr','us'])
print(sonuc1)

sonuc2=pd.DataFrame(data=yas, index=range(22),columns=['boy','kilo','yaş'])
print(sonuc2)

cinsiyet=veriler.iloc[:,-1].values
print(cinsiyet)

sonuc3=pd.DataFrame(data=cinsiyet,index=range(22),columns=['Cinsiyet'])
print(sonuc3)

#dataframe birleştirme
s1=pd.concat([sonuc1,sonuc2],axis=1)
print(s1)

s2=pd.concat([s1,sonuc3],axis=1)
print(s2)


# Eğitim ve test kümelerinin oluşturulması
#veri kümnesinin  bölünmesi
from sklearn.model_selection import train_test_split
x_train, x_test, y_train, y_test=train_test_split(s1,sonuc3,test_size=0.33,random_state=0)

#öznitelik ölçekleme

from sklearn.preprocessing import StandardScaler
sc=StandardScaler()
X_train=sc.fit_transform(x_train) 
X_test=sc.fit_transform(x_test)