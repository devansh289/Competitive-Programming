inputData = input()
inputData1 = input()

if int(inputData) > 0:
	if int(inputData1) > 0:
		quadrant = 1
	else:
		quadrant = 4
else:
	if int(inputData1) > 0:
		quadrant = 2
	else:
		quadrant = 3

print(quadrant)