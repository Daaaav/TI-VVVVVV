# -T voor listing file
all:
	/home/david/asmtools/*-master-ti84/ti84/spasm -I /home/david/asmtools/*-master-ti84/ti84/ VVVVVV.z80 -T
	/home/david/asmtools/*-master-ti84/ti84/wabbit VVVVVV.bin VVVVVV.8XK
