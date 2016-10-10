dic = {}
a = []
for i in range(1,101):
    s = raw_input()
    a = s.strip().split()
    for word in a:
        if word in dic:
            dic[word].append(i)
        else:
            dic[word] = [i]       
            
keys = []
for key in dic:
    keys.append(key)
    keys.sort()
for i in keys :
    print i+':',
    for j in range (len(dic[i])-1):
        print '%d,'%(dic[i][j]),
    print dic[i][-1]            
            
x = []
y = []
x1 = set()
x2 = set ()

s = raw_input()
while (s != ''):
    a = s.strip().split()
    if a[0] == "OR:":
        a.remove("OR:")
        b = []
        for i in a:
            b.append(i)
        for i in b:
            if (i in dic) == False:
                a.remove(i)               
        if len(a)==0:
            c=[]
            y.append(c)
            s = raw_input()
            continue                 
        
        for i in dic[a[0]]:
            x1.add(i)    
        if len(a)>1:
            for i in range (1,len(a)):                
                for j in dic[a[i]]:
                    x2.add(j)   
                x1 = x1 | x2    
        
    else:
        if a[0]=="AND:":
            a.remove("AND:")  
        flag= 0
        for i in a:
            if (i in dic) == False:
                flag = 1
        if flag == 1:
            c=[]
            y.append(c)
            s = raw_input()
            continue            
        for i in dic[a[0]]:
            x1.add(i)      
        if len(a)>1:
            for i in range (1,len(a)):                
                for j in dic[a[i]]:
                    x2.add(j)  
                x1 = x1 & x2    
    for j in x1:
        x.append(j) 
    x.sort()
    y.append(x)
    x2.clear()
    x1.clear()
    x = []
    s = raw_input()
    
for i in range(len(y)):
    if (len(y[i])==0):
        print 'None'
    else:
        for j in range(len(y[i])-1):
            print '%d,'%(y[i][j]),
        print y[i][-1]