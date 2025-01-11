'''
Si scriva una funzione che prenda in input una lista contenente
numeri o stringhe. 
Restituisca la somma di tutti i numeri nella 
lista meno la somma di tutte le lunghezze delle stringhe nella lista. 
Ad esempio se la lista fosse [4, 'python', 3.5, 'int'], 
la funzione restituirebbe 4 - 6 + 3.5 - 3 = -1.5
'''


def filtra_valuta(a):
    out = 0
    for e in a:
        if type(e) in (int,float):
            out += e
        else:
            out -= len(e)
    return out


def filtra_valuta_2(a):
    out = ''
    for e in a:
        if type(e) in (int,float):
            out += str(e)
        else:
            out += e
    return out

print(filtra_valuta_2([4,'python','3.5','int']))


