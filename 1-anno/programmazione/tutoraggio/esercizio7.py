

'''
1 , -1 , 1 , -1 , 2 , -3 

out : -1,1
'''

def duplicati(lista):
    out = []
    i = 0
    while i < len(lista):
        j = i+1
        while j < len(lista):
            if lista[i] == lista[j] and lista[i] not in out:
               out.append(lista[j])
               j = len(lista)
            j += 1 
        i += 1                
    
    print(out)


duplicati([1,5,2,6,2,8,9,2,2,2,0,0,1])