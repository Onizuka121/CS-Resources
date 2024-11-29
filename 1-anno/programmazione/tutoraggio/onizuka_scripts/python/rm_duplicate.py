#! /usr/bin/python3

'''

Scrivere una funzione in python che, data una lista di interi in input, esegue le seguenti operazioni:


1 - rimuove i duplicati dalla lista in input (modificare la lista in input);

2 - crea una tupla a partire dalla lista modificata;

3 - restituisce l'elemento massimo e l'elemento minimo nella tupla;


solution with complexity = O(n^2)  BADDDDDD

          *   *   *   *   *
[87, 45, 41, 94, 41, 99, 94]

copy without duplicate

[87, 45, 41, 94, 99]

override original

[87, 45, 41, 94, 99, 41, 99, 94]

delete last items iterative mode

del(lista[-1])

'''
def get_min_max_distinct(lista):
    minimo = lista[0]
    massimo = lista[-1]
    cp = ()
    
    def is_insered(item):
        for cp_item in cp:
            if item == cp_item:
                return True
        return False

    i = 0
    while i < len(lista):

        if lista[i] < minimo:
            minimo = lista[i]
        if lista[i] > massimo:
            massimo = lista[i]

        if not is_insered(lista[i]):
            cp += (lista[i],) 
        
        i += 1

    i = 0 
    while i < len(cp):
        lista[i] = cp[i]
        i += 1

    while i < len(lista):
        del(lista[-1])

    

        


    return lista,cp,minimo,massimo



a = [87, 45, 41, 65, 94, 41, 99, 94]
print(get_min_max_distinct(a))



        

