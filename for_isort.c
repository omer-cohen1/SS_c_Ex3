# include <stdio.h>

int shift_element(int* arr, int i){

	while (i) {

		i--;
		*(arr+i+1)=*(arr+i);
		
	}

	return 0;
}


int insertion_sort (int* arr,int len){ 		

	//int* p_arr = (arr+1); 
	int i = 1;						
	
	//while (p_arr < (arr+len)) {
	while ((arr+i) < (arr+len)){	

		// if (*(p_arr-1) > *(p_arr))
		// {
		if (*(arr-1+i) > *(arr+i))
		{
		//	int i = 1 , unsorted_element = *(p_arr);
			int j = 1 , unsorted_element = *(arr+i);

			// while ((p_arr-i-1) >= arr && *(p_arr-1-i) > unsorted_element)
			// {
			// 	i++;
			// }

			while ((arr+i-j-1) >= arr && *(arr+i-j-1) > unsorted_element)
			{
				j++;
			}
			
			
			// shift_element((p_arr-i) , i);

			shift_element ((arr+i-j) , j);

			// *(p_arr-i) = unsorted_element;
			*(arr+i-j) = unsorted_element;

		}

		//p_arr++;
		i++;
		
	}

	return 0 ;
}

