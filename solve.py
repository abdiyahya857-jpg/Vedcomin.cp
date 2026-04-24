import sys

def solve():
    input_data = sys.stdin.read().split()
    
    if not input_data:
        return

    xh = int(input_data[0])
    yh = int(input_data[1])
    xp = int(input_data[2])
    yp = int(input_data[3])

    if xh == xp or yh == yp:
        print(1)
    else:
        print(2)

if __name__ == "__main__":
    solve()
