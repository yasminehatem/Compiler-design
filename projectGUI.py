import sys
import os
from PyQt4 import QtGui,QtCore
command='flex lexical.l'
os.system(command)

command2='yacc -d yacccode.y'
os.system(command2)

command3='gcc lex.yy.c y.tab.c -lm -ll'
os.system(command3)

class Window(QtGui.QMainWindow) :

 def __init__(self):
    super(Window, self).__init__()
    self.container = QtGui.QWidget()
    self.setCentralWidget(self.container)
    self.container_lay = QtGui.QVBoxLayout()
    self.container.setLayout(self.container_lay) 
    self.setGeometry(50,30,1000,550)
    self.setWindowTitle("Compilers")
    self.setStyleSheet("background-color:black;")
    self.container=QtGui.QWidget()
    openFile=QtGui.QAction("&Open file",self)
    openFile.setStatusTip('Open file')
    openFile.triggered.connect(self.file_open)    
    self.bbtn = QtGui.QPushButton("                                                                                                                               Show output")
    self.container_lay.addWidget(self.bbtn)
    self.bbtn.clicked.connect(self.on_click)
    self.bbtn.setStyleSheet("font: 15pt bold; color: white;")
    self.bbtn.resize(10,10)
    self.container_lay.addWidget(QtGui.QLabel())
    self.lab = QtGui.QLabel()
    self.lab.move(375,200)
    self.lab.resize(200,200)
    self.container_lay.addWidget(self.lab)
    self.lab.setStyleSheet("font: 10pt bold castellar; color: white;")
    btn= QtGui.QPushButton("Import File",self)
    btn.clicked.connect(self.file_open)
    btn.resize(100,45)
    btn.move(495,125)
    btn.setStyleSheet('QPushButton {background-color: maroon; color: white;}')
    l1=QtGui.QLabel(self)
    l1.setText("Click to choose a file:")
    l1.setStyleSheet("font: 15pt bold; color: white;")
    l1.move(250,105)    
    l1.resize(220,90)   
    self.show()

 def on_click(self):
     outputfilename="/home/farah/Downloads/final233/final2/output.txt"
     with open(outputfilename,'r') as f: 
       self.lab.setText(f.read())
     self.show()

 def file_open(self):
      name=QtGui.QFileDialog.getOpenFileName(self,'open file')
      file=open(name,'r')
      filenameEXT= os.path.basename(unicode(name))
      filename= os.path.splitext(filenameEXT)[0]
      commandfile='<'+filename+'.in ./a.out'
      os.system(commandfile)
      

def run():
    app=QtGui.QApplication(sys.argv)
    GUI=Window()
    GUI.show()
    app.exec_()

run()



commandfile='<'+filename+'.in ./a.out'

