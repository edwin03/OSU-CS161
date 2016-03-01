from signal import alarm, signal, SIGALRM
import subprocess
from subprocess import Popen
from subprocess import PIPE
import os

score = 0
outFile = open("results.txt", "w")

class Alarm(Exception):
   pass

def alarm_handler(signum, frame):
   raise Alarm

try:
   subprocess.check_call(["g++", "animal.cpp", "-o", "animal"])
except subprocess.CalledProcessError:
   print('\nCompilation encountered errors.\n')


# test 1
try:
   p = Popen(["./animal"], stdin=PIPE, stdout=subprocess.PIPE)

   signal(SIGALRM, alarm_handler)
   alarm(5)

   try:
      str = p.communicate('kitty')[0]
      if str == "Please enter your favorite animal.\nYour favorite animal is the kitty.\n":
         score += 25
      else:
         outFile.write("test1 failed\n")
      alarm(0)
   except Alarm:
      print 'too long'
      p.kill()
except OSError:
   print('\nThe executable was not found.\n')


#test 2
try:
   p = Popen(["./animal"], stdin=PIPE, stdout=subprocess.PIPE)

   alarm(5)

   try:
      str = p.communicate('trilobyte')[0]
      if str == "Please enter your favorite animal.\nYour favorite animal is the trilobyte.\n":
         score += 25
      else:
         outFile.write("test2 failed\n")
      alarm(0)
   except Alarm:
      print 'too long'
      p.kill()
except OSError:
   print('\nThe executable was not found.\n')


outFile.write("\nTotal score: " + repr(score) + "\n")
outFile.close()