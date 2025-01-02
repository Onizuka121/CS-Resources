'''
Ordinamento per tipo: 
Scrivere una funzione denominata sort_by_type che prenda una lista 
che può contenere int, float o str. 
La funzione ritorni una nuova lista in cui gli int precedano i float che precedano le str.
Si risolva senza utilizzare il metodo sort.
'''


def sort_by_type(a):
    d = {type(1):[],type(0.1):[],type('str'):[]}
    for e in a:
        d[type(e)].append(e)
    out = []
    for k in d:#costante 3 volte
        for e in d[k]:
            out.append(e)
    return out

a = ['stringa','stringa2',232.232,2024]
print(sort_by_type(a))
