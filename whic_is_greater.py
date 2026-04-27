# Read the input line and split it into a list of strings
input_data = input().split()

# Convert the strings to integers
a = int(input_data[0])
b = int(input_data[1])

# Check if the first integer is larger than the second
if a > b:
    print(1)
else:
    print(0)