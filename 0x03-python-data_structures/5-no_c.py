#!/usr/bin/python3
def no_c(my_string):
    longueur = len(my_string)

    j = 0

    new_string = my_string[:]

    pour i en plage(longueur):
        si (my_string[i] == 'c' ou my_string[i] == 'C'):
            new_string = new_string[:(i - j)] + my_string[(i + 1):]
            j += 1

    retour (new_string)
