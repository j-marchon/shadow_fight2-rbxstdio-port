// Nekki.SF2.GUI.DebugModules.ConsoleUI$$AGLPNKBMLCP @ RVA 0x353CA50

void Nekki_SF2_GUI_DebugModules_ConsoleUI__AGLPNKBMLCP
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str3;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Text__o *pSVar2;
  MIJPCDHFBPA_o *pMVar3;
  System_Collections_Generic_List_ANMHMMJOHJG__o *pSVar4;
  UnityEngine_UI_Text_o *pUVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  int local_24;
  
  if ((DAT_04568ac8 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&IGNCJNPCAEN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Text>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Count__);
    FUN_01bab630(&StringLiteral_12789);
    FUN_01bab630(&StringLiteral_1492);
    DAT_04568ac8 = 1;
    method = extraout_x1;
  }
  pUVar5 = (__this->fields)._tabButtonText;
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo,method);
  }
  pSVar2 = (__this->fields)._tabButtonNames;
  if (pSVar2 != (System_Collections_Generic_List_Text__o *)0x0) {
    iVar6 = (pSVar2->fields)._size;
    local_24 = 0;
    if (iVar6 != 0) {
      local_24 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->CAHAKKCIBIB / iVar6;
    }
    local_24 = local_24 + 1;
    pSVar1 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    pMVar3 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF;
    if (((pMVar3 != (MIJPCDHFBPA_o *)0x0) &&
        (pSVar4 = (pMVar3->fields)._HFKPAOAKEHD_k__BackingField,
        pSVar4 != (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0)) &&
       (pSVar2 = (__this->fields)._tabButtonNames,
       pSVar2 != (System_Collections_Generic_List_Text__o *)0x0)) {
      iVar6 = (pSVar4->fields)._size;
      iVar7 = (pSVar2->fields)._size;
      if (DAT_0456033d == '\0') {
        FUN_01bab630(&System_Math_TypeInfo);
        DAT_0456033d = '\x01';
      }
      fVar8 = (float)iVar6 / (float)iVar7;
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_24 = -0x80000000;
      if ((float)(int)fVar8 != INFINITY) {
        local_24 = (int)fVar8;
      }
      str3 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat
                         (StringLiteral_12789,pSVar1,StringLiteral_1492,str3,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar5->klass->vtable)._75_set_text.methodPtr)
                  (pUVar5,pSVar1,(pUVar5->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

