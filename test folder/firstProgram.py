
import random

list = ("bread", "phone", "pumpkin", "pencil", "eraser")


hangman_art = {0: ("   ",
                                   "   ",
                                   "   "),
                             1: (" o ",
                                   "   ",
                                   "   "),
                             2: (" o ",
                                   " | ",
                                   "   "),
                             3: (" o ",
                                   "/| ",
                                   "   "),
                             4: (" o ",
                                  "/|\\",
                                   "   "),
                              5: (" o ",
                                   "/|\\",
                                   "/  "),
                              6: (" o ",
                                   "/|\\",
                                   "/ \\")}

def hangman(wrong_guesses):
    for line in hangman_art[wrong_guesses]:
        print(line)

def lines(empty_lines):
    print(" ".join(empty_lines))

def solution(answer):
    print(" ".join(answer))

def main ():
    answer = random.choice(list)
    hint = ["_"] * len(answer)
    wrong_guesses = 0
    guessed_letters = set()
    running = True



    while running:
        hangman(wrong_guesses)
        lines(hint)
        letter = input("Enter a letter:").lower()

        if letter in answer:
            for i in range(len(answer)):
                if answer[i] == letter:
                    hint[hint] = letter
