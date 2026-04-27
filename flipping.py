# Read the single line of input containing two three-digit numbers
a, b = input().split()

# Reverse the digits using slicing [::-1]
# For example, "734" becomes "437"
reversed_a = a[::-1]
reversed_b = b[::-1]

# Convert the reversed strings to integers and find the maximum
# Then print the result
print(max(int(reversed_a), int(reversed_b)))