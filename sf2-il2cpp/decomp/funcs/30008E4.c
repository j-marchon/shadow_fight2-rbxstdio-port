// IJDEPDNLOGC$$MAHFCKJGBPP @ RVA 0x30008E4

void IJDEPDNLOGC__MAHFCKJGBPP(IJDEPDNLOGC_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  KMJDCOABCCG_o *pKVar4;
  FLHAOOHNCAL_o *pFVar5;
  undefined8 uVar6;
  VirtualInvokeData *pVVar7;
  FLHAOOHNCAL_c *pFVar8;
  ulong uVar9;
  int32_t *piVar10;
  System_String_o *pSVar11;
  
  if ((DAT_04565b23 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&FLHAOOHNCAL_TypeInfo);
    FUN_01bab630(&Method_IJDEPDNLOGC_EGMHPABAGML__);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04565b23 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  pSVar11 = (__this->fields).MNFIBNPEAKF;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar11 = MFBNFJGBPBB__ACJKLBMNMEJ(AAJBIMFNMBB,pSVar11,(MethodInfo *)0x0);
  bVar3 = MFBNFJGBPBB__EDBBDECOKAF(AAJBIMFNMBB,(__this->fields).FDEMMHLEOJK,(MethodInfo *)0x0);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
  }
  pKVar4 = MGNPHCAAEIO__NBKKHICFOOA(pSVar11,(MethodInfo *)0x0);
  if (pKVar4 == (KMJDCOABCCG_o *)0x0 || ((bVar3 ^ 0xffU) & 1) != 0) {
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
  pFVar5 = Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager__get_Instance
                     ((MethodInfo *)0x0);
  uVar6 = thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (pFVar5 != (FLHAOOHNCAL_o *)0x0) {
    pFVar8 = pFVar5->klass;
    uVar1._0_1_ = (pFVar8->_2).rank;
    uVar1._1_1_ = (pFVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pFVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)FLHAOOHNCAL_TypeInfo) {
          pVVar7 = pFVar8->vtable + *piVar10;
          goto LAB_03100a94;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pFVar5,FLHAOOHNCAL_TypeInfo,0);
LAB_03100a94:
    (*pVVar7->methodPtr)(pFVar5,uVar6,pVVar7->method);
    pFVar5 = Nekki_SF2_GUI_Common_Achievements_AchievementMessagesManager__get_Instance
                       ((MethodInfo *)0x0);
    if (pFVar5 != (FLHAOOHNCAL_o *)0x0) {
      pFVar8 = pFVar5->klass;
      uVar2._0_1_ = (pFVar8->_2).rank;
      uVar2._1_1_ = (pFVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
        piVar10 = &((pFVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)FLHAOOHNCAL_TypeInfo) {
            pVVar7 = pFVar8->vtable + (*piVar10 + 2);
            goto LAB_03100b04;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pFVar5,FLHAOOHNCAL_TypeInfo,2);
LAB_03100b04:
                    /* WARNING: Could not recover jumptable at 0x03100b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar7->methodPtr)(pFVar5,pKVar4,pVVar7->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

