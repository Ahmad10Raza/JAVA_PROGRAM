import numpy as np

Rows = int(input("Give the number of rows:"))
Columns = int(input("Give the number of columns:"))

print("Please write the elements of the matrix in a single line and separated by a space: ")

# User will give the entries in a single line
elements = list(map(int, input().split()))

# Printing the matrix given by the user
matrixx = np.array(elements).reshape(Rows, Columns)
print(matrixx)  
