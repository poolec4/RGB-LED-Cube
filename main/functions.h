void setState(int row, int column, int layer, int r, int g, int b)
{
	switch(layer)
	{
		case 0:
			layer0_state[row][column][0] = r;
			layer0_state[row][column][1] = g;
			layer0_state[row][column][2] = b;
			break;
		case 1:
			layer1_state[row][column][0] = r;
			layer1_state[row][column][1] = g;
			layer1_state[row][column][2] = b;
			break;
		case 2:
			layer2_state[row][column][0] = r;
			layer2_state[row][column][1] = g;
			layer2_state[row][column][2] = b;
			break;
		case 3:
			layer3_state[row][column][0] = r;
			layer3_state[row][column][1] = g;
			layer3_state[row][column][2] = b;
			break;
	}
}

void updateCube(void)
{
	//write layer 0 leds
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            Tlc.set(rMap[i][j],layer0_state[i][j][0]);
            Tlc.set(gMap[i][j],layer0_state[i][j][1]);
            Tlc.set(bMap[i][j],layer0_state[i][j][2]);
        }
    }
    //layer 0 on
    digitalWrite(l_0, LOW);
    digitalWrite(l_1, HIGH);
    digitalWrite(l_2, HIGH);
    digitalWrite(l_3, HIGH);

    Tlc.update();
    delay(DELAY);

    //write layer 1 leds
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            Tlc.set(rMap[i][j],layer1_state[i][j][0]);
            Tlc.set(gMap[i][j],layer1_state[i][j][1]);
            Tlc.set(bMap[i][j],layer1_state[i][j][2]);
        }
    }
    //layer 1 on
    digitalWrite(l_1, LOW);
    digitalWrite(l_0, HIGH);
    digitalWrite(l_2, HIGH);
    digitalWrite(l_3, HIGH);

    Tlc.update();
    delay(DELAY);


    //write layer 2 leds
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            Tlc.set(rMap[i][j],layer2_state[i][j][0]);
            Tlc.set(gMap[i][j],layer2_state[i][j][1]);
            Tlc.set(bMap[i][j],layer2_state[i][j][2]);
        }
    }
    //layer 2 on
    digitalWrite(l_2, LOW);
    digitalWrite(l_0, HIGH);
    digitalWrite(l_1, HIGH);
    digitalWrite(l_3, HIGH);

    Tlc.update();
    delay(DELAY);

    //write layer 3 leds
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            Tlc.set(rMap[i][j],layer3_state[i][j][0]);
            Tlc.set(gMap[i][j],layer3_state[i][j][1]);
            Tlc.set(bMap[i][j],layer3_state[i][j][2]);
        }
    }
    //layer 3 on
    digitalWrite(l_3, LOW);
    digitalWrite(l_0, HIGH);
    digitalWrite(l_1, HIGH);
    digitalWrite(l_2, HIGH);

    Tlc.update();
    delay(DELAY);
}

