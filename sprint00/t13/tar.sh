if [ $1 = -c ]
then 
    tar -cvf $2 ${@:3} > /dev/null
elif [ $1 = -e ]
then
    tar -xvf $2 > /dev/null
fi
