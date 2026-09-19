import math

alas = 5
tinggi = 12

sisi_miring = math.sqrt(alas**2 + tinggi**2)
keliling = alas + tinggi + sisi_miring
luas = 0.5 * alas * tinggi

print("Diketahui :")
print(f"Alas = {alas} cm")
print(f"Tinggi = {tinggi} cm")
print()
print("Jawab:")
print(f"Sisi A = {sisi_miring:.2f} cm")
print(f"Sisi B = {tinggi} cm")
print(f"Sisi C = {alas} cm")
print(f"Keliling = {keliling:.2f} cm")
print(f"Luas = {luas:.2f} cm")