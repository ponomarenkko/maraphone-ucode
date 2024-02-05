touch fire

# Set permissions for the "fire" file
chmod 400 fire

# Set the last-modified date for the "fire" file to August 24, 1991, at midnight
touch -t 199108240000 fire

# Display the directory listing with detailed information and sort by modification time
ls -al 
