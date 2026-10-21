// TypeDefIndex 2942
// Namespace: 
// public class PBHDPJBLDLG
// Fields:
//   private RaidLeaderboardView HJLDGHLININ; // 0x10
//   private SimpleScroll PDHMLFAMNCO; // 0x18
//   private GameObject DDOFFEJPFMP; // 0x20
//   private OJKCDJCBOBL BAKEIGFACAG; // 0x28
//   private JCFJFJCKLKG FHPFEDKOMBA; // 0x30
//   private List<KeyValuePair<int, CBPENMDOJDB>> DGGLBIIIEBM; // 0x38
//   private List<int> JDHINHCBLNC; // 0x40
//   private bool BINGHJMNJDD; // 0x48
//   private IEnumerator CLLBGHPLGNH; // 0x50
//   private Action NDHBLOHOEFK; // 0x58
//   private const string FDDFFMLLCDE = "Top100ClansPool";
//   private float FBCMJLLICNC; // 0x60

// ===== private IEnumerator MHNONHHOHGN()  [RVA 0x348F370]
// PBHDPJBLDLG$$MHNONHHOHGN @ RVA 0x348F370

System_Collections_IEnumerator_o *
PBHDPJBLDLG__MHNONHHOHGN(PBHDPJBLDLG_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568406 & 1) == 0) {
    FUN_01bab630(&PBHDPJBLDLG_LIBPCCPNJOK_TypeInfo);
    DAT_04568406 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(PBHDPJBLDLG_LIBPCCPNJOK_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  thunk_FUN_01c20e04(__this_00 + 2,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ===== private void FOKKFJKGIBK(Action CJNHFNHJHPE)  [RVA 0x348F404]
// PBHDPJBLDLG$$FOKKFJKGIBK @ RVA 0x348F404

void PBHDPJBLDLG__FOKKFJKGIBK(PBHDPJBLDLG_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04568407 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04568407 = 1;
  }
  ppSVar4 = &(__this->fields).NDHBLOHOEFK;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== private void NCDOMAGEGCF()  [RVA 0x348F4A0]
// PBHDPJBLDLG$$NCDOMAGEGCF @ RVA 0x348F4A0

void PBHDPJBLDLG__NCDOMAGEGCF(PBHDPJBLDLG_o *__this,MethodInfo *method)

{
  ushort uVar1;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o **ppSVar8;
  
  if ((DAT_04568408 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568408 = 1;
    method = extraout_x1;
  }
  PBHDPJBLDLG__DNNPDIPCCEN(__this,method);
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ClearData(__this_00,(MethodInfo *)0x0);
    pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar3 = PBHDPJBLDLG__MHNONHHOHGN(__this,method_00);
    if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
      pPVar5 = pPVar2->klass;
      uVar1._0_1_ = (pPVar5->_2).rank;
      uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar4 = pPVar5->vtable + *piVar7;
            goto LAB_0358f554;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_0358f554:
      pSVar3 = (System_Collections_IEnumerator_o *)
               (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
      ppSVar8 = &(__this->fields).CLLBGHPLGNH;
      *ppSVar8 = pSVar3;
      thunk_FUN_01c20e04(ppSVar8,pSVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(RaidLeaderboardView MIJCJJCICDA, SimpleScroll MGFBPKIBNJI, GameObject IACFAKIPBBB, bool LAIEJHPIKMI)  [RVA 0x348F678]
// PBHDPJBLDLG$$.ctor @ RVA 0x348F678

/* WARNING: Control flow encountered unimplemented instructions */

void PBHDPJBLDLG___ctor(PBHDPJBLDLG_o *__this,
                       Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *MIJCJJCICDA,
                       Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,
                       UnityEngine_GameObject_o *IACFAKIPBBB,bool LAIEJHPIKMI,MethodInfo *method)

{
  OJKCDJCBOBL_o *__this_00;
  OJKCDJCBOBL_o **ppOVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *extraout_x1;
  
  if ((DAT_04568409 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>_TypeInfo);
    FUN_01bab630(&OJKCDJCBOBL_TypeInfo);
    DAT_04568409 = 1;
    MIJCJJCICDA = extraout_x1;
  }
  __this_00 = (OJKCDJCBOBL_o *)thunk_FUN_01bda818(OJKCDJCBOBL_TypeInfo,MIJCJJCICDA);
  OJKCDJCBOBL___ctor(__this_00,(MethodInfo *)0x0);
  ppOVar1 = &(__this->fields).BAKEIGFACAG;
  *ppOVar1 = __this_00;
  thunk_FUN_01c20e04(ppOVar1,__this_00);
  thunk_FUN_01bda818(System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>_TypeInfo);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


// ===== public void LLCONNGHGKD()  [RVA 0x348F7F4]
// PBHDPJBLDLG$$LLCONNGHGKD @ RVA 0x348F7F4

/* WARNING: Control flow encountered unimplemented instructions */

void PBHDPJBLDLG__LLCONNGHGKD(PBHDPJBLDLG_o *__this,MethodInfo *method)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


// ===== private void NEMMCPJICCF(int JDEFJPHCNMM)  [RVA 0x348F864]
// PBHDPJBLDLG$$NEMMCPJICCF @ RVA 0x348F864

void PBHDPJBLDLG__NEMMCPJICCF(PBHDPJBLDLG_o *__this,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *__this_01;
  UnityEngine_GameObject_o *CMMIJCJOBBF;
  System_Collections_Generic_List_KeyValuePair_int__object___o *pSVar3;
  System_Collections_Generic_List_int__o *__this_02;
  System_Collections_Generic_KeyValuePair_int__object__o SVar4;
  System_Collections_Generic_KeyValuePair_int__object__o SVar5;
  
  if ((DAT_0456840b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_CBPENMDOJDB>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_CBPENMDOJDB>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>_get_Item__)
    ;
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_TypeInfo);
    FUN_01bab630(&StringLiteral_13879/*"Top100ClansPool"*/);
    DAT_0456840b = 1;
  }
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if ((__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
     (__this_01 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *)
                  Nekki_SF2_GUI_SimpleScroll__AddItemFromPool
                            (__this_00,false,StringLiteral_13879/*"Top100ClansPool"*/,(MethodInfo *)0x0),
     __this_01 != (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *)0x0)) {
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (__this_01->klass->_2).naturalAligment) &&
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_TypeInfo)) {
      CMMIJCJOBBF = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
      Util__IHPDCBOFHPA(CMMIJCJOBBF,true,(MethodInfo *)0x0);
      pSVar3 = (System_Collections_Generic_List_KeyValuePair_int__object___o *)
               (__this->fields).DGGLBIIIEBM;
      if (pSVar3 != (System_Collections_Generic_List_KeyValuePair_int__object___o *)0x0) {
        SVar4 = System_Collections_Generic_List<KeyValuePair<int,_object>>__get_Item
                          (pSVar3,JDEFJPHCNMM,
                           Method_System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>_get_Item__
                          );
        pSVar3 = (System_Collections_Generic_List_KeyValuePair_int__object___o *)
                 (__this->fields).DGGLBIIIEBM;
        if (pSVar3 != (System_Collections_Generic_List_KeyValuePair_int__object___o *)0x0) {
          SVar5 = System_Collections_Generic_List<KeyValuePair<int,_object>>__get_Item
                            (pSVar3,JDEFJPHCNMM,
                             Method_System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>_get_Item__
                            );
          Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__ReInit
                    (__this_01,SVar5.fields.key,(CBPENMDOJDB_o *)SVar4.fields.value,
                     (MethodInfo *)0x0);
          __this_02 = (__this->fields).JDHINHCBLNC;
          if (__this_02 != (System_Collections_Generic_List_int__o *)0x0) {
            bVar2 = System_Collections_Generic_List<int>__Contains
                              (__this_02,JDEFJPHCNMM,
                               Method_System_Collections_Generic_List<int>_Contains__);
            if (bVar2) {
              Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__ShowTopGroupSeparator
                        (__this_01,(MethodInfo *)0x0);
              return;
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OJPJPGLBOKH()  [RVA 0x348F65C]
// PBHDPJBLDLG$$OJPJPGLBOKH @ RVA 0x348F65C

void PBHDPJBLDLG__OJPJPGLBOKH(PBHDPJBLDLG_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  
  __this_00 = (__this->fields).PDHMLFAMNCO;
  if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__ClearData(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BOEJBAJKLKL(Action CJNHFNHJHPE)  [RVA 0x348F9DC]
// PBHDPJBLDLG$$BOEJBAJKLKL @ RVA 0x348F9DC

void PBHDPJBLDLG__BOEJBAJKLKL(PBHDPJBLDLG_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_0456840c & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_0456840c = 1;
  }
  ppSVar4 = &(__this->fields).NDHBLOHOEFK;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public bool OIDEAAIMGMA()  [RVA 0x348FA78]
// PBHDPJBLDLG$$OIDEAAIMGMA @ RVA 0x348FA78

bool PBHDPJBLDLG__OIDEAAIMGMA(PBHDPJBLDLG_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456840d & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<KeyValuePair<int,_CBPENMDOJDB>>__);
    DAT_0456840d = 1;
  }
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<KeyValuePair<int,_object>>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).DGGLBIIIEBM,
                     Method_DJNBJHPDKDP_OBECCOPBADO<KeyValuePair<int,_CBPENMDOJDB>>__);
  return bVar1;
}


// ===== private void MOIADPPPPLJ()  [RVA 0x348FAC0]
// PBHDPJBLDLG$$MOIADPPPPLJ @ RVA 0x348FAC0

void PBHDPJBLDLG__MOIADPPPPLJ(PBHDPJBLDLG_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_KeyValuePair_int__object__o item;
  long lVar2;
  Il2CppObject **ppIVar3;
  MethodInfo_2638AE0 *in_x4;
  System_Collections_Generic_KeyValuePair_int__object__array *pSVar4;
  System_Collections_Generic_List_KeyValuePair_int__object___o *__this_00;
  System_Collections_Generic_KeyValuePair_int__object__o __this_01;
  undefined8 local_30;
  Il2CppObject *pIStack_28;
  
  if ((DAT_0456840e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_CBPENMDOJDB>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>_Add__);
    DAT_0456840e = 1;
  }
  if ((__this->fields).BINGHJMNJDD == false) {
    return;
  }
  __this_00 = (System_Collections_Generic_List_KeyValuePair_int__object___o *)
              (__this->fields).DGGLBIIIEBM;
  local_30 = 0;
  pIStack_28 = (Il2CppObject *)0x0;
  __this_01.fields.value = (Il2CppObject *)0xffffffff;
  __this_01.fields._0_8_ = &local_30;
  System_Collections_Generic_KeyValuePair<int,_object>___ctor
            (__this_01,0,Method_System_Collections_Generic_KeyValuePair<int,_CBPENMDOJDB>__ctor__,
             in_x4);
  lVar2 = Method_System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>_Add__;
  if (__this_00 != (System_Collections_Generic_List_KeyValuePair_int__object___o *)0x0) {
    item.fields.value = pIStack_28;
    item.fields._0_8_ = local_30;
    pSVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar4 != (System_Collections_Generic_KeyValuePair_int__object__array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar4->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        ppIVar3 = &pSVar4->m_Items[(int)uVar1].fields.value;
        *ppIVar3 = pIStack_28;
        *(undefined8 *)&pSVar4->m_Items[(int)uVar1].fields = local_30;
        thunk_FUN_01c20e04(ppIVar3,0);
        return;
      }
      System_Collections_Generic_List<KeyValuePair<int,_object>>__AddWithResize
                (__this_00,item,
                 *(MethodInfo_265FF1C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DNNPDIPCCEN()  [RVA 0x348F584]
// PBHDPJBLDLG$$DNNPDIPCCEN @ RVA 0x348F584

void PBHDPJBLDLG__DNNPDIPCCEN(PBHDPJBLDLG_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Collections_IEnumerator_o **ppSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  
  if ((DAT_0456840f & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_0456840f = 1;
  }
  ppSVar7 = &(__this->fields).CLLBGHPLGNH;
  if (*ppSVar7 == (System_Collections_IEnumerator_o *)0x0) {
    return;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  if (pPVar2 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pPVar4 = pPVar2->klass;
  pSVar8 = *ppSVar7;
  uVar1._0_1_ = (pPVar4->_2).rank;
  uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
        pVVar3 = pPVar4->vtable + (*piVar6 + 1);
        goto LAB_0358f630;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_0358f630:
  (*pVVar3->methodPtr)(pPVar2,pSVar8,pVVar3->method);
  *ppSVar7 = (System_Collections_IEnumerator_o *)0x0;
  thunk_FUN_01c20e04(ppSVar7,0);
  return;
}


// ===== private void HAFBJDICOGK(DLOALGNBPNL IMMNELPBGIF)  [RVA 0x348FBA8]
// PBHDPJBLDLG$$HAFBJDICOGK @ RVA 0x348FBA8

/* WARNING: Control flow encountered unimplemented instructions */

void PBHDPJBLDLG__HAFBJDICOGK(PBHDPJBLDLG_o *__this,DLOALGNBPNL_o *IMMNELPBGIF,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  DialogsManager_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this_01;
  HJPEKDOPBHN_c *method_00;
  DLOALGNBPNL_o *extraout_x1;
  System_Collections_Generic_List_KeyValuePair_int__CBPENMDOJDB___o *pSVar2;
  System_Collections_Generic_List_int__o *pSVar3;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar4;
  
  if ((DAT_04568410 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<KeyValuePair<int,_CBPENMDOJDB>>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<int>__);
    FUN_01bab630(&
                 Method_System_Linq_Enumerable_FirstOrDefault<KeyValuePair<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>>__
                );
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<RaidTopHundredDialog>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_CBPENMDOJDB>__ctor__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<uint,_JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH>_get_Key__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_CBPENMDOJDB>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>_get_Count__
                );
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_get_Item__);
    DAT_04568410 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  pNVar4 = (__this->fields).HJLDGHLININ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,IMMNELPBGIF);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar4 = (__this->fields).HJLDGHLININ;
  if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) {
    if ((pNVar4->fields)._BOGAKJOFOEK_k__BackingField != false) {
      return;
    }
    __this_00 = DialogsManager__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (DialogsManager_o *)0x0) {
      __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)
                  DialogsManager__BFJGHKKGOJC<object>
                            (__this_00,Method_GCIFMNHADDF_BFJGHKKGOJC<RaidTopHundredDialog>__);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      }
      if (__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)0x0) {
        bVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__IsSelected
                          (__this_01,__this,(MethodInfo *)0x0);
        if (!bVar1) {
          halt_unimplemented();
        }
        pSVar2 = (__this->fields).DGGLBIIIEBM;
        if (pSVar2 != (System_Collections_Generic_List_KeyValuePair_int__CBPENMDOJDB___o *)0x0) {
          length = (pSVar2->fields)._size;
          (pSVar2->fields)._size = 0;
          (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
          if (0 < length) {
            System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0
                               );
          }
          pSVar3 = (__this->fields).JDHINHCBLNC;
          if (pSVar3 != (System_Collections_Generic_List_int__o *)0x0) {
            (pSVar3->fields)._size = 0;
            (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
            method_00 = HJPEKDOPBHN_TypeInfo;
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              method_00 = (HJPEKDOPBHN_c *)thunk_FUN_01ba7564();
            }
            HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)method_00);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
            halt_unimplemented();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MBHCBEKAJPI()  [RVA 0x3490100]
// PBHDPJBLDLG$$MBHCBEKAJPI @ RVA 0x3490100

/* WARNING: Control flow encountered unimplemented instructions */

void PBHDPJBLDLG__MBHCBEKAJPI(PBHDPJBLDLG_o *__this,MethodInfo *method)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


// ===== public void LPNCEHPFOAF(JCFJFJCKLKG DJFFMPLBCKC, Action NAKEOECMGIG)  [RVA 0x349011C]
// PBHDPJBLDLG$$LPNCEHPFOAF @ RVA 0x349011C

/* WARNING: Control flow encountered unimplemented instructions */

void PBHDPJBLDLG__LPNCEHPFOAF
               (PBHDPJBLDLG_o *__this,JCFJFJCKLKG_o *DJFFMPLBCKC,System_Action_o *NAKEOECMGIG,
               MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_BaseScrollItem_o *DKIDCBPNMPD;
  System_Action_o **ppSVar2;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *__this_02;
  System_Collections_Generic_IEnumerator_T__o *pSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  OJKCDJCBOBL_o *pOVar4;
  System_Collections_Generic_IEnumerator_T__c *pSVar5;
  System_Action_o *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  JCFJFJCKLKG_o **ppJVar9;
  Nekki_SF2_GUI_SimpleScroll_o *__this_03;
  
  method_00 = (MethodInfo *)DJFFMPLBCKC;
  if ((DAT_04568411 & 1) == 0) {
    FUN_01bab630(&System_Action<DLOALGNBPNL>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidTopClanCell>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<ICPMLKOEANF>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_PBHDPJBLDLG_HAFBJDICOGK__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Clear__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_GetEnumerator__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    FUN_01bab630(&StringLiteral_13879/*"Top100ClansPool"*/);
    DAT_04568411 = 1;
    method_00 = extraout_x1;
  }
  PBHDPJBLDLG__DNNPDIPCCEN(__this,method_00);
  __this_00 = (__this->fields).DDOFFEJPFMP;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_03 = (__this->fields).PDHMLFAMNCO;
    DKIDCBPNMPD = (Nekki_SF2_GUI_BaseScrollItem_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (__this_00,Method_UnityEngine_GameObject_GetComponent<RaidTopClanCell>__
                            );
    if (__this_03 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__UsePoolPrefab
                (__this_03,StringLiteral_13879/*"Top100ClansPool"*/,DKIDCBPNMPD,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).NDHBLOHOEFK;
      *ppSVar2 = NAKEOECMGIG;
      thunk_FUN_01c20e04(ppSVar2,NAKEOECMGIG);
      if (DJFFMPLBCKC == (JCFJFJCKLKG_o *)0x0) {
        PBHDPJBLDLG__NCDOMAGEGCF(__this,method_01);
        pSVar6 = (__this->fields).NDHBLOHOEFK;
        if (pSVar6 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035904c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(pSVar6->fields).super.super.invoke_impl)
                    ((pSVar6->fields).super.super.method_code,(pSVar6->fields).super.super.method);
          return;
        }
        return;
      }
      ppJVar9 = &(__this->fields).FHPFEDKOMBA;
      *ppJVar9 = DJFFMPLBCKC;
      thunk_FUN_01c20e04(ppJVar9,DJFFMPLBCKC);
      pOVar4 = (__this->fields).BAKEIGFACAG;
      if ((pOVar4 != (OJKCDJCBOBL_o *)0x0) &&
         (__this_01 = (pOVar4->fields).OHMDCKEDOGH,
         __this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
        Google_Protobuf_Collections_RepeatedField<long>__Clear
                  (__this_01,Method_Google_Protobuf_Collections_RepeatedField<long>_Clear__);
        if ((*ppJVar9 != (JCFJFJCKLKG_o *)0x0) &&
           (__this_02 = ((*ppJVar9)->fields).LFOCACIGEFK,
           __this_02 != (Google_Protobuf_Collections_RepeatedField_ICPMLKOEANF__o *)0x0)) {
          pSVar3 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,
                              Method_Google_Protobuf_Collections_RepeatedField<ICPMLKOEANF>_GetEnumerator__
                             );
          if (pSVar3 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar5 = pSVar3->klass;
          uVar1._0_1_ = (pSVar5->_2).rank;
          uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
          uVar7 = (ulong)uVar1;
          if (uVar7 != 0) {
            piVar8 = &((pSVar5->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                  (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                halt_unimplemented();
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          FUN_01b81914(pSVar3,System_Collections_IEnumerator_TypeInfo,0);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
          halt_unimplemented();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

