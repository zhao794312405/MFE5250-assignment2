

result = []
arr = range(100, 401)


def even_num(num):
    hundred = num // 100 % 10
    ten = num // 10 % 10
    one = num // 1 % 10
    if not (hundred % 2 or ten % 2 or one % 2):
        return 1


for i in range(len(arr)):
    if even_num(arr[i]):
        result.append(arr[i])

print("Output: ", " , ".join(str(i) for i in result))
