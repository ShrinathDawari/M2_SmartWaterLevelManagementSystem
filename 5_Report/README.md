# Requirements
## Introduction



Water level monitoring is the project which will be helpful in preventing water from wasting due to overflow and water shortage in the tank. This will help in industries where everything is automated and where water is used as a main element for production and manufacturing.

## Features

The main features of this project is , it displays the water level in an LCD display thereby informing the user whether the water must be filled in or not in a tank. The flow of the water stops when it is filled fully automatically thereby helping the user. Hence from the above features this project is user friendly.


## SWOT Analysis

Strengths of this project is water resource is conserved and manpower is reduced.
Weakness of the project is since water is used , maintanance is required. 
Opportunities of this project is, the data that is diplayed in output can be transmitted to the user directly.
Threats is the project is with more different versions.


## 4W's and 1'H
# Who:
This project can be used by any organisation where water is utilised.

# What:
The project helps in filling water in tank and cut off it automatically.

# When:
When water reaches minimum level in tank and when the water reaches maximum level.

# Where:
This project is used in organisations where water is main element.

# How:
This project is controled by atmega328.

## Detail requirements
# High Level Requirements:
| ID | DESCRIPTION | Status |
| ------ | ------ | ------ |
| 1 |Display the level of water| IMPLEMENTED |
| 2 | Filling of water when low level | IMPLEMENTED |
| 3 | Stop water filling when level is reached  | IMPLEMENTED |
# Low Level Requirements:
| ID | DESCRIPTION | Status |
| ------ | ------ | ------ |
| 1 |If low level switch open before uplevel the water won't fill in tank| IMPLEMENTED |

# DESIGN
## BEHAVIOURAL
## HIGH LEVEL
![highlevel drawio](https://user-images.githubusercontent.com/94223235/144302633-e58d5546-b874-40e9-b42f-d83cb8024adc.png)
## LOW LEVEL
![lowlevel drawio](https://user-images.githubusercontent.com/94223235/144302721-9871c283-f613-4420-9326-1c9fded741e3.png)
## STRUCTURAL
## HIGH LEVEL
![highlevel1 drawio](https://user-images.githubusercontent.com/94223235/144302851-6986fc90-4e3f-492c-8a3c-6978fd780ca0.png)
## LOW LEVEL
![lowlevel1 drawio](https://user-images.githubusercontent.com/94223235/144303003-932ab45f-60c4-45a1-9a86-2cb763672669.png)

## Test Plan
# High Level Test Plan:
| ID | DESCRIPTION |Exp I/P|	Exp O/P|	Actual O/P| Status |
| ------ | ------ | ------ | ------ | ------ | ------ |
| 1 |Display Level Of Water|	Nil|	0L - 2500L|	700L	|Implemented|
|2|	LED Glows when both Switches Open|	Nil	|LED Glows	|LED Glows|	Implemented|
|3|	LED OFF when both Switches Closed|	Nil	|LED OFF|	LED OFF	|Implemented|
# Low Level Test Plan:
| ID | DESCRIPTION |Exp I/P	|Exp O/P|	Actual O/P|	 Status |
| ------ | ------ | ------ | ------ | ------ | ------ |
| 1 |LED Glows |	Nil|	LED Glows|	LED Glows|	Implemented|
|2|	Level of water varies from 0L - 2500L|	Nil|	varies from 0L - 2500L|	varies from 0L-2500L|	Implemented|





