[Measure\getX]
Measure=Calc
Formula=[#CURRENTCONFIGX]
OnUpdateAction=[!SetVariable Skin.Main.getX [Measure\getX] "#ROOTCONFIG#\Settings"][!WriteKeyValue Variables Skin.Main.getX [Measure\getX] "#@#Variables\SkinSettingsVars.inc"][!SetOption Measure\getX OnUpdateAction ""]
OnChangeAction=[!SetVariable Skin.Main.getX [Measure\getX] "#ROOTCONFIG#\Settings"][!WriteKeyValue Variables Skin.Main.getX [Measure\getX] "#@#Variables\SkinSettingsVars.inc"][!Redraw]
DynamicVariables=1

[Measure\getY]
Measure=Calc
Formula=[#CURRENTCONFIGY]
OnUpdateAction=[!SetVariable Skin.Main.getY [Measure\getY] "#ROOTCONFIG#\Settings"][!WriteKeyValue Variables Skin.Main.getY [Measure\getY] "#@#Variables\SkinSettingsVars.inc"][!SetOption Measure\getY OnUpdateAction ""]
OnChangeAction=[!SetVariable Skin.Main.getY [Measure\getY] "#ROOTCONFIG#\Settings"][!WriteKeyValue Variables Skin.Main.getY [Measure\getY] "#@#Variables\SkinSettingsVars.inc"][!Redraw]
DynamicVariables=1