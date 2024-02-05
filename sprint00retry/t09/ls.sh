for file in "$1"/*; do
    command_name=$(basename "$file")
    size=$(du -sh "$file" | awk '{print $1}')
     echo "${command_name} ${size}"
done | grep -vE '^(.|..)$'

