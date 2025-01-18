'''
def mantieni_ordinato( a , k ):
    Assume che a sia una lista numerica di elementi ordinati dal
        più piccolo al più grande. k un valore numerico.
    Muta a aggiungendo k  mantenendo la lista ordinata
    

'''

def mantieni_ordinato(a,k):
    a.append(k)
    for i in range(len(a)-2,-1,-1):
        if a[i] > a[i+1]:
            a[i],a[i+1] = a[i+1],a[i]
        else:
            break


a = [2,3,4,5,9,10,23,90,91,91,100,102]
print(a)
mantieni_ordinato(a,5)
print(a)

        

