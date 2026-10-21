// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog$$ONHDLLLAFOF @ RVA 0x3270B80

void Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog__ONHDLLLAFOF
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this,MethodInfo *method)

{
  Il2CppObject *PLPFOJADDML;
  int64_t local_28;
  
  if ((DAT_04567223 & 1) == 0) {
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_CallEvent__);
    DAT_04567223 = 1;
  }
  local_28 = (__this->fields).LIIAOOJGEML;
  PLPFOJADDML = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_28);
  Nekki_SF2_GUI_SFMonoBehaviour<object>__CallEvent
            ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,1,PLPFOJADDML,
             Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_CallEvent__);
  return;
}

