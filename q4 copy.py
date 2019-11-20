from array import array

colorname = ["Black", "Red", "Maroon", "Yellow"]
colorcode = ["#0000000", "#FF0000", "#800000", "#FFFF00"]
m = ["color_name"]
n = ["color_code"]

for i in range(0, 4):
    d1 = dict(zip(m, colorname[i:i+1]))
    d2 = dict(zip(n, colorcode[i:i+1]))
    print(d1)
    print(d2)
