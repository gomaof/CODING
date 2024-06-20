import pyautogui
import time

pyautogui.PAUSE = 0.5

## pyautogui.press()
##pyautogui.write()
##time.sleep(32)

import pandas as pd
## o correto é import pandas  (o as é para apilidar o comando)

tabela = pd.read_csv("produtos.csv")
print(tabela)