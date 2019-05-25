#!/usr/bin/env pthon3
import sys
from datetime import date
from xlrd import open_workbook, xldate_as_tuple
from xlwt import Workbook
input_file = sys.argv[1]
output_file = sys.argv[2]
output_workbook = Workbook()                                    #实例化Workbook对象
output_worksheet = output_workbook.add_sheet('mar_2013_output')#为输出工作簿添加一个工作表，名为'mar_2013_output'
sale_amount_column_index = 3                                    #销售额在表中的索引为3
with open_workbook(input_file) as workbook:
	worksheet = workbook.sheet_by_name('march_2013')            #使用workbook对象的sheet_by_name()函数应用名称'march_2013'
	data = []                                                   #防止写入文件时列与列之间存在缺口
	header = worksheet.row_values(0)                            #提取标题行的值
	data.append(header)                                         #将标题行存入列表
	for row_index in range(1,worksheet.nrows):                  #行遍历
			row_list = []
			sale_amount = worksheet.cell_value(row_index, sale_amount_column_index)#销售额对应列的每行单元格中的值
			if sale_amount > 2000.0:                            #符合条件进行处理
				for column_index in range(worksheet.ncols):     #对符合条件的行，遍历它的列，将符合条件的行的每个单元格的值和类型保存下来
					cell_value = worksheet.cell_value(row_index,column_index)
					cell_type = worksheet.cell_type(row_index, column_index)
					if cell_type == 3:                          #如果是日期类型，就进行格式化
						date_cell = xldate_as_tuple(cell_value,workbook.datemode)
						date_cell = date(*date_cell[0:3]).strftime('%m/%d/%Y')
						row_list.append(date_cell)
					else:
						row_list.append(cell_value)             #最后将数据追加入row_list
			if row_list:                                        #检验是否为空，非空再添加到data中
				data.append(row_list)
print(data)
