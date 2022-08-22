A=[[1,2,3],
[4,5,6],
[7,8,9]]
B=[[1,2,3],
[4,5,6],
[7,8,9]]
for i in range (len(A)):
    for j in range (len(A[0])):
        print(A[i][j]+B[i][j],end=' ')
        print()
