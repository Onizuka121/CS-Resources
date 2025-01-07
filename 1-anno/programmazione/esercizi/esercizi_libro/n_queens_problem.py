'''

[]

'''
def is_safe_position(queens_pos,pos):
    col,row = pos[0],pos[1]
    for i in range(len(queens_pos)):
        if col == i or row == queens_pos[i] or abs(col-i) == abs(row-queens_pos[i]):
            return False
    return True

def rec(n,queens_pos = [],i=0,j=0):
    if j == n:
        return None

    if i == n:
        return queens_pos
    print(j,i)
    if is_safe_position(queens_pos,(i,j)):
        queens_pos.append(j)
        print(queens_pos)
        res = rec(n,queens_pos,i+1)
        print("step", i)
        res = rec(n,queens_pos,i,j+1)
        if res != None:
            return res
    else:
        res = rec(n,queens_pos,i,j+1)
        if res != None:
            return res



print(rec(8))


