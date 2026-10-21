// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$POPLOFFOHJL @ RVA 0x35AE9E8

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__POPLOFFOHJL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar6;
  System_String_o *EHNFGMGKCHO;
  System_Action_object__o *IELDNEAAPBE;
  MethodInfo *extraout_x1;
  IFFFKKMMKFO_o *pIVar7;
  GKLPDMLELJF_o *pGVar8;
  Il2CppClass *pIVar9;
  ulong uVar10;
  int32_t *piVar11;
  undefined1 auVar12 [16];
  long lVar5;
  
  if ((DAT_04568e71 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_JCBKPGMPLBK__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_11503);
    FUN_01bab630(&StringLiteral_3503);
    FUN_01bab630(&StringLiteral_3504);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568e71 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).PDHMLFAMNCO;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = method;
  auVar12 = auVar12 << 0x40;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    bVar3 = Nekki_SF2_GUI_SimpleScroll__IsMoving(__this_00,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    auVar12 = FUN_01bab718(string___TypeInfo,1);
    lVar5 = auVar12._0_8_;
    pIVar7 = (__this->fields)._LAIJDPOGGKB_k__BackingField;
    if (((pIVar7 != (IFFFKKMMKFO_o *)0x0) &&
        (pGVar8 = (pIVar7->fields)._IPNPNPOLCFO_k__BackingField, pGVar8 != (GKLPDMLELJF_o *)0x0)) &&
       (lVar5 != 0)) {
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      *(System_String_o **)(lVar5 + 0x20) = (pGVar8->fields).LLBEKLPKDHK;
      auVar12 = thunk_FUN_01c20e04();
      uVar2 = StringLiteral_3504;
      if (pIVar4 != (Il2CppObject *)0x0) {
        pIVar9 = pIVar4->klass;
        uVar1._0_1_ = (pIVar9->_2).rank;
        uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar1;
        if (uVar10 != 0) {
          piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar6 = pIVar9->vtable + (*piVar11 + 0xc);
              goto LAB_036aeb60;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_036aeb60:
        EHNFGMGKCHO = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar2,lVar5,pVVar6->method);
        IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        JJPNLEPEAFM__JNDPLPKDPCP
                  (StringLiteral_3503,EHNFGMGKCHO,StringLiteral_11503,StringLiteral_3640,IELDNEAAPBE
                   ,1,0,false,false,StringLiteral_1,false,true,true,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar12._0_8_,auVar12._8_8_);
}

