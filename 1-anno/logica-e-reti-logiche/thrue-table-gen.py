import sympy 
from sympy.logic.boolalg import truth_table
from texttable import Texttable
from collections import deque
import plotly.graph_objects as go

# fix k map variables 

exp_str = input("expression : ");


def get_gray_code(n):
    code = [[0],[1]]
    
    for _ in range(n-1):
        tmp = code[::-1]
        for c in tmp:
            code.append(c)
        j = 0
        while j < len(code):
            d = deque(code[j])
            if j < len(code)/2:
                d.appendleft(0)
            else: 
                d.appendleft(1)
            
            code[j] = list(d)
            j += 1
    return code
    

def get_binary_conv(l1,l2=[]):
    t = 0
    c = len(l1)+len(l2)-1
    for l in [l1,l2]:
        for bit in l:
            t += bit*(2**c)
            c-=1

    return t


def get_modified_tb(table):
    nt = []
    for i in range(len(table)):
        t = get_binary_conv(table[i][0])
        nt.append((t,table[i][1]))

    return nt



def get_k_map(vars,table):
    c = int(len(vars)/2)
    a = get_gray_code(c)
    b = get_gray_code(len(vars)-c)
    table = get_modified_tb(table)
    print("a: ",a)
    print("b: " ,b)
    print(table)
    map = []
    for ia in range(len(a)):
        map.append([])
        for ib in range(len(b)):
            index = get_binary_conv(a[ia],b[ib])
            print("info table : ",table[index],table[index][0], table[index][1])
            map[ia].append(1 if table[index][1] else 0)
    print_map(a,b,map,vars,c)

def print_map(a,b,map,vars,c):
    print("vars : ----> : ", vars)
    b = [''.join(str(x) for x in col) for col in b]
    a = [''.join(str(x) for x in row) for row in a]

    fig = go.Figure(data=go.Heatmap(
    z=map,
    x=b,  
    y=a,
    colorscale=[[0, 'white'], [1, 'black']],
    hoverongaps=False,
    showscale=False,
    zmax=1,
    zmin=0
))

    fig.update_layout(
    title='Mappa di Karnaugh 2×4',
    xaxis_title=f"Variabili {vars[c:]}",
    yaxis_title='Variabile A'
)

    fig.show()

def get_tb_from_fromula(formula):
    try:
        f = sympy.sympify(formula)
    except:
        print("[>] invalid formula")
        exit() 
    vars = sorted(list(f.atoms()),key= lambda x: x.name)
    table = list(truth_table(f, vars))

    t = Texttable()

    get_k_map(vars,table)

    vars.append("F")

    t.add_row(vars)

    for inputs, output in table:
        t.add_row(list(inputs) + [1 if output else 0])

    return t.draw()



print(get_tb_from_fromula(exp_str))


    
    


















    
