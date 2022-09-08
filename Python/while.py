x=input("masukkan angka yang terakhir")
y=input("masukkan angka dimana anda ingin memberhentikan")
i=0
while i < x:
	print(i)
	if i == y:
		print("Breaking from loop")
		break
	i+=1