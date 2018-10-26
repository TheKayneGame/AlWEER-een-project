USE alWeer;

DROP VIEW `WeerView`;

CREATE VIEW `WeerView` AS 
SELECT Temp AS `Temperature (C)`, Humidity AS `Humidity (%)`, Windsnelheid AS `Windspeed (km/h)`, Bightness AS `Brightness (Lux)`, DATE_FORMAT(`Timestamp`, '%Y-%m-%d %H:%i' ) AS `Date`
FROM alWeer.weer
ORDER BY ID DESC;

SELECT * FROM `WeerView`;