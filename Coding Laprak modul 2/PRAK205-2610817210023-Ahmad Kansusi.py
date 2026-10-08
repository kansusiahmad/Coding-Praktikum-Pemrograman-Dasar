data = []
while len(data) < 2:
    data += input().split()

A = int(data[0])   
B = int(data[1])   

alas = int(round((B * B - A * A) ** 0.5))
tinggi = A
keliling = alas + tinggi + B
luas = alas * tinggi // 2

print("Alas =", alas, "cm")
print("Tinggi =", tinggi, "cm")
print("Keliling =", keliling, "cm")
print("Luas =", luas, "cm^2")