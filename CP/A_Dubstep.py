import string
import re

user_input = input()

#re1 = re.compile(r'(.*?)WUB|WUB(.*?)')
re1 = re.compile(r'(.*?)WUB(.*?)')
re2 = re.compile(r'WUB(.*?)')

result_list = re.findall(re2, user_input)
result_list = [item for item in result_list if item] # REMEMBER
print(result_list)
'''
result_str = ' '.join(result_list)
print(result_str)
'''