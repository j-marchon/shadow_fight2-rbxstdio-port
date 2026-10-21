// Nekki.SF2.GUI.Common.Hints.HintList$$SetHintGroupDescription @ RVA 0x3514610

void Nekki_SF2_GUI_Common_Hints_HintList__SetHintGroupDescription
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,int32_t AEIKGKKKFMM,
               System_String_o *EPGABDICNIO,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_Hints_HintGroup_o *x;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)EPGABDICNIO;
  if ((DAT_04568915 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568915 = 1;
  }
  x = Nekki_SF2_GUI_Common_Hints_HintList__GetHintGroupByID(__this,AEIKGKKKFMM,method_00);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if ((x != (Nekki_SF2_GUI_Common_Hints_HintGroup_o *)0x0) &&
     (__this_00 = (x->fields)._Description, __this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,EPGABDICNIO,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

