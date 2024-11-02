#! /usr/bin/python3


def bubble_sort(lista,key=None):
    def identity(item):
        return item

    if key == None:
        key = identity

    i = 0
    while i < len(lista):
        j = i+1
        while j < len(lista):
            
            if key(lista[i]) > key(lista[j]):
                tmp = lista[i]
                lista[i] = lista[j]
                lista[j] = tmp

            j += 1

        i += 1

def draw_retta(points):
    def help_tuple(item):
        return item[1]
    
    bubble_sort(points,help_tuple)

    i = 0 
    while i < len(points)-1:
        strings = '-'*(((points[i][1]*(-1))+points[i+1][1]) - 1)
        c = points[i][0] + strings
        print(c,end='')
        i += 1

    print(points[-1][0])

punti = [('A',-1),('B',-2),('C',3),('D',5),('E',7),('F',0)]
draw_retta(punti)
print(2,34,5,6,7)

end = '\n'

