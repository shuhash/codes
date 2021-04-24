from selenium import webdriver

username='ur username'
password='ur pass'

url= 'https://www.facebook.com/'

driver = webdriver.Chrome('C:\\Users\\Asus\\Documents\\chromedriver_win32\\chromedriver')

driver.get(url)

driver.find_element_by_id('email').send_keys(username)
driver.find_element_by_id('pass').send_keys(password)
button = driver.find_element_by_id('u_0_b')
button.click()
