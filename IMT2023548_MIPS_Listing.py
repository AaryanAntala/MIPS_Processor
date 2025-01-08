#getting the instructions from a text file
user_list = []
f = open("IMT2023548_MIPS_Fibonacci.txt","r")
length = len(f.readlines())
f.close()
f = open("IMT2023548_MIPS_Fibonacci.txt","r")
for i in range(length):
    a = f.readline()
    length = len(a)
    a = a[0:length]
    a = a.split()
    user_list.append(a)
f.close()