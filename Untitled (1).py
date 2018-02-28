
# coding: utf-8

# In[3]:

print("Enter size of the array: ")
arrSize = int(input()) # считываем количество элементов в списке
max_element, b = 0, 0
print("Enter the array: ")
arr=[] 
for i in range(arrSize):  
    arr.append(int(input()))  # добавляем элемент в конец списка
     
c = max(arr)
print ("Your array:", arr) # 
print ("Max. element:", c)

arr2=[]
for i in range(c):  
    arr2.append(i+1) 
print ("Full array:", arr2)
if len(arr)==len(arr2):
    print ("Your array is full")
else:
    res=[]
    for i in range(c):
        arr.count(i+1) 
        if arr.count(i+1)==0:
            res.append(i+1)
    if len(arr2)>len(arr):
        print ("Array doesn't have:", res)
    else:
        print ("Your array consists of ones!")

