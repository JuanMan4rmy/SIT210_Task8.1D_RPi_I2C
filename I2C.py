from smbus import SMBus
 
addr = 0x8 # bus address
bus = SMBus(1) 
 
num = 1
 
print ("Enter 1 : LED ON or 0 : LED OFF")
while num == 1:
 
	led_toggle = input("---->   ")
 
	if led_toggle == "1":
		bus.write_byte(addr, 0x1) # On
	elif led_toggle == "0":
		bus.write_byte(addr, 0x0) # Off
	else:
		num = 0
