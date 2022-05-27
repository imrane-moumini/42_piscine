#!/bin/bash
ifconfig | grep -e ether | awk '{print $2}'
