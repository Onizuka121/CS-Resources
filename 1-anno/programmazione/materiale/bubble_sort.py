'''
Implementazione del BubbleSort: 
Un algoritmo di ordinamento 
dove ogni coppia di elementi adiacenti viene comparata 
e vengono invertiti tra di loro se e solo se sono nell'ordine sbagliato.

L'algoritmo continua a RI-ESEGUIRE questi passaggi su tutta la lista fino 
a che non vengono eseguiti piu degli scambi ( una situzione che indica che la lista non è piu ordinata )

Il nome "bubble" sta proprio a evidenziare che gli elementi risalgono 
la lista fino a dove devono stare.

esempio:
a = [6,2,9,0,1]
- 6 verra confontato con 2 ( siccome vogliamo ordinare in ordine crescente ) dobbiamo invertirli 
a = [2,6,9,0,1]
- ora tocca ancora a 6 perche stiamo andano avanti come indici
  6 < 9 quindi rimane cosi 
a = [2,6,9,0,1]
- ora tocca a 9 , 9 > 0 e quindi invertire
a = [2,6,0,9,1]
- 9 > 1 e quindi invertire 
a = [2,6,0,1,9]
- come possiamo notare alla fine della prima iterazione : 
* sono stati fatti almeno uno scambio ( invertire )
* il massimo dei numeri è alla fine della lista 
=> quindi possiamo ottimizzare qualcosa : 
    siccome alla fine di una iterazione, tutti gli elementi si trovano a valle 
    e si puo evitare di trattarli dopo ( nell'iterazione successiva )

'''



def bubble_sort(a):
    scambio = True
    n = len(a)-1;
    while scambio:
        scambio = False
        for i in range(n):
            if a[i+1] < a[i]:
                a[i+1],a[i] = a[i],a[i+1]
                scambio = True 
        n -= 1


a = [2,1,9,3,2,0,-1,5,3,2,76,23,90,20]
bubble_sort(a)
print(a)
