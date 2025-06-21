def reconstruct_permutation():
    import sys
    input_data = sys.stdin.read().split()
    
    test_case_count = int(input_data[0])
    data_index = 1
    test_results = []
    
    for _ in range(test_case_count):
        grid_dimension = int(input_data[data_index])
        data_index += 1
        
        grid_values = []
        for row_index in range(grid_dimension):
            row_values = list(map(int, input_data[data_index:data_index + grid_dimension]))
            grid_values.append(row_values)
            data_index += grid_dimension
        
        value_positions_map = {}
        for row_index, row in enumerate(grid_values):
            for col_index, value in enumerate(row):
                if value not in value_positions_map:
                    value_positions_map[value] = []
                value_positions_map[value].append(row_index + col_index + 2)
        
        permutation_sequence = [0] * (2 * grid_dimension)
        used_indices_set = set()
        
        sorted_values = sorted(value_positions_map.keys())
        for value in sorted_values:
            for position in value_positions_map[value]:
                if position not in used_indices_set:
                    permutation_sequence[position - 2] = value
                    used_indices_set.add(position)
                    break
        
        test_results.append(" ".join(map(str, permutation_sequence)))
    
    sys.stdout.write("\n".join(test_results) + "\n")

reconstruct_permutation()
