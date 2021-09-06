#!/bin/bash
ifconfig -a | grep "Ethernet" | sed 's/ether//'