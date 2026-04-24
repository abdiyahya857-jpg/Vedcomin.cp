import sys

def main():
    # Read the first line of input
    line = sys.stdin.readline()
    if not line:
        return
    
    # Split the input string into parts and convert them to integers
    # R1 is the first number, S is the mean
    r1, s = map(int, line.split())
    
    # Based on S = (R1 + R2) / 2
    # We solve for R2: R2 = 2*S - R1
    r2 = (2 * s) - r1
    
    # Output the result on a single line
    print(r2)

if __name__ == "__main__":
    main()
