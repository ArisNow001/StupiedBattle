import time

start_time = time.time()

iteration = 50_000_000
primes = []

for n in range(2, iteration):
    prime = True
    i = 2
    while i * i <= n:
        if n % i == 0:
            prime = False
            break
        i += 1

    if prime:
        primes.append(n)

print("Простые найдены:", len(primes))


total = 0
for i, p in enumerate(primes):
    total += p
    primes[i] = 0

end_time = time.time()

print("Сумма:", total)
print("Время:", end_time - start_time)
# By ArisNow0