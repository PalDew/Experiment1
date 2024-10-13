# This is a function to send email via python 
#
# go over to email account and set up 2factor authentication
# generate app password
# create a funciton to send the mail

# nqom ymdu azra twdw  - app specific code

from email.message import EmailMessage
import ssl
import smtplib

email_sender = 'trytosendmespamnow@gmail.com'
email_password = 'nqom ymdu azra twdw' 
email_receiver = 'palashofbackup@gmail.com'

subject = 'Maths is my fav subject'
body = """
    This is the body of the emil.
    Thanks
    regrads.
    """

em = EmailMessage()
em['From'] = email_sender
em['To'] = email_receiver
em['subject'] = subject
em.set_content(body)

context = ssl.create_default_context()

with smtplib.SMTP_SSL('smtp.gmail.com', 465, context=context) as smtp:
    smtp.login(email_sender, email_password)
    smtp.sendmail(email_sender, email_receiver, em.as_string())



    
