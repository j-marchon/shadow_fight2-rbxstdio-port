// Nekki.SF2.GUI.DebugModules.ConsoleUI$$Clear @ RVA 0x353DCC0

void Nekki_SF2_GUI_DebugModules_ConsoleUI__Clear(MethodInfo *method)

{
  bool bVar1;
  int index;
  System_Text_StringBuilder_o *__this;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Object_o *obj;
  Nekki_SF2_GUI_DebugModules_ConsoleUI_o *pNVar3;
  
  if ((DAT_04568ad5 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ad5 = 1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->BFKHNDJDKCA;
  if (__this != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Clear(__this,(MethodInfo *)0x0);
    if (DAT_0456720a == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
      DAT_0456720a = '\x01';
    }
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar3 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
             _JPNBHEPPPNP_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_0456720a == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
        DAT_0456720a = '\x01';
      }
      if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar3 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
               _JPNBHEPPPNP_k__BackingField;
      if ((pNVar3 == (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *)0x0) ||
         (pUVar2 = (pNVar3->fields)._textRoot, pUVar2 == (UnityEngine_RectTransform_o *)0x0))
      goto LAB_0363dea4;
      index = UnityEngine_Transform__get_childCount
                        ((UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0);
      while (index = index + -1, -1 < index) {
        if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_0456720a == '\0') {
          FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
          DAT_0456720a = '\x01';
        }
        if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pNVar3 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
                 _JPNBHEPPPNP_k__BackingField;
        if (((pNVar3 == (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *)0x0) ||
            (pUVar2 = (pNVar3->fields)._textRoot, pUVar2 == (UnityEngine_RectTransform_o *)0x0)) ||
           (__this_00 = UnityEngine_Transform__GetChild
                                  ((UnityEngine_Transform_o *)pUVar2,index,(MethodInfo *)0x0),
           __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_0363dea4;
        obj = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
      }
    }
    return;
  }
LAB_0363dea4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

