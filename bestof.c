stk1160-i2c.c:
230 /*
231  * functionality(), what da heck is this?
232  */
233 static u32 functionality(struct i2c_adapter *adap)
234 {
235         return I2C_FUNC_SMBUS_EMUL;
236 }
...
280         /* ??? */
281         stk1160_write_reg(dev, STK1160_ASIC + 3,  0x00);