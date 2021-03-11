import base64
f=input('filename>>')
j=input('content-type>>')
j=j if j else 'application/octet-stream'
with open(f,'rb+')as fd:
    with open('w.log','w+')as r:
        vb=base64.b64encode(fd.read()).decode()
        r.write('data:%s;base64,%s'%(j,vb))

        
