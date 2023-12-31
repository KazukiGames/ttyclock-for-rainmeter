[Plugin\Mouse\Resize\Right]
Measure=Plugin
Plugin=Mouse
LeftMouseDragAction=[!SetOption Measure\Mouse\Resize\Width Formula "clamp(($MouseX$+[#WH]),[#MinWidth],([#SCREENAREAWIDTH]))"][!UpdateMeasure Measure\Mouse\Resize\Width][!UpdateMeterGroup [#UpdateConfigName]][!Redraw]
LeftMouseUpAction=[!CommandMeasure Plugin\Mouse\Resize\Right "Stop"]
RequireDragging=1
DynamicVariables=1

[Plugin\Mouse\Resize\Bottom]
Measure=Plugin
Plugin=Mouse
LeftMouseDragAction=[!SetOption Measure\Mouse\Resize\Height Formula "clamp(($MouseY$+[#HH]),[#MinHeight],([#SCREENAREAHEIGHT]))"][!UpdateMeasure Measure\Mouse\Resize\Height][!UpdateMeterGroup [#UpdateConfigName]][!Redraw]
LeftMouseUpAction=[!CommandMeasure Plugin\Mouse\Resize\Bottom "Stop"]
RequireDragging=1
DynamicVariables=1

[Plugin\Mouse\Resize\Corner]
Measure=Plugin
Plugin=Mouse
LeftMouseDragAction=[!SetOption Measure\Mouse\Resize\Width Formula "clamp(($MouseX$+[#WH]),[#MinWidth],([#SCREENAREAWIDTH]))"][!SetOption Measure\Mouse\Resize\Height Formula "clamp(($MouseY$+[#HH]),[#MinHeight],([#SCREENAREAHEIGHT]))"][!UpdateMeasure Measure\Mouse\Resize\Width][!UpdateMeasure Measure\Mouse\Resize\Height][!UpdateMeterGroup [#UpdateConfigName]][!Redraw]
LeftMouseUpAction=[!CommandMeasure Plugin\Mouse\Resize\Corner "Stop"]
RequireDragging=1
DynamicVariables=1