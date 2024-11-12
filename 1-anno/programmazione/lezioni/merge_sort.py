#! /usr/bin/python3


def merge_sort(vector,lx,rx):
    if lx < rx:
        mid = (lx+rx) // 2
        merge_sort(vector,lx,mid)
        merge_sort(vector,mid+1,rx)
        merge(vector,lx,mid,rx,key=helper)

def merge(vector,lx,mid,rx,key=None):
    i = lx
    j = mid + 1
    end = rx
    temp = []
    while i <= mid and j <= end:
        if key(vector[i]) < key(vector[j]):
            temp.append(vector[i])
            i += 1
        else:
            temp.append(vector[j])
            j += 1
    
    while i <= mid:
        temp.append(vector[i])
        i += 1

    while j <= end:
        temp.append(vector[j])
        j += 1
    
    i = lx

    #for e in temp:
    #    vector[i] = e
     #   i += 1

     # oppure utilizzando slicing

    vector[lx:lx+len(temp)] = temp[:]



def helper(item):
    if type(item) in (int,float):
        return (0,item)
    elif type(item) == str:
        return (1,item)



test = [3,4,'programmazione',8,99,0,-1,'ciao']
merge_sort(test,0,len(test)-1)
print(test)


