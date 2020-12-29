from PIL import Image
import numpy as np
import keras
from keras.models import load_model
model=load_model('rpsnew.h5')
q=Image.open("shot.jpg").convert('L')


q=q.resize((200,300))
q=np.array(q)
#print(q)

q=q.reshape(1,200,300,1)
q=q/255
g=model.predict(q)
x=np.argmax(g)
#print(g)
file =open('t.txt','w')
file.write(str(x))
file.close()
