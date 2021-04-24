import socket
host=input("url:")
ip=socket.gethostbyname(host)
print(ip)