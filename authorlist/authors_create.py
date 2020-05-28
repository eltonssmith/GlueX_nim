"""
python script to read in the csv file of authors and create a latex file
"""


import subprocess
import numpy
from matplotlib import pyplot as plt
from datetime import datetime, date, time, timedelta
from matplotlib.backends.backend_pdf import PdfPages
import os
from os.path import isfile, join

authors = []
authors_ordered = []
last_name = []

filename = "authors3"

file = open(filename+".txt","r")

colablist = []
nfoot = 0
    
for (ndx,line) in enumerate(file):
    linew = line.split("\t")
    name = "\\author["
    ntoken = 1
#    if ndx > 10:
#       continue
    for token in linew:
        if token[0:1] == " ":
            token = token[1:]
        if (ntoken == 1):
           name += token+"]{"
        elif (ntoken == 2):
           name += token
        elif (ntoken == 3):
           name += "~"+token+"}"
        elif (ntoken == 4 and token[0:1]!="\r"):
           name = name[:-1]
           name += "\\fnref{f"+str(nfoot)+"}}\n\\fntext[f"+str(nfoot)+"]{"+token[:-2]+"}"   # remove carriage return
           nfoot += 1
        print "ntokens=", len(linew), "token=", token
        ntoken += 1
    print name
    colablist.append(name)
    
# remove extra characters from first line
# colablist[0] = colablist[0][3:]

# for name in colablist:
#    print "name=", name
   

fout = open(filename+"_out.tex","w+")
for entry in colablist:
    print entry
    fout.write(entry + "\n")


fout.close()







