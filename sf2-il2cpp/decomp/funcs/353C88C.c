// Nekki.SF2.GUI.DebugModules.ConsoleUI$$Log @ RVA 0x353C88C

void Nekki_SF2_GUI_DebugModules_ConsoleUI__Log(System_String_o *JEGADCHPBOO,MethodInfo *method)

{
  bool bVar1;
  System_Text_StringBuilder_o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  MethodInfo *pMVar2;
  Nekki_SF2_GUI_DebugModules_ConsoleUI_o *pNVar3;
  
  if ((DAT_04568ac7 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ac7 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_0456720a == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_0456720a = '\x01';
    method = extraout_x1_01;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,method);
    method = extraout_x1_02;
  }
  pNVar3 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
           _JPNBHEPPPNP_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  pMVar2 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
  }
  if (bVar1) {
    if (DAT_0456720a == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
      DAT_0456720a = '\x01';
    }
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar3 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
             _JPNBHEPPPNP_k__BackingField;
    if (pNVar3 != (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *)0x0) {
      Nekki_SF2_GUI_DebugModules_ConsoleUI__AINKNNKAGCI(pNVar3,JEGADCHPBOO,pMVar2);
      pMVar2 = extraout_x1_03;
      if (DAT_0456720a == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
        DAT_0456720a = '\x01';
        pMVar2 = extraout_x1_04;
      }
      if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar2 = extraout_x1_05;
      }
      pNVar3 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
               _JPNBHEPPPNP_k__BackingField;
      if (pNVar3 != (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *)0x0) {
        Nekki_SF2_GUI_DebugModules_ConsoleUI__GNKEIGHLPEE(pNVar3,pMVar2);
        return;
      }
    }
  }
  else {
    __this = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->BFKHNDJDKCA;
    if (__this != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__AppendLine(__this,JEGADCHPBOO,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

