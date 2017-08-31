read row
read col
for ((i = 1; i <= row; i++))
do
   for ((j = 1; j <= col; j++)) 
   do
    echo -ne "*"
   done

   echo ""
done
