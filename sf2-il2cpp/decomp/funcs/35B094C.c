// Nekki.SF2.GUI.Common.BottomPanelScrollCell$$IsButton @ RVA 0x35B094C

bool Nekki_SF2_GUI_Common_BottomPanelScrollCell__IsButton
               (Nekki_SF2_GUI_Common_BottomPanelScrollCell_o *__this,
               Nekki_SF2_GUI_Common_SectionButton_o *LGHOMHOPNEP,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_SectionButton_o *x;
  
  if ((DAT_04568e9b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568e9b = 1;
  }
  x = (__this->fields).NMKFEDBLPGI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)LGHOMHOPNEP,(MethodInfo *)0x0
                    );
  return bVar1;
}

