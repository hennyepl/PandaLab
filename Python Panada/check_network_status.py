# python script to check network status
import os
import time
import subprocess
import sys  # for exit()
import socket
import fcntl
import struct
import re
import requests
import json
import urllib3

def check_network_status():
    print("Checking network status...")
    
    urllib3.disable_warnings(urllib3.exceptions.InsecureRequestWarning)
    # urllib3.disable_warnings(urllib3.exceptions.InsecureRequestWarning)
    # urllib3.disable_warnings(urllib3.exceptions.InsecureRequestWarning)

    # Check if user is root
    if os.getuid() != 0:
        print("You need to have root privileges to run this script.")
        sys.exit(1)


    # Check if network is up
    try:
        response = requests.get('https://www.google.com', verify=False)
        print("Network is up")
    except:
        print("Network is down")
        sys.exit(1)

def print_status():
    print("Checking network status...")
    # Check if user is root
    if os.getuid() != 0:
        print("You need to have root privileges to run this script.")
        sys.exit(1)

    # Check if network is up
    try:
        response = requests.get('https://www.google.com', verify=False)
        print("Network is up")
    except:
        print("Network is down")
        sys.exit(1)

        

