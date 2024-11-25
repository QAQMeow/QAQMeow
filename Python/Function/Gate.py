import numpy as np

#与门
def AND1(x1,x2):
	w1,w2,theta = 0.5,0.5,0.7
	tmp = w1*x1+w2*x2
	if tmp > theta:
		return 1
	elif tmp <= theta:
		return 0
#与门2
def AND(x1,x2):
	x = np.array([x1,x2])
	w = np.array([0.5,0.5])
	b = -0.7
	tmp = np.sum(x*w)+b
	if tmp<= 0:
		return 0
	else:
		return 1
#与非门
def NAND(x1,x2):
	x = np.array([x1,x2])
	w = np.array([-0.5,-0.5])
	b = 0.7
	tmp = np.sum(x*w)+b
	if tmp<= 0:
		return 0
	else:
		return 1
#或门
def OR(x1,x2):
	x = np.array([x1,x2])
	w = np.array([0.5,0.5])
	b = -0.2
	tmp = np.sum(x*w)+b
	if tmp<= 0:
		return 0
	else:
		return 1
#异或门
def XOR(x1,x2):
	s1 = NAND(x1,x2)
	s2 = OR(x1,x2)
	return AND(s1,x2) 
