export BENCHMARK=$1

while IFS= read -r line; do
    # Check if the line contains a row of the table by looking for the pipe "|" character
    if [[ "$line" =~ \[\] ]]; then
        array_name=$(echo "$line" | grep -oP 'int \K[a-zA-Z_]\w*(?=\[\])')

		# Extract the array values
		values=$(echo "$line" | grep -oP '{\K[^}]*(?=})')

		# Split the values into an array
		IFS=',' read -ra arr <<< "$values"

		# Generate int variable assignments
		for i in "${!arr[@]}"; do
			echo "int ${array_name}_${i}_=${arr[$i]};" >> mod-$BENCHMARK
			echo "int ${array_name}_${i}_=${arr[$i]};"
		done

    else
	echo "$line" >> mod-$BENCHMARK
	fi
done < $BENCHMARK

