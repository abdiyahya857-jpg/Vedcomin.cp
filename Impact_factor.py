import sys

def main():
    # Read the first line from stdin, strip any whitespace/newline
    line = sys.stdin.readline().strip()
    if not line:
        return
    
    try:
        # Parse A and I
        a, i = map(int, line.split())
        # Minimum C is A*(I-1) + 1
        result = a * (i - 1) + 1
        print(result)
    except ValueError:
        # If input is not valid, do nothing
        pass

if __name__ == "__main__":
    main()
