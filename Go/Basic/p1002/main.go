package main

import (
	"fmt"
	"strconv"
)

func transfer_num_to_chinese(num string) []string{
	var array = [10]string{"ling","yi","er","san","si","wu","liu","qi","ba","jiu"}
	var result [10000]string
	
	for i:=0; i<len(num); i++{
		result[i] = array[int(num[i]-'0')]
	}
	return result[:len(num)]

}

func main(){
	var num string
	var sum int = 0 
	fmt.Scanf("%s",&num)
	for i:=0; i<len(num); i++{
		sum += int(num[i] - '0')
	}
	result := transfer_num_to_chinese(strconv.Itoa(sum))
	for i:=0; i<len(result)-1; i++{
		fmt.Printf("%s ",result[i])
	}
	fmt.Printf("%s",result[len(result)-1])
}