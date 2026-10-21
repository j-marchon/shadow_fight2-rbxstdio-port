// Nekki.Utils.RaidBetaLogger$$JKKLLBNOIAH @ RVA 0x35A0BFC

void Nekki_Utils_RaidBetaLogger__JKKLLBNOIAH
               (Nekki_Utils_RaidBetaLogger_o *__this,Nekki_SF2_GUI_Dialogs_BaseDialog_o *IELDNEAAPBE
               ,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04568de5 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568de5 = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  method_01 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)IELDNEAAPBE,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    Nekki_Utils_RaidBetaLogger__JAACKPFKECL(__this,(__this->fields).MCJBHEPCENG,method_01);
    return;
  }
  Nekki_Utils_RaidBetaLogger__KHHBJNCINLC(__this,method_00);
  return;
}

