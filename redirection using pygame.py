import pygame
import webbrowser

pygame.init()
width=700;
height=800
screen = pygame.display.set_mode( (width, height ) )
pygame.display.set_caption('My image')
redSquare = pygame.image.load("two.jpg").convert()
 
x = 20; 
y = 30; 
screen.blit(redSquare ,  ( x,y)) 
pygame.display.flip() 
 
running = True
while (running):
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        if event.type == pygame.MOUSEBUTTONDOWN:
            x, y = event.pos
            if redSquare.get_rect().collidepoint(x, y):
                print('you have clicked on the image')
                webbrowser.open("www.google.com")

pygame.quit()
