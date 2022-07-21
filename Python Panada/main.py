# This Program is a simple basic calculator with GUI

# Importing the necessary libraries
from os import getuid
import tkinter as tk
from tkinter import ttk 
from tkinter import messagebox

def btn_click(item):
    global expression
    expression = expression + str(item)
    input_text.set(expression)

def btn_click_equal():
    global expression
    result = str(eval(expression))
    input_text.set(result)
    expression = ""

def btn_clear():
    global expression
    expression = ""
    input_text.set("")

# driver code
# creating a GUI window
# root is the name of the window
# geometry is the size of the window
# title is the title of the window
# resizable is the window is resizable or not
# bg is the background color of the window
# the window is created

if __name__ == "__main__":
    gui = tk.Tk()

    gui.geometry("265x300")
    gui.title("Panda Calculator")
    gui.background = "white"
    gui.resizable(0,0)

    # creating a text entry box
    # insert is the text in the text entry box
    # font is the font of the text
    # bd is the border of the text entry box
    # bg is the background color of the text entry box
    # width is the width of the text entry box

    input_text = tk.StringVar()
    input_text.set("")
    input_field = ttk.Entry(gui, textvariable=input_text, width=35)
    input_field.grid(row=0, columnspan=4)

    # creating a button

    button_1 = ttk.Button(gui, text="1", command=lambda: btn_click(1))
    button_1.grid(row=3, column=0)

    button_2 = ttk.Button(gui, text="2", command=lambda: btn_click(2))
    button_2.grid(row=3, column=1)

    button_3 = ttk.Button(gui, text="3", command=lambda: btn_click(3))
    button_3.grid(row=3, column=2)

    button_4 = ttk.Button(gui, text="4", command=lambda: btn_click(4))
    button_4.grid(row=2, column=0)

    button_5 = ttk.Button(gui, text="5", command=lambda: btn_click(5))
    button_5.grid(row=2, column=1)

    button_6 = ttk.Button(gui, text="6", command=lambda: btn_click(6))
    button_6.grid(row=2, column=2)

    button_7 = ttk.Button(gui, text="7", command=lambda: btn_click(7))
    button_7.grid(row=1, column=0)

    button_8 = ttk.Button(gui, text="8", command=lambda: btn_click(8))
    button_8.grid(row=1, column=1)

    button_9 = ttk.Button(gui, text="9", command=lambda: btn_click(9))
    button_9.grid(row=1, column=2)

    button_0 = ttk.Button(gui, text="0", command=lambda: btn_click(0))
    button_0.grid(row=4, column=0)

    button_add = ttk.Button(gui, text="+", command=lambda: btn_click("+"))
    button_add.grid(row=4, column=1)

    button_sub = ttk.Button(gui, text="-", command=lambda: btn_click("-"))
    button_sub.grid(row=4, column=2)

    button_mul = ttk.Button(gui, text="*", command=lambda: btn_click("*"))
    button_mul.grid(row=3, column=3)

    button_div = ttk.Button(gui, text="/", command=lambda: btn_click("/"))
    button_div.grid(row=4, column=3)

    button_equal = ttk.Button(gui, text="=", command=btn_click_equal)
    button_equal.grid(row=5, columnspan=4)

    button_clear = ttk.Button(gui, text="Clear", command=btn_clear)
    button_clear.grid(row=5, column=0)

    gui.mainloop()
    # end of program                    
