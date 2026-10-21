// AAPGCAPGBLG$$LAAKLBPOMGP @ RVA 0x325F148

bool AAPGCAPGBLG__LAAKLBPOMGP(AAPGCAPGBLG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  GCPFDLNAFDF_o *pGVar4;
  VirtualInvokeData *pVVar5;
  DADDKDFBPIJ_T__o *__this_00;
  System_Predicate_T__o *match;
  Il2CppObject *pIVar6;
  GCPFDLNAFDF_c *pGVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_Generic_List_CCLKPGBIBOP__o *__this_01;
  
  if ((DAT_045671a9 & 1) == 0) {
    FUN_01bab630(&Method_DADDKDFBPIJ<CCLKPGBIBOP>_COMOKILJDGJ__);
    FUN_01bab630(&Method_AAPGCAPGBLG_EBDLEIJAPLB_FCKEKAMINPH__);
    FUN_01bab630(&AAPGCAPGBLG_EBDLEIJAPLB_TypeInfo);
    FUN_01bab630(&HHMDFAMGHPB_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_Find__);
    FUN_01bab630(&System_Predicate<CCLKPGBIBOP>_TypeInfo);
    DAT_045671a9 = 1;
  }
  pIVar3 = (Il2CppObject *)thunk_FUN_01bda818(AAPGCAPGBLG_EBDLEIJAPLB_TypeInfo);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  if (pIVar3 != (Il2CppObject *)0x0) {
    pIVar3[1].klass = (Il2CppClass *)KGLJICLJHEL;
    thunk_FUN_01c20e04(pIVar3 + 1,KGLJICLJHEL);
    if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pGVar4 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
    if (pGVar4 != (GCPFDLNAFDF_o *)0x0) {
      pGVar7 = pGVar4->klass;
      uVar1._0_1_ = (pGVar7->_2).rank;
      uVar1._1_1_ = (pGVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pGVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)HHMDFAMGHPB_TypeInfo) {
            pVVar5 = pGVar7->vtable + *piVar9;
            goto LAB_0335f270;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pGVar4,HHMDFAMGHPB_TypeInfo,0);
LAB_0335f270:
      __this_00 = (DADDKDFBPIJ_T__o *)(*pVVar5->methodPtr)(pGVar4,pVVar5->method);
      if (__this_00 != (DADDKDFBPIJ_T__o *)0x0) {
        pIVar3 = DADDKDFBPIJ<object>__COMOKILJDGJ
                           (__this_00,(System_String_o *)pIVar3[1].klass,
                            Method_DADDKDFBPIJ<CCLKPGBIBOP>_COMOKILJDGJ__);
        __this_01 = (__this->fields).AOCCHDFNLMC;
        match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<CCLKPGBIBOP>_TypeInfo);
        System_Predicate<object>___ctor();
        if (__this_01 != (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) {
          pIVar6 = System_Collections_Generic_List<object>__Find
                             ((System_Collections_Generic_List_object__o *)__this_01,match,
                              Method_System_Collections_Generic_List<CCLKPGBIBOP>_Find__);
          bVar2 = false;
          if (pIVar6 != (Il2CppObject *)0x0) {
            if (pIVar3 != (Il2CppObject *)0x0) {
              bVar2 = System_String__op_Equality
                                (pIVar3[1].monitor,pIVar6[1].monitor,(MethodInfo *)0x0);
              return bVar2;
            }
            bVar2 = true;
          }
          return bVar2;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

