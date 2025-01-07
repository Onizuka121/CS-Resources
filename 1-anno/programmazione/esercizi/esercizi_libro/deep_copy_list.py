'''
Scrivere una funzione Python denominata deep_copy che cloni la lista 
in input e tutte le liste annidate che essa contiene.

l = [1,[2,[3,4,5,6,7],8,9,10],11,[12,13],14]

'''

def deep_copy(l):
    new = []
    for e in l:
        if type(e) == list:
            new.append(deep_copy(e))
        else:
            new.append(e)
    return new


l = [1,[2,[3,4,5,6,7],8,9,10],11,[12,13],14]
print(deep_copy(l))
