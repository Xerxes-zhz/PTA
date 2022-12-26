package main

import (
	"fmt"
)

func main(){
	var num int
	var step int  = 0
	fmt.Scanf("%d",&num)

	for num!=1{
		if(num%2==0){
			num = num/2
		}else{
			num = (3*num+1)/2
		}
		step++
	}
	fmt.Println(step)
}

