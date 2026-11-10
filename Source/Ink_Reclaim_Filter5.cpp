Ink Reclaim Filter

	Filter Life Remaining
        XPFControls.ListItem
        {
            id: nodeFilterServiceInterval;
            xpath: rootPath + "Printer/DataExchange/FILTERMONITORING_FilterServiceInterval"
        }


	Predicted Change Date
        XPFControls.ListItem
        {
            id: nodePredictedChangeDate;
            xpath: rootPath + "Printer/DataExchange/FILTERMONITORING_PredictedChangeDate"
        }

E4033
E4039
E24033


<source>FilterLifetimeExpired</source>
<translation>(E24033) Filter Change Required</translation>

<source>ServiceMaintenanceRequired</source>
<translation>(E24039) Service Maintenance Required</translation>

        <source>PreventativeMaintenanceRequiredWithPad</source>
        <translation>(E24041) Preventative Maintenance Required</translation>

			void PreMaintenanceAccessor::slot_MaintenanceWarningsThread()
                                if((int)emUseDebrisPad == 0)
                                {
                                    SetAlarmState( lcm::alarms::PreventativeMaintenanceRequired, true );
                                }
                                else if((int)emUseDebrisPad == 1)
                                {
                                    SetAlarmState( lcm::alarms::PreventativeMaintenanceRequiredWithPad, true );
                                }

FilterLifetimeExpired

static void UpdatePredictedChangeDate(void)