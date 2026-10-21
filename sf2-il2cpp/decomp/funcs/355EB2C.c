// Nekki.SF2.GUI.Fight.ScreenModel$$SetPlayerPvpMode @ RVA 0x355EB2C

void Nekki_SF2_GUI_Fight_ScreenModel__SetPlayerPvpMode
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *x;
  
  if ((DAT_04568ba8 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo,CJNHFNHJHPE);
    DAT_04568ba8 = 1;
  }
  x = (__this->fields)._name;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Object__op_Inequality
            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return;
}

