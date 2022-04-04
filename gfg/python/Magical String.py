value = 97
start_value = ord("a") 
end_value = ord("z") 

s = input("Enter a String: ")

for i in s:
    print(chr(end_value-ord(i) + value ))