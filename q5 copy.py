def searchlist(arr):
    item = input("Input item in array:")
    if item.isdigit():
        item = int(item)
    for i in range(len(arr)):
        if arr[i] == item:
            return i
    return 0


array1 = [1, 2, 5, 44, 55, 66]
array2 = 'ghjkl'

print(searchlist(array1))
print(searchlist(array2))

array3 = input("Input sorted array 3: ")
# print(array3)
# print(searchlist(array3))
