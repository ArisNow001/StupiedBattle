import time
start_time = time.time()
n = 1_000_000_000
print("Массив был создан")
arr = [0] * n
print("Начал заполнять массив: ", time.time() - start_time)
for i in range(n):
    arr[i] = i
print("Начал считать сумму: ",  time.time() - start_time)
total = 0
for i in range(n):
    total += arr[i]

end_time = time.time()

print("")
print("Количество элементов: ", n)
print("Сумма: ", total)
print("Время работы: ", end_time - start_time)
# By ArisNow0