// Nekki.SF2.GUI.Map.ContentRaid$$OIFKGDDBLKE @ RVA 0x34AC20C

void Nekki_SF2_GUI_Map_ContentRaid__OIFKGDDBLKE
               (Nekki_SF2_GUI_Map_ContentRaid_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  VirtualInvokeData *pVVar4;
  undefined8 uVar5;
  Il2CppClass *pIVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  ulong uVar8;
  int32_t *piVar9;
  
  if ((DAT_04568537 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_16668);
    FUN_01bab630(&StringLiteral_2435);
    DAT_04568537 = 1;
  }
  pIVar2 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar3 = FUN_01bab718(string___TypeInfo,1);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    *(undefined8 *)(lVar3 + 0x20) = StringLiteral_2435;
    thunk_FUN_01c20e04();
    uVar5 = StringLiteral_16668;
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar6 = pIVar2->klass;
      uVar1._0_1_ = (pIVar6->_2).rank;
      uVar1._1_1_ = (pIVar6->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pIVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar4 = pIVar6->vtable + (*piVar9 + 0xc);
            goto LAB_035ac328;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pIVar2,BLEFOFGCKEF_TypeInfo,0xc);
LAB_035ac328:
      uVar5 = (*pVVar4->methodPtr)(pIVar2,uVar5,lVar3,pVVar4->method);
      pNVar7 = (__this->fields)._tourLabel;
      if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035ac364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                  (pNVar7,uVar5,(pNVar7->klass->vtable)._75_set_text.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

