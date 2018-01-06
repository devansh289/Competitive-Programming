inputData0 = input()
inputData1 = input()

shiftySum = int(inputData0)

for i in range(0,int(inputData1)):
	shiftySum = shiftySum + int(inputData0) * (10**(i+1))

print (shiftySum)
