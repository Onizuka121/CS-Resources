#! /usr/bin/python3 

'''
Scrivere una funzione Min in python che, data in input una lista a e una funzione "key", restituisce l'elemento "item" in "lista" tale che key(item) = min(key(x) per x in a); se key è None, restitusce il minimo nella lista.

'''



def identity(item):
    return item

def Min(lista,key=identity): 
    
    minimo = lista[0]

    for elements in lista:
        if key(elements) < key(minimo):
            minimo = elements

    return minimo



print(Min(['b','k','l']))
print(Min(['torino casa mia','roma','naples'],len))
       

