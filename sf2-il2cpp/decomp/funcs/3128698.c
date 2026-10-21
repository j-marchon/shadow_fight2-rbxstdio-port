// HCOBJLNDDLF$$MAHFCKJGBPP @ RVA 0x3128698

void HCOBJLNDDLF__MAHFCKJGBPP(HCOBJLNDDLF_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  Il2CppObject *pIVar3;
  long lVar4;
  System_String_o *pSVar5;
  VirtualInvokeData *pVVar6;
  System_Action_object__o *IELDNEAAPBE;
  ACHLOMELAJE_o *pAVar7;
  LPAPAMPGDFN_o *pLVar8;
  Il2CppClass *pIVar9;
  ulong uVar10;
  int32_t *piVar11;
  undefined4 local_24;
  
  if ((DAT_04566671 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_HCOBJLNDDLF_GJCOCGCOFPI__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_17850);
    FUN_01bab630(&StringLiteral_2426);
    FUN_01bab630(&StringLiteral_17823);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566671 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar7 != (ACHLOMELAJE_o *)0x0) &&
     (pLVar8 = (pAVar7->fields).LMCDOMHENMC, pLVar8 != (LPAPAMPGDFN_o *)0x0)) {
    if ((pLVar8->fields).LMGCAJEGBGI != false) {
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
    pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    lVar4 = FUN_01bab718(string___TypeInfo,2);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(undefined8 *)(lVar4 + 0x20) = StringLiteral_2426;
        thunk_FUN_01c20e04((undefined8 *)(lVar4 + 0x20));
        local_24 = 5;
        pSVar5 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
        if (1 < *(uint *)(lVar4 + 0x18)) {
          *(System_String_o **)(lVar4 + 0x28) = pSVar5;
          thunk_FUN_01c20e04();
          uVar2 = StringLiteral_17823;
          if (pIVar3 != (Il2CppObject *)0x0) {
            pIVar9 = pIVar3->klass;
            uVar1._0_1_ = (pIVar9->_2).rank;
            uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
            uVar10 = (ulong)uVar1;
            if (uVar10 != 0) {
              piVar11 = &((pIVar9->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                    (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                  pVVar6 = pIVar9->vtable + (*piVar11 + 0xc);
                  goto LAB_032288c0;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_032288c0:
            pSVar5 = (System_String_o *)(*pVVar6->methodPtr)(pIVar3,uVar2,lVar4,pVVar6->method);
            IELDNEAAPBE = (System_Action_object__o *)
                          thunk_FUN_01bda818(System_Action<object>_TypeInfo);
            System_Action<object>___ctor();
            JJPNLEPEAFM__OOOIOMHJONP
                      (StringLiteral_17850,pSVar5,StringLiteral_9679,StringLiteral_1,IELDNEAAPBE,1,0
                       ,false,false,StringLiteral_1,false,true,true,(MethodInfo *)0x0);
            return;
          }
          goto LAB_03228974;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_03228974:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

