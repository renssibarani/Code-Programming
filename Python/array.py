x=[0]*10005;
x[1]=1;
for j in range(2,10001):
    x[j]=x[j-1]+x[j-2]
print(x[10])