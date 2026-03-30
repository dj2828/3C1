import pwn

url = "2048.challs.olicyber.it"
port = 10007
conn = pwn.remote(url, port)

for i in range(2048):
    bit = conn.recv().decode()

    ultima_riga = bit.split("\n")[-1]
    operazione, n1, n2 = ultima_riga.strip().split(" ")

    print(f"Operazione {i}: {operazione}, n1: {n1}, n2: {n2}")

    if operazione == "SOMMA":
        risultato = int(n1) + int(n2)
    elif operazione == "DIFFERENZA":
        risultato = int(n1) - int(n2)
    elif operazione == "PRODOTTO":
        risultato = int(n1) * int(n2)
    elif operazione == "DIVISIONE_INTERA":
        risultato = int(n1) // int(n2)
    elif operazione == "POTENZA":
        risultato = int(n1) ** int(n2)

    conn.sendline(str(risultato).encode())

print(conn.recv().decode())