import sys

dna_string = sys.stdin.read().strip()

if "COV" in dna_string:
    print("Veikur!")
else:
    print("Ekki veikur!")