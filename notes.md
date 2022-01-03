# Handling exceptions

Return codes have a boat load of limiting factors: 1/ can be cryptic, misleading (just numbers/codes), 2/ you have to do error checking once the function return and handle the error, 3/ What if you want to return a value and a return code at the same time ? 4/ What if you want to handle errors in a constructor ?
"Exception handling provides a mechanism to decouple handling of errors or other exceptional circumstances from the typical control flow of your code. This allows more freedom to handle errors when and how ever is most useful for a given situation, alleviating many (if not all) of the messiness that return codes cause." (source)[https://www.learncpp.com/cpp-tutorial/the-need-for-exceptions/]

```
try {
//Do some stuff here
	if (/* there's an error*/)
	{
		throw std::exception();
	}
	else
	{
	}
}
catch (std::exception e){
	//Handle error here
}
```