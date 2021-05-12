FN=r'F:\Program Files (x86)\Dev-Cpp\MinGW64\bin\g++'
def aa(fn):
    for t in range(1,32768):
        try:
            k=input('line%d:'%(t))
        except:
            break
        i=open(fn,'a')
        i.write(k)
        i.write('\n')
        i.close()
import os
u=os.path.abspath(input("fn:"))
open(u,'wb').close()
aa(u)
x=(os.path.split(u)[0])
print(os.popen('%s %s -c -o 000.o'%(FN,u)).read())
print(os.popen('%s 000.o -o temp.EXE'%(FN,)).read())
print(os.popen("temp.EXE").read())
