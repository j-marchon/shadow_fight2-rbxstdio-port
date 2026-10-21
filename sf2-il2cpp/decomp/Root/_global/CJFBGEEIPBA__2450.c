// TypeDefIndex 2450
// Namespace: 
// public class CJFBGEEIPBA
// Fields:
//   private Action<List<NLFLMJPNOLF>> DOKOLOEMNGB; // 0x10
//   private Action<NLFLMJPNOLF> FJIFDGEPKBH; // 0x18
//   private Action<NLFLMJPNOLF> HEJHGFDOMMG; // 0x20
//   private Action<long> MLBNBCLLKEL; // 0x28
//   private OJEHKJHEBID FBILHKCKHEJ; // 0x30

// ===== private void MCEGNHLCNGO(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3363F9C]
// CJFBGEEIPBA$$MCEGNHLCNGO @ RVA 0x3363F9C

void CJFBGEEIPBA__MCEGNHLCNGO(CJFBGEEIPBA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if ((DAT_04567aa3 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<Int64Value>__);
    FUN_01bab630(&StringLiteral_17043/*"clan_raid_destroy_event failed"*/);
    DAT_04567aa3 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pIVar1 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<Int64Value>__);
    if (pIVar1 != (Il2CppObject *)0x0) {
      CJFBGEEIPBA__MDGNOGCEMDN(__this,(int64_t)pIVar1[1].monitor,method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_17043/*"clan_raid_destroy_event failed"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void HKPDBKGKBOO(long FKIGDGJPIAC, Action<NLFLMJPNOLF> IELDNEAAPBE)  [RVA 0x3364194]
// CJFBGEEIPBA$$HKPDBKGKBOO @ RVA 0x3364194

void CJFBGEEIPBA__HKPDBKGKBOO
               (CJFBGEEIPBA_o *__this,int64_t FKIGDGJPIAC,System_Action_NLFLMJPNOLF__o *IELDNEAAPBE,
               MethodInfo *method)

{
  Google_Protobuf_WellKnownTypes_Int64Value_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
  if ((DAT_04567aa4 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_CJFBGEEIPBA_INMBMELGIBH__);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
    FUN_01bab630(&StringLiteral_17046/*"clan_raid_kick"*/);
    DAT_04567aa4 = 1;
  }
  __this_00 = (Google_Protobuf_WellKnownTypes_Int64Value_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
  Google_Protobuf_WellKnownTypes_Int64Value___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Google_Protobuf_WellKnownTypes_Int64Value_o *)0x0) {
    (__this_00->fields).value_ = FKIGDGJPIAC;
    __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
      KDPDBGNOFEN__KLNMLOOCAAO
                ((KDPDBGNOFEN_o *)__this_01,StringLiteral_17046/*"clan_raid_kick"*/,
                 (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,0.0,(Il2CppObject *)IELDNEAAPBE
                 ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CBJDFGLCFBN(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3364294]
// CJFBGEEIPBA$$CBJDFGLCFBN @ RVA 0x3364294

void CJFBGEEIPBA__CBJDFGLCFBN(CJFBGEEIPBA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  NLFLMJPNOLF_o *pNVar2;
  long lVar3;
  CPNHNIKFGFB_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Il2CppObject *pIVar4;
  
  method_00 = (MethodInfo *)IDCGLBOIAFJ;
  if ((DAT_04567aa5 & 1) == 0) {
    FUN_01bab630(&System_Action<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<NLFLMJPNOLF>__);
    DAT_04567aa5 = 1;
    method_00 = extraout_x1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
    return;
  }
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,method_00);
  if (bVar1) {
    pIVar4 = (IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField;
    pNVar2 = (NLFLMJPNOLF_o *)
             KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<NLFLMJPNOLF>__);
    CJFBGEEIPBA__KMEMLHDKKFN(__this,pNVar2,method);
    lVar3 = thunk_FUN_01bda71c(pIVar4,System_Action<NLFLMJPNOLF>_TypeInfo);
    if (lVar3 == 0) {
      return;
    }
    if (pNVar2 != (NLFLMJPNOLF_o *)0x0) {
      pNVar2 = CJFBGEEIPBA__IPLHNJCJEIK(__this,(pNVar2->fields).OHMDCKEDOGH,method);
                    /* WARNING: Could not recover jumptable at 0x03464350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),pNVar2,*(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
  else {
    __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
      CPNHNIKFGFB__DIGPCFKCCBK
                (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void ABOIIKKDKCC(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3364798]
// CJFBGEEIPBA$$ABOIIKKDKCC @ RVA 0x3364798

void CJFBGEEIPBA__ABOIIKKDKCC(CJFBGEEIPBA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  NLFLMJPNOLF_o *pNVar2;
  long lVar3;
  CPNHNIKFGFB_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)IDCGLBOIAFJ;
  if ((DAT_04567aa6 & 1) == 0) {
    FUN_01bab630(&System_Action<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<NLFLMJPNOLF>__);
    FUN_01bab630(&StringLiteral_17038/*"clan_raid_create failed"*/);
    DAT_04567aa6 = 1;
    method_00 = extraout_x1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_17038/*"clan_raid_create failed"*/,(MethodInfo *)0x0);
    return;
  }
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,method_00);
  if (bVar1) {
    pNVar2 = (NLFLMJPNOLF_o *)
             KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<NLFLMJPNOLF>__);
    CJFBGEEIPBA__MHEDHEODOPJ(__this,pNVar2,method);
    lVar3 = thunk_FUN_01bda71c((IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField,
                               System_Action<NLFLMJPNOLF>_TypeInfo);
    if (lVar3 == 0) {
      return;
    }
    if (pNVar2 != (NLFLMJPNOLF_o *)0x0) {
      pNVar2 = CJFBGEEIPBA__IPLHNJCJEIK(__this,(pNVar2->fields).OHMDCKEDOGH,method);
                    /* WARNING: Could not recover jumptable at 0x03464868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar3 + 0x18))
                (*(undefined8 *)(lVar3 + 0x40),pNVar2,*(undefined8 *)(lVar3 + 0x28));
      return;
    }
  }
  else {
    __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
      CPNHNIKFGFB__DIGPCFKCCBK
                (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public NLFLMJPNOLF PCKHIBMJKJG()  [RVA 0x3364958]
// CJFBGEEIPBA$$PCKHIBMJKJG @ RVA 0x3364958

NLFLMJPNOLF_o * CJFBGEEIPBA__PCKHIBMJKJG(CJFBGEEIPBA_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  EEGDOGKBLNG_o *pEVar4;
  int64_t iVar5;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *pGVar6;
  Il2CppObject *pIVar7;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  int64_t iVar8;
  NLFLMJPNOLF_o *pNVar9;
  MethodInfo *extraout_x1;
  int index;
  int index_00;
  OJEHKJHEBID_o *pOVar10;
  
  if ((DAT_04567aa7 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    DAT_04567aa7 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar4 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar4 != (EEGDOGKBLNG_o *)0x0) {
    bVar3 = EEGDOGKBLNG__CLJIMCDAEKO(pEVar4,(MethodInfo *)0x0);
    if (!bVar3) {
      return (NLFLMJPNOLF_o *)0x0;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar4 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar4 != (EEGDOGKBLNG_o *)0x0) {
      iVar5 = EEGDOGKBLNG__APCMGOCHMGC(pEVar4,(MethodInfo *)0x0);
      pOVar10 = (__this->fields).FBILHKCKHEJ;
      if (pOVar10 == (OJEHKJHEBID_o *)0x0) {
        return (NLFLMJPNOLF_o *)0x0;
      }
      pGVar6 = (pOVar10->fields).MJIHCLLODMF;
      if (pGVar6 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
        iVar1 = (pGVar6->fields).count;
        if (iVar1 < 1) {
          return (NLFLMJPNOLF_o *)0x0;
        }
        index = 0;
        do {
          pIVar7 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar6,index,
                              Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__
                             );
          if ((pIVar7 == (Il2CppObject *)0x0) ||
             (__this_00 = pIVar7[2].monitor,
             __this_00 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) break;
          iVar2 = (__this_00->fields).count;
          if (0 < iVar2) {
            index_00 = 0;
            while( true ) {
              iVar8 = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                                (__this_00,index_00,
                                 Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
              if (iVar5 == iVar8) {
                pGVar6 = (pOVar10->fields).MJIHCLLODMF;
                if (pGVar6 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
                  pNVar9 = (NLFLMJPNOLF_o *)
                           Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                     ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar6,index
                                      ,
                                      Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__
                                     );
                  return pNVar9;
                }
                goto LAB_03464afc;
              }
              index_00 = index_00 + 1;
              if (iVar2 == index_00) break;
              __this_00 = pIVar7[2].monitor;
              if (__this_00 == (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)
              goto LAB_03464afc;
            }
          }
          index = index + 1;
          if (index == iVar1) {
            return (NLFLMJPNOLF_o *)0x0;
          }
          pGVar6 = (pOVar10->fields).MJIHCLLODMF;
        } while (pGVar6 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0);
      }
    }
  }
LAB_03464afc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ODGGLKIMFCE()  [RVA 0x3364B00]
// CJFBGEEIPBA$$ODGGLKIMFCE @ RVA 0x3364B00

void CJFBGEEIPBA__ODGGLKIMFCE(CJFBGEEIPBA_o *__this,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *__this_00;
  Il2CppObject *pIVar2;
  int index;
  OJEHKJHEBID_o *pOVar3;
  System_Action_NLFLMJPNOLF__o *pSVar4;
  
  if ((DAT_04567aa8 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__);
    DAT_04567aa8 = 1;
  }
  pOVar3 = (__this->fields).FBILHKCKHEJ;
  if (pOVar3 == (OJEHKJHEBID_o *)0x0) {
    return;
  }
  __this_00 = (pOVar3->fields).MJIHCLLODMF;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
    iVar1 = (__this_00->fields).count;
    if (iVar1 < 1) {
      return;
    }
    index = 0;
    do {
      pSVar4 = (__this->fields).FJIFDGEPKBH;
      pIVar2 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index,
                          Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__);
      if (pSVar4 == (System_Action_NLFLMJPNOLF__o *)0x0) break;
      (*(code *)(pSVar4->fields).super.super.invoke_impl)
                ((pSVar4->fields).super.super.method_code,pIVar2,(pSVar4->fields).super.super.method
                );
      index = index + 1;
      if (iVar1 == index) {
        return;
      }
      __this_00 = (pOVar3->fields).MJIHCLLODMF;
    } while (__this_00 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MHEDHEODOPJ(NLFLMJPNOLF AOMBONOOJFP)  [RVA 0x33648D0]
// CJFBGEEIPBA$$MHEDHEODOPJ @ RVA 0x33648D0

void CJFBGEEIPBA__MHEDHEODOPJ(CJFBGEEIPBA_o *__this,NLFLMJPNOLF_o *AOMBONOOJFP,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *__this_00;
  OJEHKJHEBID_o *pOVar1;
  System_Action_NLFLMJPNOLF__o *pSVar2;
  
  if ((DAT_04567aa9 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_Add__);
    DAT_04567aa9 = 1;
  }
  pOVar1 = (__this->fields).FBILHKCKHEJ;
  if (pOVar1 != (OJEHKJHEBID_o *)0x0) {
    __this_00 = (pOVar1->fields).MJIHCLLODMF;
    if (__this_00 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
      Google_Protobuf_Collections_RepeatedField<object>__Add
                ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                 (Il2CppObject *)AOMBONOOJFP,
                 Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_Add__);
      pSVar2 = (__this->fields).HEJHGFDOMMG;
      if (pSVar2 != (System_Action_NLFLMJPNOLF__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03464944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar2->fields).super.super.invoke_impl)
                  ((pSVar2->fields).super.super.method_code,AOMBONOOJFP,
                   (pSVar2->fields).super.super.method);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void AMHCCGMLBOE(DBMPKPJGIPI KDLGNPCKLIJ)  [RVA 0x3364BBC]
// CJFBGEEIPBA$$AMHCCGMLBOE @ RVA 0x3364BBC

void CJFBGEEIPBA__AMHCCGMLBOE(CJFBGEEIPBA_o *__this,int32_t KDLGNPCKLIJ,MethodInfo *method)

{
  CFMDGLMCNIL_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
  method_00 = (MethodInfo *)(ulong)(uint)KDLGNPCKLIJ;
  if ((DAT_04567aaa & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567aaa = 1;
    method_00 = extraout_x1;
  }
  CJFBGEEIPBA__DMJNFPEFGNH(__this,method_00);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__POHONLHCOJN((MethodInfo *)0x0);
  if (__this_00 != (CFMDGLMCNIL_o *)0x0) {
    CFMDGLMCNIL__BKBHKFCCKDO(__this_00,2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LHIIONDDOJI(BaseDialog IMMNELPBGIF)  [RVA 0x3364D04]
// CJFBGEEIPBA$$LHIIONDDOJI @ RVA 0x3364D04

void CJFBGEEIPBA__LHIIONDDOJI
               (CJFBGEEIPBA_o *__this,Nekki_SF2_GUI_Dialogs_BaseDialog_o *IMMNELPBGIF,
               MethodInfo *method)

{
  CFMDGLMCNIL_o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *extraout_x1;
  
  if ((DAT_04567aab & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567aab = 1;
    IMMNELPBGIF = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,IMMNELPBGIF);
  }
  __this_00 = HJPEKDOPBHN__POHONLHCOJN((MethodInfo *)0x0);
  if (__this_00 != (CFMDGLMCNIL_o *)0x0) {
    CFMDGLMCNIL__BKBHKFCCKDO(__this_00,2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IGGCPEFPJPD(NLFLMJPNOLF FKJAGADBHEK)  [RVA 0x3364D68]
// CJFBGEEIPBA$$IGGCPEFPJPD @ RVA 0x3364D68

void CJFBGEEIPBA__IGGCPEFPJPD(CJFBGEEIPBA_o *__this,NLFLMJPNOLF_o *FKJAGADBHEK,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *pGVar1;
  Il2CppObject *pIVar2;
  OJEHKJHEBID_o *pOVar3;
  int index;
  
  if ((DAT_04567aac & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_set_Item__);
    FUN_01bab630(&StringLiteral_4407/*"ClanRaidsController::RaplceRaid: didnt find corresponding existing raid!"*/);
    DAT_04567aac = 1;
  }
  pOVar3 = (__this->fields).FBILHKCKHEJ;
  if (pOVar3 == (OJEHKJHEBID_o *)0x0) {
    return;
  }
  index = 0;
  while (pGVar1 = (pOVar3->fields).MJIHCLLODMF,
        pGVar1 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
    if ((pGVar1->fields).count <= index) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_4407/*"ClanRaidsController::RaplceRaid: didnt find corresponding existing raid!"*/,(MethodInfo *)0x0);
      return;
    }
    pIVar2 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,index,
                        Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__);
    if ((pIVar2 == (Il2CppObject *)0x0) || (FKJAGADBHEK == (NLFLMJPNOLF_o *)0x0)) break;
    if (pIVar2[1].monitor == (void *)(FKJAGADBHEK->fields).OHMDCKEDOGH) {
      pOVar3 = (__this->fields).FBILHKCKHEJ;
      if ((pOVar3 != (OJEHKJHEBID_o *)0x0) &&
         (pGVar1 = (pOVar3->fields).MJIHCLLODMF,
         pGVar1 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0)) {
        Google_Protobuf_Collections_RepeatedField<object>__set_Item
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar1,index,
                   (Il2CppObject *)FKJAGADBHEK,
                   Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_set_Item__);
        return;
      }
      break;
    }
    pOVar3 = (__this->fields).FBILHKCKHEJ;
    index = index + 1;
    if (pOVar3 == (OJEHKJHEBID_o *)0x0) break;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public NLFLMJPNOLF IPLHNJCJEIK(long OILECKFDMDB)  [RVA 0x33644E0]
// CJFBGEEIPBA$$IPLHNJCJEIK @ RVA 0x33644E0

/* WARNING: Removing unreachable block (ram,0x034646dc) */

NLFLMJPNOLF_o *
CJFBGEEIPBA__IPLHNJCJEIK(CJFBGEEIPBA_o *__this,int64_t OILECKFDMDB,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *__this_00;
  System_Collections_Generic_IEnumerator_T__o *pSVar4;
  VirtualInvokeData *pVVar5;
  NLFLMJPNOLF_o *pNVar6;
  OJEHKJHEBID_o *pOVar7;
  System_Collections_Generic_IEnumerator_T__c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_04567aad & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_GetEnumerator__);
    DAT_04567aad = 1;
  }
  pOVar7 = (__this->fields).FBILHKCKHEJ;
  if (pOVar7 == (OJEHKJHEBID_o *)0x0) {
    pNVar6 = (NLFLMJPNOLF_o *)0x0;
  }
  else {
    __this_00 = (pOVar7->fields).MJIHCLLODMF;
    if (__this_00 == (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar4 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                       ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,
                        Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_GetEnumerator__
                       );
    if (pSVar4 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar8 = pSVar4->klass;
      uVar1._0_1_ = (pSVar8->_2).rank;
      uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar1;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar5 = pSVar8->vtable + *piVar10;
            goto LAB_034645bc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_034645bc:
      uVar9 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if ((uVar9 & 1) == 0) {
        pNVar6 = (NLFLMJPNOLF_o *)0x0;
        break;
      }
      pSVar8 = pSVar4->klass;
      uVar2._0_1_ = (pSVar8->_2).rank;
      uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerator<NLFLMJPNOLF>_TypeInfo) {
            pVVar5 = pSVar8->vtable + *piVar10;
            goto LAB_03464618;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)
               FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerator<NLFLMJPNOLF>_TypeInfo,0);
LAB_03464618:
      pNVar6 = (NLFLMJPNOLF_o *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
      if (pNVar6 == (NLFLMJPNOLF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while ((pNVar6->fields).OHMDCKEDOGH != OILECKFDMDB);
    if (pSVar4 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
      pSVar8 = pSVar4->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar3;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_IDisposable_TypeInfo) {
            pVVar5 = pSVar8->vtable + *piVar10;
            goto LAB_034646ac;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_034646ac:
      (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    }
  }
  return pNVar6;
}


// ===== public bool JJCBOPEDCBA(NLFLMJPNOLF AOMBONOOJFP)  [RVA 0x3364EA8]
// CJFBGEEIPBA$$JJCBOPEDCBA @ RVA 0x3364EA8

bool CJFBGEEIPBA__JJCBOPEDCBA(CJFBGEEIPBA_o *__this,NLFLMJPNOLF_o *AOMBONOOJFP,MethodInfo *method)

{
  bool bVar1;
  EEGDOGKBLNG_o *__this_00;
  int64_t item;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  
  if ((DAT_04567aae & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Contains__);
    DAT_04567aae = 1;
  }
  if (AOMBONOOJFP != (NLFLMJPNOLF_o *)0x0) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      item = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
      __this_01 = (AOMBONOOJFP->fields).MABPCBMOECE;
      if (__this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
        bVar1 = Google_Protobuf_Collections_RepeatedField<long>__Contains
                          (__this_01,item,
                           Method_Google_Protobuf_Collections_RepeatedField<long>_Contains__);
        return bVar1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}


// ===== private void BCKODMFDKHA(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3364F4C]
// CJFBGEEIPBA$$BCKODMFDKHA @ RVA 0x3364F4C

void CJFBGEEIPBA__BCKODMFDKHA(CJFBGEEIPBA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  if ((DAT_04567aaf & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_17045/*"clan_raid_join failed"*/);
    DAT_04567aaf = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    CJFBGEEIPBA__CBJDFGLCFBN(__this,IDCGLBOIAFJ,method);
    return;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_17045/*"clan_raid_join failed"*/,(MethodInfo *)0x0);
  return;
}


// ===== private void JHIPOMKMGHN(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3364FD4]
// CJFBGEEIPBA$$JHIPOMKMGHN @ RVA 0x3364FD4

void CJFBGEEIPBA__JHIPOMKMGHN(CJFBGEEIPBA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  NLFLMJPNOLF_o *AOMBONOOJFP;
  
  if ((DAT_04567ab0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<NLFLMJPNOLF>__);
    FUN_01bab630(&StringLiteral_17053/*"clan_raid_update_event failed"*/);
    DAT_04567ab0 = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    AOMBONOOJFP = (NLFLMJPNOLF_o *)
                  KEFHDOHHHML__PFNEPJAFEDF<object>
                            (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<NLFLMJPNOLF>__);
    CJFBGEEIPBA__KMEMLHDKKFN(__this,AOMBONOOJFP,method);
    return;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_17053/*"clan_raid_update_event failed"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void OLGPKJBJEPL(Action<List<NLFLMJPNOLF>> CJNHFNHJHPE)  [RVA 0x336507C]
// CJFBGEEIPBA$$OLGPKJBJEPL @ RVA 0x336507C

void CJFBGEEIPBA__OLGPKJBJEPL
               (CJFBGEEIPBA_o *__this,System_Action_List_NLFLMJPNOLF___o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_List_NLFLMJPNOLF___c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_List_NLFLMJPNOLF___o *pSVar5;
  System_Action_List_NLFLMJPNOLF___o *a;
  
  if ((DAT_04567ab1 & 1) == 0) {
    FUN_01bab630(&System_Action<List<NLFLMJPNOLF>>_TypeInfo);
    DAT_04567ab1 = 1;
  }
  a = (__this->fields).DOKOLOEMNGB;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<List<NLFLMJPNOLF>>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<List<NLFLMJPNOLF>>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_List_NLFLMJPNOLF___o *)FUN_01c07368(&__this->fields,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void MOKCFKLNKAC(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x336512C]
// CJFBGEEIPBA$$MOKCFKLNKAC @ RVA 0x336512C

void CJFBGEEIPBA__MOKCFKLNKAC(CJFBGEEIPBA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  CPNHNIKFGFB_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Il2CppObject *pIVar2;
  
  method_00 = (MethodInfo *)IDCGLBOIAFJ;
  if ((DAT_04567ab2 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_17051/*"clan_raid_start failed"*/);
    DAT_04567ab2 = 1;
    method_00 = extraout_x1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_17051/*"clan_raid_start failed"*/,(MethodInfo *)0x0);
    return;
  }
  bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,method_00);
  if (!bVar1) {
    __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
      CPNHNIKFGFB__DIGPCFKCCBK
                (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar2 = (IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField;
  if ((pIVar2 != (Il2CppObject *)0x0) && (pIVar2->klass == (Il2CppClass *)System_Action_TypeInfo)) {
                    /* WARNING: Could not recover jumptable at 0x03465214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pIVar2[1].monitor)(pIVar2[4].klass,pIVar2[2].monitor);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x336521C]
// CJFBGEEIPBA$$.ctor @ RVA 0x336521C

void CJFBGEEIPBA___ctor(CJFBGEEIPBA_o *__this,MethodInfo *method)

{
  System_Action_List_NLFLMJPNOLF___o **ppSVar1;
  System_Action_NLFLMJPNOLF__o **ppSVar2;
  System_Action_long__o **ppSVar3;
  KKLJIDJBFEI_o *pKVar4;
  System_Action_KEFHDOHHHML__o *pSVar5;
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  GCIFMNHADDF_o *__this_01;
  System_Action_BaseDialog__o *CJNHFNHJHPE_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_List_NLFLMJPNOLF___o *pSVar6;
  System_Action_NLFLMJPNOLF__o *pSVar7;
  System_Action_long__o *pSVar8;
  DCHAJIMIFHP_o *pDVar9;
  
  if ((DAT_04567ab3 & 1) == 0) {
    FUN_01bab630(&System_Action<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&System_Action<List<NLFLMJPNOLF>>_TypeInfo);
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    FUN_01bab630(&Method_CJFBGEEIPBA_AMHCCGMLBOE__);
    FUN_01bab630(&Method_CJFBGEEIPBA_JHIPOMKMGHN__);
    FUN_01bab630(&Method_CJFBGEEIPBA_LHIIONDDOJI__);
    FUN_01bab630(&Method_CJFBGEEIPBA_LOMFAPMIBFE__);
    FUN_01bab630(&Method_CJFBGEEIPBA_MCEGNHLCNGO__);
    FUN_01bab630(&Method_CJFBGEEIPBA_<>c_APANFFHGDLL__);
    FUN_01bab630(&Method_CJFBGEEIPBA_<>c_BDDMEMGMGGC__);
    FUN_01bab630(&Method_CJFBGEEIPBA_<>c_NFALHKFAFDK__);
    FUN_01bab630(&Method_CJFBGEEIPBA_<>c_NKMMMIILPAA__);
    FUN_01bab630(&CJFBGEEIPBA_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_17042/*"clan_raid_destroy_event"*/);
    FUN_01bab630(&StringLiteral_17052/*"clan_raid_update_event"*/);
    FUN_01bab630(&StringLiteral_17039/*"clan_raid_create_event"*/);
    DAT_04567ab3 = 1;
    method = extraout_x1;
  }
  if ((CJFBGEEIPBA_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(CJFBGEEIPBA_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar6 = CJFBGEEIPBA_<>c_TypeInfo->static_fields->__9__13_0;
  if (pSVar6 == (System_Action_List_NLFLMJPNOLF___o *)0x0) {
    if ((CJFBGEEIPBA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CJFBGEEIPBA_<>c_TypeInfo,method);
    }
    pSVar6 = (System_Action_List_NLFLMJPNOLF___o *)
             thunk_FUN_01bda818(System_Action<List<NLFLMJPNOLF>>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &CJFBGEEIPBA_<>c_TypeInfo->static_fields->__9__13_0;
    *ppSVar1 = pSVar6;
    thunk_FUN_01c20e04(ppSVar1,pSVar6);
  }
  if (__this != (CJFBGEEIPBA_o *)0x0) {
    (__this->fields).DOKOLOEMNGB = pSVar6;
    thunk_FUN_01c20e04(&__this->fields,pSVar6);
    if ((CJFBGEEIPBA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar7 = CJFBGEEIPBA_<>c_TypeInfo->static_fields->__9__13_1;
    if (pSVar7 == (System_Action_NLFLMJPNOLF__o *)0x0) {
      if ((CJFBGEEIPBA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar7 = (System_Action_NLFLMJPNOLF__o *)
               thunk_FUN_01bda818(System_Action<NLFLMJPNOLF>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &CJFBGEEIPBA_<>c_TypeInfo->static_fields->__9__13_1;
      *ppSVar2 = pSVar7;
      thunk_FUN_01c20e04(ppSVar2,pSVar7);
    }
    ppSVar2 = &(__this->fields).FJIFDGEPKBH;
    *ppSVar2 = pSVar7;
    thunk_FUN_01c20e04(ppSVar2,pSVar7);
    if ((CJFBGEEIPBA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar7 = CJFBGEEIPBA_<>c_TypeInfo->static_fields->__9__13_2;
    if (pSVar7 == (System_Action_NLFLMJPNOLF__o *)0x0) {
      if ((CJFBGEEIPBA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar7 = (System_Action_NLFLMJPNOLF__o *)
               thunk_FUN_01bda818(System_Action<NLFLMJPNOLF>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &CJFBGEEIPBA_<>c_TypeInfo->static_fields->__9__13_2;
      *ppSVar2 = pSVar7;
      thunk_FUN_01c20e04(ppSVar2,pSVar7);
    }
    ppSVar2 = &(__this->fields).HEJHGFDOMMG;
    *ppSVar2 = pSVar7;
    thunk_FUN_01c20e04(ppSVar2,pSVar7);
    if ((CJFBGEEIPBA_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = CJFBGEEIPBA_<>c_TypeInfo->static_fields->__9__13_3;
    if (pSVar8 == (System_Action_long__o *)0x0) {
      if ((CJFBGEEIPBA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar8 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
      System_Action<long>___ctor();
      ppSVar3 = &CJFBGEEIPBA_<>c_TypeInfo->static_fields->__9__13_3;
      *ppSVar3 = pSVar8;
      thunk_FUN_01c20e04(ppSVar3,pSVar8);
    }
    ppSVar3 = &(__this->fields).MLBNBCLLKEL;
    *ppSVar3 = pSVar8;
    thunk_FUN_01c20e04(ppSVar3,pSVar8);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar4 != (KKLJIDJBFEI_o *)0x0) {
      pDVar9 = (pKVar4->fields).super.FNHOHLGNHGN;
      pSVar5 = (System_Action_KEFHDOHHHML__o *)
               thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (pDVar9 != (DCHAJIMIFHP_o *)0x0) {
        DCHAJIMIFHP__MPFFOIIBAKO(pDVar9,StringLiteral_17039/*"clan_raid_create_event"*/,pSVar5,(MethodInfo *)0x0);
        pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        if (pKVar4 != (KKLJIDJBFEI_o *)0x0) {
          pDVar9 = (pKVar4->fields).super.FNHOHLGNHGN;
          pSVar5 = (System_Action_KEFHDOHHHML__o *)
                   thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
          System_Action<object>___ctor();
          if (pDVar9 != (DCHAJIMIFHP_o *)0x0) {
            DCHAJIMIFHP__MPFFOIIBAKO(pDVar9,StringLiteral_17052/*"clan_raid_update_event"*/,pSVar5,(MethodInfo *)0x0);
            pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
            if (pKVar4 != (KKLJIDJBFEI_o *)0x0) {
              pDVar9 = (pKVar4->fields).super.FNHOHLGNHGN;
              pSVar5 = (System_Action_KEFHDOHHHML__o *)
                       thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
              System_Action<object>___ctor();
              if (pDVar9 != (DCHAJIMIFHP_o *)0x0) {
                DCHAJIMIFHP__MPFFOIIBAKO(pDVar9,StringLiteral_17042/*"clan_raid_destroy_event"*/,pSVar5,(MethodInfo *)0x0);
                __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                              thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
                System_Action<Int32Enum>___ctor();
                if (__this_00 != (NDPMLPGANCI_o *)0x0) {
                  NDPMLPGANCI__EAPNEKLDLLM(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
                  __this_01 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
                  CJNHFNHJHPE_00 =
                       (System_Action_BaseDialog__o *)
                       thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
                  System_Action<object>___ctor();
                  if (__this_01 != (GCIFMNHADDF_o *)0x0) {
                    GCIFMNHADDF__DGKGLFOKOLG(__this_01,CJNHFNHJHPE_00,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ACEKGCJIMKP(Action<NLFLMJPNOLF> IELDNEAAPBE)  [RVA 0x3365710]
// CJFBGEEIPBA$$ACEKGCJIMKP @ RVA 0x3365710

void CJFBGEEIPBA__ACEKGCJIMKP
               (CJFBGEEIPBA_o *__this,System_Action_NLFLMJPNOLF__o *IELDNEAAPBE,MethodInfo *method)

{
  Google_Protobuf_WellKnownTypes_Empty_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
  if ((DAT_04567ab4 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_CJFBGEEIPBA_NEJIEANNFJA__);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
    FUN_01bab630(&StringLiteral_17048/*"clan_raid_leave"*/);
    DAT_04567ab4 = 1;
  }
  __this_00 = (Google_Protobuf_WellKnownTypes_Empty_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
  Google_Protobuf_WellKnownTypes_Empty___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
    KDPDBGNOFEN__KLNMLOOCAAO
              ((KDPDBGNOFEN_o *)__this_01,StringLiteral_17048/*"clan_raid_leave"*/,
               (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,0.0,(Il2CppObject *)IELDNEAAPBE,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FHIDNNFNFMP(Action<long> IELDNEAAPBE)  [RVA 0x3365804]
// CJFBGEEIPBA$$FHIDNNFNFMP @ RVA 0x3365804

void CJFBGEEIPBA__FHIDNNFNFMP
               (CJFBGEEIPBA_o *__this,System_Action_long__o *IELDNEAAPBE,MethodInfo *method)

{
  Google_Protobuf_WellKnownTypes_Empty_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
  if ((DAT_04567ab5 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_CJFBGEEIPBA_KCBCIBLCNKD__);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
    FUN_01bab630(&StringLiteral_17040/*"clan_raid_destroy"*/);
    DAT_04567ab5 = 1;
  }
  __this_00 = (Google_Protobuf_WellKnownTypes_Empty_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
  Google_Protobuf_WellKnownTypes_Empty___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
    KDPDBGNOFEN__KLNMLOOCAAO
              ((KDPDBGNOFEN_o *)__this_01,StringLiteral_17040/*"clan_raid_destroy"*/,
               (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,0.0,(Il2CppObject *)IELDNEAAPBE,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EHENAJFMBBA(OJEHKJHEBID PBNPKBJKFHE)  [RVA 0x33658F8]
// CJFBGEEIPBA$$EHENAJFMBBA @ RVA 0x33658F8

void CJFBGEEIPBA__EHENAJFMBBA(CJFBGEEIPBA_o *__this,OJEHKJHEBID_o *PBNPKBJKFHE,MethodInfo *method)

{
  System_Collections_Generic_List_NLFLMJPNOLF__o *pSVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_List_NLFLMJPNOLF___o *pSVar2;
  
  if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
    return;
  }
  (__this->fields).FBILHKCKHEJ = PBNPKBJKFHE;
  thunk_FUN_01c20e04();
  pSVar1 = CJFBGEEIPBA__EBILFKOCKJM(__this,method_00);
  pSVar2 = (__this->fields).DOKOLOEMNGB;
  if (pSVar2 != (System_Action_List_NLFLMJPNOLF___o *)0x0) {
    (*(code *)(pSVar2->fields).super.super.invoke_impl)
              ((pSVar2->fields).super.super.method_code,pSVar1,(pSVar2->fields).super.super.method);
    CJFBGEEIPBA__DMJNFPEFGNH(__this,method_01);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DBLCCGALPLM(object IMMNELPBGIF)  [RVA 0x33659F0]
// CJFBGEEIPBA$$DBLCCGALPLM @ RVA 0x33659F0

void CJFBGEEIPBA__DBLCCGALPLM(CJFBGEEIPBA_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  int *piVar2;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this_00;
  ulong uVar3;
  
  if ((DAT_04567ab6 & 1) == 0) {
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567ab6 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar2 = (int *)thunk_FUN_01bda96c();
    if (*piVar2 != 0) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__RequestToStayOpened
                    (__this_00,(MethodInfo *)0x0);
          uVar3 = (*(__this_00->klass->vtable)._15_IsOpened.methodPtr)
                            (__this_00,(__this_00->klass->vtable)._15_IsOpened.method);
          if (((uVar3 & 1) == 0) ||
             (bVar1 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__IsTweening
                                (__this_00,(MethodInfo *)0x0), bVar1)) {
            (*(__this_00->klass->vtable)._16_Open.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._16_Open.method);
          }
          Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__SelectTabWithChannel
                    (__this_00,3,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
  return;
}


// ===== public OHDDKGHEEPA NKGMFCALKAM(NLFLMJPNOLF AOMBONOOJFP)  [RVA 0x3365B34]
// CJFBGEEIPBA$$NKGMFCALKAM @ RVA 0x3365B34

/* WARNING: Removing unreachable block (ram,0x03465da8) */

OHDDKGHEEPA_o *
CJFBGEEIPBA__NKGMFCALKAM(CJFBGEEIPBA_o *__this,NLFLMJPNOLF_o *AOMBONOOJFP,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_MEJIKMPNBNL__o *__this_00;
  MEJIKMPNBNL_o *__this_01;
  OHDDKGHEEPA_o *pOVar5;
  int iVar6;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567ab7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    DAT_04567ab7 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  pOVar5 = (OHDDKGHEEPA_o *)0x0;
  if (AOMBONOOJFP != (NLFLMJPNOLF_o *)0x0) {
    iVar1 = (AOMBONOOJFP->fields).IILCHFKCEEH;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE__CJNJOLEKIIK((MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    local_70.fields._index = local_a8.fields._index;
    local_70.fields._version = local_a8.fields._version;
    local_70.fields._list = local_a8.fields._list;
    local_70.fields._current = local_a8.fields._current;
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
        return (OHDDKGHEEPA_o *)0x0;
      }
      if ((OHDDKGHEEPA_o *)local_70.fields._current == (OHDDKGHEEPA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_01 = (((OHDDKGHEEPA_Fields *)((long)local_70.fields._current + 0x10))->super).
                  IAJPHAAMKPC;
      if (__this_01 == (MEJIKMPNBNL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_a8,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
      local_90.fields._index = local_a8.fields._index;
      local_90.fields._version = local_a8.fields._version;
      local_90.fields._list = local_a8.fields._list;
      local_90.fields._current = local_a8.fields._current;
      do {
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_90,
                             Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__
                            );
          pOVar5 = (OHDDKGHEEPA_o *)local_90.fields._current;
          if (!bVar3) {
            pOVar5 = (OHDDKGHEEPA_o *)0x0;
            iVar6 = 3;
            goto LAB_03465d10;
          }
        } while ((OHDDKGHEEPA_o *)local_90.fields._current == (OHDDKGHEEPA_o *)0x0);
        bVar2 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
      } while ((((((OHDDKGHEEPA_c *)(local_90.fields._current)->klass)->_2).naturalAligment < bVar2)
               || ((((OHDDKGHEEPA_c *)(local_90.fields._current)->klass)->_2).typeHierarchy
                   [(ulong)bVar2 - 1] != (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) ||
              (iVar4 = OHDDKGHEEPA__DCAKAGILMOF
                                 ((OHDDKGHEEPA_o *)local_90.fields._current,(MethodInfo *)0x0),
              iVar4 != iVar1));
      iVar6 = 7;
LAB_03465d10:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_90,Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__)
      ;
    } while ((iVar6 == 3) || (iVar6 == 0));
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
  }
  return pOVar5;
}


// ===== public bool HOMIFFIACAC()  [RVA 0x3365E74]
// CJFBGEEIPBA$$HOMIFFIACAC @ RVA 0x3365E74

bool CJFBGEEIPBA__HOMIFFIACAC(CJFBGEEIPBA_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  EEGDOGKBLNG_o *pEVar3;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *__this_00;
  CJFBGEEIPBA_o *AOMBONOOJFP;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  int index;
  OJEHKJHEBID_o *pOVar4;
  
  if ((DAT_04567ab8 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__);
    DAT_04567ab8 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
    bVar2 = EEGDOGKBLNG__CLJIMCDAEKO(pEVar3,(MethodInfo *)0x0);
    if (!bVar2) {
      return false;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
      EEGDOGKBLNG__APCMGOCHMGC(pEVar3,(MethodInfo *)0x0);
      pOVar4 = (__this->fields).FBILHKCKHEJ;
      if (pOVar4 == (OJEHKJHEBID_o *)0x0) {
        return false;
      }
      __this_00 = (pOVar4->fields).MJIHCLLODMF;
      if (__this_00 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
        iVar1 = (__this_00->fields).count;
        if (iVar1 < 1) {
          return false;
        }
        index = 0;
        do {
          method_00 = Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__;
          AOMBONOOJFP = (CJFBGEEIPBA_o *)
                        Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index
                                   ,(MethodInfo_295F6AC *)
                                    Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__
                                  );
          bVar2 = CJFBGEEIPBA__JJCBOPEDCBA(AOMBONOOJFP,(NLFLMJPNOLF_o *)AOMBONOOJFP,method_00);
          if (bVar2) {
            return true;
          }
          if (iVar1 + -1 == index) {
            return false;
          }
          __this_00 = (pOVar4->fields).MJIHCLLODMF;
          index = index + 1;
        } while (__this_00 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void PMDADFKDAKJ(Action IELDNEAAPBE)  [RVA 0x3365F80]
// CJFBGEEIPBA$$PMDADFKDAKJ @ RVA 0x3365F80

void CJFBGEEIPBA__PMDADFKDAKJ(CJFBGEEIPBA_o *__this,System_Action_o *IELDNEAAPBE,MethodInfo *method)

{
  Google_Protobuf_WellKnownTypes_Empty_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
  if ((DAT_04567ab9 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_CJFBGEEIPBA_MOKCFKLNKAC__);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
    FUN_01bab630(&StringLiteral_17050/*"clan_raid_start"*/);
    DAT_04567ab9 = 1;
  }
  __this_00 = (Google_Protobuf_WellKnownTypes_Empty_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Empty_TypeInfo);
  Google_Protobuf_WellKnownTypes_Empty___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
  System_Action<object>___ctor();
  if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
    KDPDBGNOFEN__KLNMLOOCAAO
              ((KDPDBGNOFEN_o *)__this_01,StringLiteral_17050/*"clan_raid_start"*/,
               (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,0.0,(Il2CppObject *)IELDNEAAPBE,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void OONONOKDLGD(Action<long> CJNHFNHJHPE)  [RVA 0x3366074]
// CJFBGEEIPBA$$OONONOKDLGD @ RVA 0x3366074

void CJFBGEEIPBA__OONONOKDLGD
               (CJFBGEEIPBA_o *__this,System_Action_long__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_long__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_long__o *pSVar5;
  System_Action_long__o **ppSVar6;
  System_Action_long__o *source;
  
  if ((DAT_04567aba & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
    DAT_04567aba = 1;
  }
  ppSVar6 = &(__this->fields).MLBNBCLLKEL;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<long>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<long>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_long__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void NEJIEANNFJA(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3366124]
// CJFBGEEIPBA$$NEJIEANNFJA @ RVA 0x3366124

void CJFBGEEIPBA__NEJIEANNFJA(CJFBGEEIPBA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  if ((DAT_04567abb & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_17049/*"clan_raid_leave failed"*/);
    DAT_04567abb = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    CJFBGEEIPBA__CBJDFGLCFBN(__this,IDCGLBOIAFJ,method);
    return;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_17049/*"clan_raid_leave failed"*/,(MethodInfo *)0x0);
  return;
}


// ===== private void LOMFAPMIBFE(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x33661AC]
// CJFBGEEIPBA$$LOMFAPMIBFE @ RVA 0x33661AC

void CJFBGEEIPBA__LOMFAPMIBFE(CJFBGEEIPBA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t iVar4;
  NLFLMJPNOLF_o *AOMBONOOJFP;
  CHDGOFBHAFI_o *__this_00;
  long lVar5;
  CNLGMNIEGFG_o *pCVar6;
  EEGDOGKBLNG_o *__this_01;
  EEOMEMBBGNA_o *__this_02;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_03;
  int64_t PEJIFIIDFMM;
  MGDJPGGPDJI_o *pMVar7;
  NBLEEDEAPHB_o *__this_04;
  System_String_o *pSVar8;
  System_Collections_Generic_List_NBLEEDEAPHB__o *IJIPABLCAKE;
  Nekki_SF2_GUI_Dialogs_NotificationsGame_o *pNVar9;
  System_Action_object__o *BLMFLPJJMPF;
  NBLEEDEAPHB_array *pNVar10;
  UnityEngine_Object_o *x;
  OHDDKGHEEPA_o *__this_05;
  OJEHKJHEBID_o *PBNPKBJKFHE;
  System_String_o **ppSVar11;
  
  if ((DAT_04567abc & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_CJFBGEEIPBA_DBLCCGALPLM__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<NLFLMJPNOLF>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__);
    FUN_01bab630(&StringLiteral_17053/*"clan_raid_update_event failed"*/);
    FUN_01bab630(&StringLiteral_22501/*"} "*/);
    FUN_01bab630(&StringLiteral_10875/*"RaidInviteTextParams{"*/);
    FUN_01bab630(&StringLiteral_16735/*"bntShow"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567abc = 1;
  }
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_17053/*"clan_raid_update_event failed"*/,(MethodInfo *)0x0);
    return;
  }
  AOMBONOOJFP = (NLFLMJPNOLF_o *)
                KEFHDOHHHML__PFNEPJAFEDF<object>
                          (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<NLFLMJPNOLF>__);
  CJFBGEEIPBA__MHEDHEODOPJ(__this,AOMBONOOJFP,method);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this_00 == (CHDGOFBHAFI_o *)0x0) {
LAB_03466694:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar3 = CHDGOFBHAFI__BHHNJDDGDHF(__this_00,(MethodInfo *)0x0);
  if (!bVar3) {
    lVar5 = *(long *)(Method_Nekki_SF2_GUI_Scene<FightScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    x = (UnityEngine_Object_o *)**(undefined8 **)(lVar5 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (x == (UnityEngine_Object_o *)0x0) goto LAB_03466694;
      if (((FCJBEKHDLAF_o *)x[6].klass != (FCJBEKHDLAF_o *)0x0) &&
         (iVar4 = FCJBEKHDLAF__IHMLDBDLJON((FCJBEKHDLAF_o *)x[6].klass,(MethodInfo *)0x0),
         iVar4 != 0)) {
        return;
      }
    }
    pCVar6 = KFCFGKEHPNK__FHEIBJBHOKF(AOMBONOOJFP,(MethodInfo *)0x0);
    if ((pCVar6 != (CNLGMNIEGFG_o *)0x0) &&
       (__this_05 = (OHDDKGHEEPA_o *)(pCVar6->fields).super.IFJLLGPGMHM,
       __this_05 != (OHDDKGHEEPA_o *)0x0)) {
      bVar1 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
      if (((__this_05->klass->_2).naturalAligment < bVar1) ||
         ((__this_05->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(__this_05);
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
        iVar4 = EEGDOGKBLNG__IGIHHCEONEM(__this_01,(MethodInfo *)0x0);
        bVar3 = OHDDKGHEEPA__BIFOFLHLABM(__this_05,iVar4,(MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        PBNPKBJKFHE = (__this->fields).FBILHKCKHEJ;
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_02 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
        if (((AOMBONOOJFP != (NLFLMJPNOLF_o *)0x0) &&
            (__this_03 = (AOMBONOOJFP->fields).MABPCBMOECE,
            __this_03 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) &&
           (PEJIFIIDFMM = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                                    (__this_03,0,
                                     Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__
                                    ), __this_02 != (EEOMEMBBGNA_o *)0x0)) {
          pMVar7 = EEOMEMBBGNA__MPCGKMBAHHO(__this_02,PEJIFIIDFMM,(MethodInfo *)0x0);
          if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
            return;
          }
          if (pMVar7 == (MGDJPGGPDJI_o *)0x0) {
            return;
          }
          __this_04 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
          NBLEEDEAPHB___ctor(__this_04,StringLiteral_1/*""*/,StringLiteral_1/*""*/,StringLiteral_1/*""*/,
                             StringLiteral_1/*""*/,0,-1,(IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,
                             (AMJMGFCCAKN_o *)0x0,(MethodInfo *)0x0);
          pSVar8 = System_String__Concat
                             (StringLiteral_10875/*"RaidInviteTextParams{"*/,(pMVar7->fields).LLBEKLPKDHK,StringLiteral_22501/*"} "*/,
                              (MethodInfo *)0x0);
          if (__this_04 != (NBLEEDEAPHB_o *)0x0) {
            ppSVar11 = &(__this_04->fields).ABCHAOKFLGL;
            *ppSVar11 = pSVar8;
            thunk_FUN_01c20e04(ppSVar11,pSVar8);
            (__this_04->fields).ALFDOLMJLKI = 0x2d;
            IJIPABLCAKE = (System_Collections_Generic_List_NBLEEDEAPHB__o *)
                          thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
            System_Collections_Generic_List<object>___ctor
                      ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                       Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
            lVar5 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
            if (IJIPABLCAKE != (System_Collections_Generic_List_NBLEEDEAPHB__o *)0x0) {
              pNVar10 = (IJIPABLCAKE->fields)._items;
              (IJIPABLCAKE->fields)._version = (IJIPABLCAKE->fields)._version + 1;
              if (pNVar10 != (NBLEEDEAPHB_array *)0x0) {
                uVar2 = (IJIPABLCAKE->fields)._size;
                if (uVar2 < (uint)pNVar10->max_length) {
                  (IJIPABLCAKE->fields)._size = uVar2 + 1;
                  pNVar10->m_Items[(int)uVar2] = __this_04;
                  thunk_FUN_01c20e04(pNVar10->m_Items + (int)uVar2,__this_04);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)IJIPABLCAKE,
                             (Il2CppObject *)__this_04,
                             *(MethodInfo_26E4DAC **)
                              (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
                pNVar9 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
                BLMFLPJJMPF = (System_Action_object__o *)
                              thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                System_Action<object>___ctor();
                if (pNVar9 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
                  Nekki_SF2_GUI_Dialogs_NotificationsGame__OpenNotification
                            (pNVar9,StringLiteral_1/*""*/,IJIPABLCAKE,BLMFLPJJMPF,StringLiteral_16735/*"bntShow"*/,1,
                             0.0,1,false,true,1.0,(System_String_o *)0x0,(MethodInfo *)0x0);
                  pNVar9 = Nekki_SF2_GUI_Dialogs_NotificationsGame__get_Instance((MethodInfo *)0x0);
                  if (pNVar9 != (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *)0x0) {
                    Nekki_SF2_GUI_Dialogs_NotificationsGame__CreateClanLogoImage
                              (pNVar9,PBNPKBJKFHE,false,3.0,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_03466694;
    }
  }
  return;
}


// ===== private void INMBMELGIBH(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x33666A0]
// CJFBGEEIPBA$$INMBMELGIBH @ RVA 0x33666A0

void CJFBGEEIPBA__INMBMELGIBH(CJFBGEEIPBA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  if ((DAT_04567abd & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_17047/*"clan_raid_kick failed"*/);
    DAT_04567abd = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    CJFBGEEIPBA__CBJDFGLCFBN(__this,IDCGLBOIAFJ,method);
    return;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_17047/*"clan_raid_kick failed"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void APAKFIKINCF(Action<NLFLMJPNOLF> CJNHFNHJHPE)  [RVA 0x3366728]
// CJFBGEEIPBA$$APAKFIKINCF @ RVA 0x3366728

void CJFBGEEIPBA__APAKFIKINCF
               (CJFBGEEIPBA_o *__this,System_Action_NLFLMJPNOLF__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_NLFLMJPNOLF__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_NLFLMJPNOLF__o *pSVar5;
  System_Action_NLFLMJPNOLF__o **ppSVar6;
  System_Action_NLFLMJPNOLF__o *a;
  
  if ((DAT_04567abe & 1) == 0) {
    FUN_01bab630(&System_Action<NLFLMJPNOLF>_TypeInfo);
    DAT_04567abe = 1;
  }
  ppSVar6 = &(__this->fields).FJIFDGEPKBH;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<NLFLMJPNOLF>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<NLFLMJPNOLF>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_NLFLMJPNOLF__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void JHMPJEBHKMP(int MOLGLNLBAIB, Action<NLFLMJPNOLF> IELDNEAAPBE)  [RVA 0x33667D8]
// CJFBGEEIPBA$$JHMPJEBHKMP @ RVA 0x33667D8

void CJFBGEEIPBA__JHMPJEBHKMP
               (CJFBGEEIPBA_o *__this,int32_t MOLGLNLBAIB,System_Action_NLFLMJPNOLF__o *IELDNEAAPBE,
               MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  NLFLMJPNOLF_o *pNVar3;
  EEOMEMBBGNA_o *__this_00;
  int64_t PEJIFIIDFMM;
  MGDJPGGPDJI_o *pMVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  VirtualInvokeData *pVVar7;
  Google_Protobuf_WellKnownTypes_Int32Value_o *__this_01;
  KKLJIDJBFEI_o *__this_02;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  System_Action_object__o *IELDNEAAPBE_00;
  System_Action_NLFLMJPNOLF__o *method_00;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_03;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  System_String_o *pSVar11;
  
  method_00 = IELDNEAAPBE;
  if ((DAT_04567abf & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_CJFBGEEIPBA_ABOIIKKDKCC__);
    FUN_01bab630(&Method_CJFBGEEIPBA_DBLCCGALPLM__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int32Value_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_17850/*"dlgWarning"*/);
    FUN_01bab630(&StringLiteral_16735/*"bntShow"*/);
    FUN_01bab630(&StringLiteral_17820/*"dlgRaidExist"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_17037/*"clan_raid_create"*/);
    DAT_04567abf = 1;
  }
  pNVar3 = CJFBGEEIPBA__OOPDPBAIFCJ(__this,MOLGLNLBAIB,(MethodInfo *)method_00);
  if (pNVar3 == (NLFLMJPNOLF_o *)0x0) {
    __this_01 = (Google_Protobuf_WellKnownTypes_Int32Value_o *)
                thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Int32Value_TypeInfo);
    Google_Protobuf_WellKnownTypes_Int32Value___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Google_Protobuf_WellKnownTypes_Int32Value_o *)0x0) {
      (__this_01->fields).value_ = MOLGLNLBAIB;
      __this_02 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_02 != (KKLJIDJBFEI_o *)0x0) {
        KDPDBGNOFEN__KLNMLOOCAAO
                  ((KDPDBGNOFEN_o *)__this_02,StringLiteral_17037/*"clan_raid_create"*/,
                   (Google_Protobuf_IMessage_o *)__this_01,BLMFLPJJMPF,0.0,
                   (Il2CppObject *)IELDNEAAPBE,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
    __this_03 = (pNVar3->fields).MABPCBMOECE;
    if (((__this_03 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) &&
        (PEJIFIIDFMM = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                                 (__this_03,0,
                                  Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__)
        , __this_00 != (EEOMEMBBGNA_o *)0x0)) &&
       (pMVar4 = EEOMEMBBGNA__MPCGKMBAHHO(__this_00,PEJIFIIDFMM,(MethodInfo *)0x0),
       pMVar4 != (MGDJPGGPDJI_o *)0x0)) {
      pSVar11 = (pMVar4->fields).LLBEKLPKDHK;
      pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar6 = FUN_01bab718(string___TypeInfo,1);
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        *(undefined8 *)(lVar6 + 0x20) = pSVar11;
        thunk_FUN_01c20e04((undefined8 *)(lVar6 + 0x20),pSVar11);
        uVar2 = StringLiteral_17820/*"dlgRaidExist"*/;
        if (pIVar5 != (Il2CppObject *)0x0) {
          pIVar8 = pIVar5->klass;
          uVar1._0_1_ = (pIVar8->_2).rank;
          uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
          uVar9 = (ulong)uVar1;
          if (uVar9 != 0) {
            piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar7 = pIVar8->vtable + (*piVar10 + 0xc);
                goto LAB_03466ad4;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03466ad4:
          pSVar11 = (System_String_o *)(*pVVar7->methodPtr)(pIVar5,uVar2,lVar6,pVVar7->method);
          IELDNEAAPBE_00 =
               (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
          System_Action<object>___ctor();
          JJPNLEPEAFM__JNDPLPKDPCP
                    (StringLiteral_17850/*"dlgWarning"*/,pSVar11,StringLiteral_16735/*"bntShow"*/,StringLiteral_3640/*"CANCEL"*/,
                     IELDNEAAPBE_00,1,0,false,false,StringLiteral_1/*""*/,false,true,true,true,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void DCBIBAGFAIG(long OILECKFDMDB, Action<NLFLMJPNOLF> IELDNEAAPBE)  [RVA 0x3366C24]
// CJFBGEEIPBA$$DCBIBAGFAIG @ RVA 0x3366C24

void CJFBGEEIPBA__DCBIBAGFAIG
               (CJFBGEEIPBA_o *__this,int64_t OILECKFDMDB,System_Action_NLFLMJPNOLF__o *IELDNEAAPBE,
               MethodInfo *method)

{
  Google_Protobuf_WellKnownTypes_Int64Value_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  
  if ((DAT_04567ac0 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_CJFBGEEIPBA_BCKODMFDKHA__);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
    FUN_01bab630(&StringLiteral_17044/*"clan_raid_join"*/);
    DAT_04567ac0 = 1;
  }
  __this_00 = (Google_Protobuf_WellKnownTypes_Int64Value_o *)
              thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
  Google_Protobuf_WellKnownTypes_Int64Value___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Google_Protobuf_WellKnownTypes_Int64Value_o *)0x0) {
    (__this_00->fields).value_ = OILECKFDMDB;
    __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
      KDPDBGNOFEN__KLNMLOOCAAO
                ((KDPDBGNOFEN_o *)__this_01,StringLiteral_17044/*"clan_raid_join"*/,
                 (Google_Protobuf_IMessage_o *)__this_00,BLMFLPJJMPF,0.0,(Il2CppObject *)IELDNEAAPBE
                 ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<NLFLMJPNOLF> EBILFKOCKJM()  [RVA 0x3365948]
// CJFBGEEIPBA$$EBILFKOCKJM @ RVA 0x3365948

System_Collections_Generic_List_NLFLMJPNOLF__o *
CJFBGEEIPBA__EBILFKOCKJM(CJFBGEEIPBA_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_NLFLMJPNOLF__o *__this_00;
  MethodInfo *extraout_x1;
  OJEHKJHEBID_o *pOVar1;
  
  if ((DAT_04567ac1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NLFLMJPNOLF>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NLFLMJPNOLF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NLFLMJPNOLF>_TypeInfo);
    DAT_04567ac1 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_NLFLMJPNOLF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<NLFLMJPNOLF>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<NLFLMJPNOLF>__ctor__);
  pOVar1 = (__this->fields).FBILHKCKHEJ;
  if (pOVar1 != (OJEHKJHEBID_o *)0x0) {
    if (__this_00 == (System_Collections_Generic_List_NLFLMJPNOLF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(pOVar1->fields).MJIHCLLODMF,
               Method_System_Collections_Generic_List<NLFLMJPNOLF>_AddRange__);
  }
  return __this_00;
}


// ===== public NLFLMJPNOLF OOPDPBAIFCJ(int MOLGLNLBAIB)  [RVA 0x3366B7C]
// CJFBGEEIPBA$$OOPDPBAIFCJ @ RVA 0x3366B7C

NLFLMJPNOLF_o *
CJFBGEEIPBA__OOPDPBAIFCJ(CJFBGEEIPBA_o *__this,int32_t MOLGLNLBAIB,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *__this_00;
  NLFLMJPNOLF_o *pNVar1;
  int index;
  OJEHKJHEBID_o *pOVar2;
  
  if ((DAT_04567ac2 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__);
    DAT_04567ac2 = 1;
  }
  pOVar2 = (__this->fields).FBILHKCKHEJ;
  if (pOVar2 == (OJEHKJHEBID_o *)0x0) {
    return (NLFLMJPNOLF_o *)0x0;
  }
  __this_00 = (pOVar2->fields).MJIHCLLODMF;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields).count <= index) {
        return (NLFLMJPNOLF_o *)0x0;
      }
      pNVar1 = (NLFLMJPNOLF_o *)
               Google_Protobuf_Collections_RepeatedField<object>__get_Item
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index,
                          Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__);
      if (pNVar1 == (NLFLMJPNOLF_o *)0x0) break;
      if ((pNVar1->fields).IILCHFKCEEH == MOLGLNLBAIB) {
        return pNVar1;
      }
      __this_00 = (pOVar2->fields).MJIHCLLODMF;
      index = index + 1;
    } while (__this_00 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KCBCIBLCNKD(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x3366D24]
// CJFBGEEIPBA$$KCBCIBLCNKD @ RVA 0x3366D24

void CJFBGEEIPBA__KCBCIBLCNKD(CJFBGEEIPBA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  CPNHNIKFGFB_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  void *OILECKFDMDB;
  Il2CppObject *pIVar4;
  
  method_00 = (MethodInfo *)IDCGLBOIAFJ;
  if ((DAT_04567ac3 & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<Int64Value>__);
    FUN_01bab630(&StringLiteral_17041/*"clan_raid_destroy failed"*/);
    DAT_04567ac3 = 1;
    method_00 = extraout_x1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,method_00);
    if (bVar1) {
      pIVar4 = (IDCGLBOIAFJ->fields)._GOFDPKCMIJO_k__BackingField;
      pIVar2 = KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<Int64Value>__);
      if (pIVar2 != (Il2CppObject *)0x0) {
        OILECKFDMDB = pIVar2[1].monitor;
        lVar3 = thunk_FUN_01bda71c(pIVar4,System_Action<long>_TypeInfo);
        if (lVar3 != 0) {
          method = *(MethodInfo **)(lVar3 + 0x28);
          (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),OILECKFDMDB);
        }
        CJFBGEEIPBA__MDGNOGCEMDN(__this,(int64_t)OILECKFDMDB,method);
        return;
      }
    }
    else {
      __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (CPNHNIKFGFB_o *)0x0) {
        CPNHNIKFGFB__DIGPCFKCCBK
                  (__this_00,(IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_17041/*"clan_raid_destroy failed"*/,(MethodInfo *)0x0);
  return;
}


// ===== private void KMEMLHDKKFN(NLFLMJPNOLF AOMBONOOJFP)  [RVA 0x33643F4]
// CJFBGEEIPBA$$KMEMLHDKKFN @ RVA 0x33643F4

void CJFBGEEIPBA__KMEMLHDKKFN(CJFBGEEIPBA_o *__this,NLFLMJPNOLF_o *AOMBONOOJFP,MethodInfo *method)

{
  bool bVar1;
  NLFLMJPNOLF_o *AOMBONOOJFP_00;
  CJFBGEEIPBA_o *__this_00;
  EEGDOGKBLNG_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Action_NLFLMJPNOLF__o *pSVar2;
  
  if ((DAT_04567ac4 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567ac4 = 1;
  }
  if (AOMBONOOJFP != (NLFLMJPNOLF_o *)0x0) {
    AOMBONOOJFP_00 = CJFBGEEIPBA__IPLHNJCJEIK(__this,(AOMBONOOJFP->fields).OHMDCKEDOGH,method);
    if (AOMBONOOJFP_00 == (NLFLMJPNOLF_o *)0x0) {
      CJFBGEEIPBA__MHEDHEODOPJ(__this,AOMBONOOJFP,method);
      return;
    }
    CJFBGEEIPBA__IGGCPEFPJPD(__this,AOMBONOOJFP,method);
    pSVar2 = (__this->fields).FJIFDGEPKBH;
    if (pSVar2 != (System_Action_NLFLMJPNOLF__o *)0x0) {
      method_01 = (MethodInfo *)(pSVar2->fields).super.super.method;
      __this_00 = (CJFBGEEIPBA_o *)
                  (*(code *)(pSVar2->fields).super.super.invoke_impl)
                            ((pSVar2->fields).super.super.method_code,AOMBONOOJFP);
      bVar1 = CJFBGEEIPBA__GPIFDPAIBNH(__this_00,AOMBONOOJFP_00,method_01);
      if (bVar1) {
        return;
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      bVar1 = CJFBGEEIPBA__EDBDHGCEMEA(__this,method_00);
      if (__this_01 != (EEGDOGKBLNG_o *)0x0) {
        EEGDOGKBLNG__LIAFPDDOGIH(__this_01,bVar1,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JPDOMKKNEJB(Action<List<NLFLMJPNOLF>> CJNHFNHJHPE)  [RVA 0x3366F40]
// CJFBGEEIPBA$$JPDOMKKNEJB @ RVA 0x3366F40

void CJFBGEEIPBA__JPDOMKKNEJB
               (CJFBGEEIPBA_o *__this,System_Action_List_NLFLMJPNOLF___o *CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Action_List_NLFLMJPNOLF___c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_List_NLFLMJPNOLF___o *pSVar5;
  System_Action_List_NLFLMJPNOLF___o *source;
  
  if ((DAT_04567ac5 & 1) == 0) {
    FUN_01bab630(&System_Action<List<NLFLMJPNOLF>>_TypeInfo);
    DAT_04567ac5 = 1;
  }
  source = (__this->fields).DOKOLOEMNGB;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<List<NLFLMJPNOLF>>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<List<NLFLMJPNOLF>>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_List_NLFLMJPNOLF___o *)FUN_01c07368(&__this->fields,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== private void DMJNFPEFGNH()  [RVA 0x3364C2C]
// CJFBGEEIPBA$$DMJNFPEFGNH @ RVA 0x3364C2C

void CJFBGEEIPBA__DMJNFPEFGNH(CJFBGEEIPBA_o *__this,MethodInfo *method)

{
  bool bVar1;
  CFMDGLMCNIL_o *pCVar2;
  OHPOFOPJIMB_o *KCPFFLHCCIN;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567ac6 & 1) == 0) {
    FUN_01bab630(&BNFLOPOMMFN_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567ac6 = 1;
    method = extraout_x1;
  }
  bVar1 = CJFBGEEIPBA__EDBDHGCEMEA(__this,method);
  if (!bVar1) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pCVar2 = HJPEKDOPBHN__POHONLHCOJN((MethodInfo *)0x0);
  if (pCVar2 != (CFMDGLMCNIL_o *)0x0) {
    bVar1 = CFMDGLMCNIL__JGKFPAAOBOO(pCVar2,2,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    KCPFFLHCCIN = (OHPOFOPJIMB_o *)thunk_FUN_01bda818(BNFLOPOMMFN_TypeInfo);
    BNFLOPOMMFN___ctor((BNFLOPOMMFN_o *)KCPFFLHCCIN,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar2 = HJPEKDOPBHN__POHONLHCOJN((MethodInfo *)0x0);
    if (pCVar2 != (CFMDGLMCNIL_o *)0x0) {
      CFMDGLMCNIL__MPFFOIIBAKO(pCVar2,KCPFFLHCCIN,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MDGNOGCEMDN(long OILECKFDMDB)  [RVA 0x336404C]
// CJFBGEEIPBA$$MDGNOGCEMDN @ RVA 0x336404C

void CJFBGEEIPBA__MDGNOGCEMDN(CJFBGEEIPBA_o *__this,int64_t OILECKFDMDB,MethodInfo *method)

{
  int iVar1;
  bool IOLOMIIIOPM;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *pGVar2;
  Il2CppObject *pIVar3;
  EEGDOGKBLNG_o *__this_00;
  MethodInfo *method_00;
  System_Action_long__o *pSVar4;
  int index;
  OJEHKJHEBID_o *pOVar5;
  
  if ((DAT_04567ac7 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_RemoveAt__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__);
    DAT_04567ac7 = 1;
  }
  pOVar5 = (__this->fields).FBILHKCKHEJ;
  if (pOVar5 != (OJEHKJHEBID_o *)0x0) {
    pGVar2 = (pOVar5->fields).MJIHCLLODMF;
    if (pGVar2 == (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0)
    goto LAB_03464190;
    iVar1 = (pGVar2->fields).count;
    if (0 < iVar1) {
      index = 0;
      do {
        pIVar3 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                           ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,index,
                            Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__
                           );
        if (pIVar3 == (Il2CppObject *)0x0) break;
        if (pIVar3[1].monitor == (void *)OILECKFDMDB) {
          pGVar2 = (pOVar5->fields).MJIHCLLODMF;
          if (pGVar2 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
            Google_Protobuf_Collections_RepeatedField<object>__RemoveAt
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar2,index,
                       Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_RemoveAt__);
            goto LAB_03464120;
          }
          break;
        }
        if (iVar1 + -1 == index) goto LAB_03464120;
        pGVar2 = (pOVar5->fields).MJIHCLLODMF;
        index = index + 1;
      } while (pGVar2 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0);
      goto LAB_03464190;
    }
LAB_03464120:
    pSVar4 = (__this->fields).MLBNBCLLKEL;
    if (pSVar4 == (System_Action_long__o *)0x0) goto LAB_03464190;
    (*(code *)(pSVar4->fields).super.super.invoke_impl)
              ((pSVar4->fields).super.super.method_code,OILECKFDMDB,
               (pSVar4->fields).super.super.method);
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  IOLOMIIIOPM = CJFBGEEIPBA__EDBDHGCEMEA(__this,method_00);
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    EEGDOGKBLNG__LIAFPDDOGIH(__this_00,IOLOMIIIOPM,true,(MethodInfo *)0x0);
    return;
  }
LAB_03464190:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool EDBDHGCEMEA()  [RVA 0x3366F08]
// CJFBGEEIPBA$$EDBDHGCEMEA @ RVA 0x3366F08

bool CJFBGEEIPBA__EDBDHGCEMEA(CJFBGEEIPBA_o *__this,MethodInfo *method)

{
  bool bVar1;
  NLFLMJPNOLF_o *pNVar2;
  MethodInfo *method_00;
  
  bVar1 = CJFBGEEIPBA__HOMIFFIACAC(__this,method);
  if (((bVar1) &&
      (pNVar2 = CJFBGEEIPBA__PCKHIBMJKJG(__this,method_00), pNVar2 != (NLFLMJPNOLF_o *)0x0)) &&
     ((pNVar2->fields).BHAOPCFDKCG == false)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== public void EHJDAGPJFAB(Action<long> CJNHFNHJHPE)  [RVA 0x3366FF0]
// CJFBGEEIPBA$$EHJDAGPJFAB @ RVA 0x3366FF0

void CJFBGEEIPBA__EHJDAGPJFAB
               (CJFBGEEIPBA_o *__this,System_Action_long__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_long__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_long__o *pSVar5;
  System_Action_long__o **ppSVar6;
  System_Action_long__o *a;
  
  if ((DAT_04567ac8 & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
    DAT_04567ac8 = 1;
  }
  ppSVar6 = &(__this->fields).MLBNBCLLKEL;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<long>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<long>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_long__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void LLBGOEFBOAP(Action<NLFLMJPNOLF> CJNHFNHJHPE)  [RVA 0x33670A0]
// CJFBGEEIPBA$$LLBGOEFBOAP @ RVA 0x33670A0

void CJFBGEEIPBA__LLBGOEFBOAP
               (CJFBGEEIPBA_o *__this,System_Action_NLFLMJPNOLF__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_NLFLMJPNOLF__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_NLFLMJPNOLF__o *pSVar5;
  System_Action_NLFLMJPNOLF__o **ppSVar6;
  System_Action_NLFLMJPNOLF__o *source;
  
  if ((DAT_04567ac9 & 1) == 0) {
    FUN_01bab630(&System_Action<NLFLMJPNOLF>_TypeInfo);
    DAT_04567ac9 = 1;
  }
  ppSVar6 = &(__this->fields).HEJHGFDOMMG;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<NLFLMJPNOLF>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<NLFLMJPNOLF>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_NLFLMJPNOLF__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public bool GPIFDPAIBNH(NLFLMJPNOLF AOMBONOOJFP)  [RVA 0x3366E44]
// CJFBGEEIPBA$$GPIFDPAIBNH @ RVA 0x3366E44

bool CJFBGEEIPBA__GPIFDPAIBNH(CJFBGEEIPBA_o *__this,NLFLMJPNOLF_o *AOMBONOOJFP,MethodInfo *method)

{
  EEGDOGKBLNG_o *__this_00;
  int64_t iVar1;
  int64_t iVar2;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  
  if ((DAT_04567aca & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    DAT_04567aca = 1;
  }
  if (AOMBONOOJFP != (NLFLMJPNOLF_o *)0x0) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      iVar1 = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
      __this_01 = (AOMBONOOJFP->fields).MABPCBMOECE;
      if (__this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
        if ((__this_01->fields).count < 1) {
          return false;
        }
        iVar2 = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                          (__this_01,0,
                           Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
        return iVar2 == iVar1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return false;
}


// ===== public void HOGKHGFAJIM(Action<NLFLMJPNOLF> CJNHFNHJHPE)  [RVA 0x3367150]
// CJFBGEEIPBA$$HOGKHGFAJIM @ RVA 0x3367150

void CJFBGEEIPBA__HOGKHGFAJIM
               (CJFBGEEIPBA_o *__this,System_Action_NLFLMJPNOLF__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_NLFLMJPNOLF__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_NLFLMJPNOLF__o *pSVar5;
  System_Action_NLFLMJPNOLF__o **ppSVar6;
  System_Action_NLFLMJPNOLF__o *source;
  
  if ((DAT_04567acb & 1) == 0) {
    FUN_01bab630(&System_Action<NLFLMJPNOLF>_TypeInfo);
    DAT_04567acb = 1;
  }
  ppSVar6 = &(__this->fields).FJIFDGEPKBH;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<NLFLMJPNOLF>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<NLFLMJPNOLF>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_NLFLMJPNOLF__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void LIKOAKDJPJI(Action<NLFLMJPNOLF> CJNHFNHJHPE)  [RVA 0x3367200]
// CJFBGEEIPBA$$LIKOAKDJPJI @ RVA 0x3367200

void CJFBGEEIPBA__LIKOAKDJPJI
               (CJFBGEEIPBA_o *__this,System_Action_NLFLMJPNOLF__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_NLFLMJPNOLF__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_NLFLMJPNOLF__o *pSVar5;
  System_Action_NLFLMJPNOLF__o **ppSVar6;
  System_Action_NLFLMJPNOLF__o *a;
  
  if ((DAT_04567acc & 1) == 0) {
    FUN_01bab630(&System_Action<NLFLMJPNOLF>_TypeInfo);
    DAT_04567acc = 1;
  }
  ppSVar6 = &(__this->fields).HEJHGFDOMMG;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<NLFLMJPNOLF>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<NLFLMJPNOLF>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_NLFLMJPNOLF__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

