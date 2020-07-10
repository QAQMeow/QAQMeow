# 乘法层
class MulLayer:
	def __init__(self):
		self.x = None
		self.y = None

	def forward(self,x,y):
		self.x = x
		self.y = y
		out  = x*y
		return out

	def backward(self,dout):
		#翻转 x,y
		dx = dout*self.y
		dy = dout*self.x

		return dx,dy

#加法层
class AddLayer:
	def __init__(self):
		pass

	def forward(self,x,y):
		return x+y

	def backward(self,dout):
		dx = dout*1
		dy = dout*1

		return dx,dy