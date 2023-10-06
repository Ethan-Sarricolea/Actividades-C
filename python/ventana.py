from tkinter import *
from tkinter import messagebox

def objetos():
    global label,boton
    label = Label(text="Hola mundo")
    boton = Button(text="Presioname",command=comando)

def mostrarObjetos():
    label.pack()
    boton.pack()

def comando():
    messagebox.showinfo("Hola programador","Bienvenido")

def configuraciondeVentana():
    root.geometry("500x300")

root = Tk()
objetos()
mostrarObjetos()
configuraciondeVentana()


root.mainloop()