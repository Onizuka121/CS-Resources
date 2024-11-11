#! /usr/bin/python3


def merge(vector,lx,mid,rx):
    i = lx
    j = mid+1 
    end = rx
    temp = []
    while i <= mid and j <= end:
        if vector[i] < vector[j]:
            temp.append(vector[i])
            i += 1
        else:
            temp.append(vector[j])
            j += 1
 
    if i <= mid:
        temp[len(temp):] = vector[i:mid+1]
    elif j <= end:
        temp[len(temp):] = vector[j:]
    
    print(temp)

test = [3,4,5,1,1,2]
merge(test,0,2,5)
print(test)

