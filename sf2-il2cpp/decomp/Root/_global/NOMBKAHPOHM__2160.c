// TypeDefIndex 2160
// Namespace: 
// public class NOMBKAHPOHM : BOFEMGGNODC
// Fields:
//   private bool HAKHAEOBHBI; // 0x61
//   private bool ABOKKALGCNG; // 0x62
//   private FPPKHNNABAD NDBPOFMECGL; // 0x68
//   private List<string> OBDMHHJBLKL; // 0x70
//   private int DPJIDNBJIBG; // 0x78
//   private int PGFAIJMMOHJ; // 0x7C
//   private PKHMIGFEJCL BFNEODDCGLC; // 0x80
//   private string KGLJICLJHEL; // 0x88
//   private NOMBKAHPOHM.GOODCKLHCDD ACCIHBHMFPN; // 0x90
//   private bool JDONLBBHBOC; // 0x94
//   private bool DJCEHFAKBCH; // 0x95

// ===== private static NOMBKAHPOHM.GOODCKLHCDD CNOMHMIIEAB(string ACCIHBHMFPN)  [RVA 0x32D863C]
// NOMBKAHPOHM$$CNOMHMIIEAB @ RVA 0x32D863C

int32_t NOMBKAHPOHM__CNOMHMIIEAB(System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  
  if ((DAT_045675a2 & 1) == 0) {
    FUN_01bab630(&StringLiteral_8116/*"Items"*/);
    FUN_01bab630(&StringLiteral_10590/*"PurchasedOffers"*/);
    FUN_01bab630(&StringLiteral_5290/*"DeliveryEnchantments"*/);
    FUN_01bab630(&StringLiteral_5291/*"DeliveryItems"*/);
    FUN_01bab630(&StringLiteral_10089/*"PaidItems"*/);
    FUN_01bab630(&StringLiteral_3445/*"Battles"*/);
    FUN_01bab630(&StringLiteral_2742/*"ActiveOffers"*/);
    FUN_01bab630(&StringLiteral_10081/*"Packs"*/);
    FUN_01bab630(&StringLiteral_5295/*"DeliveryUpgrades"*/);
    FUN_01bab630(&StringLiteral_8330/*"LastChanceOffers"*/);
    FUN_01bab630(&StringLiteral_9627/*"NotStartedOffers"*/);
    FUN_01bab630(&StringLiteral_5753/*"EndedOffers"*/);
    FUN_01bab630(&StringLiteral_8187/*"JustStartedOffers"*/);
    FUN_01bab630(&StringLiteral_9805/*"Offers"*/);
    DAT_045675a2 = 1;
  }
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(ACCIHBHMFPN,(MethodInfo *)0x0);
  if (uVar2 < 0xb6b67f5d) {
    if (uVar2 < 0x4265408d) {
      if (uVar2 == 0x29c495e9) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_10089/*"PaidItems"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 4;
        }
      }
      else if (uVar2 == 0x2df41d88) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_2742/*"ActiveOffers"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 10;
        }
      }
      else if ((uVar2 == 0x4265408c) &&
              (bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_9627/*"NotStartedOffers"*/,(MethodInfo *)0x0),
              bVar1)) {
        return 8;
      }
    }
    else if (uVar2 < 0x4d26aa8c) {
      if (uVar2 == 0x4a2b080a) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_9805/*"Offers"*/,(MethodInfo *)0x0);
        if (bVar1) {
          return 7;
        }
      }
      else if ((uVar2 == 0x4d26aa8b) &&
              (bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_8187/*"JustStartedOffers"*/,(MethodInfo *)0x0),
              bVar1)) {
        return 9;
      }
    }
    else if (uVar2 == 0xb6b67f5c) {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_5295/*"DeliveryUpgrades"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return 3;
      }
    }
    else if ((uVar2 == 0x7c42d3ac) &&
            (bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_3445/*"Battles"*/,(MethodInfo *)0x0),
            bVar1)) {
      return 5;
    }
  }
  else if (uVar2 < 0xc4bdf5c0) {
    if (uVar2 == 0xbca99a14) {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_5753/*"EndedOffers"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return 0xd;
      }
    }
    else if (uVar2 == 0xc1060409) {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_10081/*"Packs"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return 0xe;
      }
    }
    else if ((uVar2 == 0xc4bdf5bf) &&
            (bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_5291/*"DeliveryItems"*/,(MethodInfo *)0x0),
            bVar1)) {
      return 2;
    }
  }
  else if (uVar2 < 0xe0363830) {
    if (uVar2 == 0xde7590f3) {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_5290/*"DeliveryEnchantments"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return 6;
      }
    }
    else if ((uVar2 == 0xe036382f) &&
            (bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_8116/*"Items"*/,(MethodInfo *)0x0),
            bVar1)) {
      return 1;
    }
  }
  else if (uVar2 == 0xe37e23ba) {
    bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_8330/*"LastChanceOffers"*/,(MethodInfo *)0x0);
    if (bVar1) {
      return 0xc;
    }
  }
  else if ((uVar2 == 0xf3086235) &&
          (bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_10590/*"PurchasedOffers"*/,(MethodInfo *)0x0),
          bVar1)) {
    return 0xb;
  }
  return 0;
}


// ===== private void OAMGHCLCHPA(Predicate<NCCFNKMICGK> PFDEAPMMFAP)  [RVA 0x32D8A48]
// NOMBKAHPOHM$$OAMGHCLCHPA @ RVA 0x32D8A48

void NOMBKAHPOHM__OAMGHCLCHPA
               (NOMBKAHPOHM_o *__this,System_Predicate_NCCFNKMICGK__o *PFDEAPMMFAP,
               MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *__this_00;
  VirtualInvokeData *pVVar2;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar3;
  System_Func_TSource__bool__o *predicate;
  System_Action_T__o *CPECAEHDDDB;
  KCJCIJHMEJF_c *pKVar4;
  ulong uVar5;
  int32_t *piVar6;
  KCJCIJHMEJF_o *pKVar7;
  
  if ((DAT_045675a3 & 1) == 0) {
    FUN_01bab630(&System_Action<NCCFNKMICGK>_TypeInfo);
    FUN_01bab630(&Method_DFPABHGJPJJ_NHDPECDJBGO<NCCFNKMICGK>__);
    FUN_01bab630(&Method_NOMBKAHPOHM_ELLEJAKENLH_BJHKAJOAIAC__);
    FUN_01bab630(&Method_NOMBKAHPOHM_ELLEJAKENLH_PAFEJOBBDOK__);
    FUN_01bab630(&NOMBKAHPOHM_ELLEJAKENLH_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<NCCFNKMICGK>__);
    FUN_01bab630(&System_Func<NCCFNKMICGK,_bool>_TypeInfo);
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045675a3 = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(NOMBKAHPOHM_ELLEJAKENLH_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)PFDEAPMMFAP;
    thunk_FUN_01c20e04(__this_00 + 1,PFDEAPMMFAP);
    __this_00[1].monitor = __this;
    thunk_FUN_01c20e04(&__this_00[1].monitor,__this);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045662dd == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_045662dd = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pKVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
    if (pKVar7 != (KCJCIJHMEJF_o *)0x0) {
      pKVar4 = pKVar7->klass;
      uVar1._0_1_ = (pKVar4->_2).rank;
      uVar1._1_1_ = (pKVar4->_2).minimumAlignment;
      uVar5 = (ulong)uVar1;
      if (uVar5 != 0) {
        piVar6 = &((pKVar4->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
              (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
            pVVar2 = pKVar4->vtable + (*piVar6 + 9);
            goto LAB_033d8c04;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      pVVar2 = (VirtualInvokeData *)FUN_01b81914(pKVar7,KCJCIJHMEJF_TypeInfo,9);
LAB_033d8c04:
      pSVar3 = (System_Collections_Generic_IEnumerable_TSource__o *)
               (*pVVar2->methodPtr)(pKVar7,pVVar2->method);
      predicate = (System_Func_TSource__bool__o *)
                  thunk_FUN_01bda818(System_Func<NCCFNKMICGK,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      pSVar3 = System_Linq_Enumerable__Where<object>
                         (pSVar3,predicate,Method_System_Linq_Enumerable_Where<NCCFNKMICGK>__);
      CPECAEHDDDB = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<NCCFNKMICGK>_TypeInfo);
      System_Action<object>___ctor();
      DFPABHGJPJJ__NHDPECDJBGO<object>
                ((System_Collections_Generic_IEnumerable_T__o *)pSVar3,CPECAEHDDDB,
                 Method_DFPABHGJPJJ_NHDPECDJBGO<NCCFNKMICGK>__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CONOMLLANKE(bool LAHOGJFGKBL)  [RVA 0x32D8C98]
// NOMBKAHPOHM$$CONOMLLANKE @ RVA 0x32D8C98

void NOMBKAHPOHM__CONOMLLANKE(NOMBKAHPOHM_o *__this,bool LAHOGJFGKBL,MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  FPPKHNNABAD_o *__this_01;
  UnityEngine_Events_UnityAction_T0__o *call;
  Il2CppClass *item;
  ACHLOMELAJE_o *pAVar4;
  GGHCLMEFIGO_o *pGVar5;
  System_String_o *pSVar6;
  GGHCLMEFIGO_OLAINNIFOGG_o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045675a4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_NOMBKAHPOHM_JCCJCOCADKI__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<IGFGDDANEPE>_AddListener__);
    DAT_045675a4 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
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
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
     (pGVar5 = (pAVar4->fields).OIDPLCLELEN, pGVar5 != (GGHCLMEFIGO_o *)0x0)) {
    lVar1 = 0x40;
    if (!LAHOGJFGKBL) {
      lVar1 = 0x38;
    }
    __this_00 = *(System_Collections_Generic_List_object__o **)((long)&pGVar5->klass + lVar1);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,__this_00,
                 Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__
                          );
        lVar1 = Method_System_Collections_Generic_List<string>_Add__;
        if (!bVar3) break;
        if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_01 = (__this->fields).NDBPOFMECGL;
        if (__this_01 == (FPPKHNNABAD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        item = local_70.fields._current[1].klass;
        pSVar6 = (__this_01->fields)._COIPKAKHDFP_k__BackingField;
        *(int *)((long)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField + 4) =
             *(int *)((long)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField + 4) + 1;
        if (pSVar6 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = *(uint *)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField;
        if (uVar2 < *(uint *)&pSVar6[1].klass) {
          *(uint *)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField = uVar2 + 1;
          (&pSVar6[1].monitor)[(int)uVar2] = item;
          thunk_FUN_01c20e04(&pSVar6[1].monitor + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__)
      ;
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
      pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if ((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
         (pGVar5 = (pAVar4->fields).OIDPLCLELEN, pGVar5 != (GGHCLMEFIGO_o *)0x0)) {
        __this_02 = (pGVar5->fields).JCCJCOCADKI;
        call = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<IGFGDDANEPE>_TypeInfo);
        UnityEngine_Events_UnityAction<object>___ctor();
        if (__this_02 != (GGHCLMEFIGO_OLAINNIFOGG_o *)0x0) {
                    /* try { // try from 033d8f0c to 034d90a7 has its CatchHandler @ 033d8f0c
                       catch() { ... } // from try @ 033d8f0c with catch @ 033d8f0c
                       catch() { ... } // from try @ 033d91ec with catch @ 033d8f0c
                       catch() { ... } // from try @ 033d9290 with catch @ 033d8f0c
                       catch() { ... } // from try @ 033d9298 with catch @ 033d8f0c
                       catch() { ... } // from try @ 033d9358 with catch @ 033d8f0c */
          UnityEngine_Events_UnityEvent<object>__AddListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_02,call,
                     Method_UnityEngine_Events_UnityEvent<IGFGDDANEPE>_AddListener__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PHBFKBEHGIK(FPPKHNNABAD NDBPOFMECGL)  [RVA 0x32D8FC4]
// NOMBKAHPOHM$$PHBFKBEHGIK @ RVA 0x32D8FC4

void NOMBKAHPOHM__PHBFKBEHGIK(NOMBKAHPOHM_o *__this,FPPKHNNABAD_o *NDBPOFMECGL,MethodInfo *method)

{
  char cVar1;
  System_Action_FPPKHNNABAD__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_045675a5 & 1) == 0) {
    FUN_01bab630(&System_Action<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&Method_NOMBKAHPOHM_PHBFKBEHGIK__);
    DAT_045675a5 = 1;
  }
  CJNHFNHJHPE = (System_Action_FPPKHNNABAD__o *)
                thunk_FUN_01bda818(System_Action<FPPKHNNABAD>_TypeInfo);
  System_Action<object>___ctor();
  if (NDBPOFMECGL != (FPPKHNNABAD_o *)0x0) {
    FPPKHNNABAD__OKLHPLEGCOA(NDBPOFMECGL,CJNHFNHJHPE,(MethodInfo *)0x0);
    cVar1 = (__this->fields).super.field_0x52;
    (__this->fields).super.field_0x51 = 1;
    if (cVar1 == '\0') {
      (__this->fields).super.field_0x52 = 1;
      method_00 = extraout_x1;
      do {
        NOMBKAHPOHM__NKLGCNHLBAF(__this,method_00);
        method_00 = extraout_x1_00;
      } while ((__this->fields).super.field_0x51 != '\0');
      (__this->fields).super.field_0x52 = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ADFNKCKEDNP()  [RVA 0x32D90B4]
// NOMBKAHPOHM$$ADFNKCKEDNP @ RVA 0x32D90B4

void NOMBKAHPOHM__ADFNKCKEDNP(NOMBKAHPOHM_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  FPPKHNNABAD_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  Il2CppObject *item;
  DOPEEDABNEK_o *pDVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_045675a6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
                    /* try { // try from 033d9104 to 034d912f has its CatchHandler @ 033d92b4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045675a6 = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033d9170 to 034d9173 has its CatchHandler @ 033d92a8 */
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
                    /* try { // try from 033d917c to 034d9183 has its CatchHandler @ 033d92a4 */
  pDVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (pDVar4 == (DOPEEDABNEK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033d927c to 034d927f has its CatchHandler @ 033d92c0 */
    FUN_01bab8c8();
  }
  __this_00 = (pDVar4->fields).FDLFEJAEDGA;
                    /* try { // try from 033d9188 to 034d91eb has its CatchHandler @ 033d92bc */
  if (__this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (!bVar3) break;
      if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_01 = (__this->fields).NDBPOFMECGL;
      if (__this_01 == (FPPKHNNABAD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 033d91ec to 034d927b has its CatchHandler @ 033d8f0c */
      item = local_50.fields._current[1].monitor;
      pSVar5 = (__this_01->fields)._COIPKAKHDFP_k__BackingField;
      *(int *)((long)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField + 4) =
           *(int *)((long)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField + 4) + 1;
      if (pSVar5 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = *(uint *)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField;
      if (uVar1 < *(uint *)&pSVar5[1].klass) {
        *(uint *)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField = uVar1 + 1;
        (&pSVar5[1].monitor)[(int)uVar1] = item;
        thunk_FUN_01c20e04(&pSVar5[1].monitor + (int)uVar1);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
  }
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x32D92F4]
// NOMBKAHPOHM$$MAHFCKJGBPP @ RVA 0x32D92F4

void NOMBKAHPOHM__MAHFCKJGBPP(NOMBKAHPOHM_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  undefined4 uVar1;
  int32_t *piVar2;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  FPPKHNNABAD_o *pFVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_045675a7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    DAT_045675a7 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,method);
  piVar2 = &(__this->fields).DPJIDNBJIBG;
  *(PKHMIGFEJCL_o **)piVar2 = AAJBIMFNMBB;
  (__this->fields).OBDMHHJBLKL = (System_Collections_Generic_List_string__o *)0xffffffff;
  thunk_FUN_01c20e04(piVar2,AAJBIMFNMBB);
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* try { // try from 033d9358 to 034d9363 has its CatchHandler @ 033d8f0c */
    pFVar3 = Nekki_SF2_Core_Quests_QuestsManager__GetQuestByName
                       (__this_00,(System_String_o *)(__this->fields).BFNEODDCGLC,(MethodInfo *)0x0)
    ;
                    /* try { // try from 033d9364 to 034d936b has its CatchHandler @ 033d936c */
    *(FPPKHNNABAD_o **)&(__this->fields).HAKHAEOBHBI = pFVar3;
                    /* catch() { ... } // from try @ 033d92f0 with catch @ 033d936c
                       catch() { ... } // from try @ 033d9364 with catch @ 033d936c */
    thunk_FUN_01c20e04();
    NOMBKAHPOHM__OAMPJBEDJLK(__this,method_00);
    pFVar3 = (__this->fields).NDBPOFMECGL;
    if (pFVar3 != (FPPKHNNABAD_o *)0x0) {
      uVar1 = *(undefined4 *)&(pFVar3->fields)._GPEFIOMJHNN_k__BackingField;
      *(undefined2 *)&(__this->fields).super.field_0x51 = 0x101;
      *(undefined4 *)((long)&(__this->fields).OBDMHHJBLKL + 4) = uVar1;
      method_01 = extraout_x1;
      do {
        NOMBKAHPOHM__NKLGCNHLBAF(__this,method_01);
        method_01 = extraout_x1_00;
      } while ((__this->fields).super.field_0x51 != '\0');
      (__this->fields).super.field_0x52 = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GAGPPNKKINC()  [RVA 0x32D982C]
// NOMBKAHPOHM$$GAGPPNKKINC @ RVA 0x32D982C

void NOMBKAHPOHM__GAGPPNKKINC(NOMBKAHPOHM_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_AMJMGFCCAKN__o *__this_00;
  System_String_o *item;
  UnityEngine_Events_UnityAction_T0__o *call;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  GGHCLMEFIGO_o *pGVar4;
  System_String_o *pSVar5;
  FPPKHNNABAD_o *__this_01;
  GGHCLMEFIGO_AHCHAFNJKIH_o *__this_02;
  ACHLOMELAJE_o *pAVar6;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_045675a8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AMJMGFCCAKN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AMJMGFCCAKN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AMJMGFCCAKN>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AMJMGFCCAKN>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_NOMBKAHPOHM_MBIEGCODNMB__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<AMJMGFCCAKN>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<AMJMGFCCAKN>_AddListener__);
    DAT_045675a8 = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (((pAVar6 != (ACHLOMELAJE_o *)0x0) &&
      (pGVar4 = (pAVar6->fields).OIDPLCLELEN, pGVar4 != (GGHCLMEFIGO_o *)0x0)) &&
     (__this_00 = (pGVar4->fields).AAMHHEENLMC,
     __this_00 != (System_Collections_Generic_List_AMJMGFCCAKN__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AMJMGFCCAKN>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<AMJMGFCCAKN>_MoveNext__
                             ), bVar3) {
      if ((AMJMGFCCAKN_o *)local_70.fields._current == (AMJMGFCCAKN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_01 = (__this->fields).NDBPOFMECGL;
      item = AMJMGFCCAKN__FDPFMIPBLPH((AMJMGFCCAKN_o *)local_70.fields._current,(MethodInfo *)0x0);
      lVar2 = Method_System_Collections_Generic_List<string>_Add__;
      if (__this_01 == (FPPKHNNABAD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar5 = (__this_01->fields)._COIPKAKHDFP_k__BackingField;
      *(int *)((long)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField + 4) =
           *(int *)((long)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField + 4) + 1;
      if (pSVar5 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = *(uint *)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField;
      if (uVar1 < *(uint *)&pSVar5[1].klass) {
        *(uint *)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField = uVar1 + 1;
        (&pSVar5[1].monitor)[(int)uVar1] = item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<AMJMGFCCAKN>_Dispose__);
    pGVar4 = (pAVar6->fields).OIDPLCLELEN;
    if (pGVar4 != (GGHCLMEFIGO_o *)0x0) {
      __this_02 = (pGVar4->fields).MBIEGCODNMB;
      call = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<AMJMGFCCAKN>_TypeInfo);
      UnityEngine_Events_UnityAction<object>___ctor();
      if (__this_02 != (GGHCLMEFIGO_AHCHAFNJKIH_o *)0x0) {
        UnityEngine_Events_UnityEvent<object>__AddListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_02,call,
                   Method_UnityEngine_Events_UnityEvent<AMJMGFCCAKN>_AddListener__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void IMOMLBECLOB()  [RVA 0x32D9080]
// NOMBKAHPOHM$$IMOMLBECLOB @ RVA 0x32D9080

void NOMBKAHPOHM__IMOMLBECLOB(NOMBKAHPOHM_o *__this,MethodInfo *method)

{
  char cVar1;
  MethodInfo *extraout_x1;
  
  cVar1 = (__this->fields).super.field_0x51;
  (__this->fields).super.field_0x52 = 1;
  while (cVar1 != '\0') {
    NOMBKAHPOHM__NKLGCNHLBAF(__this,method);
    method = extraout_x1;
    cVar1 = (__this->fields).super.field_0x51;
  }
                    /* try { // try from 033d90a8 to 034d90cf has its CatchHandler @ 033d92b8 */
  (__this->fields).super.field_0x52 = 0;
  return;
}


// ===== private void MBIEGCODNMB(AMJMGFCCAKN DLNPKEIJGGG)  [RVA 0x32D9F50]
// NOMBKAHPOHM$$MBIEGCODNMB @ RVA 0x32D9F50

void NOMBKAHPOHM__MBIEGCODNMB(NOMBKAHPOHM_o *__this,AMJMGFCCAKN_o *DLNPKEIJGGG,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_String_o *item;
  System_String_o *pSVar3;
  FPPKHNNABAD_o *pFVar4;
  
  if ((DAT_045675a9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    DAT_045675a9 = 1;
  }
  if (*(int *)&(__this->fields).KGLJICLJHEL != 6) {
    return;
  }
  if (DLNPKEIJGGG != (AMJMGFCCAKN_o *)0x0) {
    pFVar4 = (__this->fields).NDBPOFMECGL;
    item = AMJMGFCCAKN__FDPFMIPBLPH(DLNPKEIJGGG,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    if (pFVar4 != (FPPKHNNABAD_o *)0x0) {
      pSVar3 = (pFVar4->fields)._COIPKAKHDFP_k__BackingField;
      *(int *)((long)&(pFVar4->fields)._GPEFIOMJHNN_k__BackingField + 4) =
           *(int *)((long)&(pFVar4->fields)._GPEFIOMJHNN_k__BackingField + 4) + 1;
      if (pSVar3 != (System_String_o *)0x0) {
        uVar1 = *(uint *)&(pFVar4->fields)._GPEFIOMJHNN_k__BackingField;
        if (uVar1 < *(uint *)&pSVar3[1].klass) {
          *(uint *)&(pFVar4->fields)._GPEFIOMJHNN_k__BackingField = uVar1 + 1;
          (&pSVar3[1].monitor)[(int)uVar1] = item;
          thunk_FUN_01c20e04();
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pFVar4,(Il2CppObject *)item,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        pFVar4 = (__this->fields).NDBPOFMECGL;
        if (pFVar4 != (FPPKHNNABAD_o *)0x0) {
          *(undefined4 *)((long)&(__this->fields).OBDMHHJBLKL + 4) =
               *(undefined4 *)&(pFVar4->fields)._GPEFIOMJHNN_k__BackingField;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HOMDONPDNEG()  [RVA 0x32DA030]
// NOMBKAHPOHM$$HOMDONPDNEG @ RVA 0x32DA030

void NOMBKAHPOHM__HOMDONPDNEG(NOMBKAHPOHM_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_00;
  FPPKHNNABAD_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  Il2CppClass *item;
  ACHLOMELAJE_o *pAVar4;
  GGHCLMEFIGO_o *pGVar5;
  System_String_o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_045675aa & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045675aa = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (((pAVar4 == (ACHLOMELAJE_o *)0x0) ||
      (pGVar5 = (pAVar4->fields).OIDPLCLELEN, pGVar5 == (GGHCLMEFIGO_o *)0x0)) ||
     (__this_00 = (pGVar5->fields).DPOPJKJLDEE,
     __this_00 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  while( true ) {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__)
      ;
                    /* try { // try from 033da1dc to 034da203 has its CatchHandler @ 033da69c */
      return;
    }
    if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = (__this->fields).NDBPOFMECGL;
    if (__this_01 == (FPPKHNNABAD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    item = local_50.fields._current[1].klass;
    pSVar6 = (__this_01->fields)._COIPKAKHDFP_k__BackingField;
    *(int *)((long)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField + 4) =
         *(int *)((long)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField + 4) + 1;
    if (pSVar6 == (System_String_o *)0x0) break;
    uVar1 = *(uint *)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField;
    if (uVar1 < *(uint *)&pSVar6[1].klass) {
      *(uint *)&(__this_01->fields)._GPEFIOMJHNN_k__BackingField = uVar1 + 1;
      (&pSVar6[1].monitor)[(int)uVar1] = item;
      thunk_FUN_01c20e04(&pSVar6[1].monitor + (int)uVar1);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NKLGCNHLBAF()  [RVA 0x32D9AF0]
// NOMBKAHPOHM$$NKLGCNHLBAF @ RVA 0x32D9AF0

void NOMBKAHPOHM__NKLGCNHLBAF(NOMBKAHPOHM_o *__this,MethodInfo *method)

{
  uint index;
  int32_t length;
  int iVar1;
  bool bVar2;
  UnityEngine_Events_UnityAction_T0__o *pUVar3;
  FPPKHNNABAD_o *pFVar4;
  Il2CppObject *pIVar5;
  System_Action_FPPKHNNABAD__o *CJNHFNHJHPE;
  MethodInfo *pMVar6;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *extraout_x1_05;
  MethodInfo *extraout_x1_06;
  MethodInfo *extraout_x1_07;
  ACHLOMELAJE_o *pAVar7;
  GGHCLMEFIGO_o *pGVar8;
  System_Collections_Generic_List_IGFGDDANEPE__o *pSVar9;
  GGHCLMEFIGO_OLAINNIFOGG_o *__this_00;
  GGHCLMEFIGO_AHCHAFNJKIH_o *__this_01;
  long lVar10;
  undefined8 *puVar11;
  
  if ((DAT_045675ab & 1) == 0) {
    FUN_01bab630(&System_Action<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_NOMBKAHPOHM_JCCJCOCADKI__);
    FUN_01bab630(&Method_NOMBKAHPOHM_MBIEGCODNMB__);
    FUN_01bab630(&Method_NOMBKAHPOHM_PHBFKBEHGIK__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<AMJMGFCCAKN>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<AMJMGFCCAKN>_RemoveListener__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<IGFGDDANEPE>_RemoveListener__);
    DAT_045675ab = 1;
  }
  iVar1 = *(int *)&(__this->fields).OBDMHHJBLKL;
  lVar10._0_1_ = (__this->fields).HAKHAEOBHBI;
  lVar10._1_1_ = (__this->fields).ABOKKALGCNG;
  lVar10._2_6_ = *(undefined6 *)&(__this->fields).field_0x5a;
  (__this->fields).super.field_0x51 = 0;
  index = iVar1 + 1;
  pMVar6 = (MethodInfo *)(ulong)index;
  *(uint *)&(__this->fields).OBDMHHJBLKL = index;
  if ((lVar10 == 0) || (*(int *)((long)&(__this->fields).OBDMHHJBLKL + 4) + -1 < (int)index)) {
    iVar1 = *(int *)&(__this->fields).KGLJICLJHEL;
    if (iVar1 - 2U < 2) {
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
         (pGVar8 = (pAVar7->fields).OIDPLCLELEN, pGVar8 != (GGHCLMEFIGO_o *)0x0)) {
        __this_00 = (pGVar8->fields).JCCJCOCADKI;
        pUVar3 = (UnityEngine_Events_UnityAction_T0__o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction<IGFGDDANEPE>_TypeInfo);
        UnityEngine_Events_UnityAction<object>___ctor();
        if (__this_00 != (GGHCLMEFIGO_OLAINNIFOGG_o *)0x0) {
          UnityEngine_Events_UnityEvent<object>__RemoveListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,pUVar3,
                     Method_UnityEngine_Events_UnityEvent<IGFGDDANEPE>_RemoveListener__);
          iVar1 = *(int *)&(__this->fields).KGLJICLJHEL;
          pMVar6 = extraout_x1;
          if (iVar1 == 3) {
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
              pMVar6 = extraout_x1_04;
            }
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
              pMVar6 = extraout_x1_05;
            }
                    /* try { // try from 033d9edc to 034da1db has its CatchHandler @ 033d9edc
                       catch() { ... } // from try @ 033d9edc with catch @ 033d9edc
                       catch() { ... } // from try @ 033da520 with catch @ 033d9edc
                       catch() { ... } // from try @ 033da5c8 with catch @ 033d9edc
                       catch() { ... } // from try @ 033da5e4 with catch @ 033d9edc
                       catch() { ... } // from try @ 033da5fc with catch @ 033d9edc
                       catch() { ... } // from try @ 033da73c with catch @ 033d9edc */
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
              pMVar6 = extraout_x1_06;
            }
            pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if ((pAVar7 == (ACHLOMELAJE_o *)0x0) ||
               (pGVar8 = (pAVar7->fields).OIDPLCLELEN, pGVar8 == (GGHCLMEFIGO_o *)0x0))
            goto LAB_033d9f4c;
            pSVar9 = (pGVar8->fields).JAKMLPIMLCK;
          }
          else {
            if (iVar1 != 2) goto LAB_033d9f30;
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
              pMVar6 = extraout_x1_00;
            }
            if (DAT_04565b7d == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04565b7d = '\x01';
              pMVar6 = extraout_x1_01;
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
              pMVar6 = extraout_x1_02;
            }
            pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
            if ((pAVar7 == (ACHLOMELAJE_o *)0x0) ||
               (pGVar8 = (pAVar7->fields).OIDPLCLELEN, pGVar8 == (GGHCLMEFIGO_o *)0x0))
            goto LAB_033d9f4c;
            pSVar9 = (pGVar8->fields).MKPLNDNGHEB;
          }
          if (pSVar9 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
            length = (pSVar9->fields)._size;
            (pSVar9->fields)._size = 0;
            (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
            if (0 < length) {
              System_Array__Clear((System_Array_o *)(pSVar9->fields)._items,0,length,
                                  (MethodInfo *)0x0);
              pMVar6 = extraout_x1_07;
            }
            goto LAB_033d9f30;
          }
        }
      }
    }
    else {
      if (iVar1 != 6) {
LAB_033d9f30:
        BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,pMVar6);
        (__this->fields).super.field_0x51 = 0;
        return;
      }
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
         (pGVar8 = (pAVar7->fields).OIDPLCLELEN, pGVar8 != (GGHCLMEFIGO_o *)0x0)) {
        __this_01 = (pGVar8->fields).MBIEGCODNMB;
        pUVar3 = (UnityEngine_Events_UnityAction_T0__o *)
                 thunk_FUN_01bda818(UnityEngine_Events_UnityAction<AMJMGFCCAKN>_TypeInfo);
        UnityEngine_Events_UnityAction<object>___ctor();
        if (__this_01 != (GGHCLMEFIGO_AHCHAFNJKIH_o *)0x0) {
          UnityEngine_Events_UnityEvent<object>__RemoveListener
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,pUVar3,
                     Method_UnityEngine_Events_UnityEvent<AMJMGFCCAKN>_RemoveListener__);
          if (DAT_04565b7d == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b7d = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if ((pAVar7 != (ACHLOMELAJE_o *)0x0) &&
             (pGVar8 = (pAVar7->fields).OIDPLCLELEN, pGVar8 != (GGHCLMEFIGO_o *)0x0)) {
            GGHCLMEFIGO__PBCECINCKII(pGVar8,(MethodInfo *)0x0);
            pMVar6 = extraout_x1_03;
            goto LAB_033d9f30;
          }
        }
      }
    }
  }
  else {
    pFVar4 = (__this->fields).NDBPOFMECGL;
    if (pFVar4 != (FPPKHNNABAD_o *)0x0) {
      lVar10 = *(long *)&(__this->fields).DPJIDNBJIBG;
      pIVar5 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pFVar4,index,
                          Method_System_Collections_Generic_List<string>_get_Item__);
      if (lVar10 != 0) {
        puVar11 = (undefined8 *)(lVar10 + 0x98);
        *puVar11 = pIVar5;
        thunk_FUN_01c20e04(puVar11,pIVar5);
        pFVar4 = *(FPPKHNNABAD_o **)&(__this->fields).HAKHAEOBHBI;
        if (pFVar4 != (FPPKHNNABAD_o *)0x0) {
          bVar2 = FPPKHNNABAD__DGCODECJJCC
                            (pFVar4,*(PKHMIGFEJCL_o **)&(__this->fields).DPJIDNBJIBG,
                             (MethodInfo *)0x0);
          if (!bVar2) {
            (__this->fields).super.field_0x51 = 1;
            return;
          }
          pFVar4 = *(FPPKHNNABAD_o **)&(__this->fields).HAKHAEOBHBI;
          CJNHFNHJHPE = (System_Action_FPPKHNNABAD__o *)
                        thunk_FUN_01bda818(System_Action<FPPKHNNABAD>_TypeInfo);
          System_Action<object>___ctor();
          if (pFVar4 != (FPPKHNNABAD_o *)0x0) {
            FPPKHNNABAD__GFMODBKIPGL(pFVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
            pFVar4 = *(FPPKHNNABAD_o **)&(__this->fields).HAKHAEOBHBI;
            if (pFVar4 != (FPPKHNNABAD_o *)0x0) {
              FPPKHNNABAD__IKDPMKOIDMP
                        (pFVar4,*(PKHMIGFEJCL_o **)&(__this->fields).DPJIDNBJIBG,false,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
LAB_033d9f4c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FLCCDLEBIII()  [RVA 0x32DA264]
// NOMBKAHPOHM$$FLCCDLEBIII @ RVA 0x32DA264

void NOMBKAHPOHM__FLCCDLEBIII(NOMBKAHPOHM_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this_00;
  bool bVar3;
  int32_t iVar4;
  NLPJLHOEAOE_o *pNVar5;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_01;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_String_o *pSVar6;
  byte bVar7;
  FPPKHNNABAD_o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045675ac & 1) == 0) {
                    /* try { // try from 033da298 to 034da2a3 has its CatchHandler @ 033da690 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
                    /* try { // try from 033da2b8 to 034da2bf has its CatchHandler @ 033da68c */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
                    /* try { // try from 033da2d0 to 034da2d7 has its CatchHandler @ 033da67c */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045675ac = 1;
    method = extraout_x1;
  }
                    /* try { // try from 033da2e0 to 034da2e7 has its CatchHandler @ 033da674 */
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 033da2ec to 034da2f3 has its CatchHandler @ 033da66c */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
                    /* try { // try from 033da2f8 to 034da2ff has its CatchHandler @ 033da678 */
  pNVar5 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if ((pNVar5 == (NLPJLHOEAOE_o *)0x0) ||
     (__this_01 = (pNVar5->fields).DEKLKEHGJEB,
     __this_01 == (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 033da314 to 034da323 has its CatchHandler @ 033da624 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
                    /* try { // try from 033da33c to 034da33f has its CatchHandler @ 033da608 */
                    /* try { // try from 033da340 to 034da347 has its CatchHandler @ 033da614 */
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
  while( true ) {
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
      __this_00 = local_60.fields._current;
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
                    /* try { // try from 033da42c to 034da433 has its CatchHandler @ 033da644 */
                    /* try { // try from 033da438 to 034da43f has its CatchHandler @ 033da664 */
        return;
      }
                    /* try { // try from 033da358 to 034da367 has its CatchHandler @ 033da618 */
      if (*(char *)((long)&(__this->fields).KGLJICLJHEL + 4) == '\0') {
        bVar7 = 1;
      }
      else {
        if ((OOMHDDBCBJP_o *)local_60.fields._current == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar7 = ((OOMHDDBCBJP_Fields *)((long)local_60.fields._current + 0x10))->HHDBIGKBMEC;
      }
      if (*(char *)((long)&(__this->fields).KGLJICLJHEL + 5) == '\0') {
        bVar3 = true;
      }
      else {
        if ((OOMHDDBCBJP_o *)local_60.fields._current == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 033da380 to 034da383 has its CatchHandler @ 033da608 */
                    /* try { // try from 033da384 to 034da38b has its CatchHandler @ 033da60c */
        iVar4 = OOMHDDBCBJP__NHGGBEACKBD
                          ((OOMHDDBCBJP_o *)local_60.fields._current,(MethodInfo *)0x0);
        bVar3 = iVar4 != 0x14;
      }
                    /* try { // try from 033da39c to 034da3a3 has its CatchHandler @ 033da63c */
    } while ((bVar3 & bVar7) == 0);
    if ((OOMHDDBCBJP_o *)__this_00 == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_02 = (__this->fields).NDBPOFMECGL;
                    /* try { // try from 033da3b4 to 034da3bb has its CatchHandler @ 033da654 */
    item = OOMHDDBCBJP__LOHPFCGCHNH((OOMHDDBCBJP_o *)__this_00,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    if (__this_02 == (FPPKHNNABAD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033da444 to 034da44f has its CatchHandler @ 033da65c */
      FUN_01bab8c8();
    }
                    /* try { // try from 033da3c0 to 034da3c7 has its CatchHandler @ 033da658 */
    pSVar6 = (__this_02->fields)._COIPKAKHDFP_k__BackingField;
    *(int *)((long)&(__this_02->fields)._GPEFIOMJHNN_k__BackingField + 4) =
         *(int *)((long)&(__this_02->fields)._GPEFIOMJHNN_k__BackingField + 4) + 1;
    if (pSVar6 == (System_String_o *)0x0) break;
                    /* try { // try from 033da3d8 to 034da3df has its CatchHandler @ 033da660 */
    uVar1 = *(uint *)&(__this_02->fields)._GPEFIOMJHNN_k__BackingField;
    if (uVar1 < *(uint *)&pSVar6[1].klass) {
                    /* try { // try from 033da3f0 to 034da3f7 has its CatchHandler @ 033da638 */
      *(uint *)&(__this_02->fields)._GPEFIOMJHNN_k__BackingField = uVar1 + 1;
      (&pSVar6[1].monitor)[(int)uVar1] = item;
      thunk_FUN_01c20e04();
                    /* try { // try from 033da3fc to 034da403 has its CatchHandler @ 033da640 */
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                    /* try { // try from 033da414 to 034da41b has its CatchHandler @ 033da668 */
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32DA4D0]
// NOMBKAHPOHM$$.ctor @ RVA 0x32DA4D0

void NOMBKAHPOHM___ctor(NOMBKAHPOHM_o *__this,MethodInfo *method)

{
  FPPKHNNABAD_o *__this_00;
  FPPKHNNABAD_o **ppFVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_045675ad & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045675ad = 1;
    method = extraout_x1;
  }
                    /* try { // try from 033da520 to 034da5bb has its CatchHandler @ 033d9edc */
  __this_00 = (FPPKHNNABAD_o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppFVar1 = &(__this->fields).NDBPOFMECGL;
  *ppFVar1 = __this_00;
  thunk_FUN_01c20e04(ppFVar1,__this_00);
  *(undefined4 *)&(__this->fields).OBDMHHJBLKL = 0xffffffff;
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,method_00);
  return;
}


// ===== private void OAMPJBEDJLK()  [RVA 0x32D93B4]
// NOMBKAHPOHM$$OAMPJBEDJLK @ RVA 0x32D93B4

void NOMBKAHPOHM__OAMPJBEDJLK(NOMBKAHPOHM_o *__this,MethodInfo *method)

{
  uint length;
  int iVar1;
  System_Predicate_NCCFNKMICGK__o **ppSVar2;
  bool LAHOGJFGKBL;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  FPPKHNNABAD_o *pFVar3;
  System_Predicate_NCCFNKMICGK__o *PFDEAPMMFAP;
  
  if ((DAT_045675ae & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_TrimExcess__);
    FUN_01bab630(&System_Predicate<NCCFNKMICGK>_TypeInfo);
    FUN_01bab630(&Method_NOMBKAHPOHM_<>c_ANIDCFPKNHP__);
    FUN_01bab630(&Method_NOMBKAHPOHM_<>c_BNAFPHDJKBA__);
    FUN_01bab630(&Method_NOMBKAHPOHM_<>c_FCCPKCPEECD__);
    FUN_01bab630(&Method_NOMBKAHPOHM_<>c_GHNCMJNEIDO__);
    FUN_01bab630(&Method_NOMBKAHPOHM_<>c_KGIJBABIHFD__);
    FUN_01bab630(&Method_NOMBKAHPOHM_<>c_MPFPAMFEAKC__);
    FUN_01bab630(&NOMBKAHPOHM_<>c_TypeInfo);
    DAT_045675ae = 1;
    method = extraout_x1;
  }
  pFVar3 = (__this->fields).NDBPOFMECGL;
  if (pFVar3 == (FPPKHNNABAD_o *)0x0) goto LAB_033d9828;
  length = *(uint *)&(pFVar3->fields)._GPEFIOMJHNN_k__BackingField;
  method_00 = (MethodInfo *)(ulong)length;
  iVar1 = *(int *)((long)&(pFVar3->fields)._GPEFIOMJHNN_k__BackingField + 4);
  *(undefined4 *)&(pFVar3->fields)._GPEFIOMJHNN_k__BackingField = 0;
  *(int *)((long)&(pFVar3->fields)._GPEFIOMJHNN_k__BackingField + 4) = iVar1 + 1;
  if (0 < (int)length) {
    System_Array__Clear((System_Array_o *)(pFVar3->fields)._COIPKAKHDFP_k__BackingField,0,length,
                        (MethodInfo *)0x0);
    method = extraout_x1_00;
  }
  switch(*(undefined4 *)&(__this->fields).KGLJICLJHEL) {
  case 1:
    NOMBKAHPOHM__HOMDONPDNEG(__this,method);
    break;
  case 2:
    LAHOGJFGKBL = false;
    goto LAB_033d94c4;
  case 3:
    LAHOGJFGKBL = true;
LAB_033d94c4:
    NOMBKAHPOHM__CONOMLLANKE(__this,LAHOGJFGKBL,method_00);
    break;
  case 4:
    NOMBKAHPOHM__ADFNKCKEDNP(__this,method);
    break;
  case 5:
    NOMBKAHPOHM__FLCCDLEBIII(__this,method);
    break;
  case 6:
                    /* try { // try from 033d94e4 to 034d95a7 has its CatchHandler @ 033d94e4
                       catch() { ... } // from try @ 033d94e4 with catch @ 033d94e4
                       catch() { ... } // from try @ 033d95d0 with catch @ 033d94e4
                       catch() { ... } // from try @ 033d9618 with catch @ 033d94e4
                       catch() { ... } // from try @ 033d9648 with catch @ 033d94e4 */
    NOMBKAHPOHM__GAGPPNKKINC(__this,method);
    break;
  case 7:
    PFDEAPMMFAP = (System_Predicate_NCCFNKMICGK__o *)0x0;
    goto LAB_033d97f0;
  case 8:
    if ((NOMBKAHPOHM_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PFDEAPMMFAP = NOMBKAHPOHM_<>c_TypeInfo->static_fields->__9__14_0;
    if (PFDEAPMMFAP == (System_Predicate_NCCFNKMICGK__o *)0x0) {
      if ((NOMBKAHPOHM_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      PFDEAPMMFAP = (System_Predicate_NCCFNKMICGK__o *)
                    thunk_FUN_01bda818(System_Predicate<NCCFNKMICGK>_TypeInfo);
      method_00 = Method_NOMBKAHPOHM_<>c_ANIDCFPKNHP__;
      System_Predicate<object>___ctor();
      ppSVar2 = &NOMBKAHPOHM_<>c_TypeInfo->static_fields->__9__14_0;
      *ppSVar2 = PFDEAPMMFAP;
LAB_033d97e0:
      thunk_FUN_01c20e04(ppSVar2,PFDEAPMMFAP);
    }
    goto LAB_033d97f0;
  case 9:
    if ((NOMBKAHPOHM_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PFDEAPMMFAP = NOMBKAHPOHM_<>c_TypeInfo->static_fields->__9__14_1;
    if (PFDEAPMMFAP == (System_Predicate_NCCFNKMICGK__o *)0x0) {
      if ((NOMBKAHPOHM_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033d95a8 to 034d95af has its CatchHandler @ 033d95fc */
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 033d95b8 to 034d95c3 has its CatchHandler @ 033d95f8 */
      PFDEAPMMFAP = (System_Predicate_NCCFNKMICGK__o *)
                    thunk_FUN_01bda818(System_Predicate<NCCFNKMICGK>_TypeInfo);
      method_00 = Method_NOMBKAHPOHM_<>c_FCCPKCPEECD__;
                    /* try { // try from 033d95c8 to 034d95cf has its CatchHandler @ 033d95f4 */
                    /* try { // try from 033d95d0 to 034d9613 has its CatchHandler @ 033d94e4 */
      System_Predicate<object>___ctor();
      ppSVar2 = &NOMBKAHPOHM_<>c_TypeInfo->static_fields->__9__14_1;
      *ppSVar2 = PFDEAPMMFAP;
      goto LAB_033d97e0;
    }
    goto LAB_033d97f0;
  case 10:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033d95c8 with catch @ 033d95f4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033d95b8 with catch @ 033d95f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033d95a8 with catch @ 033d95fc
                        */
    if ((NOMBKAHPOHM_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033d9614 to 034d9617 has its CatchHandler @ 033d9638 */
    PFDEAPMMFAP = NOMBKAHPOHM_<>c_TypeInfo->static_fields->__9__14_2;
                    /* try { // try from 033d9618 to 034d963f has its CatchHandler @ 033d94e4 */
    if (PFDEAPMMFAP == (System_Predicate_NCCFNKMICGK__o *)0x0) {
      if ((NOMBKAHPOHM_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* catch() { ... } // from try @ 033d9614 with catch @ 033d9638 */
                    /* try { // try from 033d9640 to 034d9647 has its CatchHandler @ 033d965c */
      PFDEAPMMFAP = (System_Predicate_NCCFNKMICGK__o *)
                    thunk_FUN_01bda818(System_Predicate<NCCFNKMICGK>_TypeInfo);
      method_00 = Method_NOMBKAHPOHM_<>c_GHNCMJNEIDO__;
                    /* try { // try from 033d9648 to 034d9653 has its CatchHandler @ 033d94e4 */
                    /* try { // try from 033d9654 to 034d965b has its CatchHandler @ 033d965c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033d9640 with catch @ 033d965c
                       catch(type#2 @ 00000000) { ... } // from try @ 033d9654 with catch @ 033d965c
                        */
      System_Predicate<object>___ctor();
      ppSVar2 = &NOMBKAHPOHM_<>c_TypeInfo->static_fields->__9__14_2;
      *ppSVar2 = PFDEAPMMFAP;
      goto LAB_033d97e0;
    }
    goto LAB_033d97f0;
  case 0xb:
    if ((NOMBKAHPOHM_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PFDEAPMMFAP = NOMBKAHPOHM_<>c_TypeInfo->static_fields->__9__14_3;
    if (PFDEAPMMFAP == (System_Predicate_NCCFNKMICGK__o *)0x0) {
      if ((NOMBKAHPOHM_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      PFDEAPMMFAP = (System_Predicate_NCCFNKMICGK__o *)
                    thunk_FUN_01bda818(System_Predicate<NCCFNKMICGK>_TypeInfo);
      method_00 = Method_NOMBKAHPOHM_<>c_BNAFPHDJKBA__;
      System_Predicate<object>___ctor();
      ppSVar2 = &NOMBKAHPOHM_<>c_TypeInfo->static_fields->__9__14_3;
      *ppSVar2 = PFDEAPMMFAP;
      goto LAB_033d97e0;
    }
    goto LAB_033d97f0;
  case 0xc:
    if ((NOMBKAHPOHM_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PFDEAPMMFAP = NOMBKAHPOHM_<>c_TypeInfo->static_fields->__9__14_4;
    if (PFDEAPMMFAP == (System_Predicate_NCCFNKMICGK__o *)0x0) {
      if ((NOMBKAHPOHM_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      PFDEAPMMFAP = (System_Predicate_NCCFNKMICGK__o *)
                    thunk_FUN_01bda818(System_Predicate<NCCFNKMICGK>_TypeInfo);
      method_00 = Method_NOMBKAHPOHM_<>c_MPFPAMFEAKC__;
      System_Predicate<object>___ctor();
      ppSVar2 = &NOMBKAHPOHM_<>c_TypeInfo->static_fields->__9__14_4;
      *ppSVar2 = PFDEAPMMFAP;
      goto LAB_033d97e0;
    }
    goto LAB_033d97f0;
  case 0xd:
    if ((NOMBKAHPOHM_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    PFDEAPMMFAP = NOMBKAHPOHM_<>c_TypeInfo->static_fields->__9__14_5;
    if (PFDEAPMMFAP == (System_Predicate_NCCFNKMICGK__o *)0x0) {
      if ((NOMBKAHPOHM_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      PFDEAPMMFAP = (System_Predicate_NCCFNKMICGK__o *)
                    thunk_FUN_01bda818(System_Predicate<NCCFNKMICGK>_TypeInfo);
      method_00 = Method_NOMBKAHPOHM_<>c_KGIJBABIHFD__;
      System_Predicate<object>___ctor();
      ppSVar2 = &NOMBKAHPOHM_<>c_TypeInfo->static_fields->__9__14_5;
      *ppSVar2 = PFDEAPMMFAP;
      goto LAB_033d97e0;
    }
LAB_033d97f0:
    NOMBKAHPOHM__OAMGHCLCHPA(__this,PFDEAPMMFAP,method_00);
    break;
  case 0xe:
    NOMBKAHPOHM__APPIAMLEJBH(__this,*(PKHMIGFEJCL_o **)&(__this->fields).DPJIDNBJIBG,method_00);
  }
  pFVar3 = (__this->fields).NDBPOFMECGL;
  if (pFVar3 != (FPPKHNNABAD_o *)0x0) {
    System_Collections_Generic_List<object>__TrimExcess
              ((System_Collections_Generic_List_object__o *)pFVar3,
               Method_System_Collections_Generic_List<string>_TrimExcess__);
    return;
  }
LAB_033d9828:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JCCJCOCADKI(IGFGDDANEPE ANMFBABEMFD)  [RVA 0x32DA5C8]
// NOMBKAHPOHM$$JCCJCOCADKI @ RVA 0x32DA5C8

void NOMBKAHPOHM__JCCJCOCADKI(NOMBKAHPOHM_o *__this,IGFGDDANEPE_o *ANMFBABEMFD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  FPPKHNNABAD_o *pFVar4;
  System_String_o *item;
  int iVar5;
  System_String_o *pSVar6;
  
                    /* try { // try from 033da5c8 to 034da5cb has its CatchHandler @ 033d9edc */
                    /* try { // try from 033da5cc to 034da5cf has its CatchHandler @ 033da670 */
                    /* try { // try from 033da5d0 to 034da5d3 has its CatchHandler @ 033da650 */
                    /* try { // try from 033da5d4 to 034da5d7 has its CatchHandler @ 033da64c */
                    /* try { // try from 033da5d8 to 034da5db has its CatchHandler @ 033da648 */
                    /* try { // try from 033da5dc to 034da5df has its CatchHandler @ 033da630 */
                    /* try { // try from 033da5e0 to 034da5e3 has its CatchHandler @ 033da62c */
  if ((DAT_045675af & 1) == 0) {
                    /* try { // try from 033da5e4 to 034da5f3 has its CatchHandler @ 033d9edc */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
                    /* try { // try from 033da5f4 to 034da5f7 has its CatchHandler @ 033da620 */
                    /* try { // try from 033da5f8 to 034da5fb has its CatchHandler @ 033da604 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
                    /* try { // try from 033da5fc to 034da6b3 has its CatchHandler @ 033d9edc */
    DAT_045675af = 1;
  }
                    /* catch() { ... } // from try @ 033da5f8 with catch @ 033da604 */
  iVar5 = *(int *)&(__this->fields).KGLJICLJHEL;
                    /* catch() { ... } // from try @ 033da33c with catch @ 033da608
                       catch() { ... } // from try @ 033da380 with catch @ 033da608 */
                    /* catch() { ... } // from try @ 033da384 with catch @ 033da60c */
  if (iVar5 == 2) {
                    /* catch() { ... } // from try @ 033da464 with catch @ 033da610 */
    if (ANMFBABEMFD == (IGFGDDANEPE_o *)0x0) goto LAB_033da6c8;
                    /* catch() { ... } // from try @ 033da340 with catch @ 033da614 */
                    /* catch() { ... } // from try @ 033da358 with catch @ 033da618 */
                    /* catch() { ... } // from try @ 033da454 with catch @ 033da61c */
    bVar3 = IGFGDDANEPE__DABHOGHGNBB(ANMFBABEMFD,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033da5f4 with catch @ 033da620 */
    if (bVar3) {
                    /* catch() { ... } // from try @ 033da314 with catch @ 033da624 */
      iVar5 = *(int *)&(__this->fields).KGLJICLJHEL;
      goto LAB_033da628;
    }
LAB_033da644:
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
                    /* catch() { ... } // from try @ 033da42c with catch @ 033da644 */
    pFVar4 = (__this->fields).NDBPOFMECGL;
                    /* catch() { ... } // from try @ 033da5d8 with catch @ 033da648 */
    if (pFVar4 == (FPPKHNNABAD_o *)0x0) goto LAB_033da6c8;
                    /* catch() { ... } // from try @ 033da5d4 with catch @ 033da64c */
                    /* catch() { ... } // from try @ 033da5d0 with catch @ 033da650 */
    item = (ANMFBABEMFD->fields).NPFMOEOIEKM;
                    /* catch() { ... } // from try @ 033da3b4 with catch @ 033da654 */
                    /* catch() { ... } // from try @ 033da3c0 with catch @ 033da658 */
                    /* catch() { ... } // from try @ 033da444 with catch @ 033da65c */
    pSVar6 = (pFVar4->fields)._COIPKAKHDFP_k__BackingField;
                    /* catch() { ... } // from try @ 033da3d8 with catch @ 033da660 */
                    /* catch() { ... } // from try @ 033da438 with catch @ 033da664 */
                    /* catch() { ... } // from try @ 033da414 with catch @ 033da668 */
    *(int *)((long)&(pFVar4->fields)._GPEFIOMJHNN_k__BackingField + 4) =
         *(int *)((long)&(pFVar4->fields)._GPEFIOMJHNN_k__BackingField + 4) + 1;
                    /* catch() { ... } // from try @ 033da2ec with catch @ 033da66c */
    if (pSVar6 == (System_String_o *)0x0) goto LAB_033da6c8;
                    /* catch() { ... } // from try @ 033da5cc with catch @ 033da670 */
    uVar1 = *(uint *)&(pFVar4->fields)._GPEFIOMJHNN_k__BackingField;
                    /* catch() { ... } // from try @ 033da2e0 with catch @ 033da674 */
                    /* catch() { ... } // from try @ 033da2f8 with catch @ 033da678 */
                    /* catch() { ... } // from try @ 033da2d0 with catch @ 033da67c */
    if (uVar1 < *(uint *)&pSVar6[1].klass) {
                    /* catch() { ... } // from try @ 033da478 with catch @ 033da680 */
                    /* catch() { ... } // from try @ 033da4b4 with catch @ 033da684 */
                    /* catch() { ... } // from try @ 033da5c4 with catch @ 033da688 */
      *(uint *)&(pFVar4->fields)._GPEFIOMJHNN_k__BackingField = uVar1 + 1;
                    /* catch() { ... } // from try @ 033da2b8 with catch @ 033da68c */
      (&pSVar6[1].monitor)[(int)uVar1] = item;
                    /* catch() { ... } // from try @ 033da298 with catch @ 033da690 */
                    /* catch() { ... } // from try @ 033da5bc with catch @ 033da694 */
      thunk_FUN_01c20e04(&pSVar6[1].monitor + (int)uVar1);
                    /* catch() { ... } // from try @ 033da238 with catch @ 033da698 */
    }
    else {
                    /* catch() { ... } // from try @ 033da1dc with catch @ 033da69c */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pFVar4,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
  }
  else {
LAB_033da628:
                    /* catch() { ... } // from try @ 033da494 with catch @ 033da628 */
                    /* catch() { ... } // from try @ 033da5e0 with catch @ 033da62c */
    if (iVar5 == 3) {
                    /* catch() { ... } // from try @ 033da5dc with catch @ 033da630 */
      if (ANMFBABEMFD == (IGFGDDANEPE_o *)0x0) goto LAB_033da6c8;
                    /* catch() { ... } // from try @ 033da4a4 with catch @ 033da634 */
                    /* catch() { ... } // from try @ 033da3f0 with catch @ 033da638 */
                    /* catch() { ... } // from try @ 033da39c with catch @ 033da63c */
      bVar3 = IGFGDDANEPE__DABHOGHGNBB(ANMFBABEMFD,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033da3fc with catch @ 033da640 */
      if (bVar3) goto LAB_033da644;
    }
  }
  pFVar4 = (__this->fields).NDBPOFMECGL;
  if (pFVar4 != (FPPKHNNABAD_o *)0x0) {
                    /* try { // try from 033da6b4 to 034da6b7 has its CatchHandler @ 033da6c4 */
    *(undefined4 *)((long)&(__this->fields).OBDMHHJBLKL + 4) =
         *(undefined4 *)&(pFVar4->fields)._GPEFIOMJHNN_k__BackingField;
                    /* catch() { ... } // from try @ 033da6b4 with catch @ 033da6c4 */
    return;
  }
LAB_033da6c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void APPIAMLEJBH(PKHMIGFEJCL OKBIKHHKOEN)  [RVA 0x32DA55C]
// NOMBKAHPOHM$$APPIAMLEJBH @ RVA 0x32DA55C

void NOMBKAHPOHM__APPIAMLEJBH(NOMBKAHPOHM_o *__this,PKHMIGFEJCL_o *OKBIKHHKOEN,MethodInfo *method)

{
  FPPKHNNABAD_o *__this_00;
  System_Collections_Generic_IEnumerable_T__o *collection;
  
  if ((DAT_045675b0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_AddRange__);
    DAT_045675b0 = 1;
  }
  if (OKBIKHHKOEN != (PKHMIGFEJCL_o *)0x0) {
    collection = (System_Collections_Generic_IEnumerable_T__o *)
                 (OKBIKHHKOEN->fields)._JOFOHDAGJIN_k__BackingField;
    if (collection == (System_Collections_Generic_IEnumerable_T__o *)0x0) {
                    /* try { // try from 033da5bc to 034da5c3 has its CatchHandler @ 033da694 */
      return;
    }
    __this_00 = (__this->fields).NDBPOFMECGL;
    if (__this_00 != (FPPKHNNABAD_o *)0x0) {
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)__this_00,collection,
                 Method_System_Collections_Generic_List<string>_AddRange__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033da5c4 to 034da5c7 has its CatchHandler @ 033da688 */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x32DA6CC]
// NOMBKAHPOHM$$HNIHOIAMDPC @ RVA 0x32DA6CC

void NOMBKAHPOHM__HNIHOIAMDPC
               (NOMBKAHPOHM_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *ACCIHBHMFPN;
  PKHMIGFEJCL_o *pPVar5;
  MethodInfo *method_00;
  
                    /* try { // try from 033da6d4 to 034da73b has its CatchHandler @ 033da750 */
  if ((DAT_045675b1 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_9936/*"OnlyActiveBattles"*/);
    FUN_01bab630(&StringLiteral_9566/*"NonRaidBattles"*/);
    DAT_045675b1 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,method);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 033da73c to 034da747 has its CatchHandler @ 033d9edc */
                    /* try { // try from 033da748 to 034da74f has its CatchHandler @ 033da750 */
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 033da6d4 with catch @ 033da750
                       catch() { ... } // from try @ 033da748 with catch @ 033da750 */
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
      ACCIHBHMFPN = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,(System_String_o *)0x0,(MethodInfo *)0x0);
      iVar2 = NOMBKAHPOHM__CNOMHMIIEAB(ACCIHBHMFPN,method_00);
      *(int32_t *)&(__this->fields).KGLJICLJHEL = iVar2;
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        pPVar5 = (PKHMIGFEJCL_o *)EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0)
        ;
        (__this->fields).BFNEODDCGLC = pPVar5;
        thunk_FUN_01c20e04();
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_9936/*"OnlyActiveBattles"*/,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
          *(bool *)((long)&(__this->fields).KGLJICLJHEL + 4) = bVar1;
          pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                   (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                             (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
          if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar3,StringLiteral_9566/*"NonRaidBattles"*/,(MethodInfo *)0x0);
            bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,false,(MethodInfo *)0x0);
            *(bool *)((long)&(__this->fields).KGLJICLJHEL + 5) = bVar1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

