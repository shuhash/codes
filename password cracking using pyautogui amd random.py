import random
import pyautogui

character = "0123456789abcdefghijklmnopqrstuvwxyz"
character_list = list(character)

password = pyautogui.password("Enter the password here")

guesspassword=""

while (guesspassword!=password):
    guesspassword = random.choices(character_list, k = len(password))
    print("Guessing " + str(guesspassword))
    if(guesspassword == list(password)):
        print("Your actual password is : " +str(guesspassword))
        break
