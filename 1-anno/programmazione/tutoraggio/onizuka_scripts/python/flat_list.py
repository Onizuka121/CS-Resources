#! /usr/bin/python3

'''

in : [[1,2,3],[4,5,6],[7,8,9]]

out : [1,2,3,4,5,6,7,8,9]

'''

def flat_list(lista):
    type_list = type([])
    n = len(lista)
    i = 0
    while i < len(lista):
        if type(lista[i]) == type_list:
            n = len(lista[i])
            lista[i:i+1] = lista[i]
            i += n
        else:
            i += 1

#test = [1,2,'ciao',[4,5,6],7,8,[9,10,11,12],13]
#flat_list(test)
#print(test)

# method with recursion ( è migliore ??? ) 
# il problema in quello di prima è che se avevamo una lista del genere 
# [ 1 , 2 , [ 3 , [ 'ciao , [ 'amico', 56] , 2004 ] , 4 ] , 5 , 6 ]
# dovendo entrare in piu livelli di dettaglio non era ottimale da fare ( ciclo dentro a un ciclo dentro un ciclo etc ... )


def flat(input_lista):
    original = []
    out = []
    def flat_list_v2(lista,i,del_last=False):
        if del_last:
            del(original[-1])
        if i < len(lista):
            if type(lista[i]) == type([]):
                if i+1 < len(lista):
                    original.append(lista[i+1:])
                flat_list_v2(lista[i],0)

            else:
                out.append(lista[i])
                flat_list_v2(lista,i+1)
        elif len(original) > 0 :
            flat_list_v2(original[-1],0,True)
        else:
            return 

    flat_list_v2(input_lista,0)
    input_lista[:] = out


test = [[1,2,3],'ciao',[['lollo',['hola','hola'],'scemo'],4,5,6],232434,'amico mio',[7,8,9]]
flat(test)
print(test)
