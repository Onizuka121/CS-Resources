'''
L'algoritmo di Gauss-Legendre per l'approssimazione di PI (Pi-greco) è così definito:
- Valori iniziali, passo 0: a0 = 1, b0 = 1/2**0.5 (radice quadrata di 1/2), p0 = 1, q0 = 1/4
- Dati i valori an, bn, pn e qn calcolati al passo n,  al passo n+1:
    an+1 = (an+bn)/2
    bn+1 = (an*bn)**0.5
    pn+1 = 2*pn
    qn+1 = qn-pn*(an-an+1)**2 

L'approssimazione di Pi-greco al passo n è data da (an+bn)**2/4*qn.
Scrivere un programma che stampi le prime 10 approssimazioni di PI

'''

a = 1
b = 1/(2**0.5)
p = 1
q = 1/4

for i in range(10):
    a_new = (a+b)/2
    b = (a*b)**0.5
    q = q - p*(a - a_new)**2
    p = p*2
    a = a_new
    print(f"app. n = {i}", (((a+b)**2))/(4*q))










