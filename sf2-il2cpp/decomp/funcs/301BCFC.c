// JHJLHLANACF.EBHLPMJDPJE$$MoveNext @ RVA 0x301BCFC

bool JHJLHLANACF_EBHLPMJDPJE__MoveNext(JHJLHLANACF_EBHLPMJDPJE_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Il2CppObject **ppIVar2;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar3;
  
  if ((DAT_04565c13 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565c13 = 1;
    method = extraout_x1;
  }
  if ((uint)(__this->fields).__1__state < 2) {
    (__this->fields).__1__state = -1;
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
      DAT_04565b84 = '\x01';
    }
    pNVar3 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      ppIVar2 = &(__this->fields).__2__current;
      *ppIVar2 = (Il2CppObject *)0x0;
      thunk_FUN_01c20e04(ppIVar2,0);
      (__this->fields).__1__state = 1;
      return true;
    }
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar3 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if (pNVar3 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Menu_MainMenu__set_IsEnabled(pNVar3,false,(MethodInfo *)0x0);
  }
  return false;
}

