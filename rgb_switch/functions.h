void setLED(int row, int column, int layer, int r, int g, int b)
{
	
	Tlc.set(rMap[row][column],r);
	Tlc.set(gMap[row][column],g);
	Tlc.set(bMap[row][column],b);


}

