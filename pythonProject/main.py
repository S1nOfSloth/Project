import pygame # импорт библеотеки

clock = pygame.time.Clock() #время игровое для движения объектов

pygame.init()
icon = pygame.image.load('images/icon/qwer.ico')
pygame.display.set_icon(icon) #иконка

screen = pygame.display.set_mode((612, 367)) #размен дисплея
pygame.display.set_caption("VilMax WorldPixel") #название


myfont = pygame.font.Font('fonts/Pixel.ttf', 90) #работа с шрифтом
text_VM = myfont.render(' VilMax', False, 'Black' ) #переменная (надпись,характеристики)
icon_VM = pygame.image.load('images/icon/gaming2.png') #переменная (иконка чобы разместить на экране)
bg = pygame.image.load('images/background/bg1.jpg') #работа с шрифтом

walk_right = [pygame.image.load('images/pl_right/r1.png'),
              pygame.image.load('images/pl_right/r2.png'),
              pygame.image.load('images/pl_right/r3.png'),
              pygame.image.load('images/pl_right/r4.png'),
              ]
walk_left = [pygame.image.load('images/pl_left/l1.png'),
             pygame.image.load('images/pl_left/l2.png'),
             pygame.image.load('images/pl_left/l3.png'),
             pygame.image.load('images/pl_left/l4.png'),
             ]
no_walk = pygame.image.load('images/icon/es.jpg')

player_anim = 0 #начальное положение (анимация перса)
bg1 = 0 #начальное положение (анимация фона)

player_speed = 15 #скорость персонажа
player_x = 285 #начальное положение (движение перса)
player_y = 250

is_jump = False #по умолчанию прыжок
jump_count = 6 #высота прыжка

#bg_sound = pygame.mixer.Sound('sounds/ХОЧУУ.mp3')
#bg_sound.play(loops=0)


running = True
while running: #Открытие приложение(постоянное обновление окна)

    #screen.fill((235, 238, 240)) #цвет фона
    # screen.blit(icon_VM, (430, 225)) #иконка

    screen.blit(bg, (bg1, 0)) #движение фона
    screen.blit(bg, (bg1 + 612, 0)) # движение фона продолжение
    screen.blit(text_VM, (160, 30)) # надпись (главный экран типо)

    keys = pygame.key.get_pressed() #кейс взаимодействия игрока

    if keys[pygame.K_LEFT]: #движение влево, направление перса
        screen.blit(walk_left[player_anim], (player_x, player_y))
    else:
        screen.blit(walk_right[player_anim], (player_x, player_y)) #движение вправо, направление перса


    if keys[pygame.K_LEFT] and player_x > 30: #органичение перемещения
        player_x -= player_speed #смещение перемещения
    elif keys[pygame.K_RIGHT] and player_x < 550: #органичение перемещения
        player_x += player_speed #смещение перемещения


    if not is_jump:
        if keys[pygame.K_SPACE]:
            is_jump = True
    else:
        if jump_count >= -6:
            if jump_count > 0:
                player_y -= (jump_count ** 2) / 2
            else:
                player_y += (jump_count ** 2) / 2
            jump_count -= 1
        else:
            is_jump = False
            jump_count = 6

    if player_anim == 3: #анимация персонажа
        player_anim = 0
    else:
        player_anim += 1

    bg1 -= 2 #скорость перемещения фона, возврат на начальный фон (создание бесконечного цикла)
    if bg1 == -610:
        bg1 = 0

    pygame.display.update()

    for event in pygame.event.get(): #Перебор событий
        if event.type == pygame.QUIT: #Выход из приложения
            running = False
            pygame.quit()
        elif event.type == pygame.KEYDOWN: #изменение фона( недоработан)
            if event.key == pygame.K_l:
                screen.fill((142, 207, 237))

    clock.tick(7) #скорость анимации персонажа
