
lista = [1,2,3,[1,2,3,4],[1,5,4,2,[1,2],4,3,2]]

def find_osvaldo(lista,i=0):
    if i >= len(lista):
        return False

    if type(lista[i]) == list:
        if(find_osvaldo(lista[i])):
            return True
    elif lista[i] == 'osvaldo':
        return True
    return find_osvaldo(lista,i+1)
    
    
print(find_osvaldo(lista))
