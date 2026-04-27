import sys

def solve():
    # Read all input from standard input and split into a list of words
    # This is efficient for competitive programming platforms like Kattis
    data = sys.stdin.read().split()
    if not data:
        return

    it = iter(data)

    try:
        # a: number of ingredients in first shot
        # b: number of ingredients in second shot
        a = int(next(it))
        b = int(next(it))

        # Calculate total alcohol units for the first shot
        shot1_alcohol = 0
        for _ in range(a):
            v = int(next(it))
            c = int(next(it))
            # v * c gives total alcohol units without needing to divide by 100
            shot1_alcohol += v * c

        # Calculate total alcohol units for the second shot
        shot2_alcohol = 0
        for _ in range(b):
            v = int(next(it))
            c = int(next(it))
            shot2_alcohol += v * c

        # Compare and output result
        if shot1_alcohol == shot2_alcohol:
            print("same")
        else:
            print("different")

    except StopIteration:
        # Handle cases where input might be incomplete
        pass

if __name__ == "__main__":
    solve()