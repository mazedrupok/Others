echo "Enter year"
read year
if (( $(($year % 400))== 0))
   then echo "Leap year"   
else if (( $(($year % 100))== 0))
   then echo "NOT leap year"
else if (( $(($year % 4))== 0))
   then echo "Leap year"
else 
   echo "Not leap year"

fi
fi 
fi
