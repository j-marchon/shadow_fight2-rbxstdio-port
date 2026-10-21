// Nekki.SF2.GUI.DebugModules.ConsoleUI$$FIKOIBAMMEO @ RVA 0x353D468

void Nekki_SF2_GUI_DebugModules_ConsoleUI__FIKOIBAMMEO
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,System_String_o *EFENHAFFBAG,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_String_o *__this_00;
  System_Collections_Generic_List_string__o *pSVar4;
  System_String_o *EHNFGMGKCHO;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *pMVar5;
  System_String_array *pSVar6;
  ulong uVar7;
  ulong uVar8;
  
  if ((DAT_04568acf & 1) == 0) {
    FUN_01bab630(&BHNHMJNIAII_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&StringLiteral_2262);
    DAT_04568acf = 1;
  }
  bVar3 = System_String__IsNullOrEmpty(EFENHAFFBAG,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if ((BHNHMJNIAII_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = BHNHMJNIAII__FIKOIBAMMEO(EFENHAFFBAG,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
  }
  pSVar4 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->LIPCEDJDHIL;
  if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0363d6a4;
  bVar3 = System_Collections_Generic_List<object>__Contains
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)EFENHAFFBAG
                     ,Method_System_Collections_Generic_List<string>_Contains__);
  if (!bVar3) {
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    pSVar4 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->LIPCEDJDHIL;
    if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_0363d6a4;
    pSVar6 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pSVar6 == (System_String_array *)0x0) goto LAB_0363d6a4;
    uVar1 = (pSVar4->fields)._size;
    if (uVar1 < (uint)pSVar6->max_length) {
      (pSVar4->fields)._size = uVar1 + 1;
      pSVar6->m_Items[(int)uVar1] = EFENHAFFBAG;
      thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,EFENHAFFBAG);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)EFENHAFFBAG,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  pMVar5 = (MethodInfo *)0x0;
  EHNFGMGKCHO = System_String__Format
                          (StringLiteral_2262,(Il2CppObject *)EFENHAFFBAG,(MethodInfo *)0x0);
  Nekki_SF2_GUI_DebugModules_ConsoleUI__AINKNNKAGCI(__this,EHNFGMGKCHO,pMVar5);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_String_o *)0x0) {
    pMVar5 = (MethodInfo *)0x0;
    pSVar6 = System_String__Split(__this_00,10,0,(MethodInfo *)0x0);
    if (pSVar6 != (System_String_array *)0x0) {
      method_00 = extraout_x1;
      if (0 < (int)pSVar6->max_length) {
        uVar8 = 0;
        uVar7 = pSVar6->max_length & 0xffffffff;
        do {
          if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          Nekki_SF2_GUI_DebugModules_ConsoleUI__AINKNNKAGCI(__this,pSVar6->m_Items[uVar8],pMVar5);
          uVar1 = (uint)pSVar6->max_length;
          uVar7 = (ulong)uVar1;
          uVar8 = uVar8 + 1;
          method_00 = extraout_x1_00;
        } while ((long)uVar8 < (long)(int)uVar1);
      }
      Nekki_SF2_GUI_DebugModules_ConsoleUI__GNKEIGHLPEE(__this,method_00);
      return;
    }
  }
LAB_0363d6a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

