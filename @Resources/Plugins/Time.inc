[Plugin\Time]
Measure=Time
Format=[#HourFormat[#HourStatus]]
OnChangeAction=[!UpdateMeter Meter\Time][!Redraw]

[Plugin\Date]
Measure=Time
Format=[#[#FirstPosition]][#FirstDivisor][#[#SecondPosition]][#SecondDivisor][#[#ThirdPosition]][#ThirdDivisor][#[#FourthPosition]]
FormatLocale=Local
Substitute=".":""
OnChangeAction=[!UpdateMeter Meter\Time][!Redraw]
DynamicVariables=1
Disabled=(1-[#DateStatus])