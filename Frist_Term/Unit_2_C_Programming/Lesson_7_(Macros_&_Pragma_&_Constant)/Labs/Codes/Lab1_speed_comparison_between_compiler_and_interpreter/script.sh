# i using bash language 
StartTime=`date +%s`
num1=12
echo  "The First  Number : 12"

#read num1
num2=45
echo "The Second Number : 45"

num3=45
num4=45
num5=45
num6=45
num7=45
num8=45
num9=45
num10=45
num11=45
num12=45
num13=45
num14=45
num15=45
 
#read num2
sum=`expr $num1 + $num2` 
echo "The sum of two numbers is : $sum"

EndTime=`date +%s`
echo The Execution time is : `expr $EndTime - $StartTime` Seocnds