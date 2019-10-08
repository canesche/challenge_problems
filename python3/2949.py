n = int(input())

x, h, e, a, m = 0, 0, 0, 0, 0

for i in range(n):
    b = input()
    b = b.split(' ')
    if b[1] == 'X':
        x += 1
    elif b[1] == 'H':
        h += 1
    elif b[1] == 'E':
        e += 1
    elif b[1] == 'A':
        a += 1
    elif b[1] == 'M':
        m += 1

print(x, 'Hobbit(s)')
print(h, 'Humano(s)')
print(e, 'Elfo(s)')
print(a, 'Anao(s)')
print(m, 'Mago(s)')