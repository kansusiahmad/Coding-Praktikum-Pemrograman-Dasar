data = input().split()

a = int(data[0])
b = int(data[1])

if a > b:
    a, b = b, a

if a > b:
    a, b = b, a

print(a, b)