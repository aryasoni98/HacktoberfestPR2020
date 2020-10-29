X = [[5,2,0],
    [5 ,0,1],
    [1,4,7]]

Y = [[0,5,0,6],
    [7,8,8,6],
    [7,3,4,8]]

result = [[0,0,0,0],
         [0,0,0,0],
         [0,0,0,0]]

for i in range(len(X)):
   for j in range(len(Y[0])):
       for k in range(len(Y)):
           result[i][j] += X[i][k] * Y[k][j]

for r in result:
   print(r)
