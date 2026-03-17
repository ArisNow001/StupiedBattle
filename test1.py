import time

start_time = time.time()
iteration = 1_000_000_000
dop = 1
total = 0
i = 0
while i < iteration:
    total += 1 / dop
    dop += 2
    total -= 1 / dop
    dop += 2
    i += 1

pi = total * 4
end_time = time.time()

print("Количество Итераций: ", iteration)
print("Число Пи: ", pi)
print("Время работы:", end_time - start_time)
# By ArisNow0