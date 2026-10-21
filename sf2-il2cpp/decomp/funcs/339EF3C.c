// Nekki.SF2.GUI.HintBox$$UpdateLineSpacing @ RVA 0x339EF3C

void Nekki_SF2_GUI_HintBox__UpdateLineSpacing(Nekki_SF2_GUI_HintBox_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  VirtualInvokeData *pVVar3;
  long lVar4;
  Il2CppClass *pIVar5;
  ulong uVar6;
  int32_t *piVar7;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  float CJNHFNHJHPE;
  
  if ((DAT_04567c9b & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_04567c9b = 1;
  }
  __this_00 = (__this->fields)._Description;
  pIVar2 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  if (pIVar2 != (Il2CppObject *)0x0) {
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
          goto LAB_0349efe8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pIVar2,BLEFOFGCKEF_TypeInfo,6);
LAB_0349efe8:
    lVar4 = (*pVVar3->methodPtr)(pIVar2,pVVar3->method);
    if (lVar4 != 0) {
      CJNHFNHJHPE = (__this->fields).OKEPCKPFMKG;
      if (*(char *)(lVar4 + 0x58) != '\0') {
        CJNHFNHJHPE = CJNHFNHJHPE * (__this->fields)._AsianLanguagesLineSpacingMultipler;
      }
      if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_LabelLineSpacing(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

