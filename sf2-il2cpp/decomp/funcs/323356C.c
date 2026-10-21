// Nekki.SF2.GUI.Common.HintCanvas$$IsInstanceExists @ RVA 0x323356C

bool Nekki_SF2_GUI_Common_HintCanvas__IsInstanceExists(MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_HintCanvas_o *x;
  
  if ((DAT_04566ff8 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_HintCanvas_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566ff8 = 1;
  }
  x = Nekki_SF2_GUI_Common_HintCanvas_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}

