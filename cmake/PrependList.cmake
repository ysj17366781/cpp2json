function(prepend_list list_name prefix)
	set(original_list ${${list_name}})
	foreach(file ${original_list})
		list(APPEND temp_list "${prefix}/${file}")
	endforeach(file)
	set(${list_name} ${temp_list} PARENT_SCOPE)
	unset(temp_list)
endfunction(prepend_list)
