def diagonalDifference(arr):
	n = len(arr)
	dL = 0
	dR = 0

	for i in range(0, n):
		dL += arr[i][i]
		dR += arr[n-i-1][i]

	result = abs(dL - dR)
	return result

a = []
n = int(input())
for i in range(0,n):
	a.append([int(j) for j in input().split()])

print(diagonalDifference(a))