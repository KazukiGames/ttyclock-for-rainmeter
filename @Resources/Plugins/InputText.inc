[InputTextMeasure]
Measure=Plugin
Plugin=InputText
SolidColor=[#TitleBarColor]
FontColor=[#FontColor]
FontFace=JetBrains Mono
FontSize=(30/3)
StringAlign=Center
X=([[#SelectedInputItem]:X])
Y=([[#SelectedInputItem]:Y]+5)
W=([[#SelectedInputItem]:W])
H=([[#SelectedInputItem]:H]-10)
DynamicVariables=1
AntiAlias=1
DefaultValue=[#[#SelectedInputItem]]
Command1=[!SetVariable [#SelectedInputItem] "$UserInput$"][!WriteKeyValue Variables [#SelectedInputItem] [#[#SelectedInputItem]] "#@#Variables\UserVars.inc"][!Refresh][#Action]
InputNumber=1