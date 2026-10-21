// NLGPPDPDGPH$$BKCFPHNEONL @ RVA 0x3236E28

/* WARNING: Removing unreachable block (ram,0x0333714c) */

bool NLGPPDPDGPH__BKCFPHNEONL
               (NLGPPDPDGPH_o *__this,JMDPBFOCHHP_o *GALCGHPGAIB,LDBDCAICCPP_o *EJLPDCKEJFJ,
               MethodInfo *method)

{
  System_String_o **ppSVar1;
  ushort uVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_String_o *pSVar8;
  MethodInfo *method_00;
  Il2CppClass *pIVar9;
  long lVar10;
  ulong uVar11;
  int32_t *piVar12;
  int *piVar13;
  bool bVar14;
  
  if ((DAT_0456702b & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<DBNEEHGBCJD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<DBNEEHGBCJD>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    DAT_0456702b = 1;
  }
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar9 = pIVar4->klass;
    uVar2._0_1_ = (pIVar9->_2).rank;
    uVar2._1_1_ = (pIVar9->_2).minimumAlignment;
    uVar11 = (ulong)uVar2;
    if (uVar11 != 0) {
      piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar5 = pIVar9->vtable + (*piVar12 + 10);
          goto LAB_03336f18;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,10);
LAB_03336f18:
    plVar6 = (long *)(*pVVar5->methodPtr)(pIVar4,pVVar5->method);
    if (plVar6 != (long *)0x0) {
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerable_DBNEEHGBCJD__c **)(piVar13 + -2) ==
              System_Collections_Generic_IEnumerable<DBNEEHGBCJD>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03336f80;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_01b81914(plVar6,System_Collections_Generic_IEnumerable<DBNEEHGBCJD>_TypeInfo,0);
LAB_03336f80:
      plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      ppSVar1 = &(__this->fields).FNBDGJPPKKO;
      bVar14 = true;
      do {
        lVar10 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03337008;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_03337008:
        uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar6 == (long *)0x0) {
            return bVar14;
          }
          lVar10 = *plVar6;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_033370f4;
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_033370dc;
        }
        lVar10 = *plVar6;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_DBNEEHGBCJD__c **)(piVar13 + -2) ==
                System_Collections_Generic_IEnumerator<DBNEEHGBCJD>_TypeInfo) {
              puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03337064;
            }
            uVar11 = uVar11 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar11 != 0);
        }
        puVar7 = (undefined8 *)
                 FUN_01b81914(plVar6,System_Collections_Generic_IEnumerator<DBNEEHGBCJD>_TypeInfo,0)
        ;
LAB_03337064:
        lVar10 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        *ppSVar1 = *(System_String_o **)(lVar10 + 0x10);
        thunk_FUN_01c20e04(ppSVar1);
        pSVar8 = NLGPPDPDGPH__LDMLIFFJDDB(*ppSVar1,method_00);
        (__this->fields).super.DAIOCIKMNFD = pSVar8;
        thunk_FUN_01c20e04(&__this->fields);
        (__this->fields).super.HGCCJGDKCLH = true;
        bVar3 = NEFKBLNBOAB__BKCFPHNEONL
                          ((NEFKBLNBOAB_o *)__this,GALCGHPGAIB,EJLPDCKEJFJ,(MethodInfo *)0x0);
        bVar14 = (bool)(bVar14 & bVar3);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar13 = piVar13 + 4;
    if (uVar11 == 0) break;
LAB_033370dc:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03337110;
    }
  }
LAB_033370f4:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_03337110:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return bVar14;
}

