
#가장 기본적인 dp알고리즘

n = int(input())

dplist = [0]*5001
dplist[0] = -1
dplist[1] = -1
dplist[2] = -1
dplist[3] = 1
dplist[4] = -1
dplist[5] = 1

for i in range(6, n+1):
    if dplist[i-3] != -1 and dplist[i-5] != -1:
        dplist[i] = min(dplist[i-3]+1, dplist[i-5]+1)
    elif dplist[i-3] != -1:
        dplist[i] = dplist[i-3]+1
    elif dplist[i-5] != -1:
        dplist[i] = dplist[i-5]+1
    else:
        dplist[i] = -1

print(dplist[n])

