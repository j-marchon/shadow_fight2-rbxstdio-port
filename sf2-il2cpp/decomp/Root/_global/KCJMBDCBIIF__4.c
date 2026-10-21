// TypeDefIndex 4
// Namespace: 
// public class KCJMBDCBIIF : JICOLGELJGE<DLOALGNBPNL>
// Fields:
//   private Dictionary<long, CBPENMDOJDB> CMJNDHHGCBI; // 0x20

// ===== public CBPENMDOJDB ILBKEICPFNC(long PBNPKBJKFHE)  [RVA 0x2FEDAE4]
// KCJMBDCBIIF$$ILBKEICPFNC @ RVA 0x2FEDAE4

CBPENMDOJDB_o *
KCJMBDCBIIF__ILBKEICPFNC(KCJMBDCBIIF_o *__this,int64_t PBNPKBJKFHE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_long__CBPENMDOJDB__o *pSVar2;
  CBPENMDOJDB_o *pCVar3;
  
  if ((DAT_04565a44 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>_get_Item__);
    DAT_04565a44 = 1;
  }
  pSVar2 = (__this->fields).CMJNDHHGCBI;
  if (pSVar2 != (System_Collections_Generic_Dictionary_long__CBPENMDOJDB__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<long,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,PBNPKBJKFHE,
                       Method_System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>_ContainsKey__
                      );
    if (!bVar1) {
      return (CBPENMDOJDB_o *)0x0;
    }
    pSVar2 = (__this->fields).CMJNDHHGCBI;
    if (pSVar2 != (System_Collections_Generic_Dictionary_long__CBPENMDOJDB__o *)0x0) {
      pCVar3 = (CBPENMDOJDB_o *)
               System_Collections_Generic_Dictionary<long,_object>__get_Item
                         ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                          PBNPKBJKFHE,
                          Method_System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>_get_Item__
                         );
      return pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EBJKIHCKLKJ(CBPENMDOJDB PBNPKBJKFHE)  [RVA 0x2FEDB78]
// KCJMBDCBIIF$$EBJKIHCKLKJ @ RVA 0x2FEDB78

void KCJMBDCBIIF__EBJKIHCKLKJ(KCJMBDCBIIF_o *__this,CBPENMDOJDB_o *PBNPKBJKFHE,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_long__CBPENMDOJDB__o *__this_00;
  
  if ((DAT_04565a45 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>_set_Item__);
    DAT_04565a45 = 1;
  }
  if ((PBNPKBJKFHE != (CBPENMDOJDB_o *)0x0) &&
     (__this_00 = (__this->fields).CMJNDHHGCBI,
     __this_00 != (System_Collections_Generic_Dictionary_long__CBPENMDOJDB__o *)0x0)) {
    System_Collections_Generic_Dictionary<long,_object>__set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (PBNPKBJKFHE->fields).ADEIKPGDIPM,(Il2CppObject *)PBNPKBJKFHE,
               Method_System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>_set_Item__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KLNMLOOCAAO(OJKCDJCBOBL DBIAAJNKHLH, Action<DLOALGNBPNL> BLMFLPJJMPF)  [RVA 0x2FEDBD8]
// KCJMBDCBIIF$$KLNMLOOCAAO @ RVA 0x2FEDBD8

void KCJMBDCBIIF__KLNMLOOCAAO
               (KCJMBDCBIIF_o *__this,OJKCDJCBOBL_o *DBIAAJNKHLH,
               System_Action_DLOALGNBPNL__o *BLMFLPJJMPF,MethodInfo *method)

{
  int32_t iVar1;
  KKLJIDJBFEI_o *__this_00;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF_00;
  Il2CppObject *__this_01;
  
  if ((DAT_04565a46 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&KCJMBDCBIIF_GOEDJGBJPKD_TypeInfo);
    FUN_01bab630(&Method_JICOLGELJGE<DLOALGNBPNL>_OPCNBJOLDNG__);
    FUN_01bab630(&Method_KCJMBDCBIIF_HAFBJDICOGK__);
    FUN_01bab630(&StringLiteral_17028/*"clan_get_short_info"*/);
    DAT_04565a46 = 1;
  }
  iVar1 = JICOLGELJGE<object>__OPCNBJOLDNG
                    ((JICOLGELJGE_T__o *)__this,(System_Action_T__o *)BLMFLPJJMPF,
                     Method_JICOLGELJGE<DLOALGNBPNL>_OPCNBJOLDNG__);
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  BLMFLPJJMPF_00 =
       (System_Action_KEFHDOHHHML__o *)thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  __this_01 = (Il2CppObject *)thunk_FUN_01bda818(KCJMBDCBIIF_GOEDJGBJPKD_TypeInfo);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  __this_01[1].klass = (Il2CppClass *)DBIAAJNKHLH;
  thunk_FUN_01c20e04(__this_01 + 1,DBIAAJNKHLH);
  *(int32_t *)&__this_01[1].monitor = iVar1;
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    KDPDBGNOFEN__KLNMLOOCAAO
              ((KDPDBGNOFEN_o *)__this_00,StringLiteral_17028/*"clan_get_short_info"*/,
               (Google_Protobuf_IMessage_o *)DBIAAJNKHLH,BLMFLPJJMPF_00,0.0,__this_01,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DAGCABNOONJ(OJKCDJCBOBL DBIAAJNKHLH, Action<DLOALGNBPNL> BLMFLPJJMPF)  [RVA 0x2FEDD50]
// KCJMBDCBIIF$$DAGCABNOONJ @ RVA 0x2FEDD50

void KCJMBDCBIIF__DAGCABNOONJ
               (KCJMBDCBIIF_o *__this,OJKCDJCBOBL_o *DBIAAJNKHLH,
               System_Action_DLOALGNBPNL__o *BLMFLPJJMPF,MethodInfo *method)

{
  bool bVar1;
  DLOALGNBPNL_o *pDVar2;
  OJKCDJCBOBL_o *__this_00;
  int64_t iVar3;
  System_Action_DLOALGNBPNL__o *method_00;
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *pGVar4;
  Google_Protobuf_Collections_RepeatedField_long__o *pGVar5;
  int index;
  System_Collections_Generic_Dictionary_long__CBPENMDOJDB__o *__this_01;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_02;
  
  method_00 = BLMFLPJJMPF;
  if ((DAT_04565a47 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>_ContainsKey__);
    FUN_01bab630(&OJKCDJCBOBL_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    DAT_04565a47 = 1;
  }
  pDVar2 = KCJMBDCBIIF__JJOJLFCDCJO(__this,DBIAAJNKHLH,(MethodInfo *)method_00);
  if ((((pDVar2 != (DLOALGNBPNL_o *)0x0) &&
       (pGVar4 = (pDVar2->fields).EHBNKDHKJNI,
       pGVar4 != (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)0x0)) &&
      (DBIAAJNKHLH != (OJKCDJCBOBL_o *)0x0)) &&
     (pGVar5 = (DBIAAJNKHLH->fields).OHMDCKEDOGH,
     pGVar5 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
    if ((pGVar5->fields).count <= (pGVar4->fields).count) {
      if (BLMFLPJJMPF != (System_Action_DLOALGNBPNL__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x030ededc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(BLMFLPJJMPF->fields).super.super.invoke_impl)
                  ((BLMFLPJJMPF->fields).super.super.method_code,pDVar2,
                   (BLMFLPJJMPF->fields).super.super.method);
        return;
      }
      return;
    }
    __this_00 = (OJKCDJCBOBL_o *)thunk_FUN_01bda818(OJKCDJCBOBL_TypeInfo);
    OJKCDJCBOBL___ctor(__this_00,(MethodInfo *)0x0);
    pGVar5 = (DBIAAJNKHLH->fields).OHMDCKEDOGH;
    if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
      index = 0;
      do {
        if ((pGVar5->fields).count <= index) {
          KCJMBDCBIIF__KLNMLOOCAAO(__this,__this_00,BLMFLPJJMPF,method);
          return;
        }
        __this_01 = (__this->fields).CMJNDHHGCBI;
        iVar3 = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                          (pGVar5,index,
                           Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
        if (__this_01 == (System_Collections_Generic_Dictionary_long__CBPENMDOJDB__o *)0x0) break;
        bVar1 = System_Collections_Generic_Dictionary<long,_object>__ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,iVar3,
                           Method_System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>_ContainsKey__
                          );
        if (!bVar1) {
          if ((__this_00 == (OJKCDJCBOBL_o *)0x0) ||
             (pGVar5 = (DBIAAJNKHLH->fields).OHMDCKEDOGH,
             pGVar5 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) break;
          __this_02 = (__this_00->fields).OHMDCKEDOGH;
          iVar3 = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                            (pGVar5,index,
                             Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
          if (__this_02 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) break;
          Google_Protobuf_Collections_RepeatedField<long>__Add
                    (__this_02,iVar3,Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
        }
        pGVar5 = (DBIAAJNKHLH->fields).OHMDCKEDOGH;
        index = index + 1;
      } while (pGVar5 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x2FEE218]
// KCJMBDCBIIF$$.ctor @ RVA 0x2FEE218

void KCJMBDCBIIF___ctor(KCJMBDCBIIF_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_long__CBPENMDOJDB__o *__this_00;
  System_Collections_Generic_Dictionary_long__CBPENMDOJDB__o **ppSVar1;
  KKLJIDJBFEI_o *__this_01;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565a48 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>_TypeInfo);
    FUN_01bab630(&Method_JICOLGELJGE<DLOALGNBPNL>__ctor__);
    FUN_01bab630(&Method_KCJMBDCBIIF_AKEKGJAFBOC__);
    DAT_04565a48 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_long__CBPENMDOJDB__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<long,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>__ctor__);
  ppSVar1 = &(__this->fields).CMJNDHHGCBI;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  JICOLGELJGE<object>___ctor((JICOLGELJGE_T__o *)__this,Method_JICOLGELJGE<DLOALGNBPNL>__ctor__);
  __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
    KKLJIDJBFEI__HKAALOKPBPG(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HAFBJDICOGK(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x2FEE328]
// KCJMBDCBIIF$$HAFBJDICOGK @ RVA 0x2FEE328

void KCJMBDCBIIF__HAFBJDICOGK(KCJMBDCBIIF_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  DLOALGNBPNL_o *pDVar3;
  int32_t EGJLNEOGECM;
  MethodInfo *in_x3;
  Il2CppObject *pIVar4;
  
  if ((DAT_04565a49 & 1) == 0) {
    FUN_01bab630(&DLOALGNBPNL_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&KCJMBDCBIIF_GOEDJGBJPKD_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<DLOALGNBPNL>__);
    FUN_01bab630(&StringLiteral_5948/*"Error: ClansCache::onGetClans"*/);
    FUN_01bab630(&StringLiteral_5949/*"Error: ClansCache::onGetPlayers"*/);
    DAT_04565a49 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pIVar4 = (IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField;
    if (pIVar4 != (Il2CppObject *)0x0) {
      bVar1 = (KCJMBDCBIIF_GOEDJGBJPKD_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (pIVar4->klass->_2).naturalAligment) &&
         ((pIVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)KCJMBDCBIIF_GOEDJGBJPKD_TypeInfo)) {
        bVar2 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
        if (bVar2) {
          pDVar3 = (DLOALGNBPNL_o *)
                   KEFHDOHHHML__PFNEPJAFEDF<object>
                             (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<DLOALGNBPNL>__);
          KCJMBDCBIIF__PKJGPLAAKNJ(__this,pDVar3,method);
          pDVar3 = KCJMBDCBIIF__JJOJLFCDCJO(__this,(OJKCDJCBOBL_o *)pIVar4[1].klass,method);
          EGJLNEOGECM = *(int32_t *)&pIVar4[1].monitor;
        }
        else {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_5949/*"Error: ClansCache::onGetPlayers"*/,(MethodInfo *)0x0);
          pDVar3 = (DLOALGNBPNL_o *)thunk_FUN_01bda818(DLOALGNBPNL_TypeInfo);
          DLOALGNBPNL___ctor(pDVar3,(MethodInfo *)0x0);
          EGJLNEOGECM = *(int32_t *)&pIVar4[1].monitor;
        }
        KCJMBDCBIIF__HHAFBOFFEHA(__this,pDVar3,EGJLNEOGECM,in_x3);
        return;
      }
    }
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_5948/*"Error: ClansCache::onGetClans"*/,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private DLOALGNBPNL JJOJLFCDCJO(OJKCDJCBOBL HAMLBIJCOHB)  [RVA 0x2FEDF1C]
// KCJMBDCBIIF$$JJOJLFCDCJO @ RVA 0x2FEDF1C

/* WARNING: Removing unreachable block (ram,0x030ee15c) */

DLOALGNBPNL_o *
KCJMBDCBIIF__JJOJLFCDCJO(KCJMBDCBIIF_o *__this,OJKCDJCBOBL_o *HAMLBIJCOHB,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  DLOALGNBPNL_o *__this_00;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  int64_t PBNPKBJKFHE;
  CBPENMDOJDB_o *item;
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *__this_02;
  System_Collections_Generic_IEnumerator_T__c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04565a4a & 1) == 0) {
    FUN_01bab630(&DLOALGNBPNL_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<long>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_Add__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_GetEnumerator__);
    DAT_04565a4a = 1;
  }
  __this_00 = (DLOALGNBPNL_o *)thunk_FUN_01bda818(DLOALGNBPNL_TypeInfo);
  DLOALGNBPNL___ctor(__this_00,(MethodInfo *)0x0);
  if ((HAMLBIJCOHB == (OJKCDJCBOBL_o *)0x0) ||
     (__this_01 = (HAMLBIJCOHB->fields).OHMDCKEDOGH,
     __this_01 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = Google_Protobuf_Collections_RepeatedField<long>__GetEnumerator
                     (__this_01,
                      Method_Google_Protobuf_Collections_RepeatedField<long>_GetEnumerator__);
  if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar6 = pSVar4->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_030ee03c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x0;
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
LAB_030ee03c:
    uVar7 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if ((uVar7 & 1) == 0) {
      if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
        return __this_00;
      }
      pSVar6 = pSVar4->klass;
      uVar3._0_1_ = (pSVar6->_2).rank;
      uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
      uVar7 = (ulong)uVar3;
      if (uVar7 == 0) goto LAB_030ee108;
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      break;
    }
    pSVar6 = pSVar4->klass;
    uVar2._0_1_ = (pSVar6->_2).rank;
    uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerator<long>_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_030ee098;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x0;
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
LAB_030ee098:
    PBNPKBJKFHE = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    item = KCJMBDCBIIF__ILBKEICPFNC(__this,PBNPKBJKFHE,method);
    if (item != (CBPENMDOJDB_o *)0x0) {
      if (__this_00 == (DLOALGNBPNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_02 = (__this_00->fields).EHBNKDHKJNI;
      if (__this_02 == (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      method = Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_Add__;
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,(Il2CppObject *)item,
                 (MethodInfo_295E688 *)
                 Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_Add__);
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
        (Il2CppClass *)System_IDisposable_TypeInfo) {
      pVVar5 = pSVar6->vtable + *piVar8;
      goto LAB_030ee124;
    }
  }
LAB_030ee108:
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_030ee124:
  (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
  return __this_00;
}


// ===== public void PKJGPLAAKNJ(DLOALGNBPNL PIMBGGLBFAA)  [RVA 0x2FEE568]
// KCJMBDCBIIF$$PKJGPLAAKNJ @ RVA 0x2FEE568

/* WARNING: Removing unreachable block (ram,0x030ee744) */

void KCJMBDCBIIF__PKJGPLAAKNJ(KCJMBDCBIIF_o *__this,DLOALGNBPNL_o *PIMBGGLBFAA,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *__this_00;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  CBPENMDOJDB_o *PBNPKBJKFHE;
  System_Collections_Generic_IEnumerator_T__c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_04565a4b & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<CBPENMDOJDB>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_GetEnumerator__);
    DAT_04565a4b = 1;
  }
  if ((PIMBGGLBFAA == (DLOALGNBPNL_o *)0x0) ||
     (__this_00 = (PIMBGGLBFAA->fields).EHBNKDHKJNI,
     __this_00 == (Google_Protobuf_Collections_RepeatedField_CBPENMDOJDB__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                     ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                      Method_Google_Protobuf_Collections_RepeatedField<CBPENMDOJDB>_GetEnumerator__)
  ;
  if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar6 = pSVar4->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_030ee64c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x0;
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
LAB_030ee64c:
    uVar7 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if ((uVar7 & 1) == 0) break;
    pSVar6 = pSVar4->klass;
    uVar2._0_1_ = (pSVar6->_2).rank;
    uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerator<CBPENMDOJDB>_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_030ee6a8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    method = (MethodInfo *)0x0;
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4);
LAB_030ee6a8:
    PBNPKBJKFHE = (CBPENMDOJDB_o *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    KCJMBDCBIIF__EBJKIHCKLKJ(__this,PBNPKBJKFHE,method);
  } while( true );
  if (pSVar4 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
    pSVar6 = pSVar4->klass;
    uVar3._0_1_ = (pSVar6->_2).rank;
    uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar3;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar5 = pSVar6->vtable + *piVar8;
          goto LAB_030ee718;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_030ee718:
    (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
  }
  return;
}


// ===== private void HHAFBOFFEHA(DLOALGNBPNL PIMBGGLBFAA, int EGJLNEOGECM)  [RVA 0x2FEE4BC]
// KCJMBDCBIIF$$HHAFBOFFEHA @ RVA 0x2FEE4BC

void KCJMBDCBIIF__HHAFBOFFEHA
               (KCJMBDCBIIF_o *__this,DLOALGNBPNL_o *PIMBGGLBFAA,int32_t EGJLNEOGECM,
               MethodInfo *method)

{
  System_Action_T__o *pSVar1;
  
  if ((DAT_04565a4c & 1) == 0) {
    FUN_01bab630(&Method_JICOLGELJGE<DLOALGNBPNL>_FAJIGDCHCKL__);
    FUN_01bab630(&Method_JICOLGELJGE<DLOALGNBPNL>_PIIKLDFBOMK__);
    DAT_04565a4c = 1;
  }
  pSVar1 = JICOLGELJGE<object>__PIIKLDFBOMK
                     ((JICOLGELJGE_T__o *)__this,EGJLNEOGECM,
                      Method_JICOLGELJGE<DLOALGNBPNL>_PIIKLDFBOMK__);
  if (pSVar1 != (System_Action_T__o *)0x0) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,PIMBGGLBFAA,
               (pSVar1->fields).super.super.method);
    JICOLGELJGE<object>__FAJIGDCHCKL
              ((JICOLGELJGE_T__o *)__this,EGJLNEOGECM,Method_JICOLGELJGE<DLOALGNBPNL>_FAJIGDCHCKL__)
    ;
    return;
  }
  return;
}


// ===== public void AKEKGJAFBOC()  [RVA 0x2FEE7F4]
// KCJMBDCBIIF$$AKEKGJAFBOC @ RVA 0x2FEE7F4

void KCJMBDCBIIF__AKEKGJAFBOC(KCJMBDCBIIF_o *__this,MethodInfo *method)

{
                    /* WARNING: Could not recover jumptable at 0x030ee7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._4_BOADOENMDDN.methodPtr)
            (__this,(__this->klass->vtable)._4_BOADOENMDDN.method);
  return;
}


// ===== public override void BOADOENMDDN()  [RVA 0x2FEE800]
// KCJMBDCBIIF$$BOADOENMDDN @ RVA 0x2FEE800

void KCJMBDCBIIF__BOADOENMDDN(KCJMBDCBIIF_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_long__CBPENMDOJDB__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565a4d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>_Clear__);
    DAT_04565a4d = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).CMJNDHHGCBI;
  if (__this_00 != (System_Collections_Generic_Dictionary_long__CBPENMDOJDB__o *)0x0) {
    System_Collections_Generic_Dictionary<long,_object>__Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<long,_CBPENMDOJDB>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

