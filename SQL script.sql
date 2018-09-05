SELECT SCHEMA_NAME FROM INFORMATION_SCHEMA.SCHEMATA WHERE SCHEMA_NAME = 'alWeer';

CREATE DATABASE IF NOT EXISTS alWeer;

USE alWeer;

CREATE TABLE `alWeer`.`weer` (
	`ID` INT NOT NULL AUTO_INCREMENT,
    `Bightness` INT NOT NULL,
    `Humidity` INT NOT NULL,
    `Windsnelheid` INT NOT NULL,
    `Temp` DOUBLE NOT NULL,
    `Timestamp` TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    PRIMARY KEY(`ID`)
);

INSERT INTO `alweer`.`weer`
(`Bightness`, `Humidity`, `Windsnelheid`, `Temp`) VALUES
(200, 100, 300, 31.2);

SELECT * FROM `alweer`.`weer`;