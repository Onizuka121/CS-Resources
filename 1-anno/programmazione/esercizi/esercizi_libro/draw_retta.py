'''
Scrivere un programma che chieda all'utente di inserire due interi positivi m e q e 
quindi rappresenti graficamente la retta mx+q nel quadrante positivo nell'intervallo 0-10 utilizzando 
il simbolo * per i punti della retta. 
Come asse delle x si usino le righe della console, come asse delle y le colonne. 
Per semplificarne la lettura si disegnino anche gli assi delle ascisse e delle ordinate
'''
#da input
m = 3
q = 2
print("-"*((m*10+q)+2)+"> y")
x = 1
y0 = 0
y1 = 0

while x <= 10:
    y0 = x+6
    y1 = (x*3)-4
    if y1 < y0 and y1 > 0:
        print('|'+' '*(y1-2)+"-"+' '*(y0-y1-1)+"+")
    elif y1 == y0 and y1 > 0:
        print('|'+' '*(y0-2)+"*")
    elif y1 < 0:
        print('|'+' '*(y0-2)+'+')
    else:
        print('|'+' '*(y0-2)+'+'+' '*(y1-y0-1)+"-")

    x += 1

print("v")
print("x")
