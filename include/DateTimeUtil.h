// ***********************************************************************
// Filename         : DateTimeUtil.h
// Author           : LIZHENG
// Created          : 2014-09-17
// Description      : 日期、时间工具类
//
// Last Modified By : LIZHENG
// Last Modified On : 2014-09-17
//
// Copyright (c) lizhenghn@gmail.com. All rights reserved.
// ***********************************************************************
#ifndef ZL_DATETIMEUTIL_H
#define ZL_DATETIMEUTIL_H
#include <string>

class DateTimeUtil
{
public:
	/**
	* @brief           判断指定年份是否为闰年
	* @param year      指定的年份
	* @return          返回日期和时间格式化后的字符串: YYYY-MM-DD HH:MM:SS
	*/
	static bool        IsLeapYear(int year);

	/**
	* @brief           获取当前日期和时间
	* @param ptm       指向当前日期和时间的结构体指针
	*/
	static void        CurrentDateTime(struct tm *ptm);
	/** 
	* @brief           获取当前日期和时间: YYYY-MM-DD HH:MM:SS
	* @param buf       用来存储当前日期和时间的缓冲区
	* @param size      buf的大小，len > sizeof("YYYY-MM-DD HH:MM:SS")
	*/
	static void        CurrentDateTime(char* buf, size_t size);
	/**
	* @brief           获取当前日期和时间: YYYY-MM-DD HH:MM:SS
	* @return          返回日期和时间格式化后的字符串
	*/
	static std::string CurrentDateTime();

	/**
	* @brief           获取当前日期: YYYY-MM-DD
	* @param buf       用来存储当前日期的缓冲区
	* @param size      buf的大小，len > sizeof("YYYY-MM-DD")
	*/
	static void        CurrentDate(char* buf, size_t size);
	/**
	* @brief           获取当前日期: YYYY-MM-DD
	* @return          返回日期和时间格式化后的字符串
	*/
	static std::string CurrentDate();

	/**
	* @brief           获取当前时间: HH:SS:MM
	* @param buf       用来存储当前时间的缓冲区
	* @param size      buf的大小，len > sizeof("HH:SS:MM")
	*/
	static void        CurrentTime(char* buf, size_t size);
	/**
	* @brief           获取当前时间: HH:SS:MM
	* @return          返回时间格式化后的字符串
	*/
	static std::string CurrentTime();

	/**
	* @brief           将一个字符串转换成日期时间格式，要求原字符串格式为: YYYY-MM-DD HH:MM:SS
	* @param strTime   包含时间格式的字符串
	* @param datetime  用来存储字符串转换成时间的结构体指针
	* @return          转换成功返回true，否则返回false
	*/
	static bool        StringToDataTime(const char *strTime, struct tm *datetime);
	/**
	* @brief           将一个字符串转换成日期时间格式，要求原字符串格式为: YYYY-MM-DD HH:MM:SS
	* @param strTime   包含时间格式的字符串
	* @param datetime  用来存储字符串转换成时间的结构体指针
	* @return          转换成功返回true，否则返回false
	*/
	static bool        StringToDataTime(const char *strTime, time_t *datetime);

	/**
	* @brief           将一个字符串转换成日期时间格式，要求原字符串格式为: YYYY-MM-DD HH:MM:SS
	* @param datetime  指向日期和时间的结构体指针
	* @param buf       用来存储字符串转换成时间的缓冲区
	* @param size      缓冲区大小
	*/
	static void        DateTimeToString(struct tm *datetime, char *buf, size_t size);
	/**
	* @brief           将一个日期和时间转换为字符串: YYYY-MM-DD HH:MM:SS
	* @param datetime  存储日期和时间的结构体指针
	* @return          返回时间格式化后的字符串
	*/
	static std::string DateTimeToString(struct tm *datetime);

	/**
	* @brief           将一个日期转换为字符串: YYYY-MM-DD
	* @param datetime  指向日期和时间的结构体指针
	* @param buf       用来存储字符串转换成时间的缓冲区
	* @param size      缓冲区大小
	*/
	static void        DateToString(struct tm *datetime, char *buf, size_t size);
	/**
	* @brief           将一个日期转换为字符串: YYYY-MM-DD
	* @param datetime  指向日期和时间的结构体指针
	* @return          返回时间格式化后的字符串
	*/
	static std::string DateToString(struct tm* datetime);

	/**
	* @brief           将一个时间转换为字符串: HH:MM:SS
	* @param datetime  指向日期和时间的结构体指针
	* @param buf       用来存储字符串转换成时间的缓冲区
	* @param size      缓冲区大小
	*/
	static void        TimeToString(struct tm *datetime, char *buf, size_t size);
	/**
	* @brief           将一个时间转换为字符串: HH:MM:SS
	* @param datetime  指向日期和时间的结构体指针
	* @return          返回时间格式化后的字符串
	*/
	static std::string TimeToString(struct tm *datetime);
};

#endif /* ZL_DATETIMEUTIL_H */