#! /usr/bin/python3


def merge_sort(vector,lx,rx):
    if lx < rx:
        mid = (lx+rx) // 2
        merge_sort(vector,lx,mid)
        merge_sort(vector,mid+1,rx)
        merge(vector,lx,mid,rx)

def merge(vector,lx,mid,rx):
    i = lx
    j = mid + 1 
    end = rx
    temp = []
    while i <= mid and j <= end:
        if vector[i] < vector[j]:
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



test = [3,4,5,1,1,2]
merge_sort(test,0,5)
print(test)


