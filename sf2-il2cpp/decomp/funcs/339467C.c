// Nekki.SF2.GUI.Profile.ProfileScene$$OnPerkResetButtonClick @ RVA 0x339467C

void Nekki_SF2_GUI_Profile_ProfileScene__OnPerkResetButtonClick
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *pSVar6;
  HOOAAGABMBL_o *__this_00;
  System_String_o *pSVar7;
  System_Action_object__o *IELDNEAAPBE;
  long lVar8;
  Il2CppClass *pIVar9;
  DOPEEDABNEK_o *pDVar10;
  ulong uVar11;
  int32_t *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int64_t local_68;
  
  if ((DAT_04567c47 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_ProfileScene_IBLPDNHGONE__);
    FUN_01bab630(&StringLiteral_47);
    FUN_01bab630(&StringLiteral_20991);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_10238);
    FUN_01bab630(&StringLiteral_10461);
    FUN_01bab630(&StringLiteral_22500);
    FUN_01bab630(&StringLiteral_10237);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567c47 = 1;
  }
  local_68 = 0;
  EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
  pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar4 = Method_System_Array_Empty<string>__;
  lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar8 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar8 = *(long *)(lVar4 + 0x38);
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_01b81620();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
  uVar14 = StringLiteral_10238;
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar9 = pIVar3->klass;
    uVar13 = **(undefined8 **)(lVar4 + 0xb8);
    uVar1._0_1_ = (pIVar9->_2).rank;
    uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
    uVar11 = (ulong)uVar1;
    if (uVar11 != 0) {
      piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar5 = pIVar9->vtable + (*piVar12 + 0xc);
          goto LAB_03494844;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03494844:
    pSVar6 = (System_String_o *)(*pVVar5->methodPtr)(pIVar3,uVar14,uVar13,pVVar5->method);
    pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04563eaa == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04563eaa = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar10 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if ((pDVar10 != (DOPEEDABNEK_o *)0x0) &&
       (__this_00 = (pDVar10->fields)._PCFMNDLDEMC_k__BackingField,
       __this_00 != (HOOAAGABMBL_o *)0x0)) {
      local_68 = HOOAAGABMBL__MNKCHHFDEGH(__this_00,(MethodInfo *)0x0);
      pSVar7 = System_Int64__ToString((int64_t)&local_68,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat
                         (StringLiteral_10461,pSVar7,StringLiteral_22500,(MethodInfo *)0x0);
      lVar4 = Method_System_Array_Empty<string>__;
      lVar8 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar8 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar8 = *(long *)(lVar4 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01b81620();
      }
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      if (pIVar3 != (Il2CppObject *)0x0) {
        pIVar9 = pIVar3->klass;
        uVar14 = **(undefined8 **)(lVar4 + 0xb8);
        uVar2._0_1_ = (pIVar9->_2).rank;
        uVar2._1_1_ = (pIVar9->_2).minimumAlignment;
        uVar11 = (ulong)uVar2;
        if (uVar11 != 0) {
          piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar5 = pIVar9->vtable + (*piVar12 + 0xc);
              goto LAB_034949e0;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034949e0:
        pSVar7 = (System_String_o *)(*pVVar5->methodPtr)(pIVar3,pSVar7,uVar14,pVVar5->method);
        pSVar6 = System_String__Concat(pSVar6,StringLiteral_47,pSVar7,(MethodInfo *)0x0);
        IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
        System_Action<object>___ctor();
        JJPNLEPEAFM__JNDPLPKDPCP
                  (StringLiteral_10237,pSVar6,StringLiteral_20991,StringLiteral_3640,IELDNEAAPBE,1,0
                   ,false,false,StringLiteral_1,false,true,true,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

