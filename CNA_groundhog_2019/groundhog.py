#! /usr/bin/python3   

from sys import argv
from math import *
import sys
import statistics
import fileinput

last_val = 0
nswitches = 0
wlist = list()
glist = list()

class groundhog():

    def main_loop():
        numlist = list()
        for line in sys.stdin:
            line = line.strip()
            try:
                line = float(line)
            except:
                if (line == "STOP"):
                    groundhog.print_global_tnd(numlist)
                    sys.exit(0)
                print("Bad Value. Not a Float.")
                sys.exit(84)
            numlist.append(line)
            groundhog.checker_data(numlist)

    def print_global_tnd(numlist):
        global nswitches
        if (len(numlist) >= int(sys.argv[1])):
            if (nswitches != 0):
                if (nswitches > 1):
                    print("Global tendency switched " + str(nswitches) + " times")
                    print(str(nswitches) + " weirdest values are " + str(groundhog.wlist(numlist, nswitches)))
                if (nswitches == 1):
                    print("Global tendency switched 1 time")
                    print("The weirdest value is " + groundhog.wlist(numlist, 1))

    def checker_data(numlist):
        global last_val
        global glist
        global nswitches
        len_list = len(numlist)
        if (len_list < (int(sys.argv[1]))):
            print("g=nan\tr=nan%\ts=nan")
        elif (len_list < int(sys.argv[1]) + 1):
            print("g=nan\tr=nan%%\ts=%.2f" % groundhog.s_function(numlist))
        else:
            last_r = groundhog.r_function(numlist)
            print("g=%.2f\tr=%d%%\ts=%.2f" % (groundhog.g_function(numlist), groundhog.r_function(numlist), groundhog.s_function(numlist)), end='')
            glist.append(last_r)
            if (len(glist) >= 2):
                last_r = glist[-1]
                if (glist[-2] - last_r >= 14 or last_r - glist[-2] >= 14):
                    wlist.append(numlist[-1])
                if (last_r >= 0 and last_val == 0):
                    last_val = 1
                    print('\n', end='')
                elif (last_r < 0 and last_val == 0):
                    last_val = -1
                    print('\n', end='')
                elif (last_r >= 0 and last_val == -1):
                    last_val = 0
                    print("\t\ta switch occurs")
                    nswitches += 1
                elif (last_r < 0 and last_val == 1):
                    last_val = 0
                    print("\t\ta switch occurs")
                    nswitches += 1
                else:
                    print('')
            else:
                print('')
    
    def s_function(numlist):
        a = 0
        diff = 0
        cal = 0
        count = 0
        list_vl = list()
        for element in numlist:
            diff += 1
        imported_val = diff - int(sys.argv[1]) + 1
        avg = groundhog.average(imported_val, diff, numlist)
        while (a != diff - imported_val + 1):
            cal = (numlist[a + imported_val - 1] - avg)**2
            list_vl.append(cal)
            a += 1
        count = sqrt((sum(list_vl)) / (len(list_vl)))
        return (count)

    def g_function(numlist):
        temp = 0
        a = 1
        avg_list = list()
        numlist.reverse()
        while (a != int(sys.argv[1]) + 1):
            b = (numlist[a] - numlist[a - 1])
            b = round(b, 2)
            avg_list.append(b)
            a += 1
        while (a > 1):
            temp += avg_list[-1]
            avg_list.pop()
            a -= 1
        numlist.reverse()
        temp /= int(sys.argv[1])
        if (temp >= 0):
            temp = 0
        return float(-1 * temp)

    def r_function(numlist):
        temp = 100 * (numlist[-1] - numlist[-1 - int(sys.argv[1])]) / numlist[-1 - int(sys.argv[1])]
        temp = round(temp, 0)
        return (temp)

    def average(Index_Start, Index_Stop, numlist):
        i = Index_Start - 1
        nlist = list()
        while (i != Index_Stop):
            nlist.append(numlist[i])
            i += 1
        return (sum(nlist) / len(nlist))

    def wlist(numlist, nswitches):
        while (len(wlist) != nswitches):
            wlist.pop()
        return wlist

    def help():
        print("SYNOPSIS\n    ./groundhog period\n\nDESCRIPTION\n    period\t  the number of days defining a period")

    def main(arg):
        if (len(sys.argv) != 2):
            print("Only 2 arguments required ! Try : ./groundhog -h")
            sys.exit(84)
        if (sys.argv[1] == "-h"):
            groundhog.help()
            sys.exit(0)
        if (int(sys.argv[1]) <= 0):
            print("Error. Period must be a positiv number.")
            sys.exit(84)
        groundhog.main_loop()

if __name__ == '__main__':
    groundhog().main()