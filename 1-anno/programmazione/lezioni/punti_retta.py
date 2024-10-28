'''

scrivere una funzione che data una lista di punti del tipo :
    (lettera,coordinata_x) // tupla

stampi in una riga i punti in ordine secondo le loro coordinate 
per esempio

input : [(A,1),(B,-2),(C,3)]

output : *B**A*C*

'''

def draw_points(points):
    box = max_min_points(points)
    rx = box[0]
    lx = box[1]
    
    for v_point in range(lx-1,rx+2):
        c = '-'
        for point in points:
            if point[1] == v_point:
                c = point[0]

        print(c,end='')

def max_min_points(points):
    v_max = points[0][1]
    v_min = points[len(points)-1][1]
    for point in points:
        if point[1] > v_max:
            v_max = point[1]
        elif point[1] < v_min:
            v_min = point[1]

    
    return v_max,v_min

points = [('A',1),('B',-1),('C',2),('D',-2),('E',5)]

draw_points(points)
