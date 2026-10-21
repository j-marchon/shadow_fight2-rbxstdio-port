// LHOMEBJDFLD$$PNIKPDDINKE @ RVA 0x30238E4

void LHOMEBJDFLD__PNIKPDDINKE(LHOMEBJDFLD_o *__this,KEFHDOHHHML_o *JPLEIGKMFDA,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Enum_array *ALMDLFIEFLF;
  System_Enum_o *pSVar3;
  long lVar4;
  Il2CppObject *pIVar5;
  MethodInfo *method_00;
  int64_t iVar6;
  PBAKFOBIHEG_o *pPVar7;
  undefined8 uVar8;
  JMDPBFOCHHP_o *__this_00;
  HJEODECHNDG_o *pHVar9;
  VirtualInvokeData *pVVar10;
  System_Collections_IEnumerator_o *pSVar11;
  MethodInfo *method_01;
  PBAKFOBIHEG_c *pPVar12;
  ulong uVar13;
  int32_t *piVar14;
  System_Collections_IEnumerator_o **ppSVar15;
  System_Action_bool__o *pSVar16;
  PGICCMFLDPI_o **ppPVar17;
  int iVar18;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_04565c75 & 1) == 0) {
    FUN_01bab630(&ADPIHKFDKPI_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&System_Enum___TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OKKPDLAJBFD>__);
    FUN_01bab630(&Method_LHOMEBJDFLD_LOFJIPENANG__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04565c75 = 1;
  }
  ALMDLFIEFLF = (System_Enum_array *)FUN_01bab718(System_Enum___TypeInfo,2);
  local_34 = 0xffffff9c;
  pSVar3 = (System_Enum_o *)thunk_FUN_01bda448(ADPIHKFDKPI_TypeInfo,&local_34);
  if (ALMDLFIEFLF == (System_Enum_array *)0x0) goto LAB_03123be4;
  if ((pSVar3 != (System_Enum_o *)0x0) &&
     (lVar4 = thunk_FUN_01bda71c(pSVar3,(((ALMDLFIEFLF->obj).klass)->_1).element_class), lVar4 == 0)
     ) {
LAB_03123bec:
    uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar8,0);
  }
  if ((int)ALMDLFIEFLF->max_length == 0) {
LAB_03123be8:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
  ALMDLFIEFLF->m_Items[0] = pSVar3;
  thunk_FUN_01c20e04(ALMDLFIEFLF->m_Items,pSVar3);
  local_38 = 0xffffff9a;
  pSVar3 = (System_Enum_o *)thunk_FUN_01bda448(ADPIHKFDKPI_TypeInfo,&local_38);
  if ((pSVar3 != (System_Enum_o *)0x0) &&
     (lVar4 = thunk_FUN_01bda71c(pSVar3,(((ALMDLFIEFLF->obj).klass)->_1).element_class), lVar4 == 0)
     ) goto LAB_03123bec;
  if ((uint)ALMDLFIEFLF->max_length < 2) goto LAB_03123be8;
  ALMDLFIEFLF->m_Items[1] = pSVar3;
  thunk_FUN_01c20e04(ALMDLFIEFLF->m_Items + 1,pSVar3);
  if (JPLEIGKMFDA != (KEFHDOHHHML_o *)0x0) {
    KEFHDOHHHML__JKJADOKFMAA(JPLEIGKMFDA,ALMDLFIEFLF,(MethodInfo *)0x0);
    pSVar16 = (__this->fields).KEGLPIKPCOJ;
    bVar2 = KEFHDOHHHML__BOJJBGPIKDP(JPLEIGKMFDA,(MethodInfo *)0x0);
    if (pSVar16 != (System_Action_bool__o *)0x0) {
      (*(code *)(pSVar16->fields).super.super.invoke_impl)
                ((pSVar16->fields).super.super.method_code,bVar2,
                 (pSVar16->fields).super.super.method);
      if ((__this->fields).KGOMOBOFNMD != false) {
        bVar2 = KEFHDOHHHML__BOJJBGPIKDP(JPLEIGKMFDA,(MethodInfo *)0x0);
        if (bVar2) {
          pIVar5 = KEFHDOHHHML__PFNEPJAFEDF<object>
                             (JPLEIGKMFDA,Method_KEFHDOHHHML_PFNEPJAFEDF<OKKPDLAJBFD>__);
          if (pIVar5 == (Il2CppObject *)0x0) goto LAB_03123be4;
          ppPVar17 = &(__this->fields).LCHIIFDNJMA;
          *ppPVar17 = (PGICCMFLDPI_o *)pIVar5[2].klass;
          method_00 = (MethodInfo *)thunk_FUN_01c20e04(ppPVar17);
          (__this->fields).BKDNBMKPODL = 0.0;
          iVar6 = LHOMEBJDFLD__LNHHOGGMMMK(method_00);
          if (pIVar5[1].monitor == (void *)0x0) goto LAB_03123be4;
          lVar4 = *(long *)((long)pIVar5[1].monitor + 0x18);
          (__this->fields).JPKAGHPLAJP = 0;
          (__this->fields).AKKOPIGJABD = iVar6 - lVar4;
        }
        else {
          LHOMEBJDFLD__GJPGOHOAMEJ(__this,method_01);
        }
        pPVar7 = CoroutineManager__get_Current((MethodInfo *)0x0);
        uVar8 = thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if (((__this_00 == (JMDPBFOCHHP_o *)0x0) ||
            (pHVar9 = JMDPBFOCHHP__KAPJBGIIHAA(__this_00,(MethodInfo *)0x0),
            pHVar9 == (HJEODECHNDG_o *)0x0)) || (pPVar7 == (PBAKFOBIHEG_o *)0x0)) goto LAB_03123be4;
        pPVar12 = pPVar7->klass;
        iVar18 = (pHVar9->fields)._PPMNOAABDKN_k__BackingField;
        uVar1._0_1_ = (pPVar12->_2).rank;
        uVar1._1_1_ = (pPVar12->_2).minimumAlignment;
        uVar13 = (ulong)uVar1;
        if (uVar13 != 0) {
          piVar14 = &((pPVar12->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar10 = pPVar12->vtable + (*piVar14 + 2);
              goto LAB_03123bac;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        pVVar10 = (VirtualInvokeData *)FUN_01b81914(pPVar7,PBAKFOBIHEG_TypeInfo,2);
LAB_03123bac:
        pSVar11 = (System_Collections_IEnumerator_o *)
                  (*pVVar10->methodPtr)
                            ((ulong)(uint)((float)iVar18 / 1000.0),pPVar7,uVar8,pVVar10->method);
        ppSVar15 = &(__this->fields).JBGNDDGMAAL;
        *ppSVar15 = pSVar11;
        thunk_FUN_01c20e04(ppSVar15,pSVar11);
      }
      return;
    }
  }
LAB_03123be4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

