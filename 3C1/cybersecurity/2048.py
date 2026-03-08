import pwn

url = "2048.challs.olicyber.it"
port = 10007
conn = pwn.remote(url, port)

i=0
while i!=2048:
    bit = conn.recv()

    ultima_riga = bit.split(b"\n")[-1]
    print(f"Ultima riga: {ultima_riga} - Iterazione: {i}")
    operazione, n1, n2 = ultima_riga.strip().split(b" ")

    print(f"Operazione: {operazione}, n1: {n1}, n2: {n2}")

    if operazione == b"SOMMA":
        risultato = int(n1) + int(n2)
    elif operazione == b"DIFFERENZA":
        risultato = int(n1) - int(n2)
    elif operazione == b"PRODOTTO":
        risultato = int(n1) * int(n2)
    elif operazione == b"DIVISIONE_INTERA":
        risultato = int(n1) // int(n2)
    elif operazione == b"POTENZA":
        risultato = int(n1) ** int(n2)

    conn.sendline(str(risultato))
    i+=1

print(conn.recv())