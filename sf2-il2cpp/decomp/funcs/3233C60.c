// Nekki.SF2.GUI.Common.HintCanvas$$IsShowingHint @ RVA 0x3233C60

bool Nekki_SF2_GUI_Common_HintCanvas__IsShowingHint
               (Nekki_SF2_GUI_Common_HintCanvas_o *__this,UnityEngine_GameObject_o *LKMJPHDHCID,
               MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *x;
  
  if ((DAT_04566fff & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566fff = 1;
  }
  x = (UnityEngine_Object_o *)(__this->fields).EMFLDKEFCLG;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)LKMJPHDHCID,(MethodInfo *)0x0);
  return bVar1;
}

