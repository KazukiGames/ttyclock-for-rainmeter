[Measure\Mouse\Resize\Width]
Measure=Calc
Formula=#Width#
OnChangeAction=[!SetVariable Width [Measure\Mouse\Resize\Width]][!WriteKeyValue Variables Width [Measure\Mouse\Resize\Width] "[#WriteConfigPath]"]
DynamicVariables=1
UpdateDivider=-1

[Measure\Mouse\Resize\Height]
Measure=Calc
Formula=#Height#
OnChangeAction=[!SetVariable Height [Measure\Mouse\Resize\Height]][!WriteKeyValue Variables Height [Measure\Mouse\Resize\Height] "[#WriteConfigPath]"]
DynamicVariables=1
UpdateDivider=-1