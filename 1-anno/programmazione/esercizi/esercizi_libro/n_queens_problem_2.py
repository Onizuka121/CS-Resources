'''

'''

def is_safe_positions(queens_pos):
    for col in range(len(queens_pos)):
        row = queens_pos[col]
        cols = 0
        for other_row in queens_pos:
            if (row == other_row or abs(row-other_row) == abs(col-cols)) and col != cols:
                return False 
            cols += 1

    return True


def create_permutation(a,i=0):
    if i < len(a):
        for j in range(i, len(a)):
            a[i], a[j] = a[j], a[i]
            res = create_permutation(a, i+1)
            if res is not None:
                return res
            a[i], a[j] = a[j], a[i]      
    else:
        if is_safe_positions(a):
            b = a[:]
            return b
    return None


print(create_permutation([0,1,2,3,4,5,6,7]))


