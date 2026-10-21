// JJPNLEPEAFM$$IOIEGGPLDMF @ RVA 0x35353D4

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__IOIEGGPLDMF(int64_t ANGBPBINHBL,System_String_o *BKJJFPJOCGP,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *EHNFGMGKCHO;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *pNVar6;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar7;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if ((DAT_04568a83 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_17850);
    FUN_01bab630(&StringLiteral_17796);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568a83 = 1;
  }
  pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar4 = FUN_01bab718(string___TypeInfo,1);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    *(undefined8 *)(lVar4 + 0x20) = BKJJFPJOCGP;
    thunk_FUN_01c20e04((undefined8 *)(lVar4 + 0x20),BKJJFPJOCGP);
    uVar2 = StringLiteral_17796;
    if (pIVar3 != (Il2CppObject *)0x0) {
      pIVar8 = pIVar3->klass;
      uVar1._0_1_ = (pIVar8->_2).rank;
      uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar1;
      if (uVar9 != 0) {
        piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar5 = pIVar8->vtable + (*piVar10 + 0xc);
            goto LAB_03635504;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03635504:
      EHNFGMGKCHO = (System_String_o *)(*pVVar5->methodPtr)(pIVar3,uVar2,lVar4,pVVar5->method);
      pNVar6 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
      if (pNVar6 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
        if (((pNVar6->fields).BDDIHIFJADE != false) && ((pNVar6->fields).JDNKKGPNHPB == 1)) {
          Nekki_SF2_GUI_Dialogs_NotificationsGame__CloseNotifications((MethodInfo *)0x0);
        }
        pNVar7 = JJPNLEPEAFM__OJEGBDGIKGH
                           (0x154,StringLiteral_17850,EHNFGMGKCHO,StringLiteral_9679,StringLiteral_1
                            ,(System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,false,
                            true,true,true,in_stack_ffffffffffffffc8);
        return pNVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

