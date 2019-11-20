
arr = input("Input: ")
n = []
m = []
arr2=arr
print(arr2)
dict()

for i in arr2:
    if m.count(i) > 0:
        continue
    n.append(arr2.count(i))
    m += i
    position = arr2.index(i)

d = dict(zip(m, n))

print("Output: ")

print(d)
