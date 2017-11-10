void InChe(){ 
	for(int y=0; y<h; y++) 
		for(int x=0; x<w; x++) 
			che[y][x] = -1;	 
		che[h-1][w-1] = buf[h-1][w-1]; 
		
	int i=h-1, j=w-1;
	 
	while(i>=0 && j>=0){	
		if(i==0)
		{
			che[i][j] = mat[i][j];
			if(j!=0) j--;
			else
			{
				che[i][j] = mat[i][j];
				j--;
			 } 
		 }	 
		 else
		 	if(j==0)
		 	{
		 		che[i][j] = mat[i][j];
		 		if(i!=0) i--;
		 		else
		 		{
		 			che[i][j] = mat[i][j];
					i--;	
				 }
			 } 
			else
				if(mat[i-1][j]>mat[i][j-1])
				{
					che[i-1][j]=buf[i-1][j];
					i--;
				}
				else
				{
					che[i][j] = mat[i][j];
					j--;
				}			  	
}
