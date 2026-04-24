# Read the two numbers from a single line of input
a, b = input().split()

# Reverse the strings using slicing and convert them to integers
# For example, "734"[::-1] becomes "437"
rev_a = int(a[::-1])
rev_b = int(b[::-1])

# Compare the reversed numbers and print the larger one
if rev_a > rev_b:
    print(rev_a)
else:
    print(rev_b)
