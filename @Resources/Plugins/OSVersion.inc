[Measure\OSVersions]
Measure=SysInfo
SysInfoType=OS_VERSION
RegExpSubstitute=1
Substitute="Windows ":"","\.*":""
OnUpdateAction=[!SetVariable WindowsVersion [Measure\OSVersions]][!WriteKeyValue Variables WindowsVersion [Measure\OSVersions] "#@#Variables\UserVars.inc"][!SetOption Measure\OSVersions OnUpdateAction ""]
UpdateDivider=-1

[Measure\OSVersions\WriteConfig]
Measure=Calc
ifCondition=([#WindowsVersion] < 11)
ifTrueAction=[!SetVariable CornerStatus 0][!WriteKeyValue Variables CornerStatus 0 "#@#Variables\UserVars.inc"]
ifCondition2=([#WindowsVersion] < 10)
ifTrueAction2=[!SetVariable AcrylicStatus 0][!WriteKeyValue Variables AcrylicStatus 0 "#@#Variables\UserVars.inc"]
DynamicVariables=1
UpdateDivider=-1