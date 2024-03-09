
#encoding = utf-8

import sqlite3
import pandas as pd

# 連接資料庫
conn = sqlite3.connect('./66中度損壞.sqlite')
cursor = conn.cursor()

# 獲取舊表的資訊
cursor.execute("PRAGMA table_info(sch66dmgs3)")
old_table_info = cursor.fetchall()
#轉成dataframe
old_table_info = pd.DataFrame(old_table_info, columns=['cid', 'name', 'type', 'notnull', 'dflt_value', 'pk'])
#dataframe轉成list
old_column_name = old_table_info['name'].tolist()




# 創建新表並指定新欄位順序
new_column_order1 = ['new_column1', 'new_column2', 'new_column3', 'new_column4']
new_column_order2 = ['new_column5', 'new_column6', 'new_column7', 'new_column8']
# print(f"CREATE TABLE new_table ({' , '.join(new_column_order)})")

#如果新表已經存在，先刪除
cursor.execute("DROP TABLE IF EXISTS new_table")
create_table_sql = f"CREATE TABLE new_table ({', '.join(new_column_order1)+', '}{' , '.join(old_column_name)+', '}{' , '.join(new_column_order2)}) "
cursor.execute(create_table_sql)



# 將舊表的資料插入新表
select_sql = f"SELECT {', '.join(old_column_name )} FROM sch66dmgs3"
insert_sql = f"INSERT INTO new_table ({', '.join(old_column_name)}) {select_sql}"
cursor.execute(insert_sql)





# 刪除舊表
conn.commit()
conn.close()

print("finished")


