## Senior Design - Sphinx

#### Motivation
I was inspired by [my involvement in Delta Sigma Phi][1] to create an application that would help integrate many different aspects of the fraternity.  My time in Delta Sig showed me a lot about managing people, specifically, people that are volunteers.  Members in the fraternity are expected to do a lot of things regularly, and every opportunity to make these responsibilities accomplished more efficiently is a huge benefit.  

Fraternities also have a high turnover for leaders.  Every semester or ever year, a new person takes over a job.  If transitions from one leader to the next are poor, the organization suffers as that person tried to figure out how to do their job.  I hypothesized that some kind of application could be used to simplify some leaders' jobs, as well reduce the effort needed to transition, allowing the organization to operate more smoothly.

Fortunately, I was able to build this application as my senior design project.  The primary difference between this project and other organization management software is how tailored it is to the needs of the organization.  While other products attempt a one-size-fits-many approach, I attempt a one-size-fits-only-one approach.  The requirements for the application are directly drawn from the governing documents of the organization. It is for this reason that the application both highly useful and incapable of being commercialized.  Only near-identical organizations would find it useful.

#### Technologies Used
Sphinx is an ASP.NET MVC 5 (Razor) web application and uses Entity Framework 6 Code-First to implement and query a SQL database.  The project is kept on a private repository on Github, but there are plans to Open Source it soon.  All data transferred from client browsers to the server is encrypted with SSL.  ASP.NET Membership providers are utilized to handle authorization.  

##### Internal vs. External
Authorization features effectively divide the website into external (public) and internal (members only) areas.  The two areas, however, can benefit from the other a great deal, and this is one of the most valuable aspects of the website.  Non-member visitors can learn about the organization from external pages by viewing data on things like community service or finding the person to contact.  Forms on the external website such as scholarship applications or requests for community service can also be received and recorded by leaders in the fraternity.  These are just a few of the possibilities.

When members log in, they then have the ability to record their study hours (if they are required to turn them in), view what classes other members are taking or have taken, record their community service hours, update their contact information, sign up for sober driving, submit incident reports, and see statistics on chapter performance.  Members are classified differently based on their standing in the fraternity and this affects how they see Sphinx.  I.e., Alumni have no need to turn in community service or study hours, nor record what classes they're taking.

#### Launch
Sphinx has been [in use][2] by Delta Sig at Missouri S&T since August 2014.

[1]: /deltasig/
[2]: http://www.deltasig-de.org/
