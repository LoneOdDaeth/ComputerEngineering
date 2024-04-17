import pandas as pd
import numpy as np
from sklearn.impute import SimpleImputer

# Verileri yükle
veriler = pd.read_csv('eksikveriler.csv') # eğer csv dosyasındaki veriler ',' dışında farklı bir şekilde ayrıldıysa, "res = ';'" diye belirtmek gerekir

# Eksik değerleri doldur
imputer = SimpleImputer(missing_values=np.nan, strategy='mean')
yas = veriler.iloc[:, 1:4].values
imputer = imputer.fit(yas[:, 1:4])
yas[:, 1:4] = imputer.transform(yas[:, 1:4])
print(yas)