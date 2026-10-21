// TypeDefIndex 1843
// Namespace: 
// public class OJHODFIGFMA
// Fields:
//   private Action<OJHODFIGFMA.MJOLIJOPBMO> LAFPPPABCJG; // 0x10
//   private bool LDKCAIDMEDK; // 0x18
//   private PJKHAJKEHEL NDOMOKBINFD; // 0x20
//   private Dictionary<string, LKPNOBFEAKD> GGPHFPNMIIJ; // 0x28
//   private OJHODFIGFMA.EMMLKOABOHF HEHMPFLAEGE; // 0x30
//   private IFBJEEAJGEO APPPNIFKKCH; // 0x38

// ===== public void AFCLLENIANO(Action<OJHODFIGFMA.MJOLIJOPBMO> CJNHFNHJHPE)  [RVA 0x323F068]
// OJHODFIGFMA$$AFCLLENIANO @ RVA 0x323F068

void OJHODFIGFMA__AFCLLENIANO
               (OJHODFIGFMA_o *__this,System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_OJHODFIGFMA_MJOLIJOPBMO__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar5;
  System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *a;
  
  if ((DAT_0456707d & 1) == 0) {
    FUN_01bab630(&System_Action<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    DAT_0456707d = 1;
  }
  a = (__this->fields).LAFPPPABCJG;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *)FUN_01c07368(&__this->fields,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void PDIKBIJADEO(DNELIPCHKLK DBIAAJNKHLH)  [RVA 0x323F118]
// OJHODFIGFMA$$PDIKBIJADEO @ RVA 0x323F118

/* WARNING: Removing unreachable block (ram,0x0333f3b4) */

void OJHODFIGFMA__PDIKBIJADEO(OJHODFIGFMA_o *__this,DNELIPCHKLK_o *DBIAAJNKHLH,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar3;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  undefined8 *puVar6;
  OJHODFIGFMA_MJOLIJOPBMO_o *MLNEFBDGKEK;
  MethodInfo *method_00;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__c *pSVar7;
  long lVar8;
  LKPNOBFEAKD_o *pLVar9;
  ulong uVar10;
  int32_t *piVar11;
  int *piVar12;
  
  if ((DAT_0456707e & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&StringLiteral_6332/*"FightBeaten"*/);
    DAT_0456707e = 1;
  }
  pSVar3 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_6332/*"FightBeaten"*/,method);
  if (pSVar3 == (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar7 = pSVar3->klass;
  uVar1._0_1_ = (pSVar7->_2).rank;
  uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
  uVar10 = (ulong)uVar1;
  if (uVar10 != 0) {
    piVar11 = &((pSVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
        pVVar4 = pSVar7->vtable + *piVar11;
        goto LAB_0333f1f0;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  pVVar4 = (VirtualInvokeData *)
           FUN_01b81914(pSVar3,
                        System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo,0);
LAB_0333f1f0:
  plVar5 = (long *)(*pVVar4->methodPtr)(pSVar3,pVVar4->method);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0333f21c:
  lVar8 = *plVar5;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
          System_Collections_IEnumerator_TypeInfo) {
        puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_0333f268;
      }
      uVar10 = uVar10 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_0333f268:
  uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
  if ((uVar10 & 1) != 0) {
    lVar8 = *plVar5;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)(piVar12 + -2) ==
            System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0333f2c4;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01b81914(plVar5,
                          System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo,0
                         );
LAB_0333f2c4:
    MLNEFBDGKEK = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (MLNEFBDGKEK == (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pLVar9 = (MLNEFBDGKEK->fields).ADHFHEJFJPK;
    if (pLVar9 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (DBIAAJNKHLH == (DNELIPCHKLK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_00 = (MethodInfo *)0x0;
    bVar2 = DNELIPCHKLK__LFHPFJOAJIO(DBIAAJNKHLH,(pLVar9->fields).HMKKKKOPIJH,(MethodInfo *)0x0);
    if (!bVar2) goto code_r0x0333f2f8;
    goto LAB_0333f314;
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar8 = *plVar5;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 == 0) goto LAB_0333f35c;
  piVar12 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
  goto LAB_0333f344;
code_r0x0333f2f8:
  pLVar9 = (MLNEFBDGKEK->fields).ADHFHEJFJPK;
  if (pLVar9 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = DNELIPCHKLK__LFHPFJOAJIO(DBIAAJNKHLH,(pLVar9->fields).BDJGFOGHDKK,(MethodInfo *)0x0);
  if (bVar2) {
LAB_0333f314:
    OJHODFIGFMA__LJOAPAKCNLD(__this,MLNEFBDGKEK,method_00);
  }
  goto LAB_0333f21c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
LAB_0333f344:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0333f378;
    }
  }
LAB_0333f35c:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_0333f378:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


// ===== public void CCHHDGCADPF(float CJNHFNHJHPE)  [RVA 0x323F728]
// OJHODFIGFMA$$CCHHDGCADPF @ RVA 0x323F728

/* WARNING: Removing unreachable block (ram,0x0333f994) */

void OJHODFIGFMA__CCHHDGCADPF(OJHODFIGFMA_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar2;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  OJHODFIGFMA_MJOLIJOPBMO_o *MLNEFBDGKEK;
  MethodInfo *in_x2;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__c *pSVar6;
  long lVar7;
  ulong uVar8;
  LKPNOBFEAKD_o *pLVar9;
  int32_t *piVar10;
  int *piVar11;
  
  if ((DAT_0456707f & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&StringLiteral_7062/*"HealthRemained"*/);
    DAT_0456707f = 1;
  }
  pSVar2 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_7062/*"HealthRemained"*/,in_x2);
  if (pSVar2 == (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar6 = pSVar2->klass;
  uVar1._0_1_ = (pSVar6->_2).rank;
  uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
    piVar10 = &((pSVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
        pVVar3 = pSVar6->vtable + *piVar10;
        goto LAB_0333f800;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  in_x2 = (MethodInfo *)0x0;
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pSVar2);
LAB_0333f800:
  plVar4 = (long *)(*pVVar3->methodPtr)(pSVar2,pVVar3->method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0333f990 to 0343faf7 has its CatchHandler @ 0333f990
                       catch() { ... } // from try @ 0333f990 with catch @ 0333f990
                       catch() { ... } // from try @ 0333fb28 with catch @ 0333f990
                       catch() { ... } // from try @ 0333fb68 with catch @ 0333f990
                       catch() { ... } // from try @ 0333fcf8 with catch @ 0333f990
                       catch() { ... } // from try @ 0333fd24 with catch @ 0333f990
                       catch() { ... } // from try @ 0333fd5c with catch @ 0333f990
                       catch() { ... } // from try @ 0333fd78 with catch @ 0333f990
                       catch() { ... } // from try @ 0333fda8 with catch @ 0333f990 */
    FUN_01bab8c8();
  }
  do {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0333f878;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    in_x2 = (MethodInfo *)0x0;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_0333f878:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_0333f944;
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)(piVar11 + -2) ==
            System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0333f8d4;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    in_x2 = (MethodInfo *)0x0;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_0333f8d4:
    MLNEFBDGKEK = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (MLNEFBDGKEK == (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pLVar9 = (MLNEFBDGKEK->fields).ADHFHEJFJPK;
    if (pLVar9 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (CJNHFNHJHPE <= (pLVar9->fields).JAICMIMBIOA) {
      OJHODFIGFMA__LJOAPAKCNLD(__this,MLNEFBDGKEK,in_x2);
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0333f960;
    }
  }
LAB_0333f944:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0333f960:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


// ===== private void LJOAPAKCNLD(OJHODFIGFMA.MJOLIJOPBMO MLNEFBDGKEK)  [RVA 0x323F664]
// OJHODFIGFMA$$LJOAPAKCNLD @ RVA 0x323F664

void OJHODFIGFMA__LJOAPAKCNLD
               (OJHODFIGFMA_o *__this,OJHODFIGFMA_MJOLIJOPBMO_o *MLNEFBDGKEK,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  MethodInfo *in_x3;
  LKPNOBFEAKD_o *pLVar4;
  System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar5;
  
  if ((MLNEFBDGKEK != (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) &&
     (pLVar4 = (MLNEFBDGKEK->fields).ADHFHEJFJPK, pLVar4 != (LKPNOBFEAKD_o *)0x0)) {
    bVar1 = OJHODFIGFMA__KJILDIMFOME(__this,(pLVar4->fields).JMCKAHCGMDD,method);
    pLVar4 = (MLNEFBDGKEK->fields).ADHFHEJFJPK;
    if (pLVar4 != (LKPNOBFEAKD_o *)0x0) {
      bVar2 = OJHODFIGFMA__LIMMPMGLOHC
                        (__this,(pLVar4->fields).EAEAFBCHFML,(pLVar4->fields).KMNDDMGAHID,in_x3);
      pLVar4 = (MLNEFBDGKEK->fields).ADHFHEJFJPK;
      if (pLVar4 != (LKPNOBFEAKD_o *)0x0) {
        bVar3 = LKPNOBFEAKD__BNNIDPDMOIL(pLVar4,(__this->fields).APPPNIFKKCH,(MethodInfo *)0x0);
        if (!bVar2 || (!bVar1 || !bVar3)) {
          return;
        }
        pLVar4 = (MLNEFBDGKEK->fields).ADHFHEJFJPK;
        (MLNEFBDGKEK->fields).JAICMIMBIOA = (MLNEFBDGKEK->fields).JAICMIMBIOA + 1;
        if (pLVar4 != (LKPNOBFEAKD_o *)0x0) {
          if ((pLVar4->fields).OADCIDFJCOE == 2) {
            return;
          }
          pSVar5 = (__this->fields).LAFPPPABCJG;
          if (pSVar5 != (System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0333f720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(pSVar5->fields).super.super.invoke_impl)
                      ((pSVar5->fields).super.super.method_code,MLNEFBDGKEK,
                       (pSVar5->fields).super.super.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GIENGNEGHPJ(Dictionary<string, LKPNOBFEAKD> GKAMCPJJLEK, PJKHAJKEHEL JMCEAKJCJLH, COALAGILPBO ECBKFDPPPOB, float OEBANKNLEMN)  [RVA 0x323FC9C]
// OJHODFIGFMA$$GIENGNEGHPJ @ RVA 0x323FC9C

void OJHODFIGFMA__GIENGNEGHPJ
               (OJHODFIGFMA_o *__this,
               System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o *GKAMCPJJLEK,
               PJKHAJKEHEL_o *JMCEAKJCJLH,int32_t ECBKFDPPPOB,float OEBANKNLEMN,MethodInfo *method)

{
  Il2CppObject *key;
  Il2CppObject *pIVar1;
  bool bVar2;
  Il2CppObject *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  IFBJEEAJGEO_o *pIVar3;
  OJHODFIGFMA_EMMLKOABOHF_o *pOVar4;
  PJKHAJKEHEL_o **ppPVar5;
  System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o **ppSVar6;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_a8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_80;
  
  if ((DAT_04567080 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_set_Item__
                );
                    /* try { // try from 0333fcf0 to 0343fcf3 has its CatchHandler @ 0333fd04 */
                    /* try { // try from 0333fcf4 to 0343fcf7 has its CatchHandler @ 0333fcfc */
                    /* try { // try from 0333fcf8 to 0343fd1f has its CatchHandler @ 0333f990 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
                );
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0333fcf4 with catch @ 0333fcfc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0333fb20 with catch @ 0333fd00
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0333fcf0 with catch @ 0333fd04
                        */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                );
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0333faf8 with catch @ 0333fd08
                        */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_LKPNOBFEAKD>_get_Key__);
                    /* try { // try from 0333fd20 to 0343fd23 has its CatchHandler @ 0333fd40 */
                    /* try { // try from 0333fd24 to 0343fd47 has its CatchHandler @ 0333f990 */
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_LKPNOBFEAKD>_get_Value__);
    FUN_01bab630(&OJHODFIGFMA_MJOLIJOPBMO_TypeInfo);
    DAT_04567080 = 1;
  }
                    /* catch() { ... } // from try @ 0333fd20 with catch @ 0333fd40 */
  local_80.fields._getEnumeratorRetType = 0;
  local_80.fields._36_4_ = 0;
  local_80.fields._version = 0;
  local_80.fields._index = 0;
                    /* try { // try from 0333fd48 to 0343fd5b has its CatchHandler @ 0333fdbc */
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._current.fields.value = (Il2CppObject *)0x0;
  local_80.fields._current.fields.key = (Il2CppObject *)0x0;
  pIVar3 = (__this->fields).APPPNIFKKCH;
  if (pIVar3 != (IFBJEEAJGEO_o *)0x0) {
    (pIVar3->fields).COALAGILPBO = ECBKFDPPPOB;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0333fb60 with catch @ 0333fd5c
                       try { // try from 0333fd5c to 0343fd73 has its CatchHandler @ 0333f990 */
    (pIVar3->fields).KHNHBNKJPAE = OEBANKNLEMN;
    ppSVar6 = &(__this->fields).GGPHFPNMIIJ;
    *ppSVar6 = GKAMCPJJLEK;
    thunk_FUN_01c20e04(ppSVar6,GKAMCPJJLEK);
    ppPVar5 = &(__this->fields).NDOMOKBINFD;
                    /* try { // try from 0333fd74 to 0343fd77 has its CatchHandler @ 0333fd98 */
    *ppPVar5 = JMCEAKJCJLH;
                    /* try { // try from 0333fd78 to 0343fd9f has its CatchHandler @ 0333f990 */
    thunk_FUN_01c20e04(ppPVar5,JMCEAKJCJLH);
    (__this->fields).LDKCAIDMEDK = false;
    if ((System_Collections_Generic_Dictionary_object__object__o *)*ppSVar6 !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* catch() { ... } // from try @ 0333fd74 with catch @ 0333fd98 */
                    /* try { // try from 0333fda0 to 0343fda7 has its CatchHandler @ 0333fdbc */
                    /* try { // try from 0333fda8 to 0343fdb3 has its CatchHandler @ 0333f990 */
                    /* try { // try from 0333fdb4 to 0343fdbb has its CatchHandler @ 0333fdbc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0333fd48 with catch @ 0333fdbc
                       catch(type#2 @ 00000000) { ... } // from try @ 0333fda0 with catch @ 0333fdbc
                       catch(type#2 @ 00000000) { ... } // from try @ 0333fdb4 with catch @ 0333fdbc
                        */
      System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
                (&local_a8,(System_Collections_Generic_Dictionary_object__object__o *)*ppSVar6,
                 Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__);
      local_80.fields._version = local_a8.fields._version;
      local_80.fields._index = local_a8.fields._index;
      local_80.fields._dictionary = local_a8.fields._dictionary;
      local_80.fields._current.fields.value = local_a8.fields._current.fields.value;
      local_80.fields._current.fields.key = local_a8.fields._current.fields.key;
      local_80.fields._getEnumeratorRetType = local_a8.fields._getEnumeratorRetType;
      local_80.fields._36_4_ = local_a8.fields._36_4_;
      while( true ) {
        bVar2 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                          (&local_80,
                           Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                          );
        pIVar1 = local_80.fields._current.fields.value;
        key = local_80.fields._current.fields.key;
        if (!bVar2) {
          System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                    (&local_80,
                     Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
                    );
          return;
        }
        __this_00 = (Il2CppObject *)thunk_FUN_01bda818(OJHODFIGFMA_MJOLIJOPBMO_TypeInfo);
        System_Object___ctor(__this_00,(MethodInfo *)0x0);
        if (__this_00 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_00[1].klass = (Il2CppClass *)pIVar1;
        thunk_FUN_01c20e04(__this_00 + 1,pIVar1);
        *(undefined4 *)&__this_00[1].monitor = 0;
        pOVar4 = (__this->fields).HEHMPFLAEGE;
        if (pOVar4 == (OJHODFIGFMA_EMMLKOABOHF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (pOVar4->fields).IAGNJPIIEPO;
        if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary<object,_object>__set_Item
                  (__this_01,key,__this_00,
                   Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_set_Item__
                  );
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool LIMMPMGLOHC(string ACDJDOCKBKC, string EEPLADJHMEB)  [RVA 0x323FB68]
// OJHODFIGFMA$$LIMMPMGLOHC @ RVA 0x323FB68

bool OJHODFIGFMA__LIMMPMGLOHC
               (OJHODFIGFMA_o *__this,System_String_o *ACDJDOCKBKC,System_String_o *EEPLADJHMEB,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  OJHODFIGFMA_o *__this_00;
  MethodInfo *method_00;
  IFBJEEAJGEO_o *pIVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
                    /* try { // try from 0333fb68 to 0343fcef has its CatchHandler @ 0333f990 */
  if ((DAT_04567081 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567081 = 1;
  }
  bVar1 = System_String__op_Equality(ACDJDOCKBKC,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  if ((bVar1) &&
     (bVar1 = System_String__op_Equality(EEPLADJHMEB,StringLiteral_1/*""*/,(MethodInfo *)0x0), bVar1)) {
    return true;
  }
  bVar1 = System_String__op_Inequality(ACDJDOCKBKC,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  bVar2 = System_String__op_Inequality(EEPLADJHMEB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  fVar4 = OJHODFIGFMA__JNPDHEDIOPF((OJHODFIGFMA_o *)(ulong)bVar2,ACDJDOCKBKC,method_00);
  fVar5 = OJHODFIGFMA__JNPDHEDIOPF(__this_00,EEPLADJHMEB,method_00);
  if ((bVar1) && (bVar2)) {
    pIVar3 = (__this->fields).APPPNIFKKCH;
    if (pIVar3 != (IFBJEEAJGEO_o *)0x0) {
      fVar6 = (pIVar3->fields).KHNHBNKJPAE;
      if (fVar6 <= fVar4) {
        return false;
      }
LAB_0333fc64:
      return fVar6 < fVar5;
    }
  }
  else if (bVar1) {
    pIVar3 = (__this->fields).APPPNIFKKCH;
    if (pIVar3 != (IFBJEEAJGEO_o *)0x0) {
      return fVar4 < (pIVar3->fields).KHNHBNKJPAE;
    }
  }
  else {
    if (!bVar2) {
      return false;
    }
    pIVar3 = (__this->fields).APPPNIFKKCH;
    if (pIVar3 != (IFBJEEAJGEO_o *)0x0) {
      fVar6 = (pIVar3->fields).KHNHBNKJPAE;
      goto LAB_0333fc64;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DAGBOCOBHMK(int PCAIKIGGBMJ)  [RVA 0x3240024]
// OJHODFIGFMA$$DAGBOCOBHMK @ RVA 0x3240024

/* WARNING: Removing unreachable block (ram,0x0334029c) */

void OJHODFIGFMA__DAGBOCOBHMK(OJHODFIGFMA_o *__this,int32_t PCAIKIGGBMJ,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar2;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  OJHODFIGFMA_MJOLIJOPBMO_o *MLNEFBDGKEK;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__c *pSVar6;
  long lVar7;
  ulong uVar8;
  LKPNOBFEAKD_o *pLVar9;
  int32_t *piVar10;
  int *piVar11;
  
  if ((DAT_04567082 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&StringLiteral_4512/*"ComboCount"*/);
    DAT_04567082 = 1;
  }
                    /* try { // try from 03340098 to 0344009f has its CatchHandler @ 03340134 */
  pSVar2 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_4512/*"ComboCount"*/,method);
  if (pSVar2 == (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar6 = pSVar2->klass;
  uVar1._0_1_ = (pSVar6->_2).rank;
  uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
                    /* try { // try from 033400b4 to 034400bf has its CatchHandler @ 03340128 */
  uVar8 = (ulong)uVar1;
                    /* try { // try from 033400c0 to 03440117 has its CatchHandler @ 0333ff44 */
  if (uVar8 != 0) {
    piVar10 = &((pSVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
        pVVar3 = pSVar6->vtable + *piVar10;
        goto LAB_03340100;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  method = (MethodInfo *)0x0;
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pSVar2);
LAB_03340100:
  plVar4 = (long *)(*pVVar3->methodPtr)(pSVar2,pVVar3->method);
                    /* try { // try from 03340118 to 0344011b has its CatchHandler @ 03340130 */
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03340120 to 03440123 has its CatchHandler @ 0334012c */
                    /* try { // try from 03340124 to 03440143 has its CatchHandler @ 0333ff44 */
                    /* catch() { ... } // from try @ 033400b4 with catch @ 03340128 */
                    /* catch() { ... } // from try @ 03340120 with catch @ 0334012c */
  do {
                    /* catch() { ... } // from try @ 03340118 with catch @ 03340130 */
    lVar7 = *plVar4;
                    /* catch() { ... } // from try @ 03340098 with catch @ 03340134 */
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
                    /* try { // try from 03340144 to 03440147 has its CatchHandler @ 033404a4 */
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* try { // try from 03340148 to 0344032b has its CatchHandler @ 0333ff44 */
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0334017c;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    method = (MethodInfo *)0x0;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_0334017c:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_03340248;
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)(piVar11 + -2) ==
            System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_033401d8;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    method = (MethodInfo *)0x0;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_033401d8:
    MLNEFBDGKEK = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (MLNEFBDGKEK == (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pLVar9 = (MLNEFBDGKEK->fields).ADHFHEJFJPK;
    if (pLVar9 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pLVar9->fields).JAICMIMBIOA <= (float)PCAIKIGGBMJ) {
      OJHODFIGFMA__LJOAPAKCNLD(__this,MLNEFBDGKEK,method);
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03340264;
    }
  }
LAB_03340248:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_03340264:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


// ===== public void KNPPNBKCCNN()  [RVA 0x3240354]
// OJHODFIGFMA$$KNPPNBKCCNN @ RVA 0x3240354

void OJHODFIGFMA__KNPPNBKCCNN(OJHODFIGFMA_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
                    /* try { // try from 0334035c to 03440367 has its CatchHandler @ 033404d4 */
  if ((DAT_04567083 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3533/*"BodyguardsWin"*/);
    DAT_04567083 = 1;
  }
  OJHODFIGFMA__JMDPIKBAPCH(__this,StringLiteral_3533/*"BodyguardsWin"*/,in_x2);
  return;
}


// ===== public void LJENKIPCOAA(bool NPKHCHGKFLA)  [RVA 0x3240680]
// OJHODFIGFMA$$LJENKIPCOAA @ RVA 0x3240680

void OJHODFIGFMA__LJENKIPCOAA(OJHODFIGFMA_o *__this,bool NPKHCHGKFLA,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  OJHODFIGFMA_EMMLKOABOHF_o *pOVar5;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_98;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_70;
  
  if ((DAT_04567084 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Item__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
                );
                    /* try { // try from 033406cc to 034406e7 has its CatchHandler @ 0334077c */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_get_Current__
                );
                    /* try { // try from 033406e8 to 0344075b has its CatchHandler @ 03340558 */
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_LKPNOBFEAKD>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_LKPNOBFEAKD>_get_Value__);
    DAT_04567084 = 1;
  }
  local_70.fields._getEnumeratorRetType = 0;
  local_70.fields._36_4_ = 0;
  local_70.fields._version = 0;
  local_70.fields._index = 0;
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._current.fields.value = (Il2CppObject *)0x0;
  local_70.fields._current.fields.key = (Il2CppObject *)0x0;
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).GGPHFPNMIIJ;
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
            (&local_98,pSVar3,
             Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__);
  local_70.fields._version = local_98.fields._version;
  local_70.fields._index = local_98.fields._index;
  local_70.fields._dictionary = local_98.fields._dictionary;
  local_70.fields._current.fields.value = local_98.fields._current.fields.value;
  local_70.fields._current.fields.key = local_98.fields._current.fields.key;
  local_70.fields._getEnumeratorRetType = local_98.fields._getEnumeratorRetType;
  local_70.fields._36_4_ = local_98.fields._36_4_;
LAB_03340758:
                    /* try { // try from 0334075c to 03440763 has its CatchHandler @ 03340788 */
  bVar2 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                    (&local_70,
                     Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                    );
  pIVar1 = local_70.fields._current.fields.value;
                    /* try { // try from 03340764 to 0344076b has its CatchHandler @ 03340778 */
  if (!bVar2) {
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_70,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
              );
    OJHODFIGFMA__MBLPHLDFJOK(__this,method_00);
                    /* catch() { ... } // from try @ 033407a0 with catch @ 033407c4 */
                    /* try { // try from 033407cc to 034407d3 has its CatchHandler @ 033407e8 */
                    /* try { // try from 033407d4 to 034407df has its CatchHandler @ 03340558 */
    return;
  }
                    /* try { // try from 0334076c to 03440773 has its CatchHandler @ 03340788 */
  if (NPKHCHGKFLA) goto code_r0x03340770;
  goto LAB_0334077c;
code_r0x03340770:
  if (local_70.fields._current.fields.value == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033407cc with catch @ 033407e8
                       catch(type#2 @ 00000000) { ... } // from try @ 033407e0 with catch @ 033407e8
                        */
    FUN_01bab8c8();
  }
                    /* try { // try from 03340774 to 0344079f has its CatchHandler @ 03340558 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03340764 with catch @ 03340778
                        */
  if (*(char *)&local_70.fields._current.fields.value[6].monitor == '\0') {
LAB_0334077c:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033406cc with catch @ 0334077c
                        */
    pOVar5 = (__this->fields).HEHMPFLAEGE;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03340678 with catch @ 03340780
                        */
    if (pOVar5 == (OJHODFIGFMA_EMMLKOABOHF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pOVar5->fields).IAGNJPIIEPO
    ;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334075c with catch @ 03340788
                       catch(type#1 @ 03f99f68) { ... } // from try @ 0334076c with catch @ 03340788
                        */
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                       (pSVar3,local_70.fields._current.fields.key,
                        Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Item__
                       );
    if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033407e0 to 034407e7 has its CatchHandler @ 033407e8 */
      FUN_01bab8c8();
    }
                    /* try { // try from 033407a0 to 034407a3 has its CatchHandler @ 033407c4 */
                    /* try { // try from 033407a4 to 034407cb has its CatchHandler @ 03340558 */
    *(undefined4 *)((long)&pIVar1[6].klass + 4) = *(undefined4 *)&pIVar4[1].monitor;
  }
  goto LAB_03340758;
}


// ===== public void IJBKOILCCAB()  [RVA 0x3240B30]
// OJHODFIGFMA$$IJBKOILCCAB @ RVA 0x3240B30

void OJHODFIGFMA__IJBKOILCCAB(OJHODFIGFMA_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  if ((DAT_04567085 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4247/*"ChallangesBeaten"*/);
    DAT_04567085 = 1;
  }
  OJHODFIGFMA__JMDPIKBAPCH(__this,StringLiteral_4247/*"ChallangesBeaten"*/,in_x2);
  return;
}


// ===== public void MBLPHLDFJOK()  [RVA 0x3240868]
// OJHODFIGFMA$$MBLPHLDFJOK @ RVA 0x3240868

void OJHODFIGFMA__MBLPHLDFJOK(OJHODFIGFMA_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Text_StringBuilder_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_String_o *pSVar3;
  Il2CppObject *pIVar4;
  MethodInfo *extraout_x1;
  OJHODFIGFMA_EMMLKOABOHF_o *pOVar5;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_98;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_70;
  
  if ((DAT_04567086 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Value__
                );
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_4831/*"Counter: "*/);
    FUN_01bab630(&StringLiteral_4841/*"Counters -------------------------------------\n"*/);
    FUN_01bab630(&StringLiteral_325/*" Value: "*/);
    DAT_04567086 = 1;
    method = extraout_x1;
  }
  local_70.fields._getEnumeratorRetType = 0;
  local_70.fields._36_4_ = 0;
  local_70.fields._version = 0;
  local_70.fields._index = 0;
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._current.fields.value = (Il2CppObject *)0x0;
  local_70.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  pOVar5 = (__this->fields).HEHMPFLAEGE;
  if ((pOVar5 != (OJHODFIGFMA_EMMLKOABOHF_o *)0x0) &&
     (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (pOVar5->fields).IAGNJPIIEPO,
     __this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_98,__this_01,
               Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_GetEnumerator__
              );
    bVar1 = false;
    local_70.fields._version = local_98.fields._version;
    local_70.fields._index = local_98.fields._index;
    local_70.fields._dictionary = local_98.fields._dictionary;
    local_70.fields._current.fields.value = local_98.fields._current.fields.value;
    local_70.fields._current.fields.key = local_98.fields._current.fields.key;
    local_70.fields._getEnumeratorRetType = local_98.fields._getEnumeratorRetType;
    local_70.fields._36_4_ = local_98.fields._36_4_;
    while( true ) {
      bVar2 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_MoveNext__
                        );
      pIVar4 = local_70.fields._current.fields.key;
      if (!bVar2) break;
      if (local_70.fields._current.fields.value == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (*(int *)&local_70.fields._current.fields.value[1].monitor != 0) {
        pSVar3 = System_Int32__ToString
                           ((int)local_70.fields._current.fields.value + 0x18,(MethodInfo *)0x0);
        pSVar3 = System_String__Concat
                           (StringLiteral_4831/*"Counter: "*/,(System_String_o *)pIVar4,StringLiteral_325/*" Value: "*/,pSVar3,
                            (MethodInfo *)0x0);
        if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = true;
        System_Text_StringBuilder__AppendLine(__this_00,pSVar3,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_70,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_Dispose__
              );
    if (bVar1) {
      if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03340a8c;
      System_Text_StringBuilder__Insert(__this_00,0,StringLiteral_4841/*"Counters -------------------------------------\n"*/,(MethodInfo *)0x0);
      pIVar4 = (Il2CppObject *)
               (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log(pIVar4,(MethodInfo *)0x0);
    }
    return;
  }
LAB_03340a8c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3240B78]
// OJHODFIGFMA$$.ctor @ RVA 0x3240B78

void OJHODFIGFMA___ctor(OJHODFIGFMA_o *__this,MethodInfo *method)

{
  System_Action_OJHODFIGFMA_MJOLIJOPBMO__o **ppSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o **ppSVar2;
  OJHODFIGFMA_EMMLKOABOHF_o *__this_01;
  OJHODFIGFMA_EMMLKOABOHF_o **ppOVar3;
  IFBJEEAJGEO_o *__this_02;
  IFBJEEAJGEO_o **ppIVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar5;
  undefined1 auVar6 [16];
  
  if ((DAT_04567087 & 1) == 0) {
    FUN_01bab630(&System_Action<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_TypeInfo);
    FUN_01bab630(&OJHODFIGFMA_EMMLKOABOHF_TypeInfo);
    FUN_01bab630(&IFBJEEAJGEO_TypeInfo);
    FUN_01bab630(&Method_OJHODFIGFMA_<>c_FMDFGIKBIID__);
    FUN_01bab630(&OJHODFIGFMA_<>c_TypeInfo);
    DAT_04567087 = 1;
    method = extraout_x1;
  }
  if ((OJHODFIGFMA_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OJHODFIGFMA_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar5 = OJHODFIGFMA_<>c_TypeInfo->static_fields->__9__44_0;
  if (pSVar5 == (System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
    if ((OJHODFIGFMA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(OJHODFIGFMA_<>c_TypeInfo,method);
    }
    pSVar5 = (System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *)
             thunk_FUN_01bda818(System_Action<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &OJHODFIGFMA_<>c_TypeInfo->static_fields->__9__44_0;
    *ppSVar1 = pSVar5;
    thunk_FUN_01c20e04(ppSVar1,pSVar5);
  }
  if (__this != (OJHODFIGFMA_o *)0x0) {
    (__this->fields).LAFPPPABCJG = pSVar5;
    thunk_FUN_01c20e04(&__this->fields,pSVar5);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                thunk_FUN_01bda818(
                                  System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_TypeInfo
                                  );
    System_Collections_Generic_Dictionary<object,_object>___ctor
              (__this_00,Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>__ctor__);
    ppSVar2 = &(__this->fields).GGPHFPNMIIJ;
    *ppSVar2 = (System_Collections_Generic_Dictionary_string__LKPNOBFEAKD__o *)__this_00;
    thunk_FUN_01c20e04(ppSVar2,__this_00);
    auVar6 = thunk_FUN_01bda818(OJHODFIGFMA_EMMLKOABOHF_TypeInfo);
    __this_01 = auVar6._0_8_;
    OJHODFIGFMA_EMMLKOABOHF___ctor(__this_01,auVar6._8_8_);
    ppOVar3 = &(__this->fields).HEHMPFLAEGE;
    *ppOVar3 = __this_01;
    thunk_FUN_01c20e04(ppOVar3,__this_01);
    __this_02 = (IFBJEEAJGEO_o *)thunk_FUN_01bda818(IFBJEEAJGEO_TypeInfo);
    IFBJEEAJGEO___ctor(__this_02,(MethodInfo *)0x0);
    ppIVar4 = &(__this->fields).APPPNIFKKCH;
    *ppIVar4 = __this_02;
    thunk_FUN_01c20e04(ppIVar4,__this_02);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OJJDGIEHKFL()  [RVA 0x3240DB8]
// OJHODFIGFMA$$OJJDGIEHKFL @ RVA 0x3240DB8

void OJHODFIGFMA__OJJDGIEHKFL(OJHODFIGFMA_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  if ((DAT_04567088 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10206/*"PerfectRound"*/);
    DAT_04567088 = 1;
  }
  OJHODFIGFMA__JMDPIKBAPCH(__this,StringLiteral_10206/*"PerfectRound"*/,in_x2);
  return;
}


// ===== public void HALLPDDFCNN()  [RVA 0x3240E00]
// OJHODFIGFMA$$HALLPDDFCNN @ RVA 0x3240E00

void OJHODFIGFMA__HALLPDDFCNN(OJHODFIGFMA_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  if ((DAT_04567089 & 1) == 0) {
    FUN_01bab630(&StringLiteral_3547/*"BossNoLose"*/);
    DAT_04567089 = 1;
  }
  OJHODFIGFMA__JMDPIKBAPCH(__this,StringLiteral_3547/*"BossNoLose"*/,in_x2);
  return;
}


// ===== public void NCENBOMEPBN(int CJNHFNHJHPE)  [RVA 0x3240E48]
// OJHODFIGFMA$$NCENBOMEPBN @ RVA 0x3240E48

/* WARNING: Removing unreachable block (ram,0x03341290) */

void OJHODFIGFMA__NCENBOMEPBN(OJHODFIGFMA_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar3;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  undefined8 *puVar6;
  OJHODFIGFMA_MJOLIJOPBMO_o *pOVar7;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__c *pSVar8;
  long lVar9;
  ulong uVar10;
  LKPNOBFEAKD_o *pLVar11;
  int32_t *piVar12;
  int *piVar13;
  
  if ((DAT_0456708a & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&StringLiteral_11437/*"RoundQuicker"*/);
    FUN_01bab630(&StringLiteral_11435/*"RoundLonger"*/);
    DAT_0456708a = 1;
  }
  pSVar3 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_11437/*"RoundQuicker"*/,method);
  if (pSVar3 != (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
    pSVar8 = pSVar3->klass;
    uVar1._0_1_ = (pSVar8->_2).rank;
    uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar10 = (ulong)uVar1;
    if (uVar10 != 0) {
      piVar12 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo)
        {
          pVVar4 = pSVar8->vtable + *piVar12;
          goto LAB_03340f30;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    method = (MethodInfo *)0x0;
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pSVar3);
LAB_03340f30:
    plVar5 = (long *)(*pVVar4->methodPtr)(pSVar3,pVVar4->method);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03340fac;
          }
          uVar10 = uVar10 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar10 != 0);
      }
      method = (MethodInfo *)0x0;
      puVar6 = (undefined8 *)FUN_01b81914(plVar5);
LAB_03340fac:
      uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_033410a0;
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto LAB_03341078;
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_03341060;
      }
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)(piVar13 + -2)
              == System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03341008;
          }
          uVar10 = uVar10 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar10 != 0);
      }
      method = (MethodInfo *)0x0;
      puVar6 = (undefined8 *)FUN_01b81914(plVar5);
LAB_03341008:
      pOVar7 = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (pOVar7 == (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pLVar11 = (pOVar7->fields).ADHFHEJFJPK;
      if (pLVar11 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((float)CJNHFNHJHPE <= (pLVar11->fields).JAICMIMBIOA) {
        OJHODFIGFMA__LJOAPAKCNLD(__this,pOVar7,method);
      }
    } while( true );
  }
  goto LAB_0334128c;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar13 = piVar13 + 4;
    if (uVar10 == 0) break;
LAB_03341220:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03341254;
    }
  }
LAB_03341238:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_03341254:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar13 = piVar13 + 4;
    if (uVar10 == 0) break;
LAB_03341060:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03341094;
    }
  }
LAB_03341078:
  method = (MethodInfo *)0x0;
  puVar6 = (undefined8 *)FUN_01b81914(plVar5);
LAB_03341094:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_033410a0:
  pSVar3 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_11435/*"RoundLonger"*/,method);
  if (pSVar3 != (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
    pSVar8 = pSVar3->klass;
    uVar2._0_1_ = (pSVar8->_2).rank;
    uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar10 = (ulong)uVar2;
    if (uVar10 != 0) {
      piVar12 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo)
        {
          pVVar4 = pSVar8->vtable + *piVar12;
          goto LAB_0334110c;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    method = (MethodInfo *)0x0;
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pSVar3);
LAB_0334110c:
    plVar5 = (long *)(*pVVar4->methodPtr)(pSVar3,pVVar4->method);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0334116c;
          }
          uVar10 = uVar10 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar10 != 0);
      }
      method = (MethodInfo *)0x0;
      puVar6 = (undefined8 *)FUN_01b81914(plVar5);
LAB_0334116c:
      uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        if (plVar5 == (long *)0x0) {
          return;
        }
        lVar9 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto LAB_03341238;
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_03341220;
      }
      lVar9 = *plVar5;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)(piVar13 + -2)
              == System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_033411c8;
          }
          uVar10 = uVar10 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar10 != 0);
      }
      method = (MethodInfo *)0x0;
      puVar6 = (undefined8 *)FUN_01b81914(plVar5);
LAB_033411c8:
      pOVar7 = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (pOVar7 == (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pLVar11 = (pOVar7->fields).ADHFHEJFJPK;
      if (pLVar11 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((pLVar11->fields).JAICMIMBIOA <= (float)CJNHFNHJHPE) {
        OJHODFIGFMA__LJOAPAKCNLD(__this,pOVar7,method);
      }
    } while( true );
  }
LAB_0334128c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FHEDJOBDEPF(int JLGJOLIMJKB, bool NPKHCHGKFLA = False)  [RVA 0x32413F4]
// OJHODFIGFMA$$FHEDJOBDEPF @ RVA 0x32413F4

void OJHODFIGFMA__FHEDJOBDEPF
               (OJHODFIGFMA_o *__this,int32_t JLGJOLIMJKB,bool NPKHCHGKFLA,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  OJHODFIGFMA_EMMLKOABOHF_o *pOVar3;
  System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar4;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_88;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  
  if ((DAT_0456708b & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Value__
                );
    DAT_0456708b = 1;
  }
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  if (!NPKHCHGKFLA) {
    pOVar3 = (__this->fields).HEHMPFLAEGE;
    if ((pOVar3 == (OJHODFIGFMA_EMMLKOABOHF_o *)0x0) ||
       (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (pOVar3->fields).IAGNJPIIEPO,
       __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_88,__this_00,
               Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_GetEnumerator__
              );
    local_60.fields._version = local_88.fields._version;
    local_60.fields._index = local_88.fields._index;
    local_60.fields._dictionary = local_88.fields._dictionary;
    local_60.fields._current.fields.value = local_88.fields._current.fields.value;
    local_60.fields._current.fields.key = local_88.fields._current.fields.key;
    local_60.fields._getEnumeratorRetType = local_88.fields._getEnumeratorRetType;
    local_60.fields._36_4_ = local_88.fields._36_4_;
    while( true ) {
      bVar2 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_MoveNext__
                        );
      pIVar1 = local_60.fields._current.fields.value;
      if (!bVar2) break;
      if (local_60.fields._current.fields.value == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_60.fields._current.fields.value[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = LKPNOBFEAKD__BNNIDPDMOIL
                        ((LKPNOBFEAKD_o *)local_60.fields._current.fields.value[1].klass,
                         (__this->fields).APPPNIFKKCH,(MethodInfo *)0x0);
      if (bVar2) {
        if (pIVar1[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (*(int *)&((pIVar1[1].klass)->_1).parent == 2) {
          *(uint *)&pIVar1[1].monitor = (uint)(*(int *)&pIVar1[1].monitor == JLGJOLIMJKB);
          pSVar4 = (__this->fields).LAFPPPABCJG;
          if (pSVar4 == (System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* try { // try from 0334150c to 0344159f has its CatchHandler @ 0334150c
                       catch() { ... } // from try @ 0334150c with catch @ 0334150c
                       catch() { ... } // from try @ 033415a8 with catch @ 0334150c
                       catch() { ... } // from try @ 03341600 with catch @ 0334150c
                       catch() { ... } // from try @ 03341624 with catch @ 0334150c
                       catch() { ... } // from try @ 0334165c with catch @ 0334150c */
          (*(code *)(pSVar4->fields).super.super.invoke_impl)
                    ((pSVar4->fields).super.super.method_code,pIVar1,
                     (pSVar4->fields).super.super.method);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_60,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_Dispose__
              );
  }
  return;
}


// ===== private OJHODFIGFMA.MJOLIJOPBMO POHJNBHBIFB(string KGLJICLJHEL)  [RVA 0x32415EC]
// OJHODFIGFMA$$POHJNBHBIFB @ RVA 0x32415EC

OJHODFIGFMA_MJOLIJOPBMO_o *
OJHODFIGFMA__POHJNBHBIFB(OJHODFIGFMA_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  OJHODFIGFMA_MJOLIJOPBMO_o *pOVar3;
  OJHODFIGFMA_EMMLKOABOHF_o *pOVar4;
  
                    /* try { // try from 033415fc to 034415ff has its CatchHandler @ 03341604 */
                    /* try { // try from 03341600 to 0344161f has its CatchHandler @ 0334150c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033415fc with catch @ 03341604
                        */
  if ((DAT_0456708c & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033415a0 with catch @ 03341608
                        */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Item__
                );
                    /* try { // try from 03341620 to 03441623 has its CatchHandler @ 0334164c */
                    /* try { // try from 03341624 to 03441653 has its CatchHandler @ 0334150c */
    DAT_0456708c = 1;
  }
  pOVar4 = (__this->fields).HEHMPFLAEGE;
  if ((pOVar4 != (OJHODFIGFMA_EMMLKOABOHF_o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (pOVar4->fields).IAGNJPIIEPO,
     pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_ContainsKey__
                      );
                    /* catch() { ... } // from try @ 03341620 with catch @ 0334164c */
    if (!bVar1) {
      return (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0;
    }
    pOVar4 = (__this->fields).HEHMPFLAEGE;
                    /* try { // try from 03341654 to 0344165b has its CatchHandler @ 03341670 */
                    /* try { // try from 0334165c to 03441667 has its CatchHandler @ 0334150c */
    if ((pOVar4 != (OJHODFIGFMA_EMMLKOABOHF_o *)0x0) &&
       (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (pOVar4->fields).IAGNJPIIEPO,
       pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                    /* try { // try from 03341668 to 0344166f has its CatchHandler @ 03341670 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03341654 with catch @ 03341670
                       catch(type#2 @ 00000000) { ... } // from try @ 03341668 with catch @ 03341670
                        */
                    /* try { // try from 03341674 to 0344171f has its CatchHandler @ 03341674
                       catch() { ... } // from try @ 03341674 with catch @ 03341674
                       catch() { ... } // from try @ 03341764 with catch @ 03341674
                       catch() { ... } // from try @ 033417bc with catch @ 03341674
                       catch() { ... } // from try @ 033417ec with catch @ 03341674
                       catch() { ... } // from try @ 03341838 with catch @ 03341674 */
      pOVar3 = (OJHODFIGFMA_MJOLIJOPBMO_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                          Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Item__
                         );
      return pOVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BJBHFDDPMPB(int CJNHFNHJHPE)  [RVA 0x3241690]
// OJHODFIGFMA$$BJBHFDDPMPB @ RVA 0x3241690

/* WARNING: Removing unreachable block (ram,0x03341908) */

void OJHODFIGFMA__BJBHFDDPMPB(OJHODFIGFMA_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar2;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  OJHODFIGFMA_MJOLIJOPBMO_o *MLNEFBDGKEK;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__c *pSVar6;
  long lVar7;
  ulong uVar8;
  LKPNOBFEAKD_o *pLVar9;
  int32_t *piVar10;
  int *piVar11;
  
  if ((DAT_0456708d & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&StringLiteral_12539/*"SurvivalRounds"*/);
    DAT_0456708d = 1;
  }
  pSVar2 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_12539/*"SurvivalRounds"*/,method);
  if (pSVar2 == (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar6 = pSVar2->klass;
  uVar1._0_1_ = (pSVar6->_2).rank;
  uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
                    /* try { // try from 03341720 to 03441727 has its CatchHandler @ 033417cc */
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
                    /* try { // try from 03341734 to 03441743 has its CatchHandler @ 033417c4 */
    piVar10 = &((pSVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
                    /* try { // try from 03341764 to 034417b7 has its CatchHandler @ 03341674 */
        pVVar3 = pSVar6->vtable + *piVar10;
        goto LAB_0334176c;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  method = (MethodInfo *)0x0;
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pSVar2);
                    /* try { // try from 0334175c to 03441763 has its CatchHandler @ 033417bc */
LAB_0334176c:
  plVar4 = (long *)(*pVVar3->methodPtr)(pSVar2,pVVar3->method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* try { // try from 033417b8 to 034417bb has its CatchHandler @ 033417c8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334175c with catch @ 033417bc
                       try { // try from 033417bc to 034417e7 has its CatchHandler @ 03341674 */
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_033417e8;
        }
        uVar8 = uVar8 - 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03341734 with catch @ 033417c4
                        */
        piVar11 = piVar11 + 4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033417b8 with catch @ 033417c8
                        */
      } while (uVar8 != 0);
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03341720 with catch @ 033417cc
                        */
    method = (MethodInfo *)0x0;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_033417e8:
                    /* try { // try from 033417e8 to 034417eb has its CatchHandler @ 03341820 */
                    /* try { // try from 033417ec to 0344182f has its CatchHandler @ 03341674 */
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_033418b4;
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)(piVar11 + -2) ==
            System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
                    /* try { // try from 03341838 to 03441843 has its CatchHandler @ 03341674 */
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03341844;
        }
        uVar8 = uVar8 - 1;
                    /* catch() { ... } // from try @ 033417e8 with catch @ 03341820 */
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    method = (MethodInfo *)0x0;
                    /* try { // try from 03341830 to 03441837 has its CatchHandler @ 0334184c */
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_03341844:
                    /* try { // try from 03341844 to 0344184b has its CatchHandler @ 0334184c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03341830 with catch @ 0334184c
                       catch(type#2 @ 00000000) { ... } // from try @ 03341844 with catch @ 0334184c
                        */
    MLNEFBDGKEK = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (MLNEFBDGKEK == (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pLVar9 = (MLNEFBDGKEK->fields).ADHFHEJFJPK;
    if (pLVar9 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pLVar9->fields).JAICMIMBIOA <= (float)CJNHFNHJHPE) {
      OJHODFIGFMA__LJOAPAKCNLD(__this,MLNEFBDGKEK,method);
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_033418d0;
    }
  }
LAB_033418b4:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_033418d0:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


// ===== public void JMDPIKBAPCH(string NBCKHHACFGH)  [RVA 0x324039C]
// OJHODFIGFMA$$JMDPIKBAPCH @ RVA 0x324039C

/* WARNING: Removing unreachable block (ram,0x033405d0) */

void OJHODFIGFMA__JMDPIKBAPCH(OJHODFIGFMA_o *__this,System_String_o *NBCKHHACFGH,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar2;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  OJHODFIGFMA_MJOLIJOPBMO_o *MLNEFBDGKEK;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__c *pSVar6;
  long lVar7;
  ulong uVar8;
  int32_t *piVar9;
  int *piVar10;
  
                    /* try { // try from 033403a8 to 034403af has its CatchHandler @ 033404d0 */
  if ((DAT_0456708e & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 033403f0 to 03440413 has its CatchHandler @ 033404d8 */
    DAT_0456708e = 1;
  }
  pSVar2 = OJHODFIGFMA__HKEFJFNDHDO(__this,NBCKHHACFGH,method);
  if (pSVar2 == (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar6 = pSVar2->klass;
  uVar1._0_1_ = (pSVar6->_2).rank;
  uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
                    /* try { // try from 03340424 to 0344042f has its CatchHandler @ 033404d0 */
    piVar9 = &((pSVar6->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 03340430 to 0344047f has its CatchHandler @ 0333ff44 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
        pVVar3 = pSVar6->vtable + *piVar9;
        goto LAB_03340460;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  method = (MethodInfo *)0x0;
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pSVar2);
LAB_03340460:
  plVar4 = (long *)(*pVVar3->methodPtr)(pSVar2,pVVar3->method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar7 = *plVar4;
                    /* try { // try from 03340490 to 03440497 has its CatchHandler @ 033404dc */
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 03340144 with catch @ 033404a4 */
        if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* catch() { ... } // from try @ 033403a8 with catch @ 033404d0
                       catch() { ... } // from try @ 03340424 with catch @ 033404d0
                       try { // try from 033404d0 to 034404ff has its CatchHandler @ 0333ff44 */
                    /* catch() { ... } // from try @ 0334035c with catch @ 033404d4 */
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_033404d8;
        }
        uVar8 = uVar8 - 1;
                    /* try { // try from 033404b4 to 034404bb has its CatchHandler @ 03340554 */
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
                    /* try { // try from 033404bc to 034404c7 has its CatchHandler @ 0333ff44 */
    method = (MethodInfo *)0x0;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
                    /* try { // try from 033404c8 to 034404cf has its CatchHandler @ 03340554 */
LAB_033404d8:
                    /* catch() { ... } // from try @ 033403f0 with catch @ 033404d8 */
                    /* catch() { ... } // from try @ 03340490 with catch @ 033404dc */
                    /* catch() { ... } // from try @ 03340484 with catch @ 033404e0 */
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
                    /* catch() { ... } // from try @ 03340480 with catch @ 033404e4 */
    if ((uVar8 & 1) == 0) break;
                    /* catch() { ... } // from try @ 03340488 with catch @ 033404e8 */
    lVar7 = *plVar4;
                    /* catch() { ... } // from try @ 03340348 with catch @ 033404ec */
                    /* catch() { ... } // from try @ 0334032c with catch @ 033404f0 */
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
                    /* try { // try from 03340500 to 03440503 has its CatchHandler @ 03340530 */
                    /* try { // try from 03340504 to 0344053f has its CatchHandler @ 0333ff44 */
        if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)(piVar10 + -2) ==
            System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
                    /* catch() { ... } // from try @ 03340500 with catch @ 03340530 */
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_03340534;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    method = (MethodInfo *)0x0;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_03340534:
    MLNEFBDGKEK = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
                    /* try { // try from 03340540 to 03440553 has its CatchHandler @ 03340554 */
    OJHODFIGFMA__LJOAPAKCNLD(__this,MLNEFBDGKEK,method);
  } while( true );
                    /* catch() { ... } // from try @ 033404b4 with catch @ 03340554
                       catch() { ... } // from try @ 033404c8 with catch @ 03340554
                       catch() { ... } // from try @ 03340540 with catch @ 03340554 */
  if (plVar4 != (long *)0x0) {
                    /* try { // try from 03340558 to 03440677 has its CatchHandler @ 03340558
                       catch() { ... } // from try @ 03340558 with catch @ 03340558
                       catch() { ... } // from try @ 033406e8 with catch @ 03340558
                       catch() { ... } // from try @ 03340774 with catch @ 03340558
                       catch() { ... } // from try @ 033407a4 with catch @ 03340558
                       catch() { ... } // from try @ 033407d4 with catch @ 03340558 */
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_033405a4;
        }
        uVar8 = uVar8 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_033405a4:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  return;
}


// ===== public void BMAJOKMNNHP(int PCAIKIGGBMJ)  [RVA 0x32419C0]
// OJHODFIGFMA$$BMAJOKMNNHP @ RVA 0x32419C0

/* WARNING: Removing unreachable block (ram,0x03341c38) */

void OJHODFIGFMA__BMAJOKMNNHP(OJHODFIGFMA_o *__this,int32_t PCAIKIGGBMJ,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar2;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  OJHODFIGFMA_MJOLIJOPBMO_o *MLNEFBDGKEK;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__c *pSVar6;
  long lVar7;
  ulong uVar8;
  LKPNOBFEAKD_o *pLVar9;
  int32_t *piVar10;
  int *piVar11;
  
  if ((DAT_0456708f & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&StringLiteral_12495/*"Style"*/);
    DAT_0456708f = 1;
  }
  pSVar2 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_12495/*"Style"*/,method);
  if (pSVar2 == (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar6 = pSVar2->klass;
  uVar1._0_1_ = (pSVar6->_2).rank;
  uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
    piVar10 = &((pSVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
        pVVar3 = pSVar6->vtable + *piVar10;
        goto LAB_03341a9c;
      }
      uVar8 = uVar8 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar8 != 0);
  }
  method = (MethodInfo *)0x0;
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pSVar2);
LAB_03341a9c:
  plVar4 = (long *)(*pVVar3->methodPtr)(pSVar2,pVVar3->method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03341b18;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    method = (MethodInfo *)0x0;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_03341b18:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 == 0) goto LAB_03341be4;
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    lVar7 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)(piVar11 + -2) ==
            System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03341b74;
        }
        uVar8 = uVar8 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar8 != 0);
    }
    method = (MethodInfo *)0x0;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_03341b74:
    MLNEFBDGKEK = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (MLNEFBDGKEK == (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pLVar9 = (MLNEFBDGKEK->fields).ADHFHEJFJPK;
    if (pLVar9 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pLVar9->fields).JAICMIMBIOA <= (float)PCAIKIGGBMJ) {
      OJHODFIGFMA__LJOAPAKCNLD(__this,MLNEFBDGKEK,method);
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar11 = piVar11 + 4;
    if (uVar8 == 0) break;
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar7 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_03341c00;
    }
  }
LAB_03341be4:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_03341c00:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}


// ===== private float JNPDHEDIOPF(string JHJCKAHONIO)  [RVA 0x323FEFC]
// OJHODFIGFMA$$JNPDHEDIOPF @ RVA 0x323FEFC

float OJHODFIGFMA__JNPDHEDIOPF
                (OJHODFIGFMA_o *__this,System_String_o *JHJCKAHONIO,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *__this_00;
  int index;
  float fVar3;
  
  if ((DAT_04567090 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_get_Item__);
                    /* try { // try from 0333ff44 to 03440097 has its CatchHandler @ 0333ff44
                       catch() { ... } // from try @ 0333ff44 with catch @ 0333ff44
                       catch() { ... } // from try @ 033400c0 with catch @ 0333ff44
                       catch() { ... } // from try @ 03340124 with catch @ 0333ff44
                       catch() { ... } // from try @ 03340148 with catch @ 0333ff44
                       catch() { ... } // from try @ 03340430 with catch @ 0333ff44
                       catch() { ... } // from try @ 033404bc with catch @ 0333ff44
                       catch() { ... } // from try @ 033404d0 with catch @ 0333ff44
                       catch() { ... } // from try @ 03340504 with catch @ 0333ff44 */
    DAT_04567090 = 1;
  }
  if ((Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045669da == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo);
    DAT_045669da = '\x01';
  }
  if ((Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->static_fields->CAGNGFDHPGF;
  if (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
    if (0 < (__this_00->fields)._size) {
      index = 0;
      do {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,index,
                            Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_get_Item__
                           );
        if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03340020;
        bVar1 = System_String__op_Equality
                          ((System_String_o *)pIVar2[1].klass,JHJCKAHONIO,(MethodInfo *)0x0);
        if (bVar1) {
          return *(float *)&pIVar2[1].monitor;
        }
        index = index + 1;
      } while (index < (__this_00->fields)._size);
    }
    fVar3 = PCOEHCPGBBG__OFFODGKLGOP(JHJCKAHONIO,0.0,(MethodInfo *)0x0);
    return fVar3;
  }
LAB_03340020:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MHKENGKHDKD()  [RVA 0x3241CF0]
// OJHODFIGFMA$$MHKENGKHDKD @ RVA 0x3241CF0

void OJHODFIGFMA__MHKENGKHDKD(OJHODFIGFMA_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  undefined8 uVar2;
  OJHODFIGFMA_EMMLKOABOHF_o *pOVar3;
  undefined1 auVar4 [16];
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_50;
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_04567091 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Current__
                );
    auVar4 = FUN_01bab630(&
                          Method_System_Collections_Generic_KeyValuePair<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Value__
                         );
    DAT_04567091 = 1;
  }
  uVar2 = auVar4._0_8_;
  local_50.fields._getEnumeratorRetType = 0;
  local_50.fields._36_4_ = 0;
  local_50.fields._version = 0;
  local_50.fields._index = 0;
  local_50.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_50.fields._current.fields.value = (Il2CppObject *)0x0;
  local_50.fields._current.fields.key = (Il2CppObject *)0x0;
  pOVar3 = (__this->fields).HEHMPFLAEGE;
  (__this->fields).LDKCAIDMEDK = false;
  if ((pOVar3 != (OJHODFIGFMA_EMMLKOABOHF_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (pOVar3->fields).IAGNJPIIEPO, uVar2 = 0,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_50,__this_00,
               Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_GetEnumerator__
              );
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_OJHODFIGFMA_MJOLIJOPBMO>_Dispose__
                  );
        return;
      }
      if (local_50.fields._current.fields.value == (Il2CppObject *)0x0) break;
      if (local_50.fields._current.fields.value[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (*(int *)&((local_50.fields._current.fields.value[1].klass)->_1).parent == 1) {
        *(undefined1 *)((long)&local_50.fields._current.fields.value[1].monitor + 4) = 0;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar4._8_8_);
}


// ===== public void ABPCHMAAIOJ()  [RVA 0x3241E6C]
// OJHODFIGFMA$$ABPCHMAAIOJ @ RVA 0x3241E6C

void OJHODFIGFMA__ABPCHMAAIOJ(OJHODFIGFMA_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  if ((DAT_04567092 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8678/*"Losses"*/);
    DAT_04567092 = 1;
  }
  OJHODFIGFMA__JMDPIKBAPCH(__this,StringLiteral_8678/*"Losses"*/,in_x2);
  return;
}


// ===== public void AAOBNFMOLCJ()  [RVA 0x3241EB4]
// OJHODFIGFMA$$AAOBNFMOLCJ @ RVA 0x3241EB4

void OJHODFIGFMA__AAOBNFMOLCJ(OJHODFIGFMA_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  if ((DAT_04567093 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8904/*"MaximumLevel"*/);
    DAT_04567093 = 1;
  }
  OJHODFIGFMA__JMDPIKBAPCH(__this,StringLiteral_8904/*"MaximumLevel"*/,in_x2);
  return;
}


// ===== public void PKGNIKHFJPK(ECENNHNBAME NLEBDPHNIDI, bool INPNAICDDJN, bool JHMMNIMBIKL, bool FGFJCJHGFHB, bool OMECOCNLHEE, bool JECKCMKCNCH, bool ABOGGPJGIAI)  [RVA 0x3241EFC]
// OJHODFIGFMA$$PKGNIKHFJPK @ RVA 0x3241EFC

/* WARNING: Removing unreachable block (ram,0x03342a3c) */
/* WARNING: Removing unreachable block (ram,0x03342368) */
/* WARNING: Removing unreachable block (ram,0x033425e8) */
/* WARNING: Removing unreachable block (ram,0x03342a54) */
/* WARNING: Removing unreachable block (ram,0x03342a48) */
/* WARNING: Removing unreachable block (ram,0x033427bc) */
/* WARNING: Removing unreachable block (ram,0x03342a5c) */

void OJHODFIGFMA__PKGNIKHFJPK
               (OJHODFIGFMA_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,bool INPNAICDDJN,bool JHMMNIMBIKL,
               bool FGFJCJHGFHB,bool OMECOCNLHEE,bool JECKCMKCNCH,bool ABOGGPJGIAI,
               MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar7;
  VirtualInvokeData *pVVar8;
  long *plVar9;
  undefined8 *puVar10;
  OJHODFIGFMA_MJOLIJOPBMO_o *pOVar11;
  MethodInfo *pMVar12;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__c *pSVar13;
  long lVar14;
  LKPNOBFEAKD_o *pLVar15;
  HOOAAGABMBL_o *pHVar16;
  ulong uVar17;
  PJKHAJKEHEL_o *pPVar18;
  int32_t *piVar19;
  int *piVar20;
  System_String_o *a;
  
  pMVar12 = (MethodInfo *)(ulong)INPNAICDDJN;
                    /* try { // try from 03341f04 to 0344213b has its CatchHandler @ 03341f04
                       catch() { ... } // from try @ 03341f04 with catch @ 03341f04
                       catch() { ... } // from try @ 033421c8 with catch @ 03341f04
                       catch() { ... } // from try @ 0334223c with catch @ 03341f04
                       catch() { ... } // from try @ 03342264 with catch @ 03341f04
                       catch() { ... } // from try @ 033422e4 with catch @ 03341f04 */
  if ((DAT_04567094 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&StringLiteral_7049/*"HeadHitRound"*/);
    FUN_01bab630(&StringLiteral_3516/*"BlockedRound"*/);
    FUN_01bab630(&StringLiteral_7050/*"HeadKick"*/);
    FUN_01bab630(&StringLiteral_11342/*"RestrictedAnimation"*/);
    FUN_01bab630(&StringLiteral_6479/*"FirstHits"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_5405/*"Disarm"*/);
    DAT_04567094 = 1;
  }
  if ((!JECKCMKCNCH) && (JHMMNIMBIKL)) {
    pSVar7 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_6479/*"FirstHits"*/,pMVar12);
    if (pSVar7 != (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
      pSVar13 = pSVar7->klass;
      uVar1._0_1_ = (pSVar13->_2).rank;
      uVar1._1_1_ = (pSVar13->_2).minimumAlignment;
      uVar17 = (ulong)uVar1;
      if (uVar17 != 0) {
        piVar19 = &((pSVar13->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
              (Il2CppClass *)
              System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
            pVVar8 = pSVar13->vtable + *piVar19;
            goto LAB_03342050;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      pMVar12 = (MethodInfo *)0x0;
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pSVar7);
LAB_03342050:
      plVar9 = (long *)(*pVVar8->methodPtr)(pSVar7,pVVar8->method);
      do {
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03342a14 to 03442a17 has its CatchHandler @ 03342a34 */
          FUN_01bab8c8();
        }
        lVar14 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar20 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_033420c0;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        pMVar12 = (MethodInfo *)0x0;
        puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_033420c0:
        uVar17 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar17 & 1) == 0) {
                    /* try { // try from 0334213c to 03442143 has its CatchHandler @ 03342240 */
          if (plVar9 == (long *)0x0) goto LAB_0334219c;
          lVar14 = *plVar9;
          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar17 == 0) goto LAB_03342170;
                    /* try { // try from 03342154 to 034421c7 has its CatchHandler @ 03342248 */
          piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_03342158;
        }
        lVar14 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)
                 (piVar20 + -2) ==
                System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_0334211c;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        pMVar12 = (MethodInfo *)0x0;
        puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_0334211c:
        pOVar11 = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        OJHODFIGFMA__LJOAPAKCNLD(__this,pOVar11,pMVar12);
      } while( true );
    }
    goto LAB_03342a38;
  }
  goto LAB_0334219c;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar20 = piVar20 + 4;
    if (uVar17 == 0) break;
LAB_03342158:
    if (*(System_IDisposable_c **)(piVar20 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_0334218c;
    }
  }
LAB_03342170:
  pMVar12 = (MethodInfo *)0x0;
  puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_0334218c:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_0334219c:
  if (FGFJCJHGFHB) {
    pSVar7 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_5405/*"Disarm"*/,pMVar12);
    if (pSVar7 != (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
      pSVar13 = pSVar7->klass;
      uVar2._0_1_ = (pSVar13->_2).rank;
      uVar2._1_1_ = (pSVar13->_2).minimumAlignment;
      uVar17 = (ulong)uVar2;
                    /* try { // try from 033421c8 to 0344222f has its CatchHandler @ 03341f04 */
      if (uVar17 != 0) {
        piVar19 = &((pSVar13->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
              (Il2CppClass *)
              System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
            pVVar8 = pSVar13->vtable + *piVar19;
            goto LAB_03342210;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      pMVar12 = (MethodInfo *)0x0;
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pSVar7);
LAB_03342210:
      plVar9 = (long *)(*pVVar8->methodPtr)(pSVar7,pVVar8->method);
      do {
                    /* try { // try from 03342230 to 0344223b has its CatchHandler @ 03342244 */
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03342a18 to 03442a1b has its CatchHandler @ 03342a30 */
          FUN_01bab8c8();
        }
        lVar14 = *plVar9;
                    /* try { // try from 0334223c to 0344225f has its CatchHandler @ 03341f04 */
        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334213c with catch @ 03342240
                        */
        if (uVar17 != 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03342230 with catch @ 03342244
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03342154 with catch @ 03342248
                        */
          piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar20 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_03342280;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
                    /* try { // try from 03342260 to 03442263 has its CatchHandler @ 033422cc */
          } while (uVar17 != 0);
        }
                    /* try { // try from 03342264 to 034422db has its CatchHandler @ 03341f04 */
        pMVar12 = (MethodInfo *)0x0;
        puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_03342280:
        uVar17 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar17 & 1) == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033422dc with catch @ 033422f8
                       catch(type#2 @ 00000000) { ... } // from try @ 033422f0 with catch @ 033422f8
                        */
          if (plVar9 == (long *)0x0) goto LAB_0334236c;
          lVar14 = *plVar9;
          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar17 == 0) goto LAB_03342334;
          piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_0334231c;
        }
        lVar14 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)
                 (piVar20 + -2) ==
                System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_033422dc;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        pMVar12 = (MethodInfo *)0x0;
        puVar10 = (undefined8 *)FUN_01b81914(plVar9);
                    /* catch() { ... } // from try @ 03342260 with catch @ 033422cc */
LAB_033422dc:
                    /* try { // try from 033422dc to 034422e3 has its CatchHandler @ 033422f8 */
                    /* try { // try from 033422e4 to 034422ef has its CatchHandler @ 03341f04 */
        pOVar11 = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
                    /* try { // try from 033422f0 to 034422f7 has its CatchHandler @ 033422f8 */
        OJHODFIGFMA__LJOAPAKCNLD(__this,pOVar11,pMVar12);
      } while( true );
    }
  }
  else {
LAB_0334236c:
    pSVar7 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_11342/*"RestrictedAnimation"*/,pMVar12);
    if (pSVar7 != (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
      pSVar13 = pSVar7->klass;
      uVar3._0_1_ = (pSVar13->_2).rank;
      uVar3._1_1_ = (pSVar13->_2).minimumAlignment;
      uVar17 = (ulong)uVar3;
      if (uVar17 != 0) {
        piVar19 = &((pSVar13->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
              (Il2CppClass *)
              System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
            pVVar8 = pSVar13->vtable + *piVar19;
            goto LAB_033423dc;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      pMVar12 = (MethodInfo *)0x0;
      pVVar8 = (VirtualInvokeData *)FUN_01b81914(pSVar7);
LAB_033423dc:
      plVar9 = (long *)(*pVVar8->methodPtr)(pSVar7,pVVar8->method);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033426e0 with catch @ 03342a44 */
        FUN_01bab8c8();
      }
      do {
        lVar14 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar20 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_0334245c;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
                    /* try { // try from 0334243c to 0344258f has its CatchHandler @ 0334243c
                       catch() { ... } // from try @ 0334243c with catch @ 0334243c
                       catch() { ... } // from try @ 03342934 with catch @ 0334243c
                       catch() { ... } // from try @ 0334296c with catch @ 0334243c
                       catch() { ... } // from try @ 03342a0c with catch @ 0334243c
                       catch() { ... } // from try @ 03342a20 with catch @ 0334243c
                       catch() { ... } // from try @ 03342abc with catch @ 0334243c
                       catch() { ... } // from try @ 03342b08 with catch @ 0334243c */
          } while (uVar17 != 0);
        }
        pMVar12 = (MethodInfo *)0x0;
        puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_0334245c:
        uVar17 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if ((uVar17 & 1) == 0) {
          if (plVar9 == (long *)0x0) goto LAB_033425dc;
          lVar14 = *plVar9;
          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
                    /* try { // try from 03342590 to 03442597 has its CatchHandler @ 03342aa8 */
          if (uVar17 == 0) goto LAB_033425b4;
          piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_0334259c;
        }
        lVar14 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar17 != 0) {
          piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)
                 (piVar20 + -2) ==
                System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
              goto LAB_033424b8;
            }
            uVar17 = uVar17 - 1;
            piVar20 = piVar20 + 4;
          } while (uVar17 != 0);
        }
        pMVar12 = (MethodInfo *)0x0;
        puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_033424b8:
        pOVar11 = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        if (pOVar11 == (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03342a0c to 03442a0f has its CatchHandler @ 0334243c */
          FUN_01bab8c8();
        }
        if ((pOVar11->fields).GBBHFPBFOPI == false) {
          pLVar15 = (pOVar11->fields).ADHFHEJFJPK;
          if (pLVar15 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03342a1c to 03442a1f has its CatchHandler @ 03342a2c */
            FUN_01bab8c8();
          }
          if (NLEBDPHNIDI == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03342968 with catch @ 03342a20
                       try { // try from 03342a20 to 03442ab7 has its CatchHandler @ 0334243c */
            FUN_01bab8c8();
          }
          pMVar12 = (MethodInfo *)0x0;
          bVar6 = ECENNHNBAME__NHELADLJDNP
                            (NLEBDPHNIDI,(pLVar15->fields).BNGDONJEHMH,(MethodInfo *)0x0);
          if (!bVar6) {
            (pOVar11->fields).GBBHFPBFOPI = true;
          }
        }
        pLVar15 = (pOVar11->fields).ADHFHEJFJPK;
        if (pLVar15 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03342a08 to 03442a0b has its CatchHandler @ 03342a68 */
          FUN_01bab8c8();
        }
        pPVar18 = (__this->fields).NDOMOKBINFD;
        if (pPVar18 == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03342a10 to 03442a13 has its CatchHandler @ 03342a38 */
          FUN_01bab8c8();
        }
        if ((pPVar18->fields).PNAAPNFPCPI != (HOOAAGABMBL_o *)0x0) {
          a = (pLVar15->fields).GNCBIPJFEGB;
          pMVar12 = (MethodInfo *)0x0;
          bVar6 = System_String__op_Inequality(a,StringLiteral_1/*""*/,(MethodInfo *)0x0);
          if (bVar6) {
            pPVar18 = (__this->fields).NDOMOKBINFD;
            if (pPVar18 == (PJKHAJKEHEL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pHVar16 = (pPVar18->fields).PNAAPNFPCPI;
            if (pHVar16 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pMVar12 = (MethodInfo *)0x0;
            bVar6 = System_String__op_Inequality
                              ((pHVar16->fields)._COIPKAKHDFP_k__BackingField,a,(MethodInfo *)0x0);
            if (bVar6) {
              (pOVar11->fields).GBBHFPBFOPI = true;
            }
          }
        }
        if ((OMECOCNLHEE) && ((pOVar11->fields).GBBHFPBFOPI == false)) {
          OJHODFIGFMA__LJOAPAKCNLD(__this,pOVar11,pMVar12);
        }
      } while( true );
    }
  }
  goto LAB_03342a38;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar20 = piVar20 + 4;
    if (uVar17 == 0) break;
LAB_0334231c:
    if (*(System_IDisposable_c **)(piVar20 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_03342350;
    }
  }
LAB_03342334:
  pMVar12 = (MethodInfo *)0x0;
  puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_03342350:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  goto LAB_0334236c;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar20 = piVar20 + 4;
                    /* try { // try from 033425b0 to 034425bf has its CatchHandler @ 03342aa0 */
    if (uVar17 == 0) break;
LAB_0334259c:
    if (*(System_IDisposable_c **)(piVar20 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_033425d0;
    }
  }
LAB_033425b4:
  pMVar12 = (MethodInfo *)0x0;
  puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_033425d0:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_033425dc:
                    /* try { // try from 033425dc to 034425e3 has its CatchHandler @ 03342a8c */
                    /* try { // try from 033425ec to 034425f3 has its CatchHandler @ 03342a88 */
  if (OMECOCNLHEE) {
    if (INPNAICDDJN) {
                    /* try { // try from 033425fc to 03442607 has its CatchHandler @ 03342a9c */
      pSVar7 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_7049/*"HeadHitRound"*/,pMVar12);
      if (pSVar7 != (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
                    /* try { // try from 0334260c to 03442617 has its CatchHandler @ 03342a98 */
        pSVar13 = pSVar7->klass;
        uVar4._0_1_ = (pSVar13->_2).rank;
        uVar4._1_1_ = (pSVar13->_2).minimumAlignment;
        uVar17 = (ulong)uVar4;
        if (uVar17 != 0) {
          piVar19 = &((pSVar13->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
                (Il2CppClass *)
                System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
                    /* try { // try from 0334265c to 0344266f has its CatchHandler @ 03342a50 */
              pVVar8 = pSVar13->vtable + *piVar19;
              goto LAB_03342664;
            }
            uVar17 = uVar17 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar17 != 0);
        }
        pMVar12 = (MethodInfo *)0x0;
        pVVar8 = (VirtualInvokeData *)FUN_01b81914(pSVar7);
LAB_03342664:
        plVar9 = (long *)(*pVVar8->methodPtr)(pSVar7,pVVar8->method);
        do {
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03342a14 with catch @ 03342a34 */
            FUN_01bab8c8();
          }
          lVar14 = *plVar9;
                    /* try { // try from 03342690 to 034426b7 has its CatchHandler @ 03342a54 */
          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar17 != 0) {
            piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar20 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 033426cc to 034426db has its CatchHandler @ 03342a48 */
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_033426d4;
              }
              uVar17 = uVar17 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar17 != 0);
          }
                    /* try { // try from 033426b8 to 034426c3 has its CatchHandler @ 03342a4c */
          pMVar12 = (MethodInfo *)0x0;
          puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_033426d4:
          uVar17 = (*(code *)*puVar10)(plVar9,puVar10[1]);
                    /* try { // try from 033426e0 to 034426eb has its CatchHandler @ 03342a44 */
          if ((uVar17 & 1) == 0) {
                    /* try { // try from 0334274c to 03442757 has its CatchHandler @ 03342940 */
            if (plVar9 == (long *)0x0) goto LAB_033427c0;
            lVar14 = *plVar9;
            uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar17 == 0) goto LAB_03342788;
                    /* try { // try from 0334276c to 03442793 has its CatchHandler @ 03342954 */
            piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            goto LAB_03342770;
          }
          lVar14 = *plVar9;
          uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar17 != 0) {
            piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
                    /* try { // try from 03342700 to 03442707 has its CatchHandler @ 03342a40 */
              if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)
                   (piVar20 + -2) ==
                  System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
                goto LAB_03342730;
              }
              uVar17 = uVar17 - 1;
              piVar20 = piVar20 + 4;
            } while (uVar17 != 0);
          }
          pMVar12 = (MethodInfo *)0x0;
                    /* try { // try from 0334271c to 03442723 has its CatchHandler @ 03342950 */
          puVar10 = (undefined8 *)FUN_01b81914(plVar9);
LAB_03342730:
          pOVar11 = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
                    /* try { // try from 0334273c to 03442743 has its CatchHandler @ 03342938 */
          OJHODFIGFMA__LJOAPAKCNLD(__this,pOVar11,pMVar12);
        } while( true );
      }
      goto LAB_03342a38;
    }
    goto LAB_033427c0;
  }
  goto LAB_033427f4;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar20 = piVar20 + 4;
    if (uVar17 == 0) break;
LAB_033429a4:
    if (*(System_IDisposable_c **)(piVar20 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_033429d8;
    }
  }
LAB_033429bc:
                    /* try { // try from 033429bc to 034429bf has its CatchHandler @ 03342aa4 */
                    /* try { // try from 033429c0 to 034429c3 has its CatchHandler @ 03342a94 */
  puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_033429d8:
                    /* try { // try from 033429dc to 034429fb has its CatchHandler @ 03342b1c */
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return;
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar20 = piVar20 + 4;
    if (uVar17 == 0) break;
LAB_03342770:
    if (*(System_IDisposable_c **)(piVar20 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_033427a4;
    }
  }
LAB_03342788:
  pMVar12 = (MethodInfo *)0x0;
  puVar10 = (undefined8 *)FUN_01b81914(plVar9);
                    /* try { // try from 03342794 to 0344279f has its CatchHandler @ 03342948 */
LAB_033427a4:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_033427c0:
                    /* try { // try from 033427c4 to 034427cf has its CatchHandler @ 03342944 */
  pOVar11 = OJHODFIGFMA__POHJNBHBIFB(__this,StringLiteral_3516/*"BlockedRound"*/,pMVar12);
                    /* try { // try from 033427e8 to 034427ef has its CatchHandler @ 03342a3c */
  if (((pOVar11 != (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) && ((pOVar11->fields).GBBHFPBFOPI == false)) &&
     ((__this->fields).LDKCAIDMEDK != false)) {
    OJHODFIGFMA__LJOAPAKCNLD(__this,pOVar11,pMVar12);
  }
LAB_033427f4:
  if (JECKCMKCNCH || !INPNAICDDJN) {
                    /* try { // try from 033429fc to 034429ff has its CatchHandler @ 03342a84 */
                    /* try { // try from 03342a00 to 03442a03 has its CatchHandler @ 03342a78 */
                    /* try { // try from 03342a04 to 03442a07 has its CatchHandler @ 03342a74 */
    return;
  }
                    /* try { // try from 03342810 to 03442817 has its CatchHandler @ 03342a64 */
  pSVar7 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_7050/*"HeadKick"*/,pMVar12);
  if (pSVar7 != (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
    pSVar13 = pSVar7->klass;
    uVar5._0_1_ = (pSVar13->_2).rank;
    uVar5._1_1_ = (pSVar13->_2).minimumAlignment;
                    /* try { // try from 03342820 to 0344282b has its CatchHandler @ 03342a60 */
    uVar17 = (ulong)uVar5;
    if (uVar17 != 0) {
      piVar19 = &((pSVar13->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 03342840 to 03442867 has its CatchHandler @ 03342a90 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo)
        {
                    /* try { // try from 03342868 to 03442873 has its CatchHandler @ 03342a5c */
          pVVar8 = pSVar13->vtable + *piVar19;
          goto LAB_03342874;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    pVVar8 = (VirtualInvokeData *)
             FUN_01b81914(pSVar7,
                          System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo,0
                         );
LAB_03342874:
                    /* try { // try from 0334287c to 0344288b has its CatchHandler @ 03342a70 */
    plVar9 = (long *)(*pVVar8->methodPtr)(pSVar7,pVVar8->method);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0334265c with catch @ 03342a50 */
      FUN_01bab8c8();
    }
    do {
      lVar14 = *plVar9;
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
                    /* try { // try from 033428b4 to 034428bf has its CatchHandler @ 03342a58 */
          if (*(System_Collections_IEnumerator_c **)(piVar20 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_033428e4;
          }
          uVar17 = uVar17 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_033428e4:
      uVar17 = (*(code *)*puVar10)(plVar9,puVar10[1]);
                    /* try { // try from 033428f0 to 034428f7 has its CatchHandler @ 03342a80 */
      if ((uVar17 & 1) == 0) {
        if (plVar9 == (long *)0x0) {
          return;
        }
        lVar14 = *plVar9;
        uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar17 == 0) goto LAB_033429bc;
        piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        goto LAB_033429a4;
      }
      lVar14 = *plVar9;
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
                    /* try { // try from 03342900 to 0344291f has its CatchHandler @ 03342a7c */
      if (uVar17 != 0) {
        piVar20 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)(piVar20 + -2)
              == System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
                    /* try { // try from 03342934 to 03442967 has its CatchHandler @ 0334243c */
                    /* catch() { ... } // from try @ 0334273c with catch @ 03342938 */
                    /* catch() { ... } // from try @ 03342930 with catch @ 0334293c */
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar20 * 0x10 + 0x138);
            goto LAB_03342940;
          }
          uVar17 = uVar17 - 1;
          piVar20 = piVar20 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)
                FUN_01b81914(plVar9,
                             System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo
                             ,0);
                    /* try { // try from 03342930 to 03442933 has its CatchHandler @ 0334293c */
LAB_03342940:
                    /* catch() { ... } // from try @ 0334274c with catch @ 03342940 */
                    /* catch() { ... } // from try @ 033427c4 with catch @ 03342944 */
                    /* catch() { ... } // from try @ 03342794 with catch @ 03342948 */
      pOVar11 = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
                    /* catch() { ... } // from try @ 033427b4 with catch @ 0334294c */
                    /* catch() { ... } // from try @ 0334271c with catch @ 03342950 */
      if (pOVar11 != (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) {
                    /* catch() { ... } // from try @ 0334276c with catch @ 03342954 */
        pLVar15 = (pOVar11->fields).ADHFHEJFJPK;
        if (pLVar15 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03342a1c with catch @ 03342a2c */
          FUN_01bab8c8();
        }
        if (NLEBDPHNIDI == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03342a18 with catch @ 03342a30 */
          FUN_01bab8c8();
        }
                    /* try { // try from 03342968 to 0344296b has its CatchHandler @ 03342a20 */
        pMVar12 = (MethodInfo *)0x0;
                    /* try { // try from 0334296c to 034429bb has its CatchHandler @ 0334243c */
        bVar6 = ECENNHNBAME__NHELADLJDNP
                          (NLEBDPHNIDI,(pLVar15->fields).BNGDONJEHMH,(MethodInfo *)0x0);
        if (bVar6) {
          OJHODFIGFMA__LJOAPAKCNLD(__this,pOVar11,pMVar12);
        }
      }
    } while( true );
  }
LAB_03342a38:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03342a10 with catch @ 03342a38 */
  FUN_01bab8c8();
}


// ===== public void DFNEPDGBAEF()  [RVA 0x3242E18]
// OJHODFIGFMA$$DFNEPDGBAEF @ RVA 0x3242E18

void OJHODFIGFMA__DFNEPDGBAEF(OJHODFIGFMA_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  if ((DAT_04567095 & 1) == 0) {
    FUN_01bab630(&StringLiteral_13902/*"TournamentsBeaten"*/);
    DAT_04567095 = 1;
  }
  OJHODFIGFMA__JMDPIKBAPCH(__this,StringLiteral_13902/*"TournamentsBeaten"*/,in_x2);
  return;
}


// ===== public void PMEFGAPFDED(DNELIPCHKLK DBIAAJNKHLH)  [RVA 0x3242E60]
// OJHODFIGFMA$$PMEFGAPFDED @ RVA 0x3242E60

/* WARNING: Removing unreachable block (ram,0x033430d0) */

void OJHODFIGFMA__PMEFGAPFDED(OJHODFIGFMA_o *__this,DNELIPCHKLK_o *DBIAAJNKHLH,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar3;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  undefined8 *puVar6;
  OJHODFIGFMA_MJOLIJOPBMO_o *MLNEFBDGKEK;
  LKPNOBFEAKD_o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__c *pSVar7;
  long lVar8;
  ulong uVar9;
  int32_t *piVar10;
  int *piVar11;
  
  if ((DAT_04567096 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&StringLiteral_14951/*"WinBattle"*/);
    DAT_04567096 = 1;
  }
  pSVar3 = OJHODFIGFMA__HKEFJFNDHDO(__this,StringLiteral_14951/*"WinBattle"*/,method);
  if (pSVar3 == (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar7 = pSVar3->klass;
  uVar1._0_1_ = (pSVar7->_2).rank;
  uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pSVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
        pVVar4 = pSVar7->vtable + *piVar10;
        goto LAB_03342f38;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar4 = (VirtualInvokeData *)
           FUN_01b81914(pSVar3,
                        System_Collections_Generic_IEnumerable<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo,0);
LAB_03342f38:
  plVar5 = (long *)(*pVVar4->methodPtr)(pSVar3,pVVar4->method);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_03342fb0;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_03342fb0:
    uVar9 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar9 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 == 0) goto LAB_03343080;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *plVar5;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_OJHODFIGFMA_MJOLIJOPBMO__c **)(piVar11 + -2) ==
            System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0334300c;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_01b81914(plVar5,
                          System_Collections_Generic_IEnumerator<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo,0
                         );
LAB_0334300c:
    MLNEFBDGKEK = (OJHODFIGFMA_MJOLIJOPBMO_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (MLNEFBDGKEK == (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (MLNEFBDGKEK->fields).ADHFHEJFJPK;
    if (__this_00 == (LKPNOBFEAKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_00 = (MethodInfo *)0x0;
    bVar2 = LKPNOBFEAKD__GJECEIMLADG(__this_00,DBIAAJNKHLH,(MethodInfo *)0x0);
    if (bVar2) {
      OJHODFIGFMA__LJOAPAKCNLD(__this,MLNEFBDGKEK,method_00);
    }
  } while( true );
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar11 = piVar11 + 4;
    if (uVar9 == 0) break;
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0334309c;
    }
  }
LAB_03343080:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_0334309c:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


// ===== public void OFKEKNEDIMJ()  [RVA 0x3243190]
// OJHODFIGFMA$$OFKEKNEDIMJ @ RVA 0x3243190

void OJHODFIGFMA__OFKEKNEDIMJ(OJHODFIGFMA_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  if ((DAT_04567097 & 1) == 0) {
    FUN_01bab630(&StringLiteral_5381/*"DifficultyWin"*/);
    DAT_04567097 = 1;
  }
  OJHODFIGFMA__JMDPIKBAPCH(__this,StringLiteral_5381/*"DifficultyWin"*/,in_x2);
  return;
}


// ===== public void LACNHPKPDJK()  [RVA 0x32431D8]
// OJHODFIGFMA$$LACNHPKPDJK @ RVA 0x32431D8

void OJHODFIGFMA__LACNHPKPDJK(OJHODFIGFMA_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  if ((DAT_04567098 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11997/*"ShockWin"*/);
    DAT_04567098 = 1;
  }
  OJHODFIGFMA__JMDPIKBAPCH(__this,StringLiteral_11997/*"ShockWin"*/,in_x2);
  return;
}


// ===== public void AJLGBKONJEO(Action<OJHODFIGFMA.MJOLIJOPBMO> CJNHFNHJHPE)  [RVA 0x3243220]
// OJHODFIGFMA$$AJLGBKONJEO @ RVA 0x3243220

void OJHODFIGFMA__AJLGBKONJEO
               (OJHODFIGFMA_o *__this,System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_OJHODFIGFMA_MJOLIJOPBMO__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *pSVar5;
  System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *source;
  
  if ((DAT_04567099 & 1) == 0) {
    FUN_01bab630(&System_Action<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    DAT_04567099 = 1;
  }
  source = (__this->fields).LAFPPPABCJG;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_OJHODFIGFMA_MJOLIJOPBMO__o *)FUN_01c07368(&__this->fields,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private IEnumerable<OJHODFIGFMA.MJOLIJOPBMO> HKEFJFNDHDO(string ACCIHBHMFPN)  [RVA 0x323F480]
// OJHODFIGFMA$$HKEFJFNDHDO @ RVA 0x323F480

System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *
OJHODFIGFMA__HKEFJFNDHDO(OJHODFIGFMA_o *__this,System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *source;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *pSVar3;
  OJHODFIGFMA_EMMLKOABOHF_o *pOVar4;
  System_Collections_Generic_Dictionary_string__OJHODFIGFMA_MJOLIJOPBMO__o *source_01;
  
  if ((DAT_0456709a & 1) == 0) {
    FUN_01bab630(&Method_OJHODFIGFMA_DKEAJNLENCM_FLHPEELAJLM__);
                    /* try { // try from 0333f4bc to 0343f563 has its CatchHandler @ 0333f4bc
                       catch() { ... } // from try @ 0333f4bc with catch @ 0333f4bc
                       catch() { ... } // from try @ 0333f580 with catch @ 0333f4bc
                       catch() { ... } // from try @ 0333f5b4 with catch @ 0333f4bc
                       catch() { ... } // from try @ 0333f5dc with catch @ 0333f4bc
                       catch() { ... } // from try @ 0333f61c with catch @ 0333f4bc */
    FUN_01bab630(&Method_OJHODFIGFMA_DKEAJNLENCM_IGFFJMPJDDA__);
    FUN_01bab630(&OJHODFIGFMA_DKEAJNLENCM_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Values__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_All<KeyValuePair<string,_OJHODFIGFMA_MJOLIJOPBMO>>__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<OJHODFIGFMA_MJOLIJOPBMO>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<OJHODFIGFMA_MJOLIJOPBMO>__);
    FUN_01bab630(&FLLIEEHCFAB<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo);
    FUN_01bab630(&System_Func<KeyValuePair<string,_OJHODFIGFMA_MJOLIJOPBMO>,_bool>_TypeInfo);
    FUN_01bab630(&System_Func<OJHODFIGFMA_MJOLIJOPBMO,_bool>_TypeInfo);
    DAT_0456709a = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(OJHODFIGFMA_DKEAJNLENCM_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)ACCIHBHMFPN;
    thunk_FUN_01c20e04(__this_00 + 1,ACCIHBHMFPN);
    pOVar4 = (__this->fields).HEHMPFLAEGE;
    if (pOVar4 != (OJHODFIGFMA_EMMLKOABOHF_o *)0x0) {
                    /* try { // try from 0333f564 to 0343f56b has its CatchHandler @ 0333f5c0 */
      source_01 = (pOVar4->fields).IAGNJPIIEPO;
                    /* try { // try from 0333f578 to 0343f57f has its CatchHandler @ 0333f5bc */
      pSVar2 = (System_Func_TSource__bool__o *)
               thunk_FUN_01bda818(
                                 System_Func<KeyValuePair<string,_OJHODFIGFMA_MJOLIJOPBMO>,_bool>_TypeInfo
                                 );
                    /* try { // try from 0333f580 to 0343f5af has its CatchHandler @ 0333f4bc */
      System_Func<KeyValuePair<object,_object>,_bool>___ctor();
      bVar1 = System_Linq_Enumerable__All<KeyValuePair<object,_object>>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,pSVar2,
                         Method_System_Linq_Enumerable_All<KeyValuePair<string,_OJHODFIGFMA_MJOLIJOPBMO>>__
                        );
      if (bVar1) {
                    /* try { // try from 0333f5b0 to 0343f5b3 has its CatchHandler @ 0333f5b8 */
                    /* try { // try from 0333f5b4 to 0343f5d7 has its CatchHandler @ 0333f4bc */
        if ((FLLIEEHCFAB<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0333f5b0 with catch @ 0333f5b8
                        */
          thunk_FUN_01ba7564();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0333f578 with catch @ 0333f5bc
                        */
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0333f564 with catch @ 0333f5c0
                        */
        return (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)
               FLLIEEHCFAB<OJHODFIGFMA_MJOLIJOPBMO>_TypeInfo->static_fields->AOAIEJMANCC;
      }
                    /* try { // try from 0333f5d8 to 0343f5db has its CatchHandler @ 0333f604 */
      pOVar4 = (__this->fields).HEHMPFLAEGE;
                    /* try { // try from 0333f5dc to 0343f613 has its CatchHandler @ 0333f4bc */
      if ((pOVar4 != (OJHODFIGFMA_EMMLKOABOHF_o *)0x0) &&
         (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (pOVar4->fields).IAGNJPIIEPO,
         __this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        source = System_Collections_Generic_Dictionary<object,_object>__get_Values
                           (__this_01,
                            Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Values__
                           );
                    /* catch() { ... } // from try @ 0333f5d8 with catch @ 0333f604 */
        pSVar2 = (System_Func_TSource__bool__o *)
                 thunk_FUN_01bda818(System_Func<OJHODFIGFMA_MJOLIJOPBMO,_bool>_TypeInfo);
                    /* try { // try from 0333f614 to 0343f61b has its CatchHandler @ 0333f630 */
                    /* try { // try from 0333f61c to 0343f627 has its CatchHandler @ 0333f4bc */
                    /* try { // try from 0333f628 to 0343f62f has its CatchHandler @ 0333f630 */
        System_Func<object,_bool>___ctor();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0333f614 with catch @ 0333f630
                       catch(type#2 @ 00000000) { ... } // from try @ 0333f628 with catch @ 0333f630
                        */
        source_00 = System_Linq_Enumerable__Where<object>
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,pSVar2,
                               Method_System_Linq_Enumerable_Where<OJHODFIGFMA_MJOLIJOPBMO>__);
        pSVar3 = System_Linq_Enumerable__ToList<object>
                           (source_00,
                            Method_System_Linq_Enumerable_ToList<OJHODFIGFMA_MJOLIJOPBMO>__);
        return (System_Collections_Generic_IEnumerable_OJHODFIGFMA_MJOLIJOPBMO__o *)pSVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GJPGGAEIAFN()  [RVA 0x32432D8]
// OJHODFIGFMA$$GJPGGAEIAFN @ RVA 0x32432D8

void OJHODFIGFMA__GJPGGAEIAFN(OJHODFIGFMA_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  if ((DAT_0456709b & 1) == 0) {
    FUN_01bab630(&StringLiteral_5703/*"Enchantments"*/);
    DAT_0456709b = 1;
  }
  OJHODFIGFMA__JMDPIKBAPCH(__this,StringLiteral_5703/*"Enchantments"*/,in_x2);
  return;
}


// ===== public void LKNPMNKGELE()  [RVA 0x3243320]
// OJHODFIGFMA$$LKNPMNKGELE @ RVA 0x3243320

void OJHODFIGFMA__LKNPMNKGELE(OJHODFIGFMA_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  if ((DAT_0456709c & 1) == 0) {
    FUN_01bab630(&StringLiteral_3549/*"BossWin"*/);
    DAT_0456709c = 1;
  }
  OJHODFIGFMA__JMDPIKBAPCH(__this,StringLiteral_3549/*"BossWin"*/,in_x2);
  return;
}


// ===== public void PDPMMEHLGOB()  [RVA 0x3243368]
// OJHODFIGFMA$$PDPMMEHLGOB @ RVA 0x3243368

void OJHODFIGFMA__PDPMMEHLGOB(OJHODFIGFMA_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  if ((DAT_0456709d & 1) == 0) {
    FUN_01bab630(&StringLiteral_5050/*"DailyBeaten"*/);
    DAT_0456709d = 1;
  }
  OJHODFIGFMA__JMDPIKBAPCH(__this,StringLiteral_5050/*"DailyBeaten"*/,in_x2);
  return;
}


// ===== public void MACLJGGPEBF(bool JECKCMKCNCH)  [RVA 0x32433B0]
// OJHODFIGFMA$$MACLJGGPEBF @ RVA 0x32433B0

void OJHODFIGFMA__MACLJGGPEBF(OJHODFIGFMA_o *__this,bool JECKCMKCNCH,MethodInfo *method)

{
  OJHODFIGFMA_MJOLIJOPBMO_o *pOVar1;
  
  if ((DAT_0456709e & 1) == 0) {
    FUN_01bab630(&StringLiteral_3516/*"BlockedRound"*/);
    DAT_0456709e = 1;
  }
  (__this->fields).LDKCAIDMEDK = true;
  pOVar1 = OJHODFIGFMA__POHJNBHBIFB(__this,StringLiteral_3516/*"BlockedRound"*/,method);
  if (((pOVar1 != (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0) && (!JECKCMKCNCH)) &&
     ((pOVar1->fields).GBBHFPBFOPI == false)) {
    (pOVar1->fields).GBBHFPBFOPI = true;
  }
  return;
}


// ===== private bool KJILDIMFOME(string FPGABKDNDPG)  [RVA 0x323FA4C]
// OJHODFIGFMA$$KJILDIMFOME @ RVA 0x323FA4C

bool OJHODFIGFMA__KJILDIMFOME(OJHODFIGFMA_o *__this,System_String_o *FPGABKDNDPG,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_array *pSVar3;
  NLPJLHOEAOE_o *__this_00;
  IFBJEEAJGEO_o *pIVar4;
  ulong uVar5;
  
  if ((DAT_0456709f & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456709f = 1;
  }
  if ((FPGABKDNDPG == (System_String_o *)0x0) ||
     (bVar1 = System_String__op_Equality(FPGABKDNDPG,StringLiteral_1/*""*/,(MethodInfo *)0x0), bVar1)) {
    bVar1 = true;
  }
  else {
    pSVar3 = System_String__Split(FPGABKDNDPG,0x7c,0,(MethodInfo *)0x0);
    if (pSVar3 == (System_String_array *)0x0) {
LAB_0333fb60:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0333fb60 to 0343fb67 has its CatchHandler @ 0333fd5c */
      FUN_01bab8c8();
    }
    if ((int)pSVar3->max_length < 1) {
      bVar1 = false;
    }
    else {
      uVar5 = 0;
      do {
                    /* try { // try from 0333faf8 to 0343faff has its CatchHandler @ 0333fd08 */
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
        if ((uint)pSVar3->max_length <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        if (__this_00 == (NLPJLHOEAOE_o *)0x0) goto LAB_0333fb60;
                    /* try { // try from 0333fb20 to 0343fb27 has its CatchHandler @ 0333fd00 */
                    /* try { // try from 0333fb28 to 0343fb5f has its CatchHandler @ 0333f990 */
        iVar2 = NLPJLHOEAOE__JCFMJBBOPMH(__this_00,pSVar3->m_Items[uVar5],(MethodInfo *)0x0);
        pIVar4 = (__this->fields).APPPNIFKKCH;
        if (pIVar4 == (IFBJEEAJGEO_o *)0x0) goto LAB_0333fb60;
        bVar1 = iVar2 == (pIVar4->fields).COALAGILPBO;
      } while ((!bVar1) && (uVar5 = uVar5 + 1, (long)uVar5 < (long)(int)pSVar3->max_length));
    }
  }
  return bVar1;
}


// ===== public void BAFCALEHNDL()  [RVA 0x3243428]
// OJHODFIGFMA$$BAFCALEHNDL @ RVA 0x3243428

void OJHODFIGFMA__BAFCALEHNDL(OJHODFIGFMA_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  if ((DAT_045670a0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9536/*"NoLose"*/);
    DAT_045670a0 = 1;
  }
  OJHODFIGFMA__JMDPIKBAPCH(__this,StringLiteral_9536/*"NoLose"*/,in_x2);
  return;
}

