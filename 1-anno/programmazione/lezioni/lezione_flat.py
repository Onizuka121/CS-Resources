

def deep_copy(lista):
    
    b = []

    for item in lista:
        if type(item) != list:
            b.append(item)
        else:
            b.append(deep_copy(item))

    return b



lista = [1,2,3,4,5,['ciao',9,'programmazione',[90,100,20]],200]

b = deep_copy(lista)

print(b)

