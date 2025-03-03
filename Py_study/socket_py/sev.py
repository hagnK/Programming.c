import socket
import random

HOST = ""
PORT = 50007

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.bind((HOST, PORT))
    s.listen()
    print("서버가 시작되었습니다")

    conn, addr = s.accept()

    while conn:
        anwer = random.randint(1, 9)
        print(f"서버가 시작되었습니다.{addr} 정답은 {anwer}입니다.")

        while True:
            data = conn.recv(1024).decode('utf-8')
            print(f"{data}")

            try:
                n = int(data)
            except ValueError:
                conn.sendall(f"입력값이 올바르지 않습니다: {data}".encode('utf-8'))
                continue
            if n == 0:
                conn.sendall("종료".encode('utf-8'))
                break
            if n > anwer:
                conn.sendall("너무 높아요". encode('utf-8'))
            elif n < anwer:
                conn.sendall("너무 낮아요".encode('utf-8'))
            else:
                conn.sendall("정답".encode('utf-8'))
                break