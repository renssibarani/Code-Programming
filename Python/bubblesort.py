def bubbleSort(nlist):
		for passnum in range(len(nlist)-1,0,-1):
			for i in range(passnum):
				if nlist[i] > nlist[i+1]:
					temp = nlist[i]
					nlist[i] = nlist[i+1]
					nlist[i+1] = temp
					
nlist = [14,34,56,23,89,9,2,4,2]
bubbleSort(nlist)
print(nlist)