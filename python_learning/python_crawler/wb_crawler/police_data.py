
#encoding: utf-8

import time
from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By
from bs4 import BeautifulSoup
import pandas as pd



url = 'https://rtr.pbs.gov.tw/pbsmgt/RoadAll.html'  
options = webdriver.ChromeOptions()
options.add_argument("--disable-notifications")
 
service = Service(executable_path='./chromedriver.exe')
driver = webdriver.Chrome(service=service, options=options)
driver.get(url)
driver.implicitly_wait(6)

# result = BeautifulSoup(driver.page_source, 'html.parser')
# print(result)


data = []
df = pd.DataFrame(data, columns=['Type','spot','event_description','date','time','source'])

# title = driver.find_elements(By.CLASS_NAME,'titleText')
#find by xpath
title = driver.find_element(By.XPATH,'//*[@id="myTable"]')
title = title.find_elements(By.TAG_NAME,'tr')

# for tr in title:
#     print(tr.text)

for i in range(5):
    print(title[i].text.split('\n'))






    








driver.quit()





