// Nekki.SF2.GUI.Dialogs.SettingsDialog$$BELHPICEHOB @ RVA 0x3483CF8

void Nekki_SF2_GUI_Dialogs_SettingsDialog__BELHPICEHOB
               (Nekki_SF2_GUI_Dialogs_SettingsDialog_o *__this,bool HPACPFLKHPK,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  VirtualInvokeData *pVVar3;
  DBNEEHGBCJD_o *pDVar4;
  Il2CppClass *pIVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_04568395 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_04568395 = 1;
  }
  (__this->fields).MNIAKMGIEHL = false;
  if (HPACPFLKHPK) {
    pIVar2 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar5 = pIVar2->klass;
    uVar1._0_1_ = (pIVar5->_2).rank;
    uVar1._1_1_ = (pIVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pIVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar3 = pIVar5->vtable + (*piVar7 + 6);
          goto LAB_03583dac;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    method = (MethodInfo *)0x6;
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pIVar2);
LAB_03583dac:
    pDVar4 = (DBNEEHGBCJD_o *)(*pVVar3->methodPtr)(pIVar2,pVVar3->method);
    (__this->fields).CEEIJODIBOM = pDVar4;
    thunk_FUN_01c20e04(&(__this->fields).CEEIJODIBOM);
  }
  if ((__this->fields).super._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  Nekki_SF2_GUI_Dialogs_SettingsDialog__HAONPBDHBCD(__this,(DBNEEHGBCJD_o *)0x0,method);
  return;
}

