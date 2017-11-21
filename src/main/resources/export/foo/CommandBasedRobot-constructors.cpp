#foreach ($component in $components)
#if ($helper.exportsTo("Robot", $component))
	#variable($component.name)::getInstance();

#if ($component.getProperty("Send to SmartDashboard").getValue())
    SmartDashboard::PutData(#variable($component.name).get());
#end
#end
#end
