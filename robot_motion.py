import random
import time

for i in range(10):   # runs only 10 times
    distance = random.randint(1, 10)

    if distance < 3:
        print "Obstacle! Turning..."
    else:
        print "Moving forward..."

    time.sleep(1)

print "Program finished"