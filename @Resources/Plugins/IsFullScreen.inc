[Plugin\IsFullScreen]
Measure = Plugin
Plugin = IsFullScreen
Substitute=".exe":"",".EXE":"","explorer":"Desktop","Explorer":"Desktop","":"Desktop"
ifMatch = Desktop
ifMatchAction = [!SetVariable ViewOnDesktop 1][!WriteKeyValue Variables ViewOnDesktop 1 "#@#Variables\UserVars.inc"]
ifNotMatchAction = [!SetVariable ViewOnDesktop 0][!WriteKeyValue Variables ViewOnDesktop 0 "#@#Variables\UserVars.inc"]

