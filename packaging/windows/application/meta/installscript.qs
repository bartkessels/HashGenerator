function Component(){}

Component.prototype.createOperations = function()
{
	component.createOperations();

	if (systemInfo.productType == "windows") {
		component.addOperation("CreateShortcut", "@TargetDir@/hashgen.exe", "@StartMenuDir@/Hash Generator.lnk",
			"workingDirectory=@TargetDir@", "description=Launch Hash Generator");
	}
}