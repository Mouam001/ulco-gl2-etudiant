import gi
import math
import tictactoe


gi.require_version("Gtk", "3.0")
from gi.repository import Gtk, Gdk

class Gui(Gtk.Window):
    
    def __init__(self):
        super().__init__(title="Tictactoe")
        self.set_size_request (400, 400)

        # main vertical box : drawing area + hbox (label, button1, button2)
        vbox = Gtk.Box(orientation=Gtk.Orientation.VERTICAL)
        self.add(vbox)

        # drawing area
        self.drawingarea = Gtk.DrawingArea()
        self.drawingarea.add_events(Gdk.EventMask.BUTTON_PRESS_MASK)
        self.drawingarea.connect("draw", self.on_draw)
        self.drawingarea.connect("button-press-event", self.on_area_button_press)
        vbox.pack_start(self.drawingarea, True, True, 0)

        # horizontal box
        hbox = Gtk.Box()
        vbox.pack_end(hbox, False, False, 0)
        # label
        self.label = Gtk.Label(label="")
        hbox.pack_start(self.label, True, True, 0)

        #button1
        button1 = Gtk.Button(label="rejouer")
        button1.connect("clicked", self.on_button1_clicked)
        hbox.pack_start(button1, True, True, 0)
        # button2
        button2 = Gtk.Button(label="quitter")
        button2.connect("clicked", self.on_button2_clicked)
        hbox.pack_start(button2, True, True, 0)

        #create game (from the C++ module)
        self.jeu = tictactoe.Jeu
       # self.update_status_label()

    def on_draw(self, widget, context):

        #on_draw
        
        allocation = widget.get_allocation()
        width = allocation.width
        height = allocation.height

    # Calculer la taille de chaque case
        cell_width = width / 3
        cell_height = height / 3

    # Dessiner le fond noir
        context.set_source_rgb(0, 0, 0)
        context.paint()

    # Dessiner les lignes de séparation blanches
        context.set_source_rgb(1, 1, 1)
        context.set_line_width(2)

    # Dessiner les lignes horizontales
        for i in range(1, 3):
            context.move_to(0, i * cell_height)
            context.line_to(width, i * cell_height)
            context.stroke()

        # Dessiner les lignes verticales
        for i in range(1, 3):
            context.move_to(i * cell_width, 0)
            context.line_to(i * cell_width, height)
            context.stroke()


        # Dessiner la diagonale secondaire
        context.move_to(width, 0)
        context.line_to(0, height)
        context.stroke()


    def on_area_button_press(self, widget, event):
        # TODO on_area_button_press
        if event.button == 1:
            print('TODO on_area_button_press')
            self.jeu.jouer(0, 0)
            self.drawingarea.queue_draw()
            

    def on_button1_clicked(self, widget):
        # TODO on_button1_clicked
        print('TODO on_button1_clicked')
        self.jeu = tictactoe.Jeu()
        self.drawingarea.queue_draw()

    def on_button2_clicked(self, widget):
        Gtk.main_quit()

    # def update_status_label(self):
    #     status_text = "Rouge joue" if self.jeu.getStatus() == Status.RougeJoue else "Vert joue"
    #     self.status_label.set_text(status_text)

if __name__ == '__main__':
    gui = Gui()
    gui.connect("destroy", Gtk.main_quit)
    gui.show_all()
    Gtk.main()

