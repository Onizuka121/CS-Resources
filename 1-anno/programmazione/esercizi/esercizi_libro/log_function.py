'''
Usando l'algoritmo per il calcolo del logaritmo in base due mostrato 
nella Figura 3.6 del Guttag (riportato in fondo), scrivete una funzione che soddisfi la specifica

def log(x, base, epsilon):
    """
    Assume che x ed epsilon siano int o float, base un int,
        x > 1, epsilon > 0, power >= 1
    Restituisce un float y tale che base**y disti da x meno di
        epsilon
    """

'''

#Figura 3.6

# Trova un limite inferiore per ans
lower_bound = 0
while 2**lower_bound < x:
    lower_bound += 1
low = lower_bound - 1
high = lower_bound + 1
# Ricerca per bisezione
ans = (high + low)/2
while abs(2**ans - x) >= epsilon:
    if 2**ans < x:
        low = ans
    else:
        high = ans
     ans = (high + low)/2
print(ans, 'è vicino al logaritmo in base 2 di', x)




#Soluzione
# Trova un limite inferiore per ans
def log(x,base,epsilon):
    if not (base >= 1 and epsilon > 0 and x > 1 ):
        return -1
    lower_bound = 0
    while base**lower_bound < x:
        lower_bound += 1
    low = lower_bound - 1
    high = lower_bound + 1
    #Ricerca per bisezione
    ans = (high + low)/2
    while abs(base**ans - x) >= epsilon:
        if base**ans < x:
            low = ans
        else:
            high = ans
        ans = (high + low)/2
    return ans

print(log(9,3,0.01))
