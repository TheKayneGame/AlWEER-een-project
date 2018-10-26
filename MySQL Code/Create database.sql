CREATE DATABASE alWeer;

-- Creating of the table weer
CREATE TABLE `alWeer`.`weer` (
  `ID` INT NOT NULL AUTO_INCREMENT,
  `Bightness` DOUBLE NOT NULL,
  `Humidity` DOUBLE NOT NULL,
  `Windsnelheid` DOUBLE NOT NULL,
  `Temp` DOUBLE NOT NULL,
  `Timestamp` DATETIME DEFAULT CURRENT_TIMESTAMP,
PRIMARY KEY (`ID`));

