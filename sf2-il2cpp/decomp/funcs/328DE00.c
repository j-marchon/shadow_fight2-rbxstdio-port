// Nekki.SF2.GUI.Dialogs.LotteryDialog$$BPBPDDAAFAD @ RVA 0x328DE00

void Nekki_SF2_GUI_Dialogs_LotteryDialog__BPBPDDAAFAD
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  MethodInfo *method_00;
  LPGLKMNHELJ_o *pLVar5;
  int32_t local_14;
  
  if ((DAT_045672f5 & 1) == 0) {
    FUN_01bab630(&DPLBMJODBEK_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_14560);
    DAT_045672f5 = 1;
  }
  (__this->fields).FBODAFDBNLH = (BECIPDJBAOG_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).FBODAFDBNLH,0);
  (__this->fields).IIMLAADGBEE = (UnityEngine_Coroutine_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).IIMLAADGBEE,0);
  pLVar5 = (__this->fields).DKMMBMBMJBO;
  if (pLVar5 != (LPGLKMNHELJ_o *)0x0) {
    iVar1 = (pLVar5->fields).BGHFADDGPAD;
    if (iVar1 == 1) {
      Nekki_SF2_GUI_Dialogs_LotteryDialog__AIAMPBMODDG(__this,method_00);
      return;
    }
    if (iVar1 == 0) {
      Nekki_SF2_GUI_Dialogs_LotteryDialog__LMDGPINLALE(__this,method_00);
      return;
    }
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    pLVar5 = (__this->fields).DKMMBMBMJBO;
    if (pLVar5 != (LPGLKMNHELJ_o *)0x0) {
      local_14 = (pLVar5->fields).BGHFADDGPAD;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(DPLBMJODBEK_TypeInfo,&local_14);
      if (args != (System_Object_array *)0x0) {
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        {
          uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar4,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = pIVar2;
          thunk_FUN_01c20e04(args->m_Items,pIVar2);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_14560,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

