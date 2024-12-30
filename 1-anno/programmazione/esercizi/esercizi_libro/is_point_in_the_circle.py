'''
Scrivere un programma che chieda all'utente le coordinate x ed y di un punto e verifichi se questo sia interno o esterno al cerchio di raggio 10 e centro nell'origine degli assi. Nel primo caso stampi Interno, altrimenti stampi la distanza del punto dalla circonferenza.
Un punto sulla circonferenza è considerato Interno.
'''
x = 12
y = 14
x = abs(x)
y = abs(y)

if x <= 10 and y <= 10:
    print("Interno")
else:
    calc = x**2 + y**2
    #radice quadrata
    ans = 1
    while abs(ans**2 - calc) >= 0.01:
        ans = (ans + calc/ans)/2 
    print(f"distanza dalla circonferenza : {ans-10}")
