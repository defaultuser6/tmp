from PIL import Image
import random as rand
v=Image.open("dst.png")
v.point(lambda x:(x+rand.randint(0,255))/2).save("dst.png")
