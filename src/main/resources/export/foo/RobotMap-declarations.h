#foreach ($component in $components)
#if ($helper.exportsTo("RobotMap", $component))
	#declaration($component) = kID#constructor($component);
#end
#end
