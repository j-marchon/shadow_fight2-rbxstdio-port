// Nekki.SF2.GUI.ModuleHolder.<>c$$CMEEANHGFBE @ RVA 0x314E6AC

bool Nekki_SF2_GUI_ModuleHolder_<>c__CMEEANHGFBE
               (Nekki_SF2_GUI_ModuleHolder___c_o *__this,Nekki_SF2_GUI_UIModule_o *p_item,
               MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045667ec & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045667ec = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)p_item,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}

