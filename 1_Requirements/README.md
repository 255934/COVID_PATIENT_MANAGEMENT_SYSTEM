# Requirements
## Introduction
 Soul aim of the project is to digitize the process of maintianing records at an level of indivisual hospitals. Instead of keeping physical records which can be damaged or lost, saving records in a file. Also to keep track of vaccine registration at a given hospital.

## Research
The project is a small component of a large system, this can be integrated with insurance system so that insurance can be marketed to a target audience. 
## Cost and Features
| Time | Software |Feature| Cost | 
| ----- | ----- | ------- | ---------|
| 1997 |athenaHealth| AthenaHealth is a set of fully-featured suites designed for healthcare organizations to improve workflows and increase the quality of care they provide. A number of medical facilities use these to help with scheduling, billing, revenue management and more, but also take advantage of its charting and medical capabilities. It’s cloud-based, offering robust deployment models and enhanced flexibility with mobile support that keeps clinicians agile.It allows clinicians and other health providers of all sizes to focus on patient care and treatment without compromising clinical efficiency or productivity. Patients can communicate with their physicians and take more control over their care, providing clinicians need to get the job done. | 149$per provider per month| 
| 2006| WebPt| WebPT is a cloud-based medical product designed to help doctors and clinicians keep track of patient medical records, store information and share important documentation. Primarily designed for physical therapists, it can deliver documents, translate handwriting, fax, email and share vital medical records from any web-based device. Ideal for businesses of all sizes, it keeps patient records secure and accurate. | $9.99 to $149.00 per month|
| 2011 | Optum| Optum is designed to help health organizations manage their clinical and administrative tasks. With features like scheduling, prescribing, billing and more, it streamlines workflows, provides medical information online, enables greater care and increases overall revenue.It allows healthcare professionals to spend more time focusing on and communicating with patients and less time dealing with time-consuming tasks | Based on customer client base| 




## Defining Our System
   ![Our System](https://github.com/255934/COVID_PATIENT_MANAGEMENT_SYSTEM/blob/main/6_ImagesAndVideos/temp_system_diagram.png)
    
    
    - The user has to login. The access id and password are pre feed into the system.
    - Then he will be able to either register for vaccine or patient records
    - Patient records has features such as add,view,search,update,delete
    - Vaccine registration has features such as make appointement,view, delete
## SWOT ANALYSIS
![SWOT-Analysis](https://github.com/255934/COVID_PATIENT_MANAGEMENT_SYSTEM/blob/main/6_ImagesAndVideos/SWOT.jpg)

# 4W&#39;s and 1&#39;H

## Who:
- Product owner : Client's Hospital
- Developer : L&T Technology Services
- Tester: Milan A (255934)
- Lead / Manager / Architects: Milan A (255934)

## What:
 Covid patient management system is to facilitate the process of storing the data of patient at any given hospital. If records are maintained on paper there is a chnace of it getting lost, so our aim is to digitize that process. Client will also be able veiw all the records, search a patients detail, delete a record. And will also have feature for registration of vaccine .


## When:
The deadline is 16th of april and the project was started on 6th of april. The duration of the project is of 2 weeks roughly.

## Where:

Application will be running on desktops in hospitals of our client to store data locally on their system.

## How:
The application is written in C and no extra dependencies are required on the clients system.

# Detail requirements
## High Level Requirements: 
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | Digitizing Patient Record| Techincal | TBD-S1 | 
| HR02 | Vaccine Registration | Techincal | TBD-S1 |

##  Low level Requirements:
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 |Providing a login system which will give access to only authorised personal| HR01 | TBD-S1 |
| LR01.1 | Adding a new patient details to the record | HR01 | TBD-S1 |
| LR01.2 | Display all record that are present in the file | HR01 | TBD-S1 |
| LR01.3| Update the record of patient if mistake is made, using adharcard number | HR01 | TBD-S1 |
| LR01.4 |Search a paitient using adharcard number | HR01 | TBD-S1 |
| LR01.5 |Delete patient Record from the file | HR01 | TBD-S1 |
| LR02 |The hospital capacity of vacinating people per day should be pre feed| HR02 | TBD-S1 |
| LR02.1 | New registration for vaccine shot after checking if slot is available | HR02 | TBD-S1 |
| LR02.2 | Deleting the vaccine registration for a person using adharcard number| HR02 | TBD-S1 |
| LR02.3 | Veiw all registration for a particular date (dd-mm-yyyy) | HR02 | TBD-S1 |

