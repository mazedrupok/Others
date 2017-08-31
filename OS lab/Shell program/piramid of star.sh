n=10
for((i=0;i<=n;i++))
do
for((j=0;j<=n-i;j++))
do
echo -n " "
done
for((j=0;j<(i-1)*2+1;j++))
do
echo -n "*"
done
echo ""
done
