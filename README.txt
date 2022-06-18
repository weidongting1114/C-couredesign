基于Qt和MySQL的学生信息管理系统

环境配置
VS2019,Qt 5.9.0,MySQL 8.0.29

注意事项：
a.Qt 5.9.0应搭建在VS2019平台上。
b.应将Qt和MySQL的相关目录添加到VS2019的附加包含目录与附件库目录中，具体内容见运行时报错信息。
c.应在本地建立MySQL数据库，并按照以下SQL代码建立test1数据库以及Student表、Teacher表。

/*
 Navicat Premium Data Transfer

 Source Server         : test
 Source Server Type    : MySQL
 Source Server Version : 80029
 Source Host           : localhost:3306
 Source Schema         : test1

 Target Server Type    : MySQL
 Target Server Version : 80029
 File Encoding         : 65001

 Date: 08/06/2022 06:36:18
*/

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for student
-- ----------------------------
DROP TABLE IF EXISTS `student`;
CREATE TABLE `student`  (
  `id` int(0) NOT NULL,
  `name` varchar(30) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `gender` char(1) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL,
  `score` float NOT NULL,
  `grade` char(4) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL
) ENGINE = InnoDB CHARACTER SET = utf8 COLLATE = utf8_general_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of student
-- ----------------------------
INSERT INTO `student` VALUES (1002, '卫东廷', '男', 98, '16');
INSERT INTO `student` VALUES (1003, '史晨睿', '男', 90, '10');
INSERT INTO `student` VALUES (1004, '马凯昊', '男', 96, '25');
INSERT INTO `student` VALUES (1005, '周E', '女', 98, '24');
INSERT INTO `student` VALUES (1006, '吴F', '男', 58, '74');
INSERT INTO `student` VALUES (1007, '郑G', '女', 96, '52');
INSERT INTO `student` VALUES (1001, '苏诗杰', '男', 95, '12');
INSERT INTO `student` VALUES (1008, '卫', '男', 58, '12');

-- ----------------------------
-- Table structure for teacher
-- ----------------------------
DROP TABLE IF EXISTS `teacher`;
CREATE TABLE `teacher`  (
  `id` int(0) NOT NULL,
  `name` varchar(5) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `gender` varchar(20) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `workplace` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `password` int(0) NOT NULL,
  `score` float(20, 0) NOT NULL,
  PRIMARY KEY (`id`) USING BTREE
) ENGINE = InnoDB CHARACTER SET = utf8mb4 COLLATE = utf8mb4_0900_ai_ci ROW_FORMAT = Dynamic;

-- ----------------------------
-- Records of teacher
-- ----------------------------
INSERT INTO `teacher` VALUES (10001, '杨华莉', '女', 'swjtu', 123125, 98);
INSERT INTO `teacher` VALUES (10003, '胡桂珍', '女', 'swjtu', 123123, 96);

SET FOREIGN_KEY_CHECKS = 1;


