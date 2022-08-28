# type (r[1-9];w;u),circuit,name,[comment.de],[QQ],ZZ,PBSB,[ID],field1,part (m/s),datatypes/templates,divider/values,unit,comment.de
# SC Betriebsart Ergänzung NM
*r,,,,,,"B504",,,,,,,
*uw,,,,,,"B505",,,,,,,
r,,ScMode,Betriebsartabfrage,,,,01,unkown,,HEX:1,,,,Mode,,mcmode,,,Betriebsart,unkown,,HEX:7,,,
r,,Status01,Statusabfrage,,,,0d,unkown,,HEX:5,,,unbekannt
r,,StorageTemps,Speichertemperaturen,,,,10,StorageSensorSP1,,temp3,,,SP1,StorageSensorSP2,,temp3,,,SP2,StorageSensorSP3,,temp3,,,SP3,DiffTempSensorTD1,,temp3,,,TD1,DiffTempSensorTD2,,temp3,,,TD2
r,,Status02,Statusabfrage,,,,21,CollectorTemp,,temp0,,,Kollektortemperatur,SolProtection,,temp0,,,Solarkreisschutz,HeaterSorce,,scmode,,,Status,StorageLevel,,percent0,,,Speicherfüllung,power,,percent0,,,ErtragsgÃ¼te
r,,Gain,Solarertrag,,,,28,Gain,,U3N,,kWh,Solarertrag
uw,,SetHWCLoad,WW-Bereitung,,,,27,StoarageLoadCircuit,,onoff,,,SpeicherladungKreis,VF1,,temp0,,,VF1,StorageLoadAktiv,,onoff,,,SpeicherladungAktiv
uw,,SetSysParams,Systemparameter,,,,2b,PreDeaktivationTime,,minutes0,,,maxVorabschaltung,FrostProtectionDelay,,minutes0,,,FrostschutzverzÃ¶gerung,TempIncrease,,temp0,,K,TemperaturüberhÃ¶hung,unkown,,HEX:4,,,unbekannt