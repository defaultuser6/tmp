import imageio,os
import time
def func(f):
    s=sum(f)/len(f)
    def _temp_func(value):
        return abs(value-s)
    return list(sorted(f,key=_temp_func))[0]
def fghfghgh(v,x=100):
    pd=v*x
    str1='['+('-'*int(pd))+'>'
    str2='#'*(x-int(pd))
    print(str1+str2+']')

img=imageio.imread("src.png")
W,H=size=(len(img),len(img[0]))
print("image:%dx%d"%size)
input("press <Enter> to start...")
processed=0
start_time=time.time()
for i in range(len(img)-1):
    for j in range(len(img[i])-1):
        print("image:%dx%d"%size)
        f123=processed/(W*H)
        f456=1/(f123+0.001)
        print("processed%d %.8f %%"%(processed,f123*100))
        print("processing %d,%d..."%(i,j))
        fghfghgh(f123)
        UsedTime=time.time()-start_time
        time_left=UsedTime*f456-UsedTime
        print("used%.4fsec\t%4.f sec left"%(UsedTime,time_left))
        for k in range(len(img[i][j])):
            f=(img[i+1][j][k]
            ,img[i-1][j][k]
            ,img[i][j+1][k]
            ,img[i][j-1][k])
            
            img[i][j][k]=sum(f)/len(f)
        processed+=1
        os.system('cls')
    imageio.imwrite('dst.jpg',img)


