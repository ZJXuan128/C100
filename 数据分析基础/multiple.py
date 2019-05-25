#!/usr/bin/env python3
import glob
import os
import sys
from datetime import date
from xlrd import open_workbook, xldate_as_tuple
from xlwt import Workbook

input_folder = sys.argv[1]
output_file = sys.argv[2]

output_workbook = Workbook()
output_worksheet = output_workbook.add_sheet('sums_and_averages')#添加 和 与 均值 的工作表

all_data = []#保存输入文件所有行
sales_column_index = 3#保存Sale Amount的索引

header = ['workbook', 'worksheet', 'worksheet_total', 'worksheet_average','workbook_total', 'workbook_average']#建立列标题，工作簿，工作表，对应数值和与均值
all_data.append(header)

for input_file in glob.glob(os.path.join(input_folder, '*.xls*')):#文件路径匹配
	with open_workbook(input_file) as workbook:
		list_of_totals = []#统计销售额总计
		list_of_numbers = []#所有工作表中销售额单元的个数
		workbook_output = []#所有要输出的列表
		for worksheet in workbook.sheets():#遍历工作表
			total_sales = 0
			number_of_sales = 0
			worksheet_list = []#保存要保留的所有工作表信息
			worksheet_list.append(os.path.basename(input_file))#将工作簿和工作表的名称添加进去
			worksheet_list.append(worksheet.name)
			for row_index in range(1,worksheet.nrows):#越过标题行，遍历行
				try:
					total_sales += float(str(worksheet.cell_value(row_index,sales_column_index)).strip('$').replace(',',''))#将销售额的每一行的单元格值转化为字符串，然后去除$,并替换掉， 之后将字符串转化为浮点型
					number_of_sales += 1.
				except:#无具体异常捕获，作为通配符，只要上方代码段出现错误，就进行下面的代码
					total_sales += 0.
					number_of_sales += 0.
			average_sales = '%.2f' % (total_sales / number_of_sales)
			worksheet_list.append(total_sales)#将销售额总计和均值加入列表
			worksheet_list.append(float(average_sales))
			list_of_totals.append(total_sales)
			list_of_numbers.append(float(number_of_sales))
			workbook_output.append(worksheet_list)#将筛选后的工作表信息加入要输出的列表
		workbook_total = sum(list_of_totals)#计算出工作簿的总计和均值
		workbook_average = sum(list_of_totals)/sum(list_of_numbers)
		for list_element in workbook_output:
			list_element.append(workbook_total)
			list_element.append(workbook_average)
		all_data.extend(workbook_output)#使用extend是因为要把每个列表的元素都扩展到all_date中，而不是把列表当作元素扩展
for list_index, output_list in enumerate(all_data):
	for element_index, element in enumerate(output_list):
		output_worksheet.write(list_index, element_index, element)

output_workbook.save(output_file)