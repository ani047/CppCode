nums = int(input("Enter the nums:"))

for temp in range(1,nums+1):
    if(temp>1):
        for i in range(2,temp):
            if(temp%i) == 0:
                break
        else:
            print(temp) 