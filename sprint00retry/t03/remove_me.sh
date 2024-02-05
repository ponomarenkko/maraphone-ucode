for arg in "$@"; do
    if [ -d "$arg" ]; then
        echo "Removing directory: $arg"
        rm -rI "$arg"
    elif [ -f "$arg" ]; then
        echo "Removing file: $arg"
        rm "$arg"
    else
        echo "Error: $arg is not a valid directory or file"
    fi
done
