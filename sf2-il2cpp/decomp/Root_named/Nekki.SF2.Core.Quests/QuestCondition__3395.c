// Original name: Nekki.SF2.Core.Quests.QuestCondition  (obfuscated LEGDPJHPEOB)
// TypeDefIndex 3395
// Namespace: 
// public class QuestCondition : EILGGBOIMGE
// Fields:
//   public const string FAKPHKJOGOF = "_";
//   public const string NAOBPIDJJCI = "_$";
//   public QuestCondition.GGOBILDOEDC LDNECFGEICA; // 0x10
//   public QuestCondition.IAMBMIIPHGK ACCIHBHMFPN; // 0x14
//   public QuestCondition.NEKBOKBKCPA HJBFKFHHAEO; // 0x18
//   public string HGLHAHMIGDB; // 0x20
//   public string NKNANOCKLNG; // 0x28
//   public List<QuestCondition> AHEFOIOKDOK; // 0x30
//   public bool CKPHGNCGNHK; // 0x38
//   public bool ODLEBGINGIL; // 0x39
//   private PKHMIGFEJCL AAJBIMFNMBB; // 0x40

// ===== public static QuestCondition.IAMBMIIPHGK EOGEJOBHJMC(string ACCIHBHMFPN)  [RVA 0x3542FE0]
// QuestCondition$$EOGEJOBHJMC @ RVA 0x3542FE0

int32_t QuestCondition__EOGEJOBHJMC(System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  undefined8 *puVar3;
  
  if ((DAT_04568b08 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4577/*"Conditions"*/);
    FUN_01bab630(&StringLiteral_5754/*"Ends"*/);
    FUN_01bab630(&StringLiteral_12391/*"Starts"*/);
    FUN_01bab630(&StringLiteral_2948/*"And"*/);
    FUN_01bab630(&StringLiteral_6908/*"GreaterEqual"*/);
    FUN_01bab630(&StringLiteral_8404/*"Less"*/);
    FUN_01bab630(&StringLiteral_9975/*"Or"*/);
    FUN_01bab630(&StringLiteral_6906/*"Greater"*/);
    FUN_01bab630(&StringLiteral_4560/*"Condition"*/);
    FUN_01bab630(&StringLiteral_5832/*"Equal"*/);
    FUN_01bab630(&StringLiteral_4624/*"Contains"*/);
    FUN_01bab630(&StringLiteral_9968/*"Operator"*/);
    FUN_01bab630(&StringLiteral_8406/*"LessEqual"*/);
    DAT_04568b08 = 1;
  }
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(ACCIHBHMFPN,(MethodInfo *)0x0);
  if (uVar2 < 0x5ce477a5) {
    if (uVar2 < 0x21e5581e) {
      if (uVar2 == 0x16f8b8f) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_5832/*"Equal"*/,(MethodInfo *)0x0);
        if (!bVar1) {
          return 0;
        }
        return 1;
      }
      if (uVar2 == 0xcceca53) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_6908/*"GreaterEqual"*/,(MethodInfo *)0x0);
        if (!bVar1) {
          return 0;
        }
        return 3;
      }
      if (uVar2 != 0x21e5581d) {
        return 0;
      }
      puVar3 = &StringLiteral_9968/*"Operator"*/;
    }
    else {
      if (uVar2 == 0x37463de4) {
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_12391/*"Starts"*/,(MethodInfo *)0x0);
        if (!bVar1) {
          return 0;
        }
        return 9;
      }
      if (uVar2 == 0x51cba6d7) {
        puVar3 = &StringLiteral_4577/*"Conditions"*/;
        goto LAB_0364331c;
      }
      if (uVar2 != 0x5ce477a4) {
        return 0;
      }
      puVar3 = &StringLiteral_9975/*"Or"*/;
    }
  }
  else {
    if (0x96ddac39 < uVar2) {
      if (uVar2 < 0xc7232af1) {
        if (uVar2 == 0xa197a3d8) {
          bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_8404/*"Less"*/,(MethodInfo *)0x0);
          if (!bVar1) {
            return 0;
          }
          return 4;
        }
        if (uVar2 != 0xc7232af0) {
          return 0;
        }
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_8406/*"LessEqual"*/,(MethodInfo *)0x0);
        if (!bVar1) {
          return 0;
        }
        return 5;
      }
      if (uVar2 != 0xcca3205e) {
        if (uVar2 != 0xfe231bbb) {
          return 0;
        }
        bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_5754/*"Ends"*/,(MethodInfo *)0x0);
        if (!bVar1) {
          return 0;
        }
        return 10;
      }
      puVar3 = &StringLiteral_4560/*"Condition"*/;
LAB_0364331c:
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,(System_String_o *)*puVar3,(MethodInfo *)0x0);
      if (!bVar1) {
        return 0;
      }
      return 7;
    }
    if (uVar2 == 0x96ddac39) {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_6906/*"Greater"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return 0;
      }
      return 2;
    }
    if (uVar2 == 0x669c4958) {
      bVar1 = System_String__op_Equality(ACCIHBHMFPN,StringLiteral_4624/*"Contains"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return 0;
      }
      return 8;
    }
    if (uVar2 != 0x71b5ed46) {
      return 0;
    }
    puVar3 = &StringLiteral_2948/*"And"*/;
  }
  bVar1 = System_String__op_Equality(ACCIHBHMFPN,(System_String_o *)*puVar3,(MethodInfo *)0x0);
  if (!bVar1) {
    return 0;
  }
  return 6;
}


// ===== private void HGGGJHFFIPK(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC CBIGMIHGDFO)  [RVA 0x3543348]
// QuestCondition$$HGGGJHFFIPK @ RVA 0x3543348

void QuestCondition__HGGGJHFFIPK
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *CBIGMIHGDFO,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  System_String_o *BNMOJBMGDDN;
  PlayerData_o *__this_00;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  System_String_o *a;
  
                    /* try { // try from 03643350 to 0374348b has its CatchHandler @ 03643350
                       catch() { ... } // from try @ 03643350 with catch @ 03643350
                       catch() { ... } // from try @ 036435cc with catch @ 03643350
                       catch() { ... } // from try @ 03643668 with catch @ 03643350
                       catch() { ... } // from try @ 03643670 with catch @ 03643350
                       catch() { ... } // from try @ 03643728 with catch @ 03643350 */
  if ((DAT_04568b09 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10694/*"QuestCondition.RaidGiftFunction unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_11089/*"Received"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    __this = (QuestCondition_o *)FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568b09 = 1;
  }
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    a = (ACCIJLGMHOO->fields).KCPPJGKAILM;
    BNMOJBMGDDN = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(a,StringLiteral_11089/*"Received"*/,(MethodInfo *)0x0);
    if (bVar2) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      __this = (QuestCondition_o *)0x0;
      if (__this_00 != (PlayerData_o *)0x0) {
        bVar2 = PlayerData__GNNNAFFIPKI(__this_00,BNMOJBMGDDN,(MethodInfo *)0x0);
        __this = (QuestCondition_o *)(ulong)bVar2;
        puVar1 = &StringLiteral_1606/*"1"*/;
        if (!bVar2) {
          puVar1 = &StringLiteral_1567/*"0"*/;
        }
        if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) {
          (CBIGMIHGDFO->fields).HPACPFLKHPK = (System_String_o *)*puVar1;
          thunk_FUN_01c20e04(&CBIGMIHGDFO->fields);
          return;
        }
      }
    }
    else {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      __this = (QuestCondition_o *)0x0;
      if (args != (System_Object_array *)0x0) {
                    /* try { // try from 0364348c to 037434b3 has its CatchHandler @ 03643694 */
        if ((a != (System_String_o *)0x0) &&
           (lVar3 = thunk_FUN_01bda71c(a,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
          uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar4,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)a;
          thunk_FUN_01c20e04(args->m_Items,a);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_10694/*"QuestCondition.RaidGiftFunction unknown property: "{0}""*/,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036434e8 to 03743513 has its CatchHandler @ 03643690 */
  FUN_01bab8c8(__this);
}


// ===== private void NKLINMGNJOC(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x35434FC]
// QuestCondition$$NKLINMGNJOC @ RVA 0x35434FC

void QuestCondition__NKLINMGNJOC
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  AAPGCAPGBLG_o *pAVar4;
  GCPFDLNAFDF_o *pGVar5;
  VirtualInvokeData *pVVar6;
  System_Object_array *args;
  long lVar7;
  DADDKDFBPIJ_T__o *__this_00;
  Il2CppObject *pIVar8;
  undefined8 uVar9;
  GCPFDLNAFDF_c *pGVar10;
  Il2CppObject *pIVar11;
  ulong uVar12;
  int32_t *piVar13;
  System_String_o *a;
  
  if ((DAT_04568b0a & 1) == 0) {
    FUN_01bab630(&Method_DADDKDFBPIJ<CCLKPGBIBOP>_COMOKILJDGJ__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HHMDFAMGHPB_TypeInfo);
                    /* try { // try from 03643548 to 03743553 has its CatchHandler @ 03643688 */
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_1395/*". change to actual raid server for download packs"*/);
                    /* try { // try from 03643564 to 0374356f has its CatchHandler @ 03643684 */
    FUN_01bab630(&StringLiteral_9366/*"NeedReload"*/);
    FUN_01bab630(&StringLiteral_7959/*"IsExistsInConfig"*/);
    FUN_01bab630(&StringLiteral_7954/*"IsDownloaded"*/);
    FUN_01bab630(&StringLiteral_10688/*"QuestCondition.PackFunction - unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_10689/*"QuestCondition.PackFunction Pack info not found "*/);
                    /* try { // try from 036435a8 to 037435cb has its CatchHandler @ 03643680 */
    FUN_01bab630(&StringLiteral_12158/*"Size"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_7921/*"IsAvailable"*/);
                    /* try { // try from 036435cc to 0374365b has its CatchHandler @ 03643350 */
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    FUN_01bab630(&StringLiteral_18068/*"error"*/);
    DAT_04568b0a = 1;
  }
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_036438f8;
  pSVar3 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
  a = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  bVar2 = System_String__op_Equality(a,StringLiteral_7921/*"IsAvailable"*/,(MethodInfo *)0x0);
  if (bVar2) {
    pAVar4 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pAVar4 == (AAPGCAPGBLG_o *)0x0) goto LAB_036438f8;
    bVar2 = AAPGCAPGBLG__LAAKLBPOMGP(pAVar4,pSVar3,(MethodInfo *)0x0);
LAB_036436a0:
                    /* try { // try from 036436a4 to 037436a7 has its CatchHandler @ 036436b8 */
    pIVar11 = (Il2CppObject *)&StringLiteral_1606/*"1"*/;
    if (bVar2 == false) {
      pIVar11 = (Il2CppObject *)&StringLiteral_1567/*"0"*/;
    }
  }
  else {
    bVar2 = System_String__op_Equality(a,StringLiteral_7954/*"IsDownloaded"*/,(MethodInfo *)0x0);
    if (bVar2) {
      pAVar4 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pAVar4 == (AAPGCAPGBLG_o *)0x0) goto LAB_036438f8;
                    /* try { // try from 0364365c to 03743663 has its CatchHandler @ 0364368c */
                    /* try { // try from 03643664 to 03743667 has its CatchHandler @ 0364367c */
      bVar2 = AAPGCAPGBLG__BAFDBLCFCPO(pAVar4,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 03643668 to 0374366b has its CatchHandler @ 03643350 */
      goto LAB_036436a0;
    }
                    /* try { // try from 0364366c to 0374366f has its CatchHandler @ 03643678 */
                    /* try { // try from 03643670 to 037436a3 has its CatchHandler @ 03643350 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0364366c with catch @ 03643678
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03643664 with catch @ 0364367c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036435a8 with catch @ 03643680
                        */
    bVar2 = System_String__op_Equality(a,StringLiteral_7959/*"IsExistsInConfig"*/,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03643564 with catch @ 03643684
                        */
    if (bVar2) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03643548 with catch @ 03643688
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0364365c with catch @ 0364368c
                        */
      pAVar4 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036434e8 with catch @ 03643690
                        */
      if (pAVar4 == (AAPGCAPGBLG_o *)0x0) goto LAB_036438f8;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0364348c with catch @ 03643694
                        */
      bVar2 = AAPGCAPGBLG__CNBENAHGBAL(pAVar4,pSVar3,(MethodInfo *)0x0);
      goto LAB_036436a0;
    }
    bVar2 = System_String__op_Equality(a,StringLiteral_12158/*"Size"*/,(MethodInfo *)0x0);
    if (bVar2) {
      if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pGVar5 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
      if (pGVar5 == (GCPFDLNAFDF_o *)0x0) goto LAB_036438f8;
      pGVar10 = pGVar5->klass;
      uVar1._0_1_ = (pGVar10->_2).rank;
      uVar1._1_1_ = (pGVar10->_2).minimumAlignment;
                    /* try { // try from 03643728 to 03743733 has its CatchHandler @ 03643350 */
      uVar12 = (ulong)uVar1;
      if (uVar12 != 0) {
                    /* try { // try from 03643734 to 0374373b has its CatchHandler @ 0364373c */
        piVar13 = &((pGVar10->_1).interfaceOffsets)->offset;
        do {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036436c0 with catch @ 0364373c
                       catch(type#2 @ 00000000) { ... } // from try @ 03643734 with catch @ 0364373c
                        */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)HHMDFAMGHPB_TypeInfo) {
            pVVar6 = pGVar10->vtable + *piVar13;
            goto LAB_03643848;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pGVar5,HHMDFAMGHPB_TypeInfo,0);
LAB_03643848:
      __this_00 = (DADDKDFBPIJ_T__o *)(*pVVar6->methodPtr)(pGVar5,pVVar6->method);
      if (__this_00 == (DADDKDFBPIJ_T__o *)0x0) goto LAB_036438f8;
      pIVar8 = DADDKDFBPIJ<object>__COMOKILJDGJ
                         (__this_00,pSVar3,Method_DADDKDFBPIJ<CCLKPGBIBOP>_COMOKILJDGJ__);
      if (pIVar8 == (Il2CppObject *)0x0) {
        pSVar3 = System_String__Concat
                           (StringLiteral_10689/*"QuestCondition.PackFunction Pack info not found "*/,pSVar3,StringLiteral_1395/*". change to actual raid server for download packs"*/,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
        if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_036438f8;
        pIVar11 = (Il2CppObject *)&StringLiteral_18068/*"error"*/;
        goto LAB_036436bc;
      }
      bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((System_String_o *)pIVar8[2].klass,(MethodInfo *)0x0);
      pIVar11 = (Il2CppObject *)&StringLiteral_1567/*"0"*/;
      if (!bVar2) {
        pIVar11 = pIVar8 + 2;
      }
    }
    else {
      bVar2 = System_String__op_Equality(a,StringLiteral_9366/*"NeedReload"*/,(MethodInfo *)0x0);
      if (!bVar2) {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        if (args != (System_Object_array *)0x0) {
          pSVar3 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
          if ((pSVar3 != (System_String_o *)0x0) &&
             (lVar7 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class), lVar7 == 0
             )) {
            uVar9 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar9,0);
          }
          if ((int)args->max_length != 0) {
                    /* try { // try from 036437f0 to 03743927 has its CatchHandler @ 036437f0
                       catch() { ... } // from try @ 036437f0 with catch @ 036437f0
                       catch() { ... } // from try @ 03643a44 with catch @ 036437f0
                       catch() { ... } // from try @ 03643ad8 with catch @ 036437f0
                       catch() { ... } // from try @ 03643ae0 with catch @ 036437f0
                       catch() { ... } // from try @ 03643b94 with catch @ 036437f0 */
            args->m_Items[0] = (Il2CppObject *)pSVar3;
            thunk_FUN_01c20e04(args->m_Items,pSVar3);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogErrorFormat(StringLiteral_10688/*"QuestCondition.PackFunction - unknown property: "{0}""*/,args,(MethodInfo *)0x0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        goto LAB_036438f8;
      }
      pAVar4 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pAVar4 == (AAPGCAPGBLG_o *)0x0) goto LAB_036438f8;
      pIVar11 = (Il2CppObject *)&StringLiteral_1567/*"0"*/;
      if ((pAVar4->fields)._KDBLLEPMIPL_k__BackingField != false) {
        pIVar11 = (Il2CppObject *)&StringLiteral_1606/*"1"*/;
      }
    }
  }
  if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
LAB_036436bc:
                    /* try { // try from 036436c0 to 03743727 has its CatchHandler @ 0364373c */
    (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)pIVar11->klass;
    thunk_FUN_01c20e04(&JDGILABGBGH->fields);
    return;
  }
LAB_036438f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OFKHAGFCLDB(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x354390C]
// QuestCondition$$OFKHAGFCLDB @ RVA 0x354390C

void QuestCondition__OFKHAGFCLDB
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  System_String_o *pSVar3;
  FEPPOONJCGI_o *__this_00;
  EKGDLIKHEMA_o *pEVar4;
  Roster_o *pAVar5;
  
                    /* try { // try from 03643928 to 0374394f has its CatchHandler @ 03643b00 */
  if ((DAT_04568b0b & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_5615/*"Earned"*/);
    FUN_01bab630(&StringLiteral_2722/*"AchievementsFunction: unknown property: '"*/);
    FUN_01bab630(&StringLiteral_853/*"'!"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568b0b = 1;
  }
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
                    /* try { // try from 03643984 to 037439af has its CatchHandler @ 03643afc */
    pSVar3 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality
                      ((ACCIJLGMHOO->fields).KCPPJGKAILM,StringLiteral_5615/*"Earned"*/,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar3 = System_String__Concat
                         (StringLiteral_2722/*"AchievementsFunction: unknown property: '"*/,(ACCIJLGMHOO->fields).KCPPJGKAILM,StringLiteral_853/*"'!"*/,
                          (MethodInfo *)0x0);
      KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar3,(MethodInfo *)0x0);
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
                    /* try { // try from 036439e0 to 037439eb has its CatchHandler @ 03643af4 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar5 != (Roster_o *)0x0) &&
       (__this_00 = (pAVar5->fields).IMJJJJJMMHL, __this_00 != (FEPPOONJCGI_o *)0x0)) {
      pEVar4 = FEPPOONJCGI__CMIEOMMDGLC(__this_00,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 03643a28 to 03743a43 has its CatchHandler @ 03643af0 */
      puVar1 = &StringLiteral_1567/*"0"*/;
      if (pEVar4 != (EKGDLIKHEMA_o *)0x0) {
        puVar1 = &StringLiteral_1606/*"1"*/;
      }
      if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
                    /* try { // try from 03643a44 to 03743acf has its CatchHandler @ 036437f0 */
        (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)*puVar1;
        thunk_FUN_01c20e04(&JDGILABGBGH->fields);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool FDLBONBHJNO(string OMNMKNMLLMF, string KLEPJKBIGPK)  [RVA 0x3543A9C]
// QuestCondition$$FDLBONBHJNO @ RVA 0x3543A9C

bool QuestCondition__FDLBONBHJNO
               (QuestCondition_o *__this,System_String_o *OMNMKNMLLMF,System_String_o *KLEPJKBIGPK,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__op_Equality(OMNMKNMLLMF,KLEPJKBIGPK,(MethodInfo *)0x0);
  return bVar1;
}


// ===== private void DKBJDHLGNLP(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x3543AAC]
// QuestCondition$$DKBJDHLGNLP @ RVA 0x3543AAC

void QuestCondition__DKBJDHLGNLP
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  bool bVar16;
  uint16_t c;
  uint32_t uVar17;
  QuestCondition_EOMIPPCJNMH_o *__this_00;
  System_String_o *pSVar18;
  Il2CppMethodPointer *ppIVar19;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Func_TSource__bool__o *predicate;
  Il2CppObject *pIVar20;
  long lVar21;
  HOOAAGABMBL_o *pHVar22;
  System_String_o *pSVar23;
  KCJCIJHMEJF_c *pKVar24;
  Il2CppClass *pIVar25;
  undefined8 *puVar26;
  ulong uVar27;
  int32_t *piVar28;
  QuestCondition_EOMIPPCJNMH_Fields *pLVar29;
  KCJCIJHMEJF_o *pKVar30;
  System_Enum_o local_78;
  undefined4 local_68;
  int32_t local_54;
  
                    /* try { // try from 03643ad0 to 03743ad3 has its CatchHandler @ 03643af8 */
                    /* try { // try from 03643ad4 to 03743ad7 has its CatchHandler @ 03643aec */
                    /* try { // try from 03643ad8 to 03743adb has its CatchHandler @ 036437f0 */
                    /* try { // try from 03643adc to 03743adf has its CatchHandler @ 03643ae8 */
                    /* try { // try from 03643ae0 to 03743b0f has its CatchHandler @ 036437f0 */
  if ((DAT_04568b0c & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03643adc with catch @ 03643ae8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03643ad4 with catch @ 03643aec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03643a28 with catch @ 03643af0
                        */
    FUN_01bab630(&char_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036439e0 with catch @ 03643af4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03643ad0 with catch @ 03643af8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03643984 with catch @ 03643afc
                        */
    FUN_01bab630(&DPJEINFKCGA_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03643928 with catch @ 03643b00
                        */
    FUN_01bab630(&Method_LEGDPJHPEOB_EOMIPPCJNMH_LJNIEJCLFEP__);
                    /* try { // try from 03643b10 to 03743b13 has its CatchHandler @ 03643b24 */
    FUN_01bab630(&QuestCondition_EOMIPPCJNMH_TypeInfo);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<NCCFNKMICGK>__);
                    /* catch() { ... } // from try @ 03643b10 with catch @ 03643b24 */
                    /* try { // try from 03643b2c to 03743b93 has its CatchHandler @ 03643ba8 */
    FUN_01bab630(&System_Func<NCCFNKMICGK,_bool>_TypeInfo);
    FUN_01bab630(&IAMJIBPAOBA_TypeInfo);
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    FUN_01bab630(&MDKJJDGLPKO_TypeInfo);
    FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_12099/*"ShowLastChance"*/);
    FUN_01bab630(&StringLiteral_167/*" "*/);
                    /* try { // try from 03643b94 to 03743b9f has its CatchHandler @ 036437f0 */
    FUN_01bab630(&StringLiteral_9800/*"OfferFunction: can't find offer by name '"*/);
                    /* try { // try from 03643ba0 to 03743ba7 has its CatchHandler @ 03643ba8 */
    FUN_01bab630(&StringLiteral_9801/*"OfferFunction: unknown property: '"*/);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03643b2c with catch @ 03643ba8
                       catch(type#2 @ 00000000) { ... } // from try @ 03643ba0 with catch @ 03643ba8
                        */
                    /* try { // try from 03643bac to 03743d43 has its CatchHandler @ 03643bac
                       catch() { ... } // from try @ 03643bac with catch @ 03643bac
                       catch() { ... } // from try @ 03643f94 with catch @ 03643bac
                       catch() { ... } // from try @ 03644060 with catch @ 03643bac
                       catch() { ... } // from try @ 03644068 with catch @ 03643bac
                       catch() { ... } // from try @ 03644188 with catch @ 03643bac */
    FUN_01bab630(&StringLiteral_13826/*"Title"*/);
    FUN_01bab630(&StringLiteral_11074/*"RealPrice"*/);
    FUN_01bab630(&StringLiteral_2818/*"AllItemsRecieved"*/);
    FUN_01bab630(&StringLiteral_13821/*"TimerName"*/);
    FUN_01bab630(&StringLiteral_6505/*"FocusOnBuy"*/);
    FUN_01bab630(&StringLiteral_12392/*"State"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_13816/*"TimerActive"*/);
    FUN_01bab630(&StringLiteral_853/*"'!"*/);
    FUN_01bab630(&StringLiteral_6040/*"Exists"*/);
    FUN_01bab630(&StringLiteral_7340/*"Image"*/);
    FUN_01bab630(&StringLiteral_10509/*"ProfitImage"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_5304/*"Description"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568b0c = 1;
  }
  local_54 = 0;
  __this_00 = (QuestCondition_EOMIPPCJNMH_o *)thunk_FUN_01bda818(QuestCondition_EOMIPPCJNMH_TypeInfo);
  QuestCondition_EOMIPPCJNMH___ctor(__this_00,(MethodInfo *)0x0);
  if ((ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) ||
     (pSVar18 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0),
     __this_00 == (QuestCondition_EOMIPPCJNMH_o *)0x0)) goto LAB_036447b0;
  pLVar29 = &__this_00->fields;
  pLVar29->offerName = pSVar18;
  thunk_FUN_01c20e04(pLVar29,pSVar18);
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
  pKVar30 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
  if (pKVar30 == (KCJCIJHMEJF_o *)0x0) goto LAB_036447b0;
  pKVar24 = pKVar30->klass;
  uVar2._0_1_ = (pKVar24->_2).rank;
  uVar2._1_1_ = (pKVar24->_2).minimumAlignment;
  uVar27 = (ulong)uVar2;
  if (uVar27 != 0) {
    piVar28 = &((pKVar24->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 03643d44 to 03743d6b has its CatchHandler @ 036440d4 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
          (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
        ppIVar19 = &pKVar24->vtable[*piVar28 + 9].methodPtr;
        goto LAB_03643d74;
      }
      uVar27 = uVar27 - 1;
      piVar28 = piVar28 + 4;
    } while (uVar27 != 0);
  }
  ppIVar19 = (Il2CppMethodPointer *)FUN_01b81914(pKVar30,KCJCIJHMEJF_TypeInfo,9);
LAB_03643d74:
  source = (System_Collections_Generic_IEnumerable_TSource__o *)
           (**ppIVar19)(pKVar30,(MethodInfo *)ppIVar19[1]);
  predicate = (System_Func_TSource__bool__o *)
              thunk_FUN_01bda818(System_Func<NCCFNKMICGK,_bool>_TypeInfo);
                    /* try { // try from 03643da0 to 03743dcb has its CatchHandler @ 036440d0 */
  System_Func<object,_bool>___ctor();
  pIVar20 = System_Linq_Enumerable__FirstOrDefault<object>
                      (source,predicate,Method_System_Linq_Enumerable_FirstOrDefault<NCCFNKMICGK>__)
  ;
  bVar16 = System_String__op_Equality
                     ((ACCIJLGMHOO->fields).KCPPJGKAILM,StringLiteral_6040/*"Exists"*/,(MethodInfo *)0x0);
  if (!bVar16) {
    if (pIVar20 == (Il2CppObject *)0x0) {
                    /* try { // try from 03643ecc to 03743ed3 has its CatchHandler @ 036440bc */
      pSVar18 = pLVar29->offerName;
      puVar26 = &StringLiteral_9800/*"OfferFunction: can't find offer by name '"*/;
      goto LAB_036443d0;
    }
    pSVar18 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
    uVar17 = <PrivateImplementationDetails>__ComputeStringHash(pSVar18,(MethodInfo *)0x0);
                    /* try { // try from 03643e1c to 03743e1f has its CatchHandler @ 03644074 */
    if (uVar17 < 0x66de7a0a) {
                    /* try { // try from 03643e24 to 03743e2f has its CatchHandler @ 036440c4 */
      if (uVar17 < 0x24d471aa) {
                    /* try { // try from 03643e38 to 03743e4b has its CatchHandler @ 036440dc */
        if (uVar17 == 0x64ca5dc) {
                    /* catch() { ... } // from try @ 03643e8c with catch @ 036440a4 */
                    /* catch() { ... } // from try @ 03644048 with catch @ 036440a8 */
                    /* catch() { ... } // from try @ 03643f70 with catch @ 036440ac */
                    /* catch() { ... } // from try @ 03643edc with catch @ 036440b0 */
                    /* catch() { ... } // from try @ 03644040 with catch @ 036440b4 */
                    /* catch() { ... } // from try @ 0364403c with catch @ 036440b8 */
          bVar16 = System_String__op_Equality(pSVar18,StringLiteral_10509/*"ProfitImage"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03643ecc with catch @ 036440bc */
          if (bVar16) {
                    /* catch() { ... } // from try @ 03643e5c with catch @ 036440c0 */
                    /* catch() { ... } // from try @ 03643e24 with catch @ 036440c4 */
            pIVar25 = pIVar20->klass;
            uVar7._0_1_ = (pIVar25->_2).rank;
            uVar7._1_1_ = (pIVar25->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 03643e6c with catch @ 036440c8 */
                    /* catch() { ... } // from try @ 03644034 with catch @ 036440cc */
            uVar27 = (ulong)uVar7;
                    /* catch() { ... } // from try @ 03643da0 with catch @ 036440d0 */
                    /* catch() { ... } // from try @ 03643d44 with catch @ 036440d4 */
            if (uVar27 != 0) {
                    /* catch() { ... } // from try @ 03644044 with catch @ 036440d8
                       catch() { ... } // from try @ 0364404c with catch @ 036440d8 */
                    /* catch() { ... } // from try @ 03643e38 with catch @ 036440dc */
              piVar28 = &((pIVar25->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                    (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                    /* try { // try from 03644520 to 0374452f has its CatchHandler @ 036445e8 */
                  ppIVar19 = &pIVar25->vtable[*piVar28 + 8].methodPtr;
                  goto LAB_03644530;
                }
                uVar27 = uVar27 - 1;
                piVar28 = piVar28 + 4;
                    /* try { // try from 036440f4 to 037440f7 has its CatchHandler @ 03644108 */
              } while (uVar27 != 0);
            }
            ppIVar19 = (Il2CppMethodPointer *)FUN_01b81914(pIVar20,NCCFNKMICGK_TypeInfo,8);
LAB_03644530:
                    /* try { // try from 03644530 to 037445bf has its CatchHandler @ 03644358 */
            lVar21 = (**ppIVar19)(pIVar20,(MethodInfo *)ppIVar19[1]);
            if ((lVar21 != 0) && (JDGILABGBGH != (MMFIDKMDADC_o *)0x0)) {
              pSVar18 = *(System_String_o **)(lVar21 + 0x238);
              goto LAB_03643df0;
            }
            goto LAB_036447b0;
          }
        }
        else if (uVar17 == 0x1deca496) {
                    /* catch() { ... } // from try @ 036440f4 with catch @ 03644108 */
                    /* try { // try from 03644118 to 03744187 has its CatchHandler @ 0364419c */
          bVar16 = System_String__op_Equality(pSVar18,StringLiteral_12392/*"State"*/,(MethodInfo *)0x0);
          if (bVar16) {
            pIVar25 = pIVar20->klass;
            uVar8._0_1_ = (pIVar25->_2).rank;
            uVar8._1_1_ = (pIVar25->_2).minimumAlignment;
            uVar27 = (ulong)uVar8;
            if (uVar27 != 0) {
              piVar28 = &((pIVar25->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                    (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                  ppIVar19 = &pIVar25->vtable[*piVar28 + 1].methodPtr;
                  goto LAB_0364455c;
                }
                uVar27 = uVar27 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar27 != 0);
            }
            ppIVar19 = (Il2CppMethodPointer *)FUN_01b81914(pIVar20,NCCFNKMICGK_TypeInfo,1);
LAB_0364455c:
            lVar21 = (**ppIVar19)(pIVar20,(MethodInfo *)ppIVar19[1]);
            if (lVar21 == 0) goto LAB_036447b0;
            local_78.klass = (System_Enum_c *)DPJEINFKCGA_TypeInfo;
            local_68 = *(undefined4 *)(lVar21 + 0x18);
LAB_03644588:
            local_78.monitor = (void *)0xffffffffffffffff;
            pSVar18 = System_Enum__ToString(&local_78,(MethodInfo *)0x0);
            goto joined_r0x036445b8;
          }
        }
        else {
                    /* try { // try from 03643e5c to 03743e63 has its CatchHandler @ 036440c0 */
                    /* try { // try from 03643e6c to 03743e73 has its CatchHandler @ 036440c8 */
          if ((uVar17 == 0x24d471a9) &&
             (bVar16 = System_String__op_Equality(pSVar18,StringLiteral_13826/*"Title"*/,(MethodInfo *)0x0),
             bVar16)) {
            pIVar25 = pIVar20->klass;
            uVar3._0_1_ = (pIVar25->_2).rank;
            uVar3._1_1_ = (pIVar25->_2).minimumAlignment;
                    /* try { // try from 03643e8c to 03743e93 has its CatchHandler @ 036440a4 */
            uVar27 = (ulong)uVar3;
            if (uVar27 != 0) {
                    /* try { // try from 03643e9c to 03743ea3 has its CatchHandler @ 0364409c */
              piVar28 = &((pIVar25->_1).interfaceOffsets)->offset;
              do {
                    /* try { // try from 03643ea4 to 03743eaf has its CatchHandler @ 03644078 */
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                    (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                    /* try { // try from 03644424 to 0374444b has its CatchHandler @ 03644608 */
                  ppIVar19 = &pIVar25->vtable[*piVar28 + 8].methodPtr;
                  goto LAB_03644428;
                }
                uVar27 = uVar27 - 1;
                    /* try { // try from 03643eb0 to 03743eb7 has its CatchHandler @ 03644098 */
                piVar28 = piVar28 + 4;
              } while (uVar27 != 0);
            }
            ppIVar19 = (Il2CppMethodPointer *)FUN_01b81914(pIVar20,NCCFNKMICGK_TypeInfo,8);
LAB_03644428:
            lVar21 = (**ppIVar19)(pIVar20,(MethodInfo *)ppIVar19[1]);
            if ((lVar21 != 0) && (JDGILABGBGH != (MMFIDKMDADC_o *)0x0)) {
              pSVar18 = *(System_String_o **)(lVar21 + 0xa0);
              goto LAB_03643df0;
            }
            goto LAB_036447b0;
          }
        }
      }
      else if (uVar17 == 0x35e9358b) {
        bVar16 = System_String__op_Equality(pSVar18,StringLiteral_2818/*"AllItemsRecieved"*/,(MethodInfo *)0x0);
        if (bVar16) {
          pIVar25 = pIVar20->klass;
          uVar11._0_1_ = (pIVar25->_2).rank;
          uVar11._1_1_ = (pIVar25->_2).minimumAlignment;
          uVar27 = (ulong)uVar11;
          if (uVar27 != 0) {
            piVar28 = &((pIVar25->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                  (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                    /* catch() { ... } // from try @ 036445c8 with catch @ 03644600 */
                    /* catch() { ... } // from try @ 03644480 with catch @ 03644604 */
                    /* catch() { ... } // from try @ 03644424 with catch @ 03644608 */
                    /* catch() { ... } // from try @ 036445c0 with catch @ 0364460c */
                ppIVar19 = &pIVar25->vtable[*piVar28 + 1].methodPtr;
                goto LAB_03644610;
              }
              uVar27 = uVar27 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar27 != 0);
          }
          ppIVar19 = (Il2CppMethodPointer *)FUN_01b81914(pIVar20,NCCFNKMICGK_TypeInfo,1);
LAB_03644610:
          lVar21 = (**ppIVar19)(pIVar20,(MethodInfo *)ppIVar19[1]);
                    /* try { // try from 0364461c to 0374461f has its CatchHandler @ 03644630 */
          if (lVar21 == 0) goto LAB_036447b0;
          cVar1 = *(char *)(lVar21 + 0x28);
LAB_036446a4:
                    /* try { // try from 036446ac to 037446b3 has its CatchHandler @ 036446b4 */
                    /* catch() { ... } // from try @ 03644638 with catch @ 036446b4
                       catch() { ... } // from try @ 036446ac with catch @ 036446b4 */
          puVar26 = &StringLiteral_1567/*"0"*/;
                    /* try { // try from 036446b8 to 03744acb has its CatchHandler @ 036446b8
                       catch() { ... } // from try @ 036446b8 with catch @ 036446b8
                       catch() { ... } // from try @ 03645668 with catch @ 036446b8
                       catch() { ... } // from try @ 036458b8 with catch @ 036446b8
                       catch() { ... } // from try @ 036458e4 with catch @ 036446b8
                       catch() { ... } // from try @ 03645a18 with catch @ 036446b8
                       catch() { ... } // from try @ 03645a28 with catch @ 036446b8
                       catch() { ... } // from try @ 03645c9c with catch @ 036446b8
                       catch() { ... } // from try @ 03645ce8 with catch @ 036446b8
                       catch() { ... } // from try @ 03645dfc with catch @ 036446b8 */
          if (cVar1 != '\0') {
            puVar26 = &StringLiteral_1606/*"1"*/;
          }
          goto joined_r0x036445f8;
        }
      }
      else {
                    /* try { // try from 03643f94 to 03744033 has its CatchHandler @ 03643bac */
        if (uVar17 == 0x590ca79a) {
          bVar16 = System_String__op_Equality(pSVar18,StringLiteral_7340/*"Image"*/,(MethodInfo *)0x0);
          if (bVar16) {
            pIVar25 = pIVar20->klass;
            uVar12._0_1_ = (pIVar25->_2).rank;
            uVar12._1_1_ = (pIVar25->_2).minimumAlignment;
            uVar27 = (ulong)uVar12;
            if (uVar27 != 0) {
              piVar28 = &((pIVar25->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                    (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                    /* catch() { ... } // from try @ 0364461c with catch @ 03644630 */
                  ppIVar19 = &pIVar25->vtable[*piVar28 + 8].methodPtr;
                  goto LAB_03644638;
                }
                uVar27 = uVar27 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar27 != 0);
            }
            ppIVar19 = (Il2CppMethodPointer *)FUN_01b81914(pIVar20,NCCFNKMICGK_TypeInfo,8);
LAB_03644638:
                    /* try { // try from 03644638 to 0374469f has its CatchHandler @ 036446b4 */
            lVar21 = (**ppIVar19)(pIVar20,(MethodInfo *)ppIVar19[1]);
            if ((lVar21 == 0) || (JDGILABGBGH == (MMFIDKMDADC_o *)0x0)) goto LAB_036447b0;
            pSVar18 = *(System_String_o **)(lVar21 + 0x20);
            goto LAB_03643df0;
          }
        }
        else if ((uVar17 == 0x66de7a09) &&
                (bVar16 = System_String__op_Equality(pSVar18,StringLiteral_5304/*"Description"*/,(MethodInfo *)0x0),
                bVar16)) {
          pIVar25 = pIVar20->klass;
          uVar5._0_1_ = (pIVar25->_2).rank;
          uVar5._1_1_ = (pIVar25->_2).minimumAlignment;
          uVar27 = (ulong)uVar5;
          if (uVar27 != 0) {
            piVar28 = &((pIVar25->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                  (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                ppIVar19 = &pIVar25->vtable[*piVar28 + 8].methodPtr;
                goto LAB_036444cc;
              }
              uVar27 = uVar27 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar27 != 0);
          }
          ppIVar19 = (Il2CppMethodPointer *)FUN_01b81914(pIVar20,NCCFNKMICGK_TypeInfo,8);
LAB_036444cc:
          lVar21 = (**ppIVar19)(pIVar20,(MethodInfo *)ppIVar19[1]);
          if ((lVar21 == 0) || (JDGILABGBGH == (MMFIDKMDADC_o *)0x0)) goto LAB_036447b0;
          pSVar18 = *(System_String_o **)(lVar21 + 0x230);
          goto LAB_03643df0;
        }
      }
    }
    else {
                    /* try { // try from 03643edc to 03743ee3 has its CatchHandler @ 036440b0 */
      if (uVar17 < 0xc01231c5) {
        if (uVar17 == 0x814f92a9) {
          bVar16 = System_String__op_Equality(pSVar18,StringLiteral_13821/*"TimerName"*/,(MethodInfo *)0x0);
          if (bVar16) {
                    /* try { // try from 03644188 to 03744193 has its CatchHandler @ 03643bac */
            pIVar25 = pIVar20->klass;
            uVar9._0_1_ = (pIVar25->_2).rank;
            uVar9._1_1_ = (pIVar25->_2).minimumAlignment;
                    /* try { // try from 03644194 to 0374419b has its CatchHandler @ 0364419c */
            uVar27 = (ulong)uVar9;
                    /* catch() { ... } // from try @ 03644118 with catch @ 0364419c
                       catch() { ... } // from try @ 03644194 with catch @ 0364419c */
            if (uVar27 != 0) {
              piVar28 = &((pIVar25->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                    (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                  ppIVar19 = &pIVar25->vtable[*piVar28 + 6].methodPtr;
                  goto LAB_036445ac;
                }
                uVar27 = uVar27 - 1;
                piVar28 = piVar28 + 4;
              } while (uVar27 != 0);
            }
            ppIVar19 = (Il2CppMethodPointer *)FUN_01b81914(pIVar20,NCCFNKMICGK_TypeInfo,6);
LAB_036445ac:
            pSVar18 = (System_String_o *)(**ppIVar19)(pIVar20,(MethodInfo *)ppIVar19[1]);
joined_r0x036445b8:
            if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_036447b0;
            goto LAB_03643df0;
          }
        }
        else {
                    /* try { // try from 03643f00 to 03743f07 has its CatchHandler @ 0364407c */
          if (uVar17 == 0xc01231c4) {
            bVar16 = System_String__op_Equality(pSVar18,StringLiteral_13816/*"TimerActive"*/,(MethodInfo *)0x0);
            if (bVar16) {
              pIVar25 = pIVar20->klass;
              uVar10._0_1_ = (pIVar25->_2).rank;
              uVar10._1_1_ = (pIVar25->_2).minimumAlignment;
              uVar27 = (ulong)uVar10;
              if (uVar27 != 0) {
                piVar28 = &((pIVar25->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                      (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                    /* try { // try from 036445c8 to 037445cb has its CatchHandler @ 03644600 */
                    /* try { // try from 036445cc to 037445cf has its CatchHandler @ 036445f4 */
                    /* try { // try from 036445d0 to 037445d3 has its CatchHandler @ 036445f0 */
                    ppIVar19 = &pIVar25->vtable[*piVar28 + 4].methodPtr;
                    goto LAB_036445d4;
                  }
                  uVar27 = uVar27 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar27 != 0);
              }
              ppIVar19 = (Il2CppMethodPointer *)FUN_01b81914(pIVar20,NCCFNKMICGK_TypeInfo,4);
LAB_036445d4:
                    /* try { // try from 036445d4 to 037445d7 has its CatchHandler @ 03644358 */
                    /* try { // try from 036445d8 to 037445db has its CatchHandler @ 036445e4 */
                    /* try { // try from 036445dc to 0374461b has its CatchHandler @ 03644358 */
              uVar27 = (**ppIVar19)(pIVar20,(MethodInfo *)ppIVar19[1]);
                    /* catch() { ... } // from try @ 036445d8 with catch @ 036445e4 */
                    /* catch() { ... } // from try @ 03644520 with catch @ 036445e8 */
                    /* catch() { ... } // from try @ 03644504 with catch @ 036445ec */
                    /* catch() { ... } // from try @ 036445d0 with catch @ 036445f0 */
              puVar26 = &StringLiteral_1606/*"1"*/;
                    /* catch() { ... } // from try @ 036445cc with catch @ 036445f4 */
              if ((uVar27 & 1) == 0) {
                puVar26 = &StringLiteral_1567/*"0"*/;
              }
              goto joined_r0x036445f8;
            }
          }
          else {
                    /* try { // try from 03643f10 to 03743f17 has its CatchHandler @ 03644084 */
                    /* try { // try from 03643f18 to 03743f23 has its CatchHandler @ 03644090 */
                    /* try { // try from 03643f24 to 03743f2b has its CatchHandler @ 0364408c */
            if ((uVar17 == 0x6a9295c2) &&
               (bVar16 = System_String__op_Equality(pSVar18,StringLiteral_11074/*"RealPrice"*/,(MethodInfo *)0x0),
               bVar16)) {
              pIVar25 = pIVar20->klass;
              uVar4._0_1_ = (pIVar25->_2).rank;
              uVar4._1_1_ = (pIVar25->_2).minimumAlignment;
              uVar27 = (ulong)uVar4;
              if (uVar27 != 0) {
                piVar28 = &((pIVar25->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                      (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                    ppIVar19 = &pIVar25->vtable[*piVar28 + 8].methodPtr;
                    goto LAB_03644454;
                  }
                  uVar27 = uVar27 - 1;
                  piVar28 = piVar28 + 4;
                } while (uVar27 != 0);
              }
                    /* try { // try from 03643f70 to 03743f93 has its CatchHandler @ 036440ac */
              ppIVar19 = (Il2CppMethodPointer *)FUN_01b81914(pIVar20,NCCFNKMICGK_TypeInfo,8);
LAB_03644454:
              pHVar22 = (HOOAAGABMBL_o *)(**ppIVar19)(pIVar20,(MethodInfo *)ppIVar19[1]);
              if (pHVar22 != (HOOAAGABMBL_o *)0x0) {
                pSVar18 = HOOAAGABMBL__ANEHPKMBLHA(pHVar22,(MethodInfo *)0x0);
                bVar16 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar18,(MethodInfo *)0x0);
                if (!bVar16) {
                  pIVar25 = pIVar20->klass;
                  uVar15._0_1_ = (pIVar25->_2).rank;
                  uVar15._1_1_ = (pIVar25->_2).minimumAlignment;
                    /* try { // try from 03644480 to 037444ab has its CatchHandler @ 03644604 */
                  uVar27 = (ulong)uVar15;
                  if (uVar27 != 0) {
                    piVar28 = &((pIVar25->_1).interfaceOffsets)->offset;
                    do {
                      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                          (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                        ppIVar19 = &pIVar25->vtable[*piVar28 + 8].methodPtr;
                        goto LAB_036446d4;
                      }
                      uVar27 = uVar27 - 1;
                      piVar28 = piVar28 + 4;
                    } while (uVar27 != 0);
                  }
                  ppIVar19 = (Il2CppMethodPointer *)FUN_01b81914(pIVar20,NCCFNKMICGK_TypeInfo,8);
LAB_036446d4:
                  pHVar22 = (HOOAAGABMBL_o *)(**ppIVar19)(pIVar20,(MethodInfo *)ppIVar19[1]);
                  if ((pHVar22 == (HOOAAGABMBL_o *)0x0) ||
                     (pSVar23 = HOOAAGABMBL__ANEHPKMBLHA(pHVar22,(MethodInfo *)0x0),
                     pSVar23 == (System_String_o *)0x0)) goto LAB_036447b0;
                  c = System_String__get_Chars(pSVar23,0,(MethodInfo *)0x0);
                  if ((char_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564(char_TypeInfo);
                  }
                  bVar16 = System_Char__IsDigit(c,(MethodInfo *)0x0);
                  if (bVar16) {
                    pSVar18 = System_String__Concat(StringLiteral_167/*" "*/,pSVar18,(MethodInfo *)0x0);
                  }
                }
                pSVar23 = string_TypeInfo->static_fields->Empty;
                if ((MDKJJDGLPKO_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pSVar18 = MDKJJDGLPKO__AKDFFHMBJID(pSVar18,pSVar23,&local_54,(MethodInfo *)0x0);
                if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
                  (JDGILABGBGH->fields).HPACPFLKHPK = pSVar18;
                  thunk_FUN_01c20e04(&JDGILABGBGH->fields,pSVar18);
                  (JDGILABGBGH->fields).AOOEHPBLBGM = local_54 + (JDGILABGBGH->fields).AOOEHPBLBGM;
                  return;
                }
              }
              goto LAB_036447b0;
            }
          }
        }
      }
      else if (uVar17 == 0xd50beb6e) {
        bVar16 = System_String__op_Equality(pSVar18,StringLiteral_6505/*"FocusOnBuy"*/,(MethodInfo *)0x0);
        if (bVar16) {
          pIVar25 = pIVar20->klass;
          uVar13._0_1_ = (pIVar25->_2).rank;
          uVar13._1_1_ = (pIVar25->_2).minimumAlignment;
          uVar27 = (ulong)uVar13;
          if (uVar27 != 0) {
            piVar28 = &((pIVar25->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                  (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                ppIVar19 = &pIVar25->vtable[*piVar28 + 8].methodPtr;
                goto LAB_03644664;
              }
              uVar27 = uVar27 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar27 != 0);
          }
                    /* try { // try from 03644358 to 03744423 has its CatchHandler @ 03644358
                       catch() { ... } // from try @ 03644358 with catch @ 03644358
                       catch() { ... } // from try @ 03644530 with catch @ 03644358
                       catch() { ... } // from try @ 036445d4 with catch @ 03644358
                       catch() { ... } // from try @ 036445dc with catch @ 03644358
                       catch() { ... } // from try @ 036446a0 with catch @ 03644358 */
          ppIVar19 = (Il2CppMethodPointer *)FUN_01b81914(pIVar20,NCCFNKMICGK_TypeInfo,8);
LAB_03644664:
          lVar21 = (**ppIVar19)(pIVar20,(MethodInfo *)ppIVar19[1]);
          if ((lVar21 != 0) && (JDGILABGBGH != (MMFIDKMDADC_o *)0x0)) {
            pSVar18 = *(System_String_o **)(lVar21 + 0x270);
            goto LAB_03643df0;
          }
          goto LAB_036447b0;
        }
      }
      else if (uVar17 == 0xd33d7e48) {
        bVar16 = System_String__op_Equality(pSVar18,StringLiteral_12099/*"ShowLastChance"*/,(MethodInfo *)0x0);
        if (bVar16) {
          pIVar25 = pIVar20->klass;
          uVar14._0_1_ = (pIVar25->_2).rank;
          uVar14._1_1_ = (pIVar25->_2).minimumAlignment;
          uVar27 = (ulong)uVar14;
          if (uVar27 != 0) {
            piVar28 = &((pIVar25->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                  (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                ppIVar19 = &pIVar25->vtable[*piVar28 + 8].methodPtr;
                goto LAB_03644690;
              }
              uVar27 = uVar27 - 1;
              piVar28 = piVar28 + 4;
            } while (uVar27 != 0);
          }
          ppIVar19 = (Il2CppMethodPointer *)FUN_01b81914(pIVar20,NCCFNKMICGK_TypeInfo,8);
LAB_03644690:
          lVar21 = (**ppIVar19)(pIVar20,(MethodInfo *)ppIVar19[1]);
          if (lVar21 == 0) goto LAB_036447b0;
                    /* try { // try from 036446a0 to 037446ab has its CatchHandler @ 03644358 */
          cVar1 = *(char *)(lVar21 + 0x268);
          goto LAB_036446a4;
        }
      }
      else {
                    /* try { // try from 03644034 to 0374403b has its CatchHandler @ 036440cc */
                    /* try { // try from 0364403c to 0374403f has its CatchHandler @ 036440b8 */
                    /* try { // try from 03644040 to 03744043 has its CatchHandler @ 036440b4 */
                    /* try { // try from 03644044 to 03744047 has its CatchHandler @ 036440d8 */
                    /* try { // try from 03644048 to 0374404b has its CatchHandler @ 036440a8 */
                    /* try { // try from 0364404c to 0374404f has its CatchHandler @ 036440d8 */
                    /* try { // try from 03644050 to 03744053 has its CatchHandler @ 036440a0 */
                    /* try { // try from 03644054 to 03744057 has its CatchHandler @ 03644094 */
                    /* try { // try from 03644058 to 0374405b has its CatchHandler @ 03644088 */
        if ((uVar17 == 0xd155d06d) &&
           (bVar16 = System_String__op_Equality(pSVar18,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0),
           bVar16)) {
                    /* try { // try from 0364405c to 0374405f has its CatchHandler @ 03644080 */
                    /* try { // try from 03644060 to 03744063 has its CatchHandler @ 03643bac */
          pIVar25 = pIVar20->klass;
          uVar6._0_1_ = (pIVar25->_2).rank;
          uVar6._1_1_ = (pIVar25->_2).minimumAlignment;
                    /* try { // try from 03644064 to 03744067 has its CatchHandler @ 03644070 */
                    /* try { // try from 03644068 to 037440f3 has its CatchHandler @ 03643bac */
          uVar27 = (ulong)uVar6;
                    /* catch() { ... } // from try @ 03644064 with catch @ 03644070 */
          if (uVar27 != 0) {
                    /* catch() { ... } // from try @ 03643e1c with catch @ 03644074 */
                    /* catch() { ... } // from try @ 03643ea4 with catch @ 03644078 */
            piVar28 = &((pIVar25->_1).interfaceOffsets)->offset;
            do {
                    /* catch() { ... } // from try @ 03643f00 with catch @ 0364407c */
                    /* catch() { ... } // from try @ 0364405c with catch @ 03644080 */
                    /* catch() { ... } // from try @ 03643f10 with catch @ 03644084 */
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar28 + -2))->interfaceType ==
                  (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                    /* try { // try from 036444e8 to 037444ef has its CatchHandler @ 036445fc */
                ppIVar19 = &pIVar25->vtable[*piVar28 + 5].methodPtr;
                goto LAB_036444f8;
              }
                    /* catch() { ... } // from try @ 03644058 with catch @ 03644088 */
              uVar27 = uVar27 - 1;
                    /* catch() { ... } // from try @ 03643f24 with catch @ 0364408c */
              piVar28 = piVar28 + 4;
                    /* catch() { ... } // from try @ 03643f18 with catch @ 03644090 */
            } while (uVar27 != 0);
          }
                    /* catch() { ... } // from try @ 03644054 with catch @ 03644094 */
                    /* catch() { ... } // from try @ 03643eb0 with catch @ 03644098 */
                    /* catch() { ... } // from try @ 03643e9c with catch @ 0364409c */
          ppIVar19 = (Il2CppMethodPointer *)FUN_01b81914(pIVar20,NCCFNKMICGK_TypeInfo,5);
                    /* catch() { ... } // from try @ 03644050 with catch @ 036440a0 */
LAB_036444f8:
          local_68 = (**ppIVar19)(pIVar20,(MethodInfo *)ppIVar19[1]);
                    /* try { // try from 03644504 to 0374450b has its CatchHandler @ 036445ec */
                    /* try { // try from 03644510 to 0374451b has its CatchHandler @ 036445f8 */
          local_78.klass = (System_Enum_c *)IAMJIBPAOBA_TypeInfo;
          goto LAB_03644588;
        }
      }
    }
    pSVar18 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
    puVar26 = &StringLiteral_9801/*"OfferFunction: unknown property: '"*/;
LAB_036443d0:
    pSVar18 = System_String__Concat
                        ((System_String_o *)*puVar26,pSVar18,StringLiteral_853/*"'!"*/,(MethodInfo *)0x0);
    KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar18,(MethodInfo *)0x0);
    return;
  }
  puVar26 = &StringLiteral_1567/*"0"*/;
  if (pIVar20 != (Il2CppObject *)0x0) {
    puVar26 = &StringLiteral_1606/*"1"*/;
  }
joined_r0x036445f8:
                    /* catch() { ... } // from try @ 03644510 with catch @ 036445f8 */
  if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) {
LAB_036447b0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar18 = (System_String_o *)*puVar26;
LAB_03643df0:
  (JDGILABGBGH->fields).HPACPFLKHPK = pSVar18;
  thunk_FUN_01c20e04(&JDGILABGBGH->fields);
  return;
}


// ===== private void FGHECLAEAMP(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x35447B4]
// QuestCondition$$FGHECLAEAMP @ RVA 0x35447B4

void QuestCondition__FGHECLAEAMP
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  System_String_o *KGLJICLJHEL;
  Roster_o *__this_00;
  
  if ((DAT_04568b0d & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568b0d = 1;
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
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    KGLJICLJHEL = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
    if (__this_00 != (Roster_o *)0x0) {
      bVar2 = Roster__EMGAHKCAAAN(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
      puVar1 = &StringLiteral_1606/*"1"*/;
      if (!bVar2) {
        puVar1 = &StringLiteral_1567/*"0"*/;
      }
      if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
        (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)*puVar1;
        thunk_FUN_01c20e04(&JDGILABGBGH->fields);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private string[] GGHIHLMENAC(EILGGBOIMGE.FMFDKGKCBBG CBIGMIHGDFO)  [RVA 0x35448B4]
// QuestCondition$$GGHIHLMENAC @ RVA 0x35448B4

System_String_array *
QuestCondition__GGHIHLMENAC
          (QuestCondition_o *__this,EILGGBOIMGE_FMFDKGKCBBG_o *CBIGMIHGDFO,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *pSVar2;
  
  if ((DAT_04568b0e & 1) == 0) {
    FUN_01bab630(&StringLiteral_981/*"("*/);
    FUN_01bab630(&StringLiteral_1100/*")"*/);
    __this = (QuestCondition_o *)FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568b0e = 1;
  }
  if ((CBIGMIHGDFO != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) &&
     (pSVar1 = (CBIGMIHGDFO->fields).DFJBJLBLBGB, __this = (QuestCondition_o *)0x0,
     pSVar1 != (System_String_o *)0x0)) {
    pSVar1 = System_String__Replace(pSVar1,StringLiteral_981/*"("*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
    __this = (QuestCondition_o *)0x0;
    if ((pSVar1 != (System_String_o *)0x0) &&
       (pSVar1 = System_String__Replace(pSVar1,StringLiteral_1100/*")"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0)
       , __this = (QuestCondition_o *)0x0, pSVar1 != (System_String_o *)0x0)) {
      pSVar2 = System_String__Split(pSVar1,0x2e,0,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public void LKIGECEPELE(PKHMIGFEJCL OKBIKHHKOEN)  [RVA 0x3544960]
// QuestCondition$$LKIGECEPELE @ RVA 0x3544960

void QuestCondition__LKIGECEPELE(QuestCondition_o *__this,PKHMIGFEJCL_o *OKBIKHHKOEN,MethodInfo *method)

{
  (__this->fields).AAJBIMFNMBB = OKBIKHHKOEN;
  thunk_FUN_01c20e04();
  return;
}


// ===== public static QuestCondition.NEKBOKBKCPA PNKIKHNEDGH(string HJBFKFHHAEO)  [RVA 0x3544968]
// QuestCondition$$PNKIKHNEDGH @ RVA 0x3544968

int32_t QuestCondition__PNKIKHNEDGH(System_String_o *HJBFKFHHAEO,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_04568b0f & 1) == 0) {
    FUN_01bab630(&StringLiteral_2948/*"And"*/);
    FUN_01bab630(&StringLiteral_9975/*"Or"*/);
    DAT_04568b0f = 1;
  }
  bVar1 = System_String__op_Equality(HJBFKFHHAEO,StringLiteral_9975/*"Or"*/,(MethodInfo *)0x0);
  if (bVar1) {
    iVar2 = 1;
  }
  else {
    bVar1 = System_String__op_Equality(HJBFKFHHAEO,StringLiteral_2948/*"And"*/,(MethodInfo *)0x0);
    iVar2 = 2;
    if (!bVar1) {
      iVar2 = 0;
    }
  }
  return iVar2;
}


// ===== private bool DFAGIFLDKAP(EILGGBOIMGE.FMFDKGKCBBG BGKPFAEEAIE, EILGGBOIMGE.FMFDKGKCBBG KJNOLMHHJJK)  [RVA 0x35449F4]
// QuestCondition$$DFAGIFLDKAP @ RVA 0x35449F4

bool QuestCondition__DFAGIFLDKAP
               (QuestCondition_o *__this,EILGGBOIMGE_FMFDKGKCBBG_o *BGKPFAEEAIE,
               EILGGBOIMGE_FMFDKGKCBBG_o *KJNOLMHHJJK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_String_o *__this_00;
  System_String_o *value;
  
  if ((BGKPFAEEAIE != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) &&
     (__this_00 = (System_String_o *)
                  (*(BGKPFAEEAIE->klass->vtable)._3_ToString.methodPtr)
                            (BGKPFAEEAIE,(BGKPFAEEAIE->klass->vtable)._3_ToString.method),
     KJNOLMHHJJK != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0)) {
    value = (System_String_o *)
            (*(KJNOLMHHJJK->klass->vtable)._3_ToString.methodPtr)
                      (KJNOLMHHJJK,(KJNOLMHHJJK->klass->vtable)._3_ToString.method);
    iVar1 = (__this->fields).ACCIHBHMFPN;
    if ((__this->fields).ODLEBGINGIL == false) {
      if (iVar1 == 8) {
        if (__this_00 != (System_String_o *)0x0) {
          bVar2 = System_String__Contains(__this_00,value,5,(MethodInfo *)0x0);
          return bVar2;
        }
      }
      else if (iVar1 == 10) {
        if (__this_00 != (System_String_o *)0x0) {
          bVar2 = System_String__EndsWith(__this_00,value,5,(MethodInfo *)0x0);
          return bVar2;
        }
      }
      else {
        if (iVar1 != 9) {
          return false;
        }
        if (__this_00 != (System_String_o *)0x0) {
          bVar2 = System_String__StartsWith(__this_00,value,5,(MethodInfo *)0x0);
          return bVar2;
        }
      }
    }
    else if (iVar1 == 8) {
      if (__this_00 != (System_String_o *)0x0) {
        bVar2 = System_String__Contains(__this_00,value,(MethodInfo *)0x0);
        return bVar2;
      }
    }
    else if (iVar1 == 10) {
                    /* try { // try from 03644acc to 03744af3 has its CatchHandler @ 03645d40 */
      if (__this_00 != (System_String_o *)0x0) {
        bVar2 = System_String__EndsWith(__this_00,value,(MethodInfo *)0x0);
        return bVar2;
      }
    }
    else {
      if (iVar1 != 9) {
        return false;
      }
      if (__this_00 != (System_String_o *)0x0) {
        bVar2 = System_String__StartsWith(__this_00,value,(MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public virtual void HNIHOIAMDPC(XmlNode NHMPCKIPOJE)  [RVA 0x3544B20]
// QuestCondition$$HNIHOIAMDPC @ RVA 0x3544B20

void QuestCondition__HNIHOIAMDPC
               (QuestCondition_o *__this,System_Xml_XmlNode_o *NHMPCKIPOJE,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int iVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  System_String_o *pSVar6;
  long *plVar7;
  MethodInfo *method_00;
  System_Xml_XmlNode_c *pSVar8;
  System_String_o **ppSVar9;
  undefined1 auVar10 [16];
  
                    /* try { // try from 03644b28 to 03744b53 has its CatchHandler @ 03645d3c */
  if ((DAT_04568b10 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14733/*"Value1"*/);
    FUN_01bab630(&StringLiteral_4202/*"CaseSensitive"*/);
    FUN_01bab630(&StringLiteral_14734/*"Value2"*/);
    FUN_01bab630(&StringLiteral_4535/*"CompareType"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_9577/*"Not"*/);
                    /* try { // try from 03644b9c to 03744ba3 has its CatchHandler @ 03645d1c */
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
                    /* try { // try from 03644bb4 to 03744bbb has its CatchHandler @ 03645d30 */
    FUN_01bab630(&StringLiteral_14775/*"Versions"*/);
    DAT_04568b10 = 1;
  }
                    /* try { // try from 03644bd0 to 03744bd7 has its CatchHandler @ 03645d34 */
  if ((NHMPCKIPOJE != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.methodPtr)
                         (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.method),
     pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
                    /* try { // try from 03644be8 to 03744bef has its CatchHandler @ 03645d14 */
    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar4,StringLiteral_9577/*"Not"*/,(MethodInfo *)0x0);
                    /* try { // try from 03644bf8 to 03744bff has its CatchHandler @ 03645d2c */
    bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar5,false,(MethodInfo *)0x0);
                    /* try { // try from 03644c00 to 03744c1f has its CatchHandler @ 03645d38 */
    (__this->fields).CKPHGNCGNHK = bVar1;
    auVar10 = (*(NHMPCKIPOJE->klass->vtable)._8_unknown.methodPtr)
                        (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._8_unknown.method);
    iVar2 = QuestCondition__EOGEJOBHJMC(auVar10._0_8_,auVar10._8_8_);
    (__this->fields).ACCIHBHMFPN = iVar2;
                    /* try { // try from 03644c20 to 03744c27 has its CatchHandler @ 03645d28 */
    pSVar4 = (System_Xml_XmlAttributeCollection_o *)
             (*(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.methodPtr)
                       (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.method);
    if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03644c38 to 03744c3f has its CatchHandler @ 03645d04 */
      pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar4,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
                    /* try { // try from 03644c50 to 03744c57 has its CatchHandler @ 03645d00 */
                    /* try { // try from 03644c58 to 03744c77 has its CatchHandler @ 03645d10 */
      pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      iVar2 = QuestCondition__PNKIKHNEDGH(pSVar6,method_00);
      (__this->fields).HJBFKFHHAEO = iVar2;
      (__this->fields).LDNECFGEICA = 0;
                    /* try { // try from 03644c78 to 03744c7f has its CatchHandler @ 03645d0c */
      pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.methodPtr)
                         (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.method);
      if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_4535/*"CompareType"*/,(MethodInfo *)0x0);
                    /* try { // try from 03644ca0 to 03744cab has its CatchHandler @ 03645a98 */
        pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar6,StringLiteral_14775/*"Versions"*/,(MethodInfo *)0x0);
        if (bVar1) {
                    /* try { // try from 03644cb8 to 03744ccb has its CatchHandler @ 03645c58 */
          (__this->fields).LDNECFGEICA = 1;
        }
        if ((__this->fields).ACCIHBHMFPN - 8U < 3) {
                    /* try { // try from 03644cd8 to 03744ce7 has its CatchHandler @ 03645cfc */
          pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                   (*(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.methodPtr)
                             (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.method);
          if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03644eec;
                    /* try { // try from 03644cf4 to 03744cfb has its CatchHandler @ 03645bd4 */
          pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar4,StringLiteral_4202/*"CaseSensitive"*/,(MethodInfo *)0x0);
                    /* try { // try from 03644d08 to 03744d0f has its CatchHandler @ 03645bec */
          pSVar6 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1606/*"1"*/,(MethodInfo *)0x0);
          bVar1 = System_String__op_Equality(pSVar6,StringLiteral_1606/*"1"*/,(MethodInfo *)0x0);
                    /* try { // try from 03644d20 to 03744d27 has its CatchHandler @ 03645bf8 */
          (__this->fields).ODLEBGINGIL = bVar1;
        }
                    /* try { // try from 03644d28 to 03744d33 has its CatchHandler @ 03645ba8 */
        if ((__this->fields).HJBFKFHHAEO == 0) {
          auVar10 = (*(NHMPCKIPOJE->klass->vtable)._8_unknown.methodPtr)
                              (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._8_unknown.method);
          iVar2 = QuestCondition__PNKIKHNEDGH(auVar10._0_8_,auVar10._8_8_);
          (__this->fields).HJBFKFHHAEO = iVar2;
        }
                    /* try { // try from 03644d44 to 03744d4b has its CatchHandler @ 03645bb0 */
        iVar3 = (__this->fields).ACCIHBHMFPN;
        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.methodPtr)
                           (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.method);
                    /* try { // try from 03644d5c to 03744d63 has its CatchHandler @ 03645ba4 */
        if (pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          if (iVar3 == 7) {
                    /* try { // try from 03644d68 to 03744d7f has its CatchHandler @ 03645cf4 */
            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar4,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
            pSVar8 = NHMPCKIPOJE->klass;
            if (pSVar5 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* try { // try from 03644e74 to 03744e7b has its CatchHandler @ 03645bb8 */
                    /* try { // try from 03644e7c to 03744e87 has its CatchHandler @ 03645bd8 */
              plVar7 = (long *)(*(pSVar8->vtable)._13_get_ChildNodes.methodPtr)
                                         (NHMPCKIPOJE,(pSVar8->vtable)._13_get_ChildNodes.method);
              if (plVar7 == (long *)0x0) goto LAB_03644eec;
                    /* try { // try from 03644e88 to 03744e8f has its CatchHandler @ 03645c0c */
              iVar3 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
              if (iVar3 != 1) {
                    /* try { // try from 03644ee8 to 03744eef has its CatchHandler @ 03645bf0 */
                return;
              }
                    /* try { // try from 03644ea4 to 03744eab has its CatchHandler @ 03645bcc */
              plVar7 = (long *)(*(NHMPCKIPOJE->klass->vtable)._18_get_FirstChild.methodPtr)
                                         (NHMPCKIPOJE,
                                          (NHMPCKIPOJE->klass->vtable)._18_get_FirstChild.method);
              if (plVar7 == (long *)0x0) goto LAB_03644eec;
              iVar3 = (**(code **)(*plVar7 + 0x1e8))(plVar7,*(undefined8 *)(*plVar7 + 0x1f0));
                    /* try { // try from 03644ebc to 03744ec3 has its CatchHandler @ 03645c04 */
              if (iVar3 != 3) {
                return;
              }
                    /* try { // try from 03644ec4 to 03744ecf has its CatchHandler @ 03645be0 */
              pSVar6 = (System_String_o *)
                       (*(NHMPCKIPOJE->klass->vtable)._41_get_InnerText.methodPtr)
                                 (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._41_get_InnerText.method)
              ;
            }
            else {
                    /* try { // try from 03644d8c to 03744d93 has its CatchHandler @ 03645bc8 */
              pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                       (*(pSVar8->vtable)._16_get_Attributes.methodPtr)
                                 (NHMPCKIPOJE,(pSVar8->vtable)._16_get_Attributes.method);
              if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03644eec;
              pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar4,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
                    /* try { // try from 03644da4 to 03744dab has its CatchHandler @ 03645c28 */
                    /* try { // try from 03644dac to 03744db7 has its CatchHandler @ 03645c14 */
              pSVar6 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
            }
                    /* try { // try from 03644db8 to 03744dbf has its CatchHandler @ 03645c08 */
            pSVar6 = EILGGBOIMGE__MGBBKEMFMJG((EILGGBOIMGE_o *)__this,pSVar6,(MethodInfo *)0x0);
            ppSVar9 = &(__this->fields).HGLHAHMIGDB;
            *ppSVar9 = pSVar6;
          }
          else {
                    /* try { // try from 03644dd4 to 03744ddb has its CatchHandler @ 03645bd0 */
            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar4,StringLiteral_14733/*"Value1"*/,(MethodInfo *)0x0);
            pSVar6 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03644dec to 03744df3 has its CatchHandler @ 03645bdc */
                    /* try { // try from 03644df4 to 03744dff has its CatchHandler @ 03645bf4 */
            pSVar6 = EILGGBOIMGE__MGBBKEMFMJG((EILGGBOIMGE_o *)__this,pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 03644e00 to 03744e07 has its CatchHandler @ 03645c1c */
            (__this->fields).HGLHAHMIGDB = pSVar6;
            thunk_FUN_01c20e04();
                    /* try { // try from 03644e18 to 03744e1f has its CatchHandler @ 03645c3c */
            pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                     (*(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.methodPtr)
                               (NHMPCKIPOJE,(NHMPCKIPOJE->klass->vtable)._16_get_Attributes.method);
            if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_03644eec;
                    /* try { // try from 03644e30 to 03744e37 has its CatchHandler @ 03645c20 */
            pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar4,StringLiteral_14734/*"Value2"*/,(MethodInfo *)0x0);
                    /* try { // try from 03644e38 to 03744e43 has its CatchHandler @ 03645c34 */
            pSVar6 = GIAMPEGMNHE__LFCNNAGLPHO(pSVar5,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03644e44 to 03744e4b has its CatchHandler @ 03645c18 */
            pSVar6 = EILGGBOIMGE__MGBBKEMFMJG((EILGGBOIMGE_o *)__this,pSVar6,(MethodInfo *)0x0);
            ppSVar9 = &(__this->fields).NKNANOCKLNG;
            *ppSVar9 = pSVar6;
          }
                    /* try { // try from 03644e5c to 03744e63 has its CatchHandler @ 03645bc0 */
          thunk_FUN_01c20e04(ppSVar9,pSVar6);
          return;
        }
      }
    }
  }
LAB_03644eec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FKEMCJBEHPG(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x3544F04]
// QuestCondition$$FKEMCJBEHPG @ RVA 0x3544F04

void QuestCondition__FKEMCJBEHPG
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  RaidConfig_CKEMIAEPGKD_Fields *pJVar1;
  bool bVar2;
  uint32_t uVar3;
  System_String_o *pSVar4;
  RaidConfig_o *pJVar5;
  EGMONPGHHDP_o *pEVar6;
  int64_t *__this_00;
  System_Object_array *args;
  long lVar7;
  undefined8 uVar8;
  RaidConfig_CKEMIAEPGKD_o *pJVar9;
  RaidConfig_CKEMIAEPGKD_Fields *pJVar10;
  undefined8 *puVar11;
  RaidConfig_JMEJFGKJNEA_o *pJVar12;
  int32_t local_34;
  
                    /* try { // try from 03644f18 to 03744f1f has its CatchHandler @ 03645a7c */
  if ((DAT_04568b11 & 1) == 0) {
                    /* try { // try from 03644f30 to 03744f37 has its CatchHandler @ 03645a94 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 03644f38 to 03744f43 has its CatchHandler @ 03645aa0 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 03644f44 to 03744f4f has its CatchHandler @ 03645a9c */
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10674/*"QuestCondition.BattlePassFunction: bpConfig is null"*/);
    FUN_01bab630(&StringLiteral_3261/*"AvailableRewards"*/);
                    /* try { // try from 03644f64 to 03744f6b has its CatchHandler @ 03645af8 */
    FUN_01bab630(&StringLiteral_3149/*"Atlas"*/);
    FUN_01bab630(&StringLiteral_4941/*"CurrentBPEndTime"*/);
                    /* try { // try from 03644f7c to 03744f83 has its CatchHandler @ 03645b18 */
    FUN_01bab630(&StringLiteral_10673/*"QuestCondition.BattlePassFunction - unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_8025/*"IsPremium"*/);
                    /* try { // try from 03644f94 to 03744f9b has its CatchHandler @ 03645a84 */
    FUN_01bab630(&StringLiteral_4942/*"CurrentBPName"*/);
    FUN_01bab630(&StringLiteral_4921/*"Currency"*/);
                    /* try { // try from 03644fac to 03744fb3 has its CatchHandler @ 03645a80 */
                    /* try { // try from 03644fb4 to 03744fbf has its CatchHandler @ 03645a74 */
    FUN_01bab630(&StringLiteral_4943/*"CurrentBPStartTime"*/);
    FUN_01bab630(&StringLiteral_8234/*"Key"*/);
                    /* try { // try from 03644fc4 to 03744fcf has its CatchHandler @ 03645a8c */
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_7022/*"HasActiveBattlePass"*/);
                    /* try { // try from 03644fe4 to 03744feb has its CatchHandler @ 03645ac4 */
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
                    /* try { // try from 03644ffc to 03745003 has its CatchHandler @ 03645b88 */
    __this = (QuestCondition_o *)FUN_01bab630(&StringLiteral_6853/*"Gift"*/);
                    /* try { // try from 03645004 to 0374500f has its CatchHandler @ 03645b80 */
    DAT_04568b11 = 1;
  }
  local_34 = 0;
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_03645588;
                    /* try { // try from 03645010 to 0374501b has its CatchHandler @ 03645b3c */
  pSVar4 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
                    /* try { // try from 03645040 to 03745047 has its CatchHandler @ 03645ae8 */
  pJVar5 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  __this = (QuestCondition_o *)0x0;
  if (pJVar5 == (RaidConfig_o *)0x0) goto LAB_03645588;
  pJVar12 = (pJVar5->fields)._NFFDCNIMBHK_k__BackingField;
  if (pJVar12 == (RaidConfig_JMEJFGKJNEA_o *)0x0) {
                    /* try { // try from 036450cc to 037450d3 has its CatchHandler @ 03645b98 */
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    __this = (QuestCondition_o *)0x0;
    if (args == (System_Object_array *)0x0) goto LAB_03645588;
                    /* try { // try from 036450e4 to 037450eb has its CatchHandler @ 03645b90 */
                    /* try { // try from 036450ec to 03745107 has its CatchHandler @ 03645cf8 */
    if ((pSVar4 != (System_String_o *)0x0) &&
       (lVar7 = thunk_FUN_01bda71c(pSVar4,(((args->obj).klass)->_1).element_class), lVar7 == 0))
    goto LAB_03645590;
    if ((int)args->max_length == 0) goto LAB_0364558c;
    args->m_Items[0] = (Il2CppObject *)pSVar4;
    thunk_FUN_01c20e04(args->m_Items,pSVar4);
                    /* try { // try from 03645114 to 0374511b has its CatchHandler @ 03645ad8 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0364512c to 03745133 has its CatchHandler @ 03645af0 */
    puVar11 = &StringLiteral_10674/*"QuestCondition.BattlePassFunction: bpConfig is null"*/;
                    /* try { // try from 03645134 to 0374513f has its CatchHandler @ 03645b50 */
    goto LAB_03645544;
  }
  pSVar4 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
                    /* try { // try from 03645058 to 0374505f has its CatchHandler @ 03645b44 */
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(pSVar4,(MethodInfo *)0x0);
                    /* try { // try from 03645060 to 0374506b has its CatchHandler @ 03645b38 */
  if (uVar3 < 0x89f2c836) {
    if (uVar3 < 0x146f2257) {
                    /* try { // try from 03645080 to 03745087 has its CatchHandler @ 03645b24 */
      if (uVar3 == 0xa9f710f) {
                    /* try { // try from 036452d4 to 037452db has its CatchHandler @ 03645aec */
        bVar2 = System_String__op_Equality(pSVar4,StringLiteral_6853/*"Gift"*/,(MethodInfo *)0x0);
        if (bVar2) {
                    /* try { // try from 036452ec to 037452f3 has its CatchHandler @ 03645afc */
          __this = (QuestCondition_o *)0x1;
          if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
            pJVar9 = (RaidConfig_CKEMIAEPGKD_o *)(pJVar12->fields).CGEMEMLPJFE;
            goto LAB_03645568;
          }
          goto LAB_03645588;
        }
      }
      else {
                    /* try { // try from 03645098 to 0374509f has its CatchHandler @ 03645acc */
                    /* try { // try from 036450a0 to 037450ab has its CatchHandler @ 03645b58 */
                    /* try { // try from 036450ac to 037450b7 has its CatchHandler @ 03645b70 */
        if ((uVar3 == 0x146f2256) &&
           (bVar2 = System_String__op_Equality(pSVar4,StringLiteral_4921/*"Currency"*/,(MethodInfo *)0x0), bVar2))
        {
          __this = (QuestCondition_o *)0x1;
          if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_03645588;
          pJVar9 = (RaidConfig_CKEMIAEPGKD_o *)(pJVar12->fields).PPFEFPPPLOA;
          goto LAB_03645568;
        }
      }
    }
    else {
                    /* try { // try from 036451b4 to 037451bf has its CatchHandler @ 03645ad0 */
      if (uVar3 == 0x89f2c835) {
        bVar2 = System_String__op_Equality(pSVar4,StringLiteral_4943/*"CurrentBPStartTime"*/,(MethodInfo *)0x0);
        if (bVar2) {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar6 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
          __this = (QuestCondition_o *)0x0;
          if (pEVar6 == (EGMONPGHHDP_o *)0x0) goto LAB_03645588;
          pJVar9 = EGMONPGHHDP__OKBKFJKEAAG(pEVar6,(MethodInfo *)0x0);
          if (pJVar9 == (RaidConfig_CKEMIAEPGKD_o *)0x0) goto LAB_03645558;
                    /* try { // try from 036453a0 to 037453a7 has its CatchHandler @ 03645bac */
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar6 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
          __this = (QuestCondition_o *)0x0;
          if (pEVar6 == (EGMONPGHHDP_o *)0x0) goto LAB_03645588;
                    /* try { // try from 036453b8 to 037453c3 has its CatchHandler @ 03645c5c */
          pJVar9 = EGMONPGHHDP__OKBKFJKEAAG(pEVar6,(MethodInfo *)0x0);
          __this = (QuestCondition_o *)0x0;
          if (pJVar9 == (RaidConfig_CKEMIAEPGKD_o *)0x0) goto LAB_03645588;
          __this_00 = &(pJVar9->fields).LKENIPBKAJI;
LAB_036454c4:
                    /* try { // try from 036454c4 to 037454d3 has its CatchHandler @ 03645ae4 */
          __this = (QuestCondition_o *)System_Int64__ToString((int64_t)__this_00,(MethodInfo *)0x0);
          pJVar9 = (RaidConfig_CKEMIAEPGKD_o *)__this;
          goto joined_r0x036452c4;
        }
      }
      else {
                    /* try { // try from 036451c8 to 037451d3 has its CatchHandler @ 03645ab0 */
        if (uVar3 == 0x734f216c) {
                    /* try { // try from 036453d0 to 037453d7 has its CatchHandler @ 03645b60 */
          bVar2 = System_String__op_Equality(pSVar4,StringLiteral_3149/*"Atlas"*/,(MethodInfo *)0x0);
          if (bVar2) {
                    /* try { // try from 036453e8 to 037453ef has its CatchHandler @ 03645ac0 */
                    /* try { // try from 036453f0 to 037453ff has its CatchHandler @ 03645adc */
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pEVar6 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
                    /* try { // try from 03645400 to 03745407 has its CatchHandler @ 03645b10 */
            __this = (QuestCondition_o *)0x0;
            if (pEVar6 == (EGMONPGHHDP_o *)0x0) goto LAB_03645588;
            __this = (QuestCondition_o *)EGMONPGHHDP__OKBKFJKEAAG(pEVar6,(MethodInfo *)0x0);
            pJVar10 = (RaidConfig_CKEMIAEPGKD_Fields *)
                      &(((RaidConfig_CKEMIAEPGKD_o *)__this)->fields).KBOFABJIPPD;
            goto LAB_03645410;
          }
        }
        else {
                    /* try { // try from 036451d8 to 037451e3 has its CatchHandler @ 03645b7c */
                    /* try { // try from 036451f0 to 037451f7 has its CatchHandler @ 03645ab4 */
          if ((uVar3 == 0x77872f92) &&
             (bVar2 = System_String__op_Equality(pSVar4,StringLiteral_7022/*"HasActiveBattlePass"*/,(MethodInfo *)0x0), bVar2
             )) {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03645208 to 0374520f has its CatchHandler @ 03645b68 */
              thunk_FUN_01ba7564();
            }
            pEVar6 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
            __this = (QuestCondition_o *)0x0;
            if (pEVar6 == (EGMONPGHHDP_o *)0x0) goto LAB_03645588;
                    /* try { // try from 0364521c to 03745237 has its CatchHandler @ 03645c50 */
            __this = (QuestCondition_o *)EGMONPGHHDP__OKBKFJKEAAG(pEVar6,(MethodInfo *)0x0);
            pJVar1 = (RaidConfig_CKEMIAEPGKD_Fields *)&StringLiteral_1567/*"0"*/;
            if ((RaidConfig_CKEMIAEPGKD_o *)__this != (RaidConfig_CKEMIAEPGKD_o *)0x0) {
              pJVar1 = (RaidConfig_CKEMIAEPGKD_Fields *)&StringLiteral_1606/*"1"*/;
            }
            goto joined_r0x03645420;
          }
        }
      }
    }
  }
  else if (uVar3 < 0xad93da6c) {
                    /* try { // try from 03645154 to 0374515b has its CatchHandler @ 03645b48 */
    if (uVar3 == 0x8a16e60e) {
                    /* try { // try from 036452f8 to 037452ff has its CatchHandler @ 03645b30 */
                    /* try { // try from 03645304 to 0374530b has its CatchHandler @ 03645b4c */
      bVar2 = System_String__op_Equality(pSVar4,StringLiteral_8025/*"IsPremium"*/,(MethodInfo *)0x0);
      if (bVar2) {
                    /* try { // try from 0364531c to 03745387 has its CatchHandler @ 03645c5c */
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pEVar6 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
        __this = (QuestCondition_o *)0x0;
        if (pEVar6 == (EGMONPGHHDP_o *)0x0) goto LAB_03645588;
        bVar2 = EGMONPGHHDP__PJKNOEOGFNM(pEVar6,(MethodInfo *)0x0);
        __this = (QuestCondition_o *)(ulong)bVar2;
        pJVar1 = (RaidConfig_CKEMIAEPGKD_Fields *)&StringLiteral_1606/*"1"*/;
        if (!bVar2) {
          pJVar1 = (RaidConfig_CKEMIAEPGKD_Fields *)&StringLiteral_1567/*"0"*/;
        }
        goto joined_r0x03645420;
      }
    }
    else {
                    /* try { // try from 0364516c to 03745173 has its CatchHandler @ 03645b20 */
                    /* try { // try from 03645174 to 0374517f has its CatchHandler @ 03645b28 */
      if ((uVar3 == 0xad93da6b) &&
         (bVar2 = System_String__op_Equality(pSVar4,StringLiteral_4942/*"CurrentBPName"*/,(MethodInfo *)0x0), bVar2)) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 03645194 to 0374519b has its CatchHandler @ 03645b74 */
        pEVar6 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
        __this = (QuestCondition_o *)0x0;
        if (pEVar6 == (EGMONPGHHDP_o *)0x0) goto LAB_03645588;
        __this = (QuestCondition_o *)EGMONPGHHDP__OKBKFJKEAAG(pEVar6,(MethodInfo *)0x0);
        pJVar10 = &((RaidConfig_CKEMIAEPGKD_o *)__this)->fields;
                    /* try { // try from 036451ac to 037451b3 has its CatchHandler @ 03645aac */
LAB_03645410:
        pJVar1 = (RaidConfig_CKEMIAEPGKD_Fields *)&StringLiteral_1/*""*/;
                    /* try { // try from 0364541c to 03745423 has its CatchHandler @ 03645af4 */
        if ((RaidConfig_CKEMIAEPGKD_o *)__this != (RaidConfig_CKEMIAEPGKD_o *)0x0) {
          pJVar1 = pJVar10;
        }
joined_r0x03645420:
        if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
          pJVar9 = (RaidConfig_CKEMIAEPGKD_o *)pJVar1->JIJLBFGKNJK;
LAB_03645568:
          (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)pJVar9;
          thunk_FUN_01c20e04(&JDGILABGBGH->fields);
          return;
        }
        goto LAB_03645588;
      }
    }
  }
  else {
                    /* try { // try from 03645244 to 0374524b has its CatchHandler @ 03645b2c */
    if (uVar3 == 0xcd1ac90c) {
                    /* try { // try from 03645434 to 0374543b has its CatchHandler @ 03645b1c */
      bVar2 = System_String__op_Equality(pSVar4,StringLiteral_8234/*"Key"*/,(MethodInfo *)0x0);
                    /* try { // try from 03645444 to 0374544b has its CatchHandler @ 03645a60 */
      if (bVar2) {
        __this = (QuestCondition_o *)0x1;
        if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
          pJVar9 = (RaidConfig_CKEMIAEPGKD_o *)(pJVar12->fields).BMODOAKLCNA;
          goto LAB_03645568;
        }
        goto LAB_03645588;
      }
    }
    else {
                    /* try { // try from 0364525c to 03745263 has its CatchHandler @ 03645ad4 */
      if (uVar3 == 0xeb3062ec) {
                    /* try { // try from 0364545c to 03745463 has its CatchHandler @ 03645a58 */
        bVar2 = System_String__op_Equality(pSVar4,StringLiteral_4941/*"CurrentBPEndTime"*/,(MethodInfo *)0x0);
        if (bVar2) {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0364547c to 03745487 has its CatchHandler @ 03645a40 */
            thunk_FUN_01ba7564();
          }
          pEVar6 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
          __this = (QuestCondition_o *)0x0;
          if (pEVar6 == (EGMONPGHHDP_o *)0x0) goto LAB_03645588;
          pJVar9 = EGMONPGHHDP__OKBKFJKEAAG(pEVar6,(MethodInfo *)0x0);
          if (pJVar9 != (RaidConfig_CKEMIAEPGKD_o *)0x0) {
                    /* try { // try from 036454a0 to 037454b3 has its CatchHandler @ 03645c54 */
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pEVar6 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
            __this = (QuestCondition_o *)0x0;
            if (pEVar6 == (EGMONPGHHDP_o *)0x0) goto LAB_03645588;
                    /* try { // try from 036454b4 to 037454c3 has its CatchHandler @ 03645b6c */
            pJVar9 = EGMONPGHHDP__OKBKFJKEAAG(pEVar6,(MethodInfo *)0x0);
            __this = (QuestCondition_o *)0x0;
            if (pJVar9 == (RaidConfig_CKEMIAEPGKD_o *)0x0) goto LAB_03645588;
            __this_00 = &(pJVar9->fields).PMHJGJHCNHE;
            goto LAB_036454c4;
          }
LAB_03645558:
          __this = (QuestCondition_o *)0x0;
          pJVar9 = StringLiteral_1/*""*/;
          goto joined_r0x036452c4;
        }
      }
      else {
                    /* try { // try from 0364526c to 03745273 has its CatchHandler @ 03645a6c */
                    /* try { // try from 03645274 to 0374527b has its CatchHandler @ 03645a50 */
        if ((uVar3 == 0xfc700594) &&
           (bVar2 = System_String__op_Equality(pSVar4,StringLiteral_3261/*"AvailableRewards"*/,(MethodInfo *)0x0), bVar2))
        {
                    /* try { // try from 0364528c to 03745293 has its CatchHandler @ 03645b8c */
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar6 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
                    /* try { // try from 036452a4 to 037452ab has its CatchHandler @ 03645b5c */
          __this = (QuestCondition_o *)0x0;
          if (pEVar6 == (EGMONPGHHDP_o *)0x0) goto LAB_03645588;
                    /* try { // try from 036452b0 to 037452c7 has its CatchHandler @ 03645ce8 */
          local_34 = EGMONPGHHDP__BAOGFDIDOMJ
                               (pEVar6,(RaidConfig_CKEMIAEPGKD_o *)0x0,(MethodInfo *)0x0);
          __this = (QuestCondition_o *)System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
          pJVar9 = (RaidConfig_CKEMIAEPGKD_o *)__this;
joined_r0x036452c4:
          if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) goto LAB_03645568;
          goto LAB_03645588;
        }
      }
    }
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  __this = (QuestCondition_o *)0x0;
  if (args != (System_Object_array *)0x0) {
                    /* try { // try from 036454ec to 037454ff has its CatchHandler @ 03645cec */
    pSVar4 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
                    /* try { // try from 03645500 to 0374550b has its CatchHandler @ 03645b00 */
    if ((pSVar4 != (System_String_o *)0x0) &&
       (lVar7 = thunk_FUN_01bda71c(pSVar4,(((args->obj).klass)->_1).element_class), lVar7 == 0)) {
LAB_03645590:
      uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar8,0);
    }
    if ((int)args->max_length == 0) {
LAB_0364558c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0364558c to 03745593 has its CatchHandler @ 03645b0c */
      FUN_01bab8d0();
    }
    args->m_Items[0] = (Il2CppObject *)pSVar4;
    thunk_FUN_01c20e04(args->m_Items,pSVar4);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar11 = &StringLiteral_10673/*"QuestCondition.BattlePassFunction - unknown property: "{0}""*/;
LAB_03645544:
                    /* try { // try from 03645550 to 03745573 has its CatchHandler @ 03645b04 */
    UnityEngine_Debug__LogErrorFormat((System_String_o *)*puVar11,args,(MethodInfo *)0x0);
    return;
  }
LAB_03645588:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void PBEAFDJJGPL(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x354559C]
// QuestCondition$$PBEAFDJJGPL @ RVA 0x354559C

void QuestCondition__PBEAFDJJGPL
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  bool bVar9;
  uint32_t uVar10;
  VirtualInvokeData *pVVar11;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Func_NCCFNKMICGK__bool__o **ppSVar12;
  Il2CppObject *pIVar13;
  KCJCIJHMEJF_c *pKVar14;
  Il2CppClass *pIVar15;
  ulong uVar16;
  int32_t *piVar17;
  KCJCIJHMEJF_o *pKVar18;
  System_Func_NCCFNKMICGK__bool__o *pSVar19;
  System_String_o *pSVar20;
  
                    /* try { // try from 036455a8 to 037455af has its CatchHandler @ 03645a4c */
                    /* try { // try from 036455c0 to 037455c7 has its CatchHandler @ 03645a68 */
  if ((DAT_04568b12 & 1) == 0) {
                    /* try { // try from 036455c8 to 037455d3 has its CatchHandler @ 03645a64 */
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<NCCFNKMICGK>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<NCCFNKMICGK>__);
                    /* try { // try from 036455e4 to 037455fb has its CatchHandler @ 03645a70 */
    FUN_01bab630(&System_Func<NCCFNKMICGK,_bool>_TypeInfo);
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_LEGDPJHPEOB_<>c_AMODLCCMEFG__);
    FUN_01bab630(&Method_LEGDPJHPEOB_<>c_BKJJDOGIFBJ__);
    FUN_01bab630(&Method_LEGDPJHPEOB_<>c_CMBHLNNACAD__);
    FUN_01bab630(&Method_LEGDPJHPEOB_<>c_DNJGEOKICDG__);
                    /* try { // try from 03645644 to 03745667 has its CatchHandler @ 03645a44 */
    FUN_01bab630(&Method_LEGDPJHPEOB_<>c_JKLLEJDHGFE__);
    FUN_01bab630(&Method_LEGDPJHPEOB_<>c_MBNFGEODNLP__);
    FUN_01bab630(&QuestCondition_<>c_TypeInfo);
                    /* try { // try from 03645668 to 0374574b has its CatchHandler @ 036446b8 */
    FUN_01bab630(&StringLiteral_9806/*"OffersFunction: unknown property: '"*/);
    FUN_01bab630(&StringLiteral_6482/*"FirstLastChance"*/);
    FUN_01bab630(&StringLiteral_6485/*"FirstNotStarted"*/);
    FUN_01bab630(&StringLiteral_6481/*"FirstJustStarted"*/);
    FUN_01bab630(&StringLiteral_6486/*"FirstPurchased"*/);
    FUN_01bab630(&StringLiteral_6476/*"FirstEnd"*/);
    FUN_01bab630(&StringLiteral_6472/*"First"*/);
    FUN_01bab630(&StringLiteral_6475/*"FirstActive"*/);
    FUN_01bab630(&StringLiteral_853/*"'!"*/);
    DAT_04568b12 = 1;
  }
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
  pKVar18 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
  if (pKVar18 == (KCJCIJHMEJF_o *)0x0) goto LAB_03645f80;
  pKVar14 = pKVar18->klass;
  uVar1._0_1_ = (pKVar14->_2).rank;
  uVar1._1_1_ = (pKVar14->_2).minimumAlignment;
  uVar16 = (ulong)uVar1;
  if (uVar16 != 0) {
    piVar17 = &((pKVar14->_1).interfaceOffsets)->offset;
    do {
                    /* try { // try from 0364574c to 03745753 has its CatchHandler @ 03645c78 */
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
          (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
        pVVar11 = pKVar14->vtable + (*piVar17 + 9);
        goto LAB_03645780;
      }
      uVar16 = uVar16 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar16 != 0);
  }
  pVVar11 = (VirtualInvokeData *)FUN_01b81914(pKVar18,KCJCIJHMEJF_TypeInfo,9);
                    /* try { // try from 0364576c to 03745777 has its CatchHandler @ 03645c70 */
LAB_03645780:
  source = (System_Collections_Generic_IEnumerable_TSource__o *)
           (*pVVar11->methodPtr)(pKVar18,pVVar11->method);
                    /* try { // try from 0364578c to 03745793 has its CatchHandler @ 036458c4 */
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_03645f80;
  pSVar20 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  uVar10 = <PrivateImplementationDetails>__ComputeStringHash(pSVar20,(MethodInfo *)0x0);
                    /* try { // try from 036457a4 to 037457af has its CatchHandler @ 036458bc */
  if (uVar10 < 0x72ac6411) {
    if (uVar10 == 0x4389f393) {
                    /* catch() { ... } // from try @ 036459d4 with catch @ 03645abc */
                    /* catch() { ... } // from try @ 036453e8 with catch @ 03645ac0 */
                    /* catch() { ... } // from try @ 03644fe4 with catch @ 03645ac4 */
                    /* catch() { ... } // from try @ 036459d0 with catch @ 03645ac8 */
                    /* catch() { ... } // from try @ 03645098 with catch @ 03645acc */
                    /* catch() { ... } // from try @ 036451b4 with catch @ 03645ad0 */
      bVar9 = System_String__op_Equality(pSVar20,StringLiteral_6475/*"FirstActive"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0364525c with catch @ 03645ad4 */
      if (!bVar9) goto LAB_03645ec8;
                    /* catch() { ... } // from try @ 03645114 with catch @ 03645ad8 */
                    /* catch() { ... } // from try @ 036453f0 with catch @ 03645adc */
                    /* catch() { ... } // from try @ 036459cc with catch @ 03645ae0 */
                    /* catch() { ... } // from try @ 036454c4 with catch @ 03645ae4 */
                    /* catch() { ... } // from try @ 03645040 with catch @ 03645ae8 */
      if ((QuestCondition_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 036452d4 with catch @ 03645aec */
        thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 0364512c with catch @ 03645af0 */
      }
                    /* catch() { ... } // from try @ 0364541c with catch @ 03645af4 */
                    /* catch() { ... } // from try @ 03644f64 with catch @ 03645af8 */
      pSVar19 = QuestCondition_<>c_TypeInfo->static_fields->__9__74_2;
                    /* catch() { ... } // from try @ 036452ec with catch @ 03645afc */
      if (pSVar19 == (System_Func_NCCFNKMICGK__bool__o *)0x0) {
                    /* catch() { ... } // from try @ 03645500 with catch @ 03645b00 */
                    /* catch() { ... } // from try @ 03645550 with catch @ 03645b04 */
        if ((QuestCondition_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 036459c8 with catch @ 03645b08 */
          thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 0364558c with catch @ 03645b0c */
        }
                    /* catch() { ... } // from try @ 03645400 with catch @ 03645b10 */
                    /* catch() { ... } // from try @ 036459c4 with catch @ 03645b14 */
                    /* catch() { ... } // from try @ 03644f7c with catch @ 03645b18 */
                    /* catch() { ... } // from try @ 03645434 with catch @ 03645b1c */
                    /* catch() { ... } // from try @ 0364516c with catch @ 03645b20 */
                    /* catch() { ... } // from try @ 03645080 with catch @ 03645b24 */
        pSVar19 = (System_Func_NCCFNKMICGK__bool__o *)
                  thunk_FUN_01bda818(System_Func<NCCFNKMICGK,_bool>_TypeInfo);
                    /* catch() { ... } // from try @ 03645174 with catch @ 03645b28 */
                    /* catch() { ... } // from try @ 03645244 with catch @ 03645b2c */
                    /* catch() { ... } // from try @ 036452f8 with catch @ 03645b30 */
                    /* catch() { ... } // from try @ 036459bc with catch @ 03645b34 */
                    /* catch() { ... } // from try @ 03645060 with catch @ 03645b38 */
                    /* catch() { ... } // from try @ 03645010 with catch @ 03645b3c */
                    /* catch() { ... } // from try @ 036459b8 with catch @ 03645b40 */
        System_Func<object,_bool>___ctor();
                    /* catch() { ... } // from try @ 03645058 with catch @ 03645b44 */
                    /* catch() { ... } // from try @ 03645154 with catch @ 03645b48 */
                    /* catch() { ... } // from try @ 03645304 with catch @ 03645b4c */
        ppSVar12 = &QuestCondition_<>c_TypeInfo->static_fields->__9__74_2;
                    /* catch() { ... } // from try @ 03645134 with catch @ 03645b50 */
        *ppSVar12 = pSVar19;
                    /* catch() { ... } // from try @ 036459b4 with catch @ 03645b54 */
        thunk_FUN_01c20e04(ppSVar12,pSVar19);
      }
                    /* catch() { ... } // from try @ 036450a0 with catch @ 03645b58 */
                    /* catch() { ... } // from try @ 036452a4 with catch @ 03645b5c */
                    /* catch() { ... } // from try @ 036453d0 with catch @ 03645b60 */
                    /* catch() { ... } // from try @ 036459ac with catch @ 03645b64 */
                    /* catch() { ... } // from try @ 03645208 with catch @ 03645b68 */
                    /* catch() { ... } // from try @ 036454b4 with catch @ 03645b6c */
      pIVar13 = System_Linq_Enumerable__FirstOrDefault<object>
                          (source,(System_Func_TSource__bool__o *)pSVar19,
                           Method_System_Linq_Enumerable_FirstOrDefault<NCCFNKMICGK>__);
                    /* catch() { ... } // from try @ 036450ac with catch @ 03645b70 */
                    /* catch() { ... } // from try @ 03645194 with catch @ 03645b74 */
      if (pIVar13 != (Il2CppObject *)0x0) {
                    /* catch() { ... } // from try @ 036451d8 with catch @ 03645b7c */
                    /* catch() { ... } // from try @ 03645004 with catch @ 03645b80 */
        pIVar15 = pIVar13->klass;
        uVar5._0_1_ = (pIVar15->_2).rank;
        uVar5._1_1_ = (pIVar15->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 036459a4 with catch @ 03645b84 */
                    /* catch() { ... } // from try @ 03644ffc with catch @ 03645b88 */
                    /* catch() { ... } // from try @ 0364528c with catch @ 03645b8c */
        uVar16 = (ulong)uVar5;
                    /* catch() { ... } // from try @ 036450e4 with catch @ 03645b90 */
                    /* catch() { ... } // from try @ 036459a0 with catch @ 03645b94 */
        if (uVar16 != 0) {
                    /* catch() { ... } // from try @ 036450cc with catch @ 03645b98 */
                    /* catch() { ... } // from try @ 0364599c with catch @ 03645b9c */
          piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
          do {
                    /* catch() { ... } // from try @ 03644d5c with catch @ 03645ba4 */
                    /* catch() { ... } // from try @ 03644d28 with catch @ 03645ba8 */
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                (Il2CppClass *)NCCFNKMICGK_TypeInfo) goto LAB_03645f10;
                    /* catch() { ... } // from try @ 036453a0 with catch @ 03645bac */
            uVar16 = uVar16 - 1;
                    /* catch() { ... } // from try @ 03644d44 with catch @ 03645bb0 */
            piVar17 = piVar17 + 4;
                    /* catch() { ... } // from try @ 03645998 with catch @ 03645bb4 */
          } while (uVar16 != 0);
        }
        goto LAB_03645eb8;
      }
    }
    else {
                    /* try { // try from 036457cc to 037457d3 has its CatchHandler @ 03645c6c */
      if (uVar10 == 0x680026a6) {
                    /* catch() { ... } // from try @ 03645994 with catch @ 03645bbc */
                    /* catch() { ... } // from try @ 03644e5c with catch @ 03645bc0 */
                    /* catch() { ... } // from try @ 03645990 with catch @ 03645bc4 */
                    /* catch() { ... } // from try @ 03644d8c with catch @ 03645bc8 */
                    /* catch() { ... } // from try @ 03644ea4 with catch @ 03645bcc */
                    /* catch() { ... } // from try @ 03644dd4 with catch @ 03645bd0 */
        bVar9 = System_String__op_Equality(pSVar20,StringLiteral_6476/*"FirstEnd"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03644cf4 with catch @ 03645bd4 */
        if (!bVar9) goto LAB_03645ec8;
                    /* catch() { ... } // from try @ 03644e7c with catch @ 03645bd8 */
                    /* catch() { ... } // from try @ 03644dec with catch @ 03645bdc */
                    /* catch() { ... } // from try @ 03644ec4 with catch @ 03645be0 */
                    /* catch() { ... } // from try @ 0364598c with catch @ 03645be4 */
                    /* catch() { ... } // from try @ 03645988 with catch @ 03645be8 */
        if ((QuestCondition_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03644d08 with catch @ 03645bec */
          thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 03644ee8 with catch @ 03645bf0 */
        }
                    /* catch() { ... } // from try @ 03644df4 with catch @ 03645bf4 */
                    /* catch() { ... } // from try @ 03644d20 with catch @ 03645bf8 */
        pSVar19 = QuestCondition_<>c_TypeInfo->static_fields->__9__74_5;
                    /* catch() { ... } // from try @ 03645984 with catch @ 03645bfc */
        if (pSVar19 == (System_Func_NCCFNKMICGK__bool__o *)0x0) {
                    /* catch() { ... } // from try @ 03645980 with catch @ 03645c00 */
                    /* catch() { ... } // from try @ 03644ebc with catch @ 03645c04 */
          if ((QuestCondition_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03644db8 with catch @ 03645c08 */
            thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 03644e88 with catch @ 03645c0c */
          }
                    /* catch() { ... } // from try @ 0364597c with catch @ 03645c10 */
                    /* catch() { ... } // from try @ 03644dac with catch @ 03645c14 */
                    /* catch() { ... } // from try @ 03644e44 with catch @ 03645c18 */
                    /* catch() { ... } // from try @ 03644e00 with catch @ 03645c1c */
                    /* catch() { ... } // from try @ 03644e30 with catch @ 03645c20 */
                    /* catch() { ... } // from try @ 03645978 with catch @ 03645c24 */
          pSVar19 = (System_Func_NCCFNKMICGK__bool__o *)
                    thunk_FUN_01bda818(System_Func<NCCFNKMICGK,_bool>_TypeInfo);
                    /* catch() { ... } // from try @ 03644da4 with catch @ 03645c28 */
                    /* catch() { ... } // from try @ 03645974 with catch @ 03645c2c */
                    /* catch() { ... } // from try @ 03644f00 with catch @ 03645c30 */
                    /* catch() { ... } // from try @ 03644e38 with catch @ 03645c34 */
                    /* catch() { ... } // from try @ 03645970 with catch @ 03645c38 */
                    /* catch() { ... } // from try @ 03644e18 with catch @ 03645c3c */
                    /* catch() { ... } // from try @ 03645830 with catch @ 03645c40 */
          System_Func<object,_bool>___ctor();
                    /* catch() { ... } // from try @ 036459dc with catch @ 03645c44
                       catch() { ... } // from try @ 03645a0c with catch @ 03645c44 */
                    /* catch() { ... } // from try @ 0364596c with catch @ 03645c48 */
                    /* catch() { ... } // from try @ 036457ec with catch @ 03645c4c */
          ppSVar12 = &QuestCondition_<>c_TypeInfo->static_fields->__9__74_5;
                    /* catch() { ... } // from try @ 0364521c with catch @ 03645c50 */
          *ppSVar12 = pSVar19;
                    /* catch() { ... } // from try @ 036454a0 with catch @ 03645c54 */
          thunk_FUN_01c20e04(ppSVar12,pSVar19);
        }
                    /* catch() { ... } // from try @ 03644cb8 with catch @ 03645c58 */
                    /* catch() { ... } // from try @ 0364531c with catch @ 03645c5c
                       catch() { ... } // from try @ 036453b8 with catch @ 03645c5c */
                    /* catch() { ... } // from try @ 036459e0 with catch @ 03645c60
                       catch() { ... } // from try @ 036459e8 with catch @ 03645c60
                       catch() { ... } // from try @ 03645a00 with catch @ 03645c60 */
                    /* catch() { ... } // from try @ 03645968 with catch @ 03645c64 */
                    /* catch() { ... } // from try @ 03645964 with catch @ 03645c68 */
                    /* catch() { ... } // from try @ 036457cc with catch @ 03645c6c */
        pIVar13 = System_Linq_Enumerable__FirstOrDefault<object>
                            (source,(System_Func_TSource__bool__o *)pSVar19,
                             Method_System_Linq_Enumerable_FirstOrDefault<NCCFNKMICGK>__);
                    /* catch() { ... } // from try @ 0364576c with catch @ 03645c70 */
                    /* catch() { ... } // from try @ 0364595c with catch @ 03645c74 */
        if (pIVar13 != (Il2CppObject *)0x0) {
                    /* catch() { ... } // from try @ 03645860 with catch @ 03645c7c */
          pIVar15 = pIVar13->klass;
          uVar6._0_1_ = (pIVar15->_2).rank;
          uVar6._1_1_ = (pIVar15->_2).minimumAlignment;
          uVar16 = (ulong)uVar6;
          if (uVar16 != 0) {
                    /* try { // try from 03645c98 to 03745c9b has its CatchHandler @ 03645cc4 */
                    /* try { // try from 03645c9c to 03745cd3 has its CatchHandler @ 036446b8 */
            piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                  (Il2CppClass *)NCCFNKMICGK_TypeInfo) goto LAB_03645f10;
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          goto LAB_03645eb8;
        }
      }
      else {
                    /* try { // try from 036457ec to 037457fb has its CatchHandler @ 03645c4c */
        if ((uVar10 != 0x72ac6410) ||
           (bVar9 = System_String__op_Equality(pSVar20,StringLiteral_6481/*"FirstJustStarted"*/,(MethodInfo *)0x0), !bVar9
           )) {
LAB_03645ec8:
          pSVar20 = System_String__Concat
                              (StringLiteral_9806/*"OffersFunction: unknown property: '"*/,(ACCIJLGMHOO->fields).KCPPJGKAILM,
                               StringLiteral_853/*"'!"*/,(MethodInfo *)0x0);
          KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar20,(MethodInfo *)0x0);
          return;
        }
                    /* try { // try from 0364580c to 03745813 has its CatchHandler @ 03645aa4 */
        if ((QuestCondition_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar19 = QuestCondition_<>c_TypeInfo->static_fields->__9__74_1;
        if (pSVar19 == (System_Func_NCCFNKMICGK__bool__o *)0x0) {
          if ((QuestCondition_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03645830 to 03745853 has its CatchHandler @ 03645c40 */
            thunk_FUN_01ba7564();
          }
          pSVar19 = (System_Func_NCCFNKMICGK__bool__o *)
                    thunk_FUN_01bda818(System_Func<NCCFNKMICGK,_bool>_TypeInfo);
                    /* try { // try from 03645860 to 037458af has its CatchHandler @ 03645c7c */
          System_Func<object,_bool>___ctor();
          ppSVar12 = &QuestCondition_<>c_TypeInfo->static_fields->__9__74_1;
          *ppSVar12 = pSVar19;
          thunk_FUN_01c20e04(ppSVar12,pSVar19);
        }
        pIVar13 = System_Linq_Enumerable__FirstOrDefault<object>
                            (source,(System_Func_TSource__bool__o *)pSVar19,
                             Method_System_Linq_Enumerable_FirstOrDefault<NCCFNKMICGK>__);
        if (pIVar13 != (Il2CppObject *)0x0) {
          pIVar15 = pIVar13->klass;
          uVar2._0_1_ = (pIVar15->_2).rank;
          uVar2._1_1_ = (pIVar15->_2).minimumAlignment;
                    /* try { // try from 036458b4 to 037458b7 has its CatchHandler @ 036458c0 */
          uVar16 = (ulong)uVar2;
                    /* try { // try from 036458b8 to 037458df has its CatchHandler @ 036446b8 */
                    /* catch() { ... } // from try @ 036457a4 with catch @ 036458bc */
          if (uVar16 != 0) {
                    /* catch() { ... } // from try @ 036458b4 with catch @ 036458c0 */
                    /* catch() { ... } // from try @ 0364578c with catch @ 036458c4 */
            piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                  (Il2CppClass *)NCCFNKMICGK_TypeInfo) goto LAB_03645f10;
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
LAB_03645eb8:
          pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar13,NCCFNKMICGK_TypeInfo,2);
          goto LAB_03645f20;
        }
      }
    }
  }
  else {
                    /* try { // try from 036458e4 to 03745927 has its CatchHandler @ 036446b8 */
    if (uVar10 < 0xd569f3df) {
      if (uVar10 == 0xc1ea7291) {
                    /* catch() { ... } // from try @ 03645c98 with catch @ 03645cc4 */
        bVar9 = System_String__op_Equality(pSVar20,StringLiteral_6482/*"FirstLastChance"*/,(MethodInfo *)0x0);
                    /* try { // try from 03645cd4 to 03745ce7 has its CatchHandler @ 03645e10 */
        if (!bVar9) goto LAB_03645ec8;
                    /* catch() { ... } // from try @ 036452b0 with catch @ 03645ce8
                       try { // try from 03645ce8 to 03745d63 has its CatchHandler @ 036446b8 */
        if ((QuestCondition_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 036454ec with catch @ 03645cec */
          thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 036459b0 with catch @ 03645cf0
                       catch() { ... } // from try @ 036459c0 with catch @ 03645cf0 */
        }
                    /* catch() { ... } // from try @ 03644d68 with catch @ 03645cf4 */
                    /* catch() { ... } // from try @ 036450ec with catch @ 03645cf8 */
        pSVar19 = QuestCondition_<>c_TypeInfo->static_fields->__9__74_4;
                    /* catch() { ... } // from try @ 03644cd8 with catch @ 03645cfc */
        if (pSVar19 == (System_Func_NCCFNKMICGK__bool__o *)0x0) {
                    /* catch() { ... } // from try @ 03644c50 with catch @ 03645d00 */
                    /* catch() { ... } // from try @ 03644c38 with catch @ 03645d04 */
          if ((QuestCondition_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03645958 with catch @ 03645d08 */
            thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 03644c78 with catch @ 03645d0c */
          }
                    /* catch() { ... } // from try @ 03644c58 with catch @ 03645d10 */
                    /* catch() { ... } // from try @ 03644be8 with catch @ 03645d14 */
                    /* catch() { ... } // from try @ 03645938 with catch @ 03645d18 */
                    /* catch() { ... } // from try @ 03644b9c with catch @ 03645d1c */
                    /* catch() { ... } // from try @ 03645934 with catch @ 03645d20 */
                    /* catch() { ... } // from try @ 03645930 with catch @ 03645d24 */
          pSVar19 = (System_Func_NCCFNKMICGK__bool__o *)
                    thunk_FUN_01bda818(System_Func<NCCFNKMICGK,_bool>_TypeInfo);
                    /* catch() { ... } // from try @ 03644c20 with catch @ 03645d28 */
                    /* catch() { ... } // from try @ 03644bf8 with catch @ 03645d2c */
                    /* catch() { ... } // from try @ 03644bb4 with catch @ 03645d30 */
                    /* catch() { ... } // from try @ 03644bd0 with catch @ 03645d34 */
                    /* catch() { ... } // from try @ 03644c00 with catch @ 03645d38 */
                    /* catch() { ... } // from try @ 03644b28 with catch @ 03645d3c */
                    /* catch() { ... } // from try @ 03644acc with catch @ 03645d40 */
          System_Func<object,_bool>___ctor();
                    /* catch() { ... } // from try @ 03645928 with catch @ 03645d44 */
          ppSVar12 = &QuestCondition_<>c_TypeInfo->static_fields->__9__74_4;
          *ppSVar12 = pSVar19;
          thunk_FUN_01c20e04(ppSVar12,pSVar19);
        }
                    /* try { // try from 03645d64 to 03745d67 has its CatchHandler @ 03645d7c */
        pIVar13 = System_Linq_Enumerable__FirstOrDefault<object>
                            (source,(System_Func_TSource__bool__o *)pSVar19,
                             Method_System_Linq_Enumerable_FirstOrDefault<NCCFNKMICGK>__);
        if (pIVar13 != (Il2CppObject *)0x0) {
                    /* catch() { ... } // from try @ 03645d64 with catch @ 03645d7c */
          pIVar15 = pIVar13->klass;
          uVar7._0_1_ = (pIVar15->_2).rank;
          uVar7._1_1_ = (pIVar15->_2).minimumAlignment;
                    /* try { // try from 03645d8c to 03745dfb has its CatchHandler @ 03645e10 */
          uVar16 = (ulong)uVar7;
          if (uVar16 != 0) {
            piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                  (Il2CppClass *)NCCFNKMICGK_TypeInfo) goto LAB_03645f10;
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          goto LAB_03645eb8;
        }
      }
      else {
                    /* try { // try from 03645928 to 0374592f has its CatchHandler @ 03645d44 */
        if ((uVar10 != 0xd569f3de) ||
           (bVar9 = System_String__op_Equality(pSVar20,StringLiteral_6486/*"FirstPurchased"*/,(MethodInfo *)0x0), !bVar9
           )) goto LAB_03645ec8;
                    /* try { // try from 03645930 to 03745933 has its CatchHandler @ 03645d24 */
                    /* try { // try from 03645934 to 03745937 has its CatchHandler @ 03645d20 */
                    /* try { // try from 03645938 to 0374593b has its CatchHandler @ 03645d18 */
        if ((QuestCondition_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03645944 to 03745957 has its CatchHandler @ 03645e10 */
          thunk_FUN_01ba7564();
        }
        pSVar19 = QuestCondition_<>c_TypeInfo->static_fields->__9__74_3;
        if (pSVar19 == (System_Func_NCCFNKMICGK__bool__o *)0x0) {
                    /* try { // try from 03645958 to 0374595b has its CatchHandler @ 03645d08 */
                    /* try { // try from 0364595c to 03745963 has its CatchHandler @ 03645c74 */
          if ((QuestCondition_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
                    /* try { // try from 03645964 to 03745967 has its CatchHandler @ 03645c68 */
          }
                    /* try { // try from 03645968 to 0374596b has its CatchHandler @ 03645c64 */
                    /* try { // try from 0364596c to 0374596f has its CatchHandler @ 03645c48 */
                    /* try { // try from 03645970 to 03745973 has its CatchHandler @ 03645c38 */
                    /* try { // try from 03645974 to 03745977 has its CatchHandler @ 03645c2c */
                    /* try { // try from 03645978 to 0374597b has its CatchHandler @ 03645c24 */
                    /* try { // try from 0364597c to 0374597f has its CatchHandler @ 03645c10 */
          pSVar19 = (System_Func_NCCFNKMICGK__bool__o *)
                    thunk_FUN_01bda818(System_Func<NCCFNKMICGK,_bool>_TypeInfo);
                    /* try { // try from 03645980 to 03745983 has its CatchHandler @ 03645c00 */
                    /* try { // try from 03645984 to 03745987 has its CatchHandler @ 03645bfc */
                    /* try { // try from 03645988 to 0374598b has its CatchHandler @ 03645be8 */
                    /* try { // try from 0364598c to 0374598f has its CatchHandler @ 03645be4 */
                    /* try { // try from 03645990 to 03745993 has its CatchHandler @ 03645bc4 */
                    /* try { // try from 03645994 to 03745997 has its CatchHandler @ 03645bbc */
                    /* try { // try from 03645998 to 0374599b has its CatchHandler @ 03645bb4 */
          System_Func<object,_bool>___ctor();
                    /* try { // try from 0364599c to 0374599f has its CatchHandler @ 03645b9c */
                    /* try { // try from 036459a0 to 037459a3 has its CatchHandler @ 03645b94 */
                    /* try { // try from 036459a4 to 037459a7 has its CatchHandler @ 03645b84 */
          ppSVar12 = &QuestCondition_<>c_TypeInfo->static_fields->__9__74_3;
                    /* try { // try from 036459a8 to 037459ab has its CatchHandler @ 03645b78 */
          *ppSVar12 = pSVar19;
                    /* try { // try from 036459ac to 037459af has its CatchHandler @ 03645b64 */
          thunk_FUN_01c20e04(ppSVar12,pSVar19);
        }
                    /* try { // try from 036459b0 to 037459b3 has its CatchHandler @ 03645cf0 */
                    /* try { // try from 036459b4 to 037459b7 has its CatchHandler @ 03645b54 */
                    /* try { // try from 036459b8 to 037459bb has its CatchHandler @ 03645b40 */
                    /* try { // try from 036459bc to 037459bf has its CatchHandler @ 03645b34 */
                    /* try { // try from 036459c0 to 037459c3 has its CatchHandler @ 03645cf0 */
                    /* try { // try from 036459c4 to 037459c7 has its CatchHandler @ 03645b14 */
        pIVar13 = System_Linq_Enumerable__FirstOrDefault<object>
                            (source,(System_Func_TSource__bool__o *)pSVar19,
                             Method_System_Linq_Enumerable_FirstOrDefault<NCCFNKMICGK>__);
                    /* try { // try from 036459c8 to 037459cb has its CatchHandler @ 03645b08 */
                    /* try { // try from 036459cc to 037459cf has its CatchHandler @ 03645ae0 */
        if (pIVar13 != (Il2CppObject *)0x0) {
                    /* try { // try from 036459d4 to 037459d7 has its CatchHandler @ 03645abc */
                    /* try { // try from 036459d8 to 037459db has its CatchHandler @ 03645ab8 */
          pIVar15 = pIVar13->klass;
          uVar3._0_1_ = (pIVar15->_2).rank;
          uVar3._1_1_ = (pIVar15->_2).minimumAlignment;
                    /* try { // try from 036459dc to 037459df has its CatchHandler @ 03645c44 */
                    /* try { // try from 036459e0 to 037459e3 has its CatchHandler @ 03645c60 */
                    /* try { // try from 036459e4 to 037459e7 has its CatchHandler @ 03645aa8 */
          uVar16 = (ulong)uVar3;
                    /* try { // try from 036459e8 to 037459eb has its CatchHandler @ 03645c60 */
                    /* try { // try from 036459ec to 037459ef has its CatchHandler @ 03645a90 */
          if (uVar16 != 0) {
                    /* try { // try from 036459f0 to 037459f3 has its CatchHandler @ 03645a78 */
                    /* try { // try from 036459f4 to 037459f7 has its CatchHandler @ 03645a5c */
            piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
            do {
                    /* try { // try from 036459f8 to 037459fb has its CatchHandler @ 03645a54 */
                    /* try { // try from 036459fc to 037459ff has its CatchHandler @ 03645a48 */
                    /* try { // try from 03645a00 to 03745a0b has its CatchHandler @ 03645c60 */
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                  (Il2CppClass *)NCCFNKMICGK_TypeInfo) goto LAB_03645f10;
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
                    /* try { // try from 03645a0c to 03745a17 has its CatchHandler @ 03645c44 */
            } while (uVar16 != 0);
          }
          goto LAB_03645eb8;
        }
      }
    }
    else {
                    /* try { // try from 03645a18 to 03745a1b has its CatchHandler @ 036446b8 */
                    /* try { // try from 03645a1c to 03745a23 has its CatchHandler @ 03645a88 */
      if (uVar10 != 0xed459e27) {
                    /* try { // try from 03645a24 to 03745a27 has its CatchHandler @ 03645a3c */
                    /* try { // try from 03645a28 to 03745c97 has its CatchHandler @ 036446b8 */
                    /* catch() { ... } // from try @ 036458e0 with catch @ 03645a30 */
                    /* catch() { ... } // from try @ 03645a24 with catch @ 03645a3c */
                    /* catch() { ... } // from try @ 0364547c with catch @ 03645a40 */
                    /* catch() { ... } // from try @ 03645644 with catch @ 03645a44 */
                    /* catch() { ... } // from try @ 036459fc with catch @ 03645a48 */
                    /* catch() { ... } // from try @ 036455a8 with catch @ 03645a4c */
        if ((uVar10 != 0xee3d49e1) ||
           (bVar9 = System_String__op_Equality(pSVar20,StringLiteral_6472/*"First"*/,(MethodInfo *)0x0), !bVar9
           )) goto LAB_03645ec8;
                    /* catch() { ... } // from try @ 03645274 with catch @ 03645a50 */
                    /* catch() { ... } // from try @ 036459f8 with catch @ 03645a54 */
                    /* catch() { ... } // from try @ 0364545c with catch @ 03645a58 */
                    /* catch() { ... } // from try @ 036459f4 with catch @ 03645a5c */
                    /* catch() { ... } // from try @ 03645444 with catch @ 03645a60 */
        pIVar13 = System_Linq_Enumerable__FirstOrDefault<object>
                            (source,Method_System_Linq_Enumerable_FirstOrDefault<NCCFNKMICGK>__);
                    /* catch() { ... } // from try @ 036455c8 with catch @ 03645a64 */
                    /* catch() { ... } // from try @ 036455c0 with catch @ 03645a68 */
        if (pIVar13 == (Il2CppObject *)0x0) {
          pSVar20 = (System_String_o *)0x0;
        }
        else {
                    /* catch() { ... } // from try @ 036455e4 with catch @ 03645a70 */
                    /* catch() { ... } // from try @ 03644fb4 with catch @ 03645a74 */
          pIVar15 = pIVar13->klass;
          uVar4._0_1_ = (pIVar15->_2).rank;
          uVar4._1_1_ = (pIVar15->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 036459f0 with catch @ 03645a78 */
                    /* catch() { ... } // from try @ 03644f18 with catch @ 03645a7c */
                    /* catch() { ... } // from try @ 03644fac with catch @ 03645a80 */
          uVar16 = (ulong)uVar4;
                    /* catch() { ... } // from try @ 03644f94 with catch @ 03645a84 */
                    /* catch() { ... } // from try @ 03645a1c with catch @ 03645a88 */
          if (uVar16 != 0) {
                    /* catch() { ... } // from try @ 03644fc4 with catch @ 03645a8c */
                    /* catch() { ... } // from try @ 036459ec with catch @ 03645a90 */
            piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
            do {
                    /* catch() { ... } // from try @ 03644f30 with catch @ 03645a94 */
                    /* catch() { ... } // from try @ 03644ca0 with catch @ 03645a98 */
                    /* catch() { ... } // from try @ 03644f44 with catch @ 03645a9c */
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                  (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
                pVVar11 = pIVar15->vtable + (*piVar17 + 2);
                goto LAB_03645f68;
              }
                    /* catch() { ... } // from try @ 03644f38 with catch @ 03645aa0 */
              uVar16 = uVar16 - 1;
                    /* catch() { ... } // from try @ 0364580c with catch @ 03645aa4 */
              piVar17 = piVar17 + 4;
                    /* catch() { ... } // from try @ 036459e4 with catch @ 03645aa8 */
            } while (uVar16 != 0);
          }
                    /* catch() { ... } // from try @ 036451ac with catch @ 03645aac */
                    /* catch() { ... } // from try @ 036451c8 with catch @ 03645ab0 */
                    /* catch() { ... } // from try @ 036451f0 with catch @ 03645ab4 */
          pVVar11 = (VirtualInvokeData *)FUN_01b81914(pIVar13,NCCFNKMICGK_TypeInfo,2);
                    /* catch() { ... } // from try @ 036459d8 with catch @ 03645ab8 */
LAB_03645f68:
          pSVar20 = (System_String_o *)(*pVVar11->methodPtr)(pIVar13,pVVar11->method);
        }
        if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_03645f80;
        goto LAB_03645f38;
      }
      bVar9 = System_String__op_Equality(pSVar20,StringLiteral_6485/*"FirstNotStarted"*/,(MethodInfo *)0x0);
      if (!bVar9) goto LAB_03645ec8;
      if ((QuestCondition_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar19 = QuestCondition_<>c_TypeInfo->static_fields->__9__74_0;
                    /* try { // try from 03645dfc to 03745e07 has its CatchHandler @ 036446b8 */
      if (pSVar19 == (System_Func_NCCFNKMICGK__bool__o *)0x0) {
        if ((QuestCondition_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03645e08 to 03745e0f has its CatchHandler @ 03645e10 */
          thunk_FUN_01ba7564();
        }
                    /* catch() { ... } // from try @ 03645944 with catch @ 03645e10
                       catch() { ... } // from try @ 03645cd4 with catch @ 03645e10
                       catch() { ... } // from try @ 03645d8c with catch @ 03645e10
                       catch() { ... } // from try @ 03645e08 with catch @ 03645e10 */
        pSVar19 = (System_Func_NCCFNKMICGK__bool__o *)
                  thunk_FUN_01bda818(System_Func<NCCFNKMICGK,_bool>_TypeInfo);
        System_Func<object,_bool>___ctor();
        ppSVar12 = &QuestCondition_<>c_TypeInfo->static_fields->__9__74_0;
        *ppSVar12 = pSVar19;
        thunk_FUN_01c20e04(ppSVar12,pSVar19);
      }
      pIVar13 = System_Linq_Enumerable__FirstOrDefault<object>
                          (source,(System_Func_TSource__bool__o *)pSVar19,
                           Method_System_Linq_Enumerable_FirstOrDefault<NCCFNKMICGK>__);
      if (pIVar13 != (Il2CppObject *)0x0) {
        pIVar15 = pIVar13->klass;
        uVar8._0_1_ = (pIVar15->_2).rank;
        uVar8._1_1_ = (pIVar15->_2).minimumAlignment;
        uVar16 = (ulong)uVar8;
        if (uVar16 != 0) {
          piVar17 = &((pIVar15->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar17 + -2))->interfaceType ==
                (Il2CppClass *)NCCFNKMICGK_TypeInfo) goto LAB_03645f10;
            uVar16 = uVar16 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar16 != 0);
        }
        goto LAB_03645eb8;
      }
    }
  }
  pSVar20 = (System_String_o *)0x0;
LAB_03645f34:
  if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
LAB_03645f38:
    (JDGILABGBGH->fields).HPACPFLKHPK = pSVar20;
    thunk_FUN_01c20e04(&JDGILABGBGH->fields);
    return;
  }
LAB_03645f80:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
LAB_03645f10:
  pVVar11 = pIVar15->vtable + (*piVar17 + 2);
LAB_03645f20:
  pSVar20 = (System_String_o *)(*pVVar11->methodPtr)(pIVar13,pVVar11->method);
  goto LAB_03645f34;
}


// ===== private void BJHNMDHPNMB(NILLKLHKLHG.GLEGDBCJEOA AJOBAPIPBJB, MMFIDKMDADC KDBIBINALOL)  [RVA 0x3545F84]
// QuestCondition$$BJHNMDHPNMB @ RVA 0x3545F84

void QuestCondition__BJHNMDHPNMB
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *AJOBAPIPBJB,
               MMFIDKMDADC_o *KDBIBINALOL,MethodInfo *method)

{
  int32_t OHLKNCPBCBL;
  int32_t BMPJIDHGCBN;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *__this_00;
  NILLKLHKLHG_DIPIFJPCFOE_o *__this_01;
  System_String_o *pSVar1;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  int32_t local_24;
  
  if ((DAT_04568b13 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HintSchemeUtility_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&Method_PCOEHCPGBBG_AICKIDLLIBK<MIBHAJBEMIK>__);
    __this = (QuestCondition_o *)FUN_01bab630(&StringLiteral_10678/*"QuestCondition.FightControlHintIndexFunction: - unknown property: "{0}""*/);
    DAT_04568b13 = 1;
  }
  if (AJOBAPIPBJB != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    OHLKNCPBCBL = PCOEHCPGBBG__AICKIDLLIBK<Int32Enum>
                            ((AJOBAPIPBJB->fields).KCPPJGKAILM,-1,
                             Method_PCOEHCPGBBG_AICKIDLLIBK<MIBHAJBEMIK>__);
    if (OHLKNCPBCBL == -1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      __this = (QuestCondition_o *)0x0;
      if (args != (System_Object_array *)0x0) {
        pSVar1 = (AJOBAPIPBJB->fields).KCPPJGKAILM;
        if ((pSVar1 != (System_String_o *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(pSVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0))
        {
          uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar3,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar1;
          thunk_FUN_01c20e04(args->m_Items,pSVar1);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_10678/*"QuestCondition.FightControlHintIndexFunction: - unknown property: "{0}""*/,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
    else {
      __this_00 = (AJOBAPIPBJB->fields).EEFPBGNAFFI;
      __this = (QuestCondition_o *)0x0;
      if (__this_00 != (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0) {
        if ((__this_00->fields)._size == 0) {
          if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          local_24 = HintSchemeUtility__MPGLNGGPOIK(OHLKNCPBCBL,(MethodInfo *)0x0);
        }
        else {
          __this_01 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,0,
                                 Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                                );
          __this = (QuestCondition_o *)0x0;
          if (__this_01 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_03646174;
          pSVar1 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(__this_01,(MethodInfo *)0x0);
          BMPJIDHGCBN = PCOEHCPGBBG__JBGCINPPLAC(pSVar1,0,(MethodInfo *)0x0);
          if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(HintSchemeUtility_TypeInfo);
          }
          local_24 = HintSchemeUtility__CKEMOGMODFK(OHLKNCPBCBL,BMPJIDHGCBN,(MethodInfo *)0x0);
        }
        __this = (QuestCondition_o *)System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
        if (KDBIBINALOL != (MMFIDKMDADC_o *)0x0) {
          (KDBIBINALOL->fields).HPACPFLKHPK = (System_String_o *)__this;
          thunk_FUN_01c20e04(&KDBIBINALOL->fields,__this);
          return;
        }
      }
    }
  }
LAB_03646174:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void FPHCAGCJDDG(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x3546188]
// QuestCondition$$FPHCAGCJDDG @ RVA 0x3546188

void QuestCondition__FPHCAGCJDDG
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  uint32_t uVar3;
  FBMGMPIFMNH_o *__this_00;
  ModelParameters_o *pPVar4;
  int64_t DCDLMCEEOCC;
  DNELIPCHKLK_o *__this_01;
  QuestCondition_HLPHJOHMPCO_o *__this_02;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *__this_03;
  NILLKLHKLHG_DIPIFJPCFOE_o *__this_04;
  PlayerData_o *__this_05;
  SFRequestSender_o *pKVar5;
  Il2CppObject *pIVar6;
  VirtualInvokeData *pVVar7;
  System_Object_array *args;
  long lVar8;
  System_Collections_Generic_List_HEFOANCOHDC__o *__this_06;
  System_Predicate_T__o *match;
  undefined8 uVar9;
  MethodInfo *pMVar10;
  ModelParameters_c *pPVar11;
  Il2CppClass *pIVar12;
  ulong uVar13;
  Il2CppMethodPointer pIVar14;
  int32_t *piVar15;
  Roster_o *pAVar16;
  System_String_o *pSVar17;
  undefined8 *puVar18;
  int32_t local_44;
  int64_t local_38;
  
  if ((DAT_04568b14 & 1) == 0) {
    FUN_01bab630(&Roster_TypeInfo);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_LEGDPJHPEOB_HLPHJOHMPCO_NBCOOPIHIOI__);
    FUN_01bab630(&QuestCondition_HLPHJOHMPCO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&System_Predicate<PerkInfoItem>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_10384/*"Power"*/);
    FUN_01bab630(&StringLiteral_10806/*"RaidCharge"*/);
    FUN_01bab630(&StringLiteral_6772/*"GetAvatar"*/);
    FUN_01bab630(&StringLiteral_4464/*"CoinIcon"*/);
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_8320/*"Language"*/);
    FUN_01bab630(&StringLiteral_3535/*"Bonus"*/);
    FUN_01bab630(&StringLiteral_12160/*"Skeleton"*/);
    FUN_01bab630(&StringLiteral_3076/*"Armor"*/);
    FUN_01bab630(&StringLiteral_3855/*"CanBuySomethingForGold"*/);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_9186/*"Money"*/);
    FUN_01bab630(&StringLiteral_8000/*"IsLoggedInRaids"*/);
    FUN_01bab630(&StringLiteral_7023/*"HasPayments"*/);
    FUN_01bab630(&StringLiteral_10823/*"RaidConsumable"*/);
    FUN_01bab630(&StringLiteral_10690/*"QuestCondition.PlayerFunction - unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_8409/*"Level"*/);
    FUN_01bab630(&StringLiteral_10915/*"RaidMapFocus"*/);
    FUN_01bab630(&StringLiteral_11859/*"ServerGems"*/);
    FUN_01bab630(&StringLiteral_7024/*"HasPerk"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_8828/*"MapFocus"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
    FUN_01bab630(&StringLiteral_7066/*"Helm"*/);
    DAT_04568b14 = 1;
  }
  local_38 = 0;
  local_44 = 0;
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
  pAVar16 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar16 == (Roster_o *)0x0) {
    return;
  }
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_03646c6c;
  pSVar17 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(pSVar17,(MethodInfo *)0x0);
  if (uVar3 < 0x84b84175) {
    if (uVar3 < 0x4df2d910) {
      if (uVar3 < 0x19f4fcbf) {
        if (uVar3 == 0x1799542e) {
          bVar2 = System_String__op_Equality(pSVar17,StringLiteral_11859/*"ServerGems"*/,(MethodInfo *)0x0);
          if (bVar2) {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_05 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
            if (__this_05 == (PlayerData_o *)0x0) goto LAB_03646c6c;
            local_44 = PlayerData__GNIBFOOLMHK(__this_05,(MethodInfo *)0x0);
LAB_03646a74:
            pSVar17 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
            goto joined_r0x03646904;
          }
        }
        else if ((uVar3 == 0x19f4fcbe) &&
                (bVar2 = System_String__op_Equality(pSVar17,StringLiteral_6772/*"GetAvatar"*/,(MethodInfo *)0x0),
                bVar2)) {
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
          pAVar16 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar16 == (Roster_o *)0x0) goto LAB_03646c6c;
          pSVar17 = Roster__LNCOIGNHGAN(pAVar16,(MethodInfo *)0x0);
          goto joined_r0x03646904;
        }
      }
      else if (uVar3 == 0x3479865d) {
        bVar2 = System_String__op_Equality(pSVar17,StringLiteral_4464/*"CoinIcon"*/,(MethodInfo *)0x0);
        if (bVar2) {
          if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_03646c6c;
          pSVar17 = (pAVar16->fields).FAAJGHKHEBI;
          goto LAB_03646c1c;
        }
      }
      else if (uVar3 == 0x4155597d) {
        bVar2 = System_String__op_Equality(pSVar17,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0);
        if (bVar2) {
          local_44 = Roster__EOEAKGGDBFH(pAVar16,(MethodInfo *)0x0);
          goto LAB_03646a74;
        }
      }
      else if ((uVar3 == 0x4df2d90f) &&
              (bVar2 = System_String__op_Equality(pSVar17,StringLiteral_8828/*"MapFocus"*/,(MethodInfo *)0x0),
              bVar2)) {
        __this_01 = (pAVar16->fields).DHDPPCNPAIE;
        goto joined_r0x036468f8;
      }
    }
    else if (uVar3 < 0x725e221e) {
      if (uVar3 == 0x5884f11b) {
        bVar2 = System_String__op_Equality(pSVar17,StringLiteral_10915/*"RaidMapFocus"*/,(MethodInfo *)0x0);
        if (bVar2) {
          __this_01 = Roster__FNLFKFPFDKM(pAVar16,(MethodInfo *)0x0);
joined_r0x036468f8:
          if (__this_01 == (DNELIPCHKLK_o *)0x0) goto LAB_03646c6c;
          pSVar17 = DNELIPCHKLK__IGILFMIPEIM(__this_01,(MethodInfo *)0x0);
joined_r0x03646904:
          if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) goto LAB_03646c1c;
          goto LAB_03646c6c;
        }
      }
      else if ((uVar3 == 0x725e221d) &&
              (bVar2 = System_String__op_Equality(pSVar17,StringLiteral_10806/*"RaidCharge"*/,(MethodInfo *)0x0),
              bVar2)) {
        pPVar4 = (pAVar16->fields).MFLNIMCFPDK;
        if (pPVar4 == (ModelParameters_o *)0x0) goto LAB_03646c6c;
        pPVar11 = pPVar4->klass;
        pSVar17 = StringLiteral_10823/*"RaidConsumable"*/;
        goto LAB_03646abc;
      }
    }
    else {
      if (uVar3 == 0x84b84174) {
        puVar18 = &StringLiteral_3076/*"Armor"*/;
        goto LAB_03646a98;
      }
      if (uVar3 == 0x756008e4) {
        bVar2 = System_String__op_Equality(pSVar17,StringLiteral_3535/*"Bonus"*/,(MethodInfo *)0x0);
        if (bVar2) {
          local_38 = Roster__HEHFNBKGJLP(pAVar16,(MethodInfo *)0x0);
LAB_03646a34:
          pSVar17 = System_Int64__ToString((int64_t)&local_38,(MethodInfo *)0x0);
          goto joined_r0x03646904;
        }
      }
      else if ((uVar3 == 0x7ea6568e) &&
              (bVar2 = System_String__op_Equality(pSVar17,StringLiteral_12160/*"Skeleton"*/,(MethodInfo *)0x0),
              bVar2)) {
        pPVar4 = (pAVar16->fields).MFLNIMCFPDK;
        if (pPVar4 == (ModelParameters_o *)0x0) goto LAB_03646c6c;
        pIVar14 = (pPVar4->klass->vtable)._4_CJPIJKJDHGI.methodPtr;
        pMVar10 = (pPVar4->klass->vtable)._4_CJPIJKJDHGI.method;
        pSVar17 = StringLiteral_12160/*"Skeleton"*/;
        goto LAB_03646ac4;
      }
    }
  }
  else if (uVar3 < 0xb34b4bf0) {
    if (uVar3 < 0x938415ad) {
      if (uVar3 == 0x8d52fb29) {
        bVar2 = System_String__op_Equality(pSVar17,StringLiteral_8000/*"IsLoggedInRaids"*/,(MethodInfo *)0x0);
        if (bVar2) {
          pKVar5 = SFRequestSender__MBHIKFMIDAO((MethodInfo *)0x0);
          if (pKVar5 == (SFRequestSender_o *)0x0) goto LAB_03646c6c;
          puVar18 = &StringLiteral_1567/*"0"*/;
          if ((pKVar5->fields).super._MGGBEPKMPCF_k__BackingField != false) {
            puVar18 = &StringLiteral_1606/*"1"*/;
          }
          goto joined_r0x036468c8;
        }
      }
      else if ((uVar3 == 0x938415ac) &&
              (bVar2 = System_String__op_Equality(pSVar17,StringLiteral_7023/*"HasPayments"*/,(MethodInfo *)0x0),
              bVar2)) {
        if ((Roster_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_00 = (FBMGMPIFMNH_o *)Roster_TypeInfo->static_fields->HAEGJFPKIAD;
        if (__this_00 == (FBMGMPIFMNH_o *)0x0) goto LAB_03646c6c;
        bVar2 = FBMGMPIFMNH__NPNEPMBNJPH(__this_00,(MethodInfo *)0x0);
LAB_03646658:
        puVar18 = &StringLiteral_1606/*"1"*/;
        if (bVar2 == false) {
          puVar18 = &StringLiteral_1567/*"0"*/;
        }
joined_r0x036468c8:
        if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
          pSVar17 = (System_String_o *)*puVar18;
          goto LAB_03646c1c;
        }
        goto LAB_03646c6c;
      }
    }
    else if (uVar3 == 0x9a73db9b) {
      bVar2 = System_String__op_Equality(pSVar17,StringLiteral_8320/*"Language"*/,(MethodInfo *)0x0);
      if (bVar2) {
        pIVar6 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        if (pIVar6 != (Il2CppObject *)0x0) {
          pIVar12 = pIVar6->klass;
          uVar1._0_1_ = (pIVar12->_2).rank;
          uVar1._1_1_ = (pIVar12->_2).minimumAlignment;
          uVar13 = (ulong)uVar1;
          if (uVar13 != 0) {
            piVar15 = &((pIVar12->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar7 = pIVar12->vtable + (*piVar15 + 6);
                goto LAB_03646c50;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar6,BLEFOFGCKEF_TypeInfo,6);
LAB_03646c50:
          lVar8 = (*pVVar7->methodPtr)(pIVar6,pVVar7->method);
          if ((lVar8 != 0) && (JDGILABGBGH != (MMFIDKMDADC_o *)0x0)) {
            pSVar17 = *(System_String_o **)(lVar8 + 0x10);
            goto LAB_03646c1c;
          }
        }
        goto LAB_03646c6c;
      }
    }
    else {
      if (uVar3 == 0x9d9dc599) {
        puVar18 = &StringLiteral_7066/*"Helm"*/;
        goto LAB_03646a98;
      }
      if ((uVar3 == 0xb34b4bef) &&
         (bVar2 = System_String__op_Equality(pSVar17,StringLiteral_9186/*"Money"*/,(MethodInfo *)0x0), bVar2))
      {
        local_38 = Roster__IMLCNMCBEEN(pAVar16,(MethodInfo *)0x0);
        goto LAB_03646a34;
      }
    }
  }
  else if (uVar3 < 0xc33d8e27) {
    if (uVar3 == 0xb7c10361) {
      puVar18 = &StringLiteral_14870/*"Weapon"*/;
    }
    else {
      if (uVar3 != 0xb960112c) {
        if ((uVar3 == 0xc33d8e26) &&
           (bVar2 = System_String__op_Equality(pSVar17,StringLiteral_3855/*"CanBuySomethingForGold"*/,(MethodInfo *)0x0), bVar2)
           ) {
          DCDLMCEEOCC = Roster__IMLCNMCBEEN(pAVar16,(MethodInfo *)0x0);
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
          }
          bVar2 = NLPJLHOEAOE__KMHLEKHPLBL(DCDLMCEEOCC,(MethodInfo *)0x0);
          goto LAB_03646658;
        }
        goto LAB_03646ad8;
      }
      puVar18 = &StringLiteral_8772/*"Magic"*/;
    }
LAB_03646a98:
    bVar2 = System_String__op_Equality(pSVar17,(System_String_o *)*puVar18,(MethodInfo *)0x0);
    if (bVar2) {
      pPVar4 = (pAVar16->fields).MFLNIMCFPDK;
      if (pPVar4 == (ModelParameters_o *)0x0) goto LAB_03646c6c;
      pPVar11 = pPVar4->klass;
      pSVar17 = (System_String_o *)*puVar18;
LAB_03646abc:
      pIVar14 = (pPVar11->vtable)._4_CJPIJKJDHGI.methodPtr;
      pMVar10 = (pPVar11->vtable)._4_CJPIJKJDHGI.method;
LAB_03646ac4:
      lVar8 = (*pIVar14)(pPVar4,pSVar17,0,pMVar10);
      if (lVar8 == 0) {
        return;
      }
      if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
        pSVar17 = *(System_String_o **)(lVar8 + 0x18);
LAB_03646c1c:
        (JDGILABGBGH->fields).HPACPFLKHPK = pSVar17;
        thunk_FUN_01c20e04(&JDGILABGBGH->fields);
        return;
      }
      goto LAB_03646c6c;
    }
  }
  else if (uVar3 == 0xc749a5e6) {
    bVar2 = System_String__op_Equality(pSVar17,StringLiteral_10384/*"Power"*/,(MethodInfo *)0x0);
    if (bVar2) {
      local_44 = Roster__FMNEFEMHCGG(pAVar16,(MethodInfo *)0x0);
      goto LAB_03646a74;
    }
  }
  else {
    if (uVar3 == 0xcb2ec7a2) {
      puVar18 = &StringLiteral_11017/*"Ranged"*/;
      goto LAB_03646a98;
    }
    if ((uVar3 == 0xea7af1ab) &&
       (bVar2 = System_String__op_Equality(pSVar17,StringLiteral_7024/*"HasPerk"*/,(MethodInfo *)0x0), bVar2)) {
      __this_02 = (QuestCondition_HLPHJOHMPCO_o *)thunk_FUN_01bda818(QuestCondition_HLPHJOHMPCO_TypeInfo);
      QuestCondition_HLPHJOHMPCO___ctor(__this_02,(MethodInfo *)0x0);
      __this_03 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
      if (__this_03 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0)
      goto LAB_03646c6c;
      if ((__this_03->fields)._size < 1) {
        pSVar17 = string_TypeInfo->static_fields->Empty;
      }
      else {
        __this_04 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_03,0,
                               Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                              );
        if (__this_04 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_03646c6c;
        pSVar17 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(__this_04,(MethodInfo *)0x0);
      }
      if (__this_02 == (QuestCondition_HLPHJOHMPCO_o *)0x0) goto LAB_03646c6c;
      (__this_02->fields).perkName = pSVar17;
      thunk_FUN_01c20e04();
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pPVar4 = GameUtils__MGLPJIGMCHH((MethodInfo *)0x0);
      if (pPVar4 == (ModelParameters_o *)0x0) goto LAB_03646c6c;
      __this_06 = ModelParameters__BMDDFABHHCA(pPVar4,(MethodInfo *)0x0);
      match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<PerkInfoItem>_TypeInfo);
      System_Predicate<object>___ctor();
      if (__this_06 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_03646c6c;
      pIVar6 = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_06,match,
                          Method_System_Collections_Generic_List<PerkInfoItem>_Find__);
      puVar18 = &StringLiteral_1567/*"0"*/;
      if (pIVar6 != (Il2CppObject *)0x0) {
        puVar18 = &StringLiteral_1606/*"1"*/;
      }
      goto joined_r0x036468c8;
    }
  }
LAB_03646ad8:
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  if (args != (System_Object_array *)0x0) {
    pSVar17 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
    if ((pSVar17 != (System_String_o *)0x0) &&
       (lVar8 = thunk_FUN_01bda71c(pSVar17,(((args->obj).klass)->_1).element_class), lVar8 == 0)) {
      uVar9 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar9,0);
    }
    if ((int)args->max_length != 0) {
      args->m_Items[0] = (Il2CppObject *)pSVar17;
      thunk_FUN_01c20e04(args->m_Items,pSVar17);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_10690/*"QuestCondition.PlayerFunction - unknown property: "{0}""*/,args,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_03646c6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CJAINBKPAHF(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x3546C80]
// QuestCondition$$CJAINBKPAHF @ RVA 0x3546C80

void QuestCondition__CJAINBKPAHF
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *KGLJICLJHEL;
  FOKJBDHLIMG_o *__this_00;
  PerkInfoItem_o *pHVar2;
  
  if ((DAT_04568b15 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    __this = (QuestCondition_o *)FUN_01bab630(&StringLiteral_7289/*"Icon"*/);
    DAT_04568b15 = 1;
  }
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    KGLJICLJHEL = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(GameUtils_TypeInfo);
    }
    __this_00 = GameUtils_TypeInfo->static_fields->DDMMFEDBMCC;
    __this = (QuestCondition_o *)0x0;
    if (__this_00 != (FOKJBDHLIMG_o *)0x0) {
      pHVar2 = FOKJBDHLIMG__JMMDGEOBMOC(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
      if (pHVar2 != (PerkInfoItem_o *)0x0) {
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
        bVar1 = System_String__op_Equality
                          ((ACCIJLGMHOO->fields).KCPPJGKAILM,StringLiteral_7289/*"Icon"*/,(MethodInfo *)0x0);
        if (bVar1) {
          __this = (QuestCondition_o *)0x1;
          if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
            (JDGILABGBGH->fields).HPACPFLKHPK = (pHVar2->fields).KPDPJONADPJ;
            thunk_FUN_01c20e04(&JDGILABGBGH->fields);
            return;
          }
          goto LAB_03646db4;
        }
      }
      return;
    }
  }
LAB_03646db4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void AICLKMJCJFG(NILLKLHKLHG.GLEGDBCJEOA AJOBAPIPBJB, MMFIDKMDADC KDBIBINALOL)  [RVA 0x3546DB8]
// QuestCondition$$AICLKMJCJFG @ RVA 0x3546DB8

void QuestCondition__AICLKMJCJFG
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *AJOBAPIPBJB,
               MMFIDKMDADC_o *KDBIBINALOL,MethodInfo *method)

{
  int32_t OHLKNCPBCBL;
  int32_t BMPJIDHGCBN;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *__this_00;
  NILLKLHKLHG_DIPIFJPCFOE_o *__this_01;
  System_String_o *pSVar1;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_04568b16 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HintSchemeUtility_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&Method_PCOEHCPGBBG_AICKIDLLIBK<MIBHAJBEMIK>__);
    __this = (QuestCondition_o *)FUN_01bab630(&StringLiteral_10676/*"QuestCondition.ControlHintPrefabFunction: unknown property: "{0}""*/);
    DAT_04568b16 = 1;
  }
  if (AJOBAPIPBJB != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    OHLKNCPBCBL = PCOEHCPGBBG__AICKIDLLIBK<Int32Enum>
                            ((AJOBAPIPBJB->fields).KCPPJGKAILM,-1,
                             Method_PCOEHCPGBBG_AICKIDLLIBK<MIBHAJBEMIK>__);
    if (OHLKNCPBCBL == -1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      __this = (QuestCondition_o *)0x0;
      if (args != (System_Object_array *)0x0) {
        pSVar1 = (AJOBAPIPBJB->fields).KCPPJGKAILM;
        if ((pSVar1 != (System_String_o *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(pSVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0))
        {
          uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar3,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar1;
          thunk_FUN_01c20e04(args->m_Items,pSVar1);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_10676/*"QuestCondition.ControlHintPrefabFunction: unknown property: "{0}""*/,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
    else {
      __this_00 = (AJOBAPIPBJB->fields).EEFPBGNAFFI;
      __this = (QuestCondition_o *)0x0;
      if (__this_00 != (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0) {
        if ((__this_00->fields)._size == 0) {
          if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this = (QuestCondition_o *)HintSchemeUtility__NIBAIANOPPG(OHLKNCPBCBL,(MethodInfo *)0x0);
        }
        else {
          __this_01 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,0,
                                 Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                                );
          __this = (QuestCondition_o *)0x0;
          if (__this_01 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_03646f94;
          pSVar1 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(__this_01,(MethodInfo *)0x0);
          BMPJIDHGCBN = PCOEHCPGBBG__JBGCINPPLAC(pSVar1,0,(MethodInfo *)0x0);
          if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(HintSchemeUtility_TypeInfo);
          }
          __this = (QuestCondition_o *)
                   HintSchemeUtility__LMHEANOFFIP(OHLKNCPBCBL,BMPJIDHGCBN,(MethodInfo *)0x0);
        }
        if (KDBIBINALOL != (MMFIDKMDADC_o *)0x0) {
          (KDBIBINALOL->fields).HPACPFLKHPK = (System_String_o *)__this;
          thunk_FUN_01c20e04(&KDBIBINALOL->fields,__this);
          return;
        }
      }
    }
  }
LAB_03646f94:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private long ODJOCIIEDDE(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x3546FA8]
// QuestCondition$$ODJOCIIEDDE @ RVA 0x3546FA8

int64_t QuestCondition__ODJOCIIEDDE
                  (QuestCondition_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  int64_t iVar1;
  
  if ((DAT_04568b17 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_10684/*"QuestCondition.GetDeliveryUpgradeTime item==null"*/);
    DAT_04568b17 = 1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10684/*"QuestCondition.GetDeliveryUpgradeTime item==null"*/,(MethodInfo *)0x0);
    iVar1 = 0x7fffffff;
  }
  else {
    iVar1 = (IKKAMAMLIKA->fields)._LAOFJOMPFDL_k__BackingField;
  }
  return iVar1;
}


// ===== private void HLACBAJGCAI(NILLKLHKLHG.GLEGDBCJEOA AJOBAPIPBJB, MMFIDKMDADC KDBIBINALOL)  [RVA 0x3547028]
// QuestCondition$$HLACBAJGCAI @ RVA 0x3547028

void QuestCondition__HLACBAJGCAI
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *AJOBAPIPBJB,
               MMFIDKMDADC_o *KDBIBINALOL,MethodInfo *method)

{
  undefined8 *puVar1;
  ushort uVar2;
  KKEKKPIDGBK_o *pKVar3;
  VirtualInvokeData *pVVar4;
  KKEKKPIDGBK_c *pKVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_String_o *pSVar8;
  
  if ((DAT_04568b18 & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568b18 = 1;
  }
  if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar3 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
  if ((AJOBAPIPBJB != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) && (pKVar3 != (KKEKKPIDGBK_o *)0x0)) {
    pKVar5 = pKVar3->klass;
    pSVar8 = (AJOBAPIPBJB->fields).KCPPJGKAILM;
    uVar2._0_1_ = (pKVar5->_2).rank;
    uVar2._1_1_ = (pKVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar2;
    if (uVar6 != 0) {
      piVar7 = &((pKVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
          pVVar4 = pKVar5->vtable + (*piVar7 + 7);
          goto LAB_03647118;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pKVar3,KKEKKPIDGBK_TypeInfo,7);
LAB_03647118:
    uVar6 = (*pVVar4->methodPtr)(pKVar3,pSVar8,pVVar4->method);
    puVar1 = &StringLiteral_1606/*"1"*/;
    if ((uVar6 & 1) == 0) {
      puVar1 = &StringLiteral_1567/*"0"*/;
    }
    if (KDBIBINALOL != (MMFIDKMDADC_o *)0x0) {
      (KDBIBINALOL->fields).HPACPFLKHPK = (System_String_o *)*puVar1;
      thunk_FUN_01c20e04(&KDBIBINALOL->fields);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MIANEPDADJJ(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x3547154]
// QuestCondition$$MIANEPDADJJ @ RVA 0x3547154

void QuestCondition__MIANEPDADJJ
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Shop_ItemsPanel_o *pNVar3;
  HOOAAGABMBL_o *pHVar4;
  GGLKHCAIGDI_o *pGVar5;
  System_Object_array *args;
  undefined8 uVar6;
  Roster_o *pAVar7;
  GGLKHCAIGDI_Fields *pGVar8;
  UnityEngine_Object_o *x;
  System_String_o *pSVar9;
  
  if ((DAT_04568b19 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_10699/*"QuestCondition.ShopInfoFunction: - unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_4949/*"CurrentRecipe"*/);
    FUN_01bab630(&StringLiteral_4946/*"CurrentItem"*/);
    DAT_04568b19 = 1;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<ShopScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_0364740c;
  pSVar9 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  bVar1 = System_String__op_Equality(pSVar9,StringLiteral_4946/*"CurrentItem"*/,(MethodInfo *)0x0);
  if (bVar1) {
    if ((x == (UnityEngine_Object_o *)0x0) ||
       (pNVar3 = (Nekki_SF2_GUI_Shop_ItemsPanel_o *)x[0xf].fields.m_CachedPtr,
       pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0)) goto LAB_0364740c;
    pHVar4 = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(pNVar3,(MethodInfo *)0x0);
    if (pHVar4 != (HOOAAGABMBL_o *)0x0) {
      pNVar3 = (Nekki_SF2_GUI_Shop_ItemsPanel_o *)x[0xf].fields.m_CachedPtr;
      if (((pNVar3 == (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) ||
          (pHVar4 = Nekki_SF2_GUI_Shop_ItemsPanel__get_SelectedItemInfo(pNVar3,(MethodInfo *)0x0),
          pHVar4 == (HOOAAGABMBL_o *)0x0)) ||
         (pGVar8 = (GGLKHCAIGDI_Fields *)&(pHVar4->fields)._COIPKAKHDFP_k__BackingField,
         JDGILABGBGH == (MMFIDKMDADC_o *)0x0)) goto LAB_0364740c;
      goto LAB_03647424;
    }
    pGVar8 = (GGLKHCAIGDI_Fields *)string_TypeInfo->static_fields;
  }
  else {
    bVar1 = System_String__op_Equality(pSVar9,StringLiteral_4949/*"CurrentRecipe"*/,(MethodInfo *)0x0);
    if (!bVar1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args != (System_Object_array *)0x0) {
        pSVar9 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
        if ((pSVar9 != (System_String_o *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(pSVar9,(((args->obj).klass)->_1).element_class), lVar2 == 0))
        {
          uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar6,0);
        }
        if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        args->m_Items[0] = (Il2CppObject *)pSVar9;
        thunk_FUN_01c20e04(args->m_Items,pSVar9);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_10699/*"QuestCondition.ShopInfoFunction: - unknown property: "{0}""*/,args,(MethodInfo *)0x0);
        return;
      }
      goto LAB_0364740c;
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
    if (pAVar7 == (Roster_o *)0x0) goto LAB_0364740c;
    if ((pAVar7->fields).EANIPGPKLOA != false) {
      if ((x == (UnityEngine_Object_o *)0x0) ||
         (x[0xb].monitor == (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0)) goto LAB_0364740c;
      pGVar5 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_CurrentRecipe
                         (x[0xb].monitor,(MethodInfo *)0x0);
      if (pGVar5 != (GGLKHCAIGDI_o *)0x0) {
        if ((x[0xb].monitor == (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) ||
           (pGVar5 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__get_CurrentRecipe
                               (x[0xb].monitor,(MethodInfo *)0x0), pGVar5 == (GGLKHCAIGDI_o *)0x0))
        goto LAB_0364740c;
        pGVar8 = &pGVar5->fields;
        goto joined_r0x03647408;
      }
    }
    pGVar8 = (GGLKHCAIGDI_Fields *)string_TypeInfo->static_fields;
  }
joined_r0x03647408:
  if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
LAB_03647424:
    (JDGILABGBGH->fields).HPACPFLKHPK = pGVar8->_COIPKAKHDFP_k__BackingField;
    thunk_FUN_01c20e04(&JDGILABGBGH->fields);
    return;
  }
LAB_0364740c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private string DNPEBFIKPHB()  [RVA 0x3547450]
// QuestCondition$$DNPEBFIKPHB @ RVA 0x3547450

System_String_o * QuestCondition__DNPEBFIKPHB(QuestCondition_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  PKHMIGFEJCL_o *pPVar3;
  PKHMIGFEJCL_ELHOKIPELBO_o *pPVar4;
  ulong uVar5;
  long lVar6;
  
  if ((DAT_04568b1a & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_22485/*"|"*/);
    DAT_04568b1a = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  pPVar3 = (__this->fields).AAJBIMFNMBB;
                    /* try { // try from 036474cc to 03747607 has its CatchHandler @ 036474cc
                       catch() { ... } // from try @ 036474cc with catch @ 036474cc
                       catch() { ... } // from try @ 03647744 with catch @ 036474cc
                       catch() { ... } // from try @ 036477e0 with catch @ 036474cc
                       catch() { ... } // from try @ 036477e8 with catch @ 036474cc
                       catch() { ... } // from try @ 036478a0 with catch @ 036474cc */
  if (((pPVar3 != (PKHMIGFEJCL_o *)0x0) &&
      (pPVar4 = (pPVar3->fields).BJJFDMHOBNB, pPVar4 != (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0)) &&
     (pSVar2 = (pPVar4->fields).BMGMGAAPFGO, pSVar2 != (System_String_o *)0x0)) {
    bVar1 = System_String__Equals(pSVar2,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
LAB_03647600:
                    /* try { // try from 03647608 to 0374762f has its CatchHandler @ 0364780c */
                    /* WARNING: Could not recover jumptable at 0x03647618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pSVar2 = (System_String_o *)
                 (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                           (__this_00,(__this_00->klass->vtable)._3_ToString.method);
        return pSVar2;
      }
    }
    else {
      pPVar3 = (__this->fields).AAJBIMFNMBB;
      if ((pPVar3 != (PKHMIGFEJCL_o *)0x0) &&
         (pPVar4 = (pPVar3->fields).BJJFDMHOBNB, pPVar4 != (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0)) {
        lVar6 = (pPVar4->fields).HDGEOJGHEOE;
        if (lVar6 < 1) {
          uVar5 = 0;
        }
        else {
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          if (DAT_04565b87 == '\0') {
            FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
            DAT_04565b87 = '\x01';
          }
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pPVar3 = (__this->fields).AAJBIMFNMBB;
          if (pPVar3 == (PKHMIGFEJCL_o *)0x0) goto LAB_0364761c;
          uVar5 = lVar6 - NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
          uVar5 = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
        }
        pPVar4 = (pPVar3->fields).BJJFDMHOBNB;
        if ((pPVar4 != (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0) &&
           (__this_00 != (System_Text_StringBuilder_o *)0x0)) {
          System_Text_StringBuilder__Append
                    (__this_00,(pPVar4->fields).BMGMGAAPFGO,(MethodInfo *)0x0);
          System_Text_StringBuilder__Append(__this_00,StringLiteral_22485/*"|"*/,(MethodInfo *)0x0);
          pPVar3 = (__this->fields).AAJBIMFNMBB;
          if ((pPVar3 != (PKHMIGFEJCL_o *)0x0) &&
             (pPVar4 = (pPVar3->fields).BJJFDMHOBNB, pPVar4 != (PKHMIGFEJCL_ELHOKIPELBO_o *)0x0)) {
            System_Text_StringBuilder__Append
                      (__this_00,(pPVar4->fields).JDKKCDBDNLB,(MethodInfo *)0x0);
            System_Text_StringBuilder__Append(__this_00,StringLiteral_22485/*"|"*/,(MethodInfo *)0x0);
            if (uVar5 != 0) {
              System_Text_StringBuilder__Append(__this_00,uVar5,(MethodInfo *)0x0);
            }
            goto LAB_03647600;
          }
        }
      }
    }
  }
LAB_0364761c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GELLNLKENNG(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x3547620]
// QuestCondition$$GELLNLKENNG @ RVA 0x3547620

/* WARNING: Removing unreachable block (ram,0x03647bdc) */
/* WARNING: Removing unreachable block (ram,0x03647bf4) */

void QuestCondition__GELLNLKENNG
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  System_String_o *CJNHFNHJHPE;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar8;
  System_Collections_Generic_IEnumerator_T__o *pSVar9;
  VirtualInvokeData *pVVar10;
  long lVar11;
  System_Object_array *args;
  undefined8 uVar12;
  PKHMIGFEJCL_o *pPVar13;
  System_Collections_Generic_IEnumerator_T__c *pSVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  int32_t *piVar18;
  System_String_o *a;
  MMFIDKMDADC_Fields *pMVar19;
  BECIPDJBAOG_o *pBVar20;
  
  if ((DAT_04568b1b & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<object>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 03647664 to 0374768f has its CatchHandler @ 03647808 */
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_10698/*"QuestCondition.RaidPackInfoFunction: unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_4628/*"ContainsConsumable"*/);
    FUN_01bab630(&StringLiteral_4629/*"ContainsCurrency"*/);
                    /* try { // try from 036476c4 to 037476cf has its CatchHandler @ 03647800 */
    FUN_01bab630(&StringLiteral_10696/*"QuestCondition.RaidLootInfoFunction: loot is null"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
                    /* try { // try from 036476d8 to 037476e7 has its CatchHandler @ 036477fc */
    __this = (QuestCondition_o *)FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568b1b = 1;
  }
  if ((ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) && (JDGILABGBGH != (MMFIDKMDADC_o *)0x0)) {
    a = (ACCIJLGMHOO->fields).KCPPJGKAILM;
    pMVar19 = &JDGILABGBGH->fields;
    pMVar19->HPACPFLKHPK = StringLiteral_1567/*"0"*/;
    thunk_FUN_01c20e04(pMVar19);
    CJNHFNHJHPE = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
                    /* try { // try from 03647720 to 03747743 has its CatchHandler @ 036477f8 */
    __this = (QuestCondition_o *)Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    lVar11 = Method_System_Array_Empty<object>__;
    if (((Nekki_SF2_Core_Quests_QuestsManager_o *)__this !=
         (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
       (pPVar13 = (((Nekki_SF2_Core_Quests_QuestsManager_o *)__this)->fields).QuestParameters,
       pPVar13 != (PKHMIGFEJCL_o *)0x0)) {
      pBVar20 = (pPVar13->fields).DIJKNIEKOFL;
      if (pBVar20 == (BECIPDJBAOG_o *)0x0) {
        lVar15 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
        if (lVar15 == 0) {
          FUN_01b8167c(Method_System_Array_Empty<object>__);
          lVar15 = *(long *)(lVar11 + 0x38);
        }
        lVar15 = *(long *)(lVar15 + 0x10);
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          lVar15 = FUN_01b81620();
        }
        if (*(int *)(lVar15 + 0xe0) == 0) {
          thunk_FUN_01ba7564();
        }
        lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
        if ((*(byte *)(lVar11 + 0x135) & 1) == 0) {
          lVar11 = FUN_01b81620();
        }
        args = (System_Object_array *)**(undefined8 **)(lVar11 + 0xb8);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        puVar16 = &StringLiteral_10696/*"QuestCondition.RaidLootInfoFunction: loot is null"*/;
LAB_03647b98:
        UnityEngine_Debug__LogErrorFormat((System_String_o *)*puVar16,args,(MethodInfo *)0x0);
        return;
      }
                    /* try { // try from 03647744 to 037477d3 has its CatchHandler @ 036474cc */
      bVar7 = System_String__op_Equality(a,StringLiteral_4629/*"ContainsCurrency"*/,(MethodInfo *)0x0);
      if (bVar7) {
        bVar7 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
        if (!bVar7) {
          pGVar8 = (pBVar20->fields).LEJBLHJFJHP;
          __this = (QuestCondition_o *)0x0;
          if (pGVar8 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)
          goto LAB_03647bc8;
          pSVar9 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar8,
                              Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_GetEnumerator__
                             );
          if (pSVar9 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            pSVar14 = pSVar9->klass;
            uVar1._0_1_ = (pSVar14->_2).rank;
            uVar1._1_1_ = (pSVar14->_2).minimumAlignment;
            uVar17 = (ulong)uVar1;
            if (uVar17 != 0) {
              piVar18 = &((pSVar14->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 036477d4 to 037477db has its CatchHandler @ 03647804 */
                    /* try { // try from 036477dc to 037477df has its CatchHandler @ 036477f4 */
                  pVVar10 = pSVar14->vtable + *piVar18;
                  goto LAB_036477e0;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            pVVar10 = (VirtualInvokeData *)
                      FUN_01b81914(pSVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_036477e0:
                    /* try { // try from 036477e0 to 037477e3 has its CatchHandler @ 036474cc */
                    /* try { // try from 036477e4 to 037477e7 has its CatchHandler @ 036477f0 */
                    /* try { // try from 036477e8 to 0374781b has its CatchHandler @ 036474cc */
            uVar17 = (*pVVar10->methodPtr)(pSVar9,pVVar10->method);
            if ((uVar17 & 1) == 0) goto LAB_03647878;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036477e4 with catch @ 036477f0
                        */
            pSVar14 = pSVar9->klass;
            uVar2._0_1_ = (pSVar14->_2).rank;
            uVar2._1_1_ = (pSVar14->_2).minimumAlignment;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036477dc with catch @ 036477f4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03647720 with catch @ 036477f8
                        */
            uVar17 = (ulong)uVar2;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036476d8 with catch @ 036477fc
                        */
            if (uVar17 != 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036476c4 with catch @ 03647800
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036477d4 with catch @ 03647804
                        */
              piVar18 = &((pSVar14->_1).interfaceOffsets)->offset;
              do {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03647664 with catch @ 03647808
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03647608 with catch @ 0364780c
                        */
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo) {
                    /* catch() { ... } // from try @ 0364781c with catch @ 03647830 */
                    /* try { // try from 03647838 to 0374789f has its CatchHandler @ 036478b4 */
                  pVVar10 = pSVar14->vtable + *piVar18;
                  goto LAB_0364783c;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
                    /* try { // try from 0364781c to 0374781f has its CatchHandler @ 03647830 */
              } while (uVar17 != 0);
            }
            pVVar10 = (VirtualInvokeData *)
                      FUN_01b81914(pSVar9,
                                   System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo,0);
LAB_0364783c:
            lVar11 = (*pVVar10->methodPtr)(pSVar9,pVVar10->method);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar7 = System_String__op_Equality
                              (*(System_String_o **)(lVar11 + 0x18),CJNHFNHJHPE,(MethodInfo *)0x0);
          } while (!bVar7);
          pMVar19->HPACPFLKHPK = StringLiteral_1606/*"1"*/;
          thunk_FUN_01c20e04(pMVar19);
LAB_03647878:
          if (pSVar9 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
            pSVar14 = pSVar9->klass;
            uVar3._0_1_ = (pSVar14->_2).rank;
            uVar3._1_1_ = (pSVar14->_2).minimumAlignment;
            uVar17 = (ulong)uVar3;
            if (uVar17 != 0) {
                    /* try { // try from 036478a0 to 037478ab has its CatchHandler @ 036474cc */
              piVar18 = &((pSVar14->_1).interfaceOffsets)->offset;
              do {
                    /* try { // try from 036478ac to 037478b3 has its CatchHandler @ 036478b4 */
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                    (Il2CppClass *)System_IDisposable_TypeInfo) {
                  pVVar10 = pSVar14->vtable + *piVar18;
                  goto LAB_0364797c;
                }
                uVar17 = uVar17 - 1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03647838 with catch @ 036478b4
                       catch(type#2 @ 00000000) { ... } // from try @ 036478ac with catch @ 036478b4
                        */
                piVar18 = piVar18 + 4;
                    /* try { // try from 036478b8 to 037479e7 has its CatchHandler @ 036478b8
                       catch() { ... } // from try @ 036478b8 with catch @ 036478b8
                       catch() { ... } // from try @ 03647be0 with catch @ 036478b8
                       catch() { ... } // from try @ 03647c94 with catch @ 036478b8
                       catch() { ... } // from try @ 03647c9c with catch @ 036478b8
                       catch() { ... } // from try @ 03647d8c with catch @ 036478b8 */
              } while (uVar17 != 0);
            }
            pVVar10 = (VirtualInvokeData *)FUN_01b81914(pSVar9,System_IDisposable_TypeInfo,0);
LAB_0364797c:
            (*pVVar10->methodPtr)(pSVar9,pVVar10->method);
          }
        }
      }
      else {
        bVar7 = System_String__op_Equality(a,StringLiteral_4628/*"ContainsConsumable"*/,(MethodInfo *)0x0);
        if (!bVar7) {
                    /* try { // try from 03647b34 to 03747b4f has its CatchHandler @ 03647ccc */
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
          __this = (QuestCondition_o *)0x0;
          if (args == (System_Object_array *)0x0) goto LAB_03647bc8;
                    /* try { // try from 03647b50 to 03747b7f has its CatchHandler @ 03647cdc */
          if ((a != (System_String_o *)0x0) &&
             (lVar11 = thunk_FUN_01bda71c(a,(((args->obj).klass)->_1).element_class), lVar11 == 0))
          {
            uVar12 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar12,0);
          }
          if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          args->m_Items[0] = (Il2CppObject *)a;
          thunk_FUN_01c20e04(args->m_Items,a);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          puVar16 = &StringLiteral_10698/*"QuestCondition.RaidPackInfoFunction: unknown property: "{0}""*/;
          goto LAB_03647b98;
        }
        bVar7 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
        if (!bVar7) {
          pGVar8 = (pBVar20->fields).AKFPFIHIHOC;
          __this = (QuestCondition_o *)0x0;
          if (pGVar8 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)
          goto LAB_03647bc8;
          pSVar9 = Google_Protobuf_Collections_RepeatedField<object>__GetEnumerator
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar8,
                              Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_GetEnumerator__
                             );
          if (pSVar9 == (System_Collections_Generic_IEnumerator_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          do {
            pSVar14 = pSVar9->klass;
            uVar4._0_1_ = (pSVar14->_2).rank;
            uVar4._1_1_ = (pSVar14->_2).minimumAlignment;
            uVar17 = (ulong)uVar4;
            if (uVar17 != 0) {
              piVar18 = &((pSVar14->_1).interfaceOffsets)->offset;
              do {
                    /* try { // try from 036479e8 to 03747a0f has its CatchHandler @ 03647cc0 */
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                  pVVar10 = pSVar14->vtable + *piVar18;
                  goto LAB_03647a1c;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            pVVar10 = (VirtualInvokeData *)
                      FUN_01b81914(pSVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_03647a1c:
            uVar17 = (*pVVar10->methodPtr)(pSVar9,pVVar10->method);
            if ((uVar17 & 1) == 0) goto LAB_03647ab4;
            pSVar14 = pSVar9->klass;
            uVar5._0_1_ = (pSVar14->_2).rank;
            uVar5._1_1_ = (pSVar14->_2).minimumAlignment;
            uVar17 = (ulong)uVar5;
            if (uVar17 != 0) {
              piVar18 = &((pSVar14->_1).interfaceOffsets)->offset;
              do {
                    /* try { // try from 03647a44 to 03747a6f has its CatchHandler @ 03647cbc */
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo) {
                  pVVar10 = pSVar14->vtable + *piVar18;
                  goto LAB_03647a78;
                }
                uVar17 = uVar17 - 1;
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            pVVar10 = (VirtualInvokeData *)
                      FUN_01b81914(pSVar9,
                                   System_Collections_Generic_IEnumerator<PIADCKMDDAK>_TypeInfo,0);
LAB_03647a78:
            lVar11 = (*pVVar10->methodPtr)(pSVar9,pVVar10->method);
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            bVar7 = System_String__op_Equality
                              (*(System_String_o **)(lVar11 + 0x18),CJNHFNHJHPE,(MethodInfo *)0x0);
          } while (!bVar7);
          pMVar19->HPACPFLKHPK = StringLiteral_1606/*"1"*/;
          thunk_FUN_01c20e04(pMVar19);
LAB_03647ab4:
                    /* try { // try from 03647ab8 to 03747acb has its CatchHandler @ 03647cd4 */
          if (pSVar9 != (System_Collections_Generic_IEnumerator_T__o *)0x0) {
            pSVar14 = pSVar9->klass;
            uVar6._0_1_ = (pSVar14->_2).rank;
            uVar6._1_1_ = (pSVar14->_2).minimumAlignment;
            uVar17 = (ulong)uVar6;
                    /* try { // try from 03647ad0 to 03747adf has its CatchHandler @ 03647cd8 */
            if (uVar17 != 0) {
              piVar18 = &((pSVar14->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                    (Il2CppClass *)System_IDisposable_TypeInfo) {
                  pVVar10 = pSVar14->vtable + *piVar18;
                  goto LAB_03647b14;
                }
                    /* try { // try from 03647aec to 03747aef has its CatchHandler @ 03647ca8 */
                uVar17 = uVar17 - 1;
                    /* try { // try from 03647af0 to 03747b0f has its CatchHandler @ 03647cc8 */
                piVar18 = piVar18 + 4;
              } while (uVar17 != 0);
            }
            pVVar10 = (VirtualInvokeData *)FUN_01b81914(pSVar9,System_IDisposable_TypeInfo,0);
LAB_03647b14:
                    /* try { // try from 03647b14 to 03747b2f has its CatchHandler @ 03647cd0 */
            (*pVVar10->methodPtr)(pSVar9,pVVar10->method);
          }
        }
      }
                    /* try { // try from 03647bbc to 03747bdf has its CatchHandler @ 03647cb0 */
      return;
    }
  }
LAB_03647bc8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== protected override void LBCKADKEHDL(NILLKLHKLHG.AOBOECPEMLA HPACPFLKHPK)  [RVA 0x3547D78]
// QuestCondition$$LBCKADKEHDL @ RVA 0x3547D78

void QuestCondition__LBCKADKEHDL
               (QuestCondition_o *__this,NILLKLHKLHG_AOBOECPEMLA_o *HPACPFLKHPK,MethodInfo *method)

{
  System_String_o **ppSVar1;
  DBNEEHGBCJD_Fields *pDVar2;
  MEMHEPBAJJA_HIAEDCDJJDJ_Fields *pMVar3;
  int32_t iVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  bool bVar8;
  uint32_t uVar9;
  undefined4 uVar10;
  Il2CppObject *pIVar11;
  System_String_o *pSVar12;
  MMFIDKMDADC_o *pMVar13;
  Il2CppMethodPointer *ppIVar14;
  ModelParameters_o *pPVar15;
  FightList_o *pAVar16;
  DNELIPCHKLK_o *pDVar17;
  CNLGMNIEGFG_o *pCVar18;
  OOMHDDBCBJP_o *pOVar19;
  Roster_o *pAVar20;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar21;
  MethodInfo *method_00;
  MethodInfo *method_01;
  NCCFNKMICGK_c *pNVar22;
  LPAPAMPGDFN_o *pLVar23;
  System_String_o *pSVar24;
  HOOAAGABMBL_o *pHVar25;
  DBNEEHGBCJD_o *pDVar26;
  Item_o *pDVar27;
  System_Collections_Generic_IReadOnlyList_string__c *pSVar28;
  ulong uVar29;
  int32_t *piVar30;
  MMFIDKMDADC_Fields *pMVar31;
  NCCFNKMICGK_o *pNVar32;
  System_Collections_Generic_IReadOnlyList_string__o *pSVar33;
  PKHMIGFEJCL_o **ppPVar34;
  float __this_00;
  float __this_01;
  undefined8 local_38;
  
                    /* try { // try from 03647d8c to 03747d97 has its CatchHandler @ 036478b8 */
                    /* try { // try from 03647d98 to 03747d9f has its CatchHandler @ 03647da0 */
  if ((DAT_04568b1c & 1) == 0) {
                    /* catch() { ... } // from try @ 03647d1c with catch @ 03647da0
                       catch() { ... } // from try @ 03647d98 with catch @ 03647da0 */
                    /* try { // try from 03647da4 to 03747f53 has its CatchHandler @ 03647da4
                       catch() { ... } // from try @ 03647da4 with catch @ 03647da4
                       catch() { ... } // from try @ 03648090 with catch @ 03647da4
                       catch() { ... } // from try @ 03648140 with catch @ 03647da4
                       catch() { ... } // from try @ 03648148 with catch @ 03647da4
                       catch() { ... } // from try @ 03648228 with catch @ 03647da4 */
    FUN_01bab630(&System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OHDDKGHEEPA_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_15900/*"_$RaidId"*/);
    FUN_01bab630(&StringLiteral_15907/*"_$StoryTutorialStep"*/);
    FUN_01bab630(&StringLiteral_15910/*"_$TimerName"*/);
    FUN_01bab630(&StringLiteral_15904/*"_$SceneFrom"*/);
    FUN_01bab630(&StringLiteral_15877/*"_$CurrentScene"*/);
    FUN_01bab630(&StringLiteral_15870/*"_$BestAcquiredWeaponLevel"*/);
    FUN_01bab630(&StringLiteral_1322/*"-1"*/);
    FUN_01bab630(&StringLiteral_15864/*"_$ActionID"*/);
    FUN_01bab630(&StringLiteral_15908/*"_$TabFrom"*/);
    FUN_01bab630(&StringLiteral_15891/*"_$Offer"*/);
    FUN_01bab630(&StringLiteral_15894/*"_$PacksSummarySize"*/);
    FUN_01bab630(&StringLiteral_15874/*"_$ChosenLocale"*/);
    FUN_01bab630(&StringLiteral_15886/*"_$InEclipseMode"*/);
    FUN_01bab630(&StringLiteral_15871/*"_$BestArmor"*/);
    FUN_01bab630(&StringLiteral_15893/*"_$PacksCount"*/);
    FUN_01bab630(&StringLiteral_15898/*"_$Raid"*/);
    FUN_01bab630(&StringLiteral_15879/*"_$Enchantment"*/);
    FUN_01bab630(&StringLiteral_15862/*"_"*/);
    FUN_01bab630(&StringLiteral_15885/*"_$GemsPrice"*/);
    FUN_01bab630(&StringLiteral_15897/*"_$PurchaseUnsuccessful"*/);
    FUN_01bab630(&StringLiteral_15865/*"_$ActualCoinPackItem"*/);
    FUN_01bab630(&StringLiteral_15906/*"_$SetItem"*/);
    FUN_01bab630(&StringLiteral_15881/*"_$Fight"*/);
    FUN_01bab630(&StringLiteral_15890/*"_$LotteryLastSpinNumber"*/);
    FUN_01bab630(&StringLiteral_15867/*"_$BestAcquiredHelmLevel"*/);
    FUN_01bab630(&StringLiteral_15911/*"_$UrlOpned"*/);
    FUN_01bab630(&StringLiteral_15873/*"_$ButtonType"*/);
    FUN_01bab630(&StringLiteral_15892/*"_$PackName"*/);
    FUN_01bab630(&StringLiteral_1572/*"0.00"*/);
    FUN_01bab630(&StringLiteral_15866/*"_$BestAcquiredArmorLevel"*/);
                    /* try { // try from 03647f54 to 03747f7b has its CatchHandler @ 03648178 */
    FUN_01bab630(&StringLiteral_15887/*"_$InLottery"*/);
    FUN_01bab630(&StringLiteral_15863/*"_$"*/);
    FUN_01bab630(&StringLiteral_15876/*"_$CurRaidFloor"*/);
    FUN_01bab630(&StringLiteral_15884/*"_$GameStarted"*/);
    FUN_01bab630(&StringLiteral_15880/*"_$EnergyChange"*/);
    FUN_01bab630(&StringLiteral_15896/*"_$Purchase"*/);
    FUN_01bab630(&StringLiteral_15901/*"_$RaidMode"*/);
    FUN_01bab630(&StringLiteral_15878/*"_$Deliver"*/);
                    /* try { // try from 03647fb0 to 03747fdb has its CatchHandler @ 03648174 */
    FUN_01bab630(&StringLiteral_15869/*"_$BestAcquiredRangedLevel"*/);
    FUN_01bab630(&StringLiteral_15883/*"_$FightResult"*/);
    FUN_01bab630(&StringLiteral_15909/*"_$TabTo"*/);
    FUN_01bab630(&StringLiteral_15875/*"_$ClanTutStepToRun"*/);
    FUN_01bab630(&StringLiteral_15882/*"_$FightAvgFPS"*/);
    FUN_01bab630(&StringLiteral_15903/*"_$RaidResult"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_15895/*"_$PerkName"*/);
    FUN_01bab630(&StringLiteral_15899/*"_$RaidAvatar"*/);
                    /* try { // try from 03648018 to 0374801f has its CatchHandler @ 03648168 */
    FUN_01bab630(&StringLiteral_15905/*"_$SceneTo"*/);
                    /* try { // try from 03648024 to 0374802b has its CatchHandler @ 03648170 */
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
                    /* try { // try from 03648034 to 03748047 has its CatchHandler @ 03648164 */
    FUN_01bab630(&StringLiteral_15889/*"_$LevelUp"*/);
    FUN_01bab630(&StringLiteral_15888/*"_$Iterator"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
                    /* try { // try from 03648054 to 0374806f has its CatchHandler @ 03648160 */
    FUN_01bab630(&StringLiteral_15872/*"_$ButtonName"*/);
    FUN_01bab630(&StringLiteral_15902/*"_$RaidPurchase"*/);
    FUN_01bab630(&StringLiteral_15868/*"_$BestAcquiredMagicLevel"*/);
    DAT_04568b1c = 1;
  }
  local_38 = (System_String_c *)0x0;
  ppPVar34 = &(__this->fields).AAJBIMFNMBB;
                    /* try { // try from 03648088 to 0374808f has its CatchHandler @ 03648158 */
  if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
    return;
  }
                    /* try { // try from 03648090 to 0374812b has its CatchHandler @ 03647da4 */
  if (HPACPFLKHPK == (NILLKLHKLHG_AOBOECPEMLA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar11 = (HPACPFLKHPK->fields).IMMNELPBGIF;
  pSVar12 = StringLiteral_1/*""*/;
  if (pIVar11 != (Il2CppObject *)0x0) {
    pSVar12 = (System_String_o *)
              (*pIVar11->klass->vtable[3].methodPtr)(pIVar11,pIVar11->klass->vtable[3].method);
  }
  uVar9 = <PrivateImplementationDetails>__ComputeStringHash(pSVar12,(MethodInfo *)0x0);
  if (uVar9 < 0x8b24db24) {
    if (uVar9 < 0x43e26fae) {
      if (0x2d3c6e6b < uVar9) {
        if (uVar9 < 0x38413c01) {
          if (uVar9 == 0x2f7cc4f9) {
            bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15901/*"_$RaidMode"*/,(MethodInfo *)0x0);
            if (bVar8) {
              pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
              if (pMVar13 == (MMFIDKMDADC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              (pMVar13->fields).HPACPFLKHPK = StringLiteral_1322/*"-1"*/;
              thunk_FUN_01c20e04();
              if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              iVar4 = ((*ppPVar34)->fields).OILECKFDMDB;
              if (iVar4 < 0) {
                return;
              }
              if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pCVar18 = GameUtils__MJDCGINJMOP(iVar4,false,(MethodInfo *)0x0);
              if (pCVar18 == (CNLGMNIEGFG_o *)0x0) {
                return;
              }
              pOVar19 = (pCVar18->fields).super.IFJLLGPGMHM;
              if (pOVar19 == (OOMHDDBCBJP_o *)0x0) {
                return;
              }
              bVar5 = (OHDDKGHEEPA_TypeInfo->_2).naturalAligment;
              if ((bVar5 <= (pOVar19->klass->_2).naturalAligment) &&
                 ((pOVar19->klass->_2).typeHierarchy[(ulong)bVar5 - 1] ==
                  (Il2CppClass *)OHDDKGHEEPA_TypeInfo)) {
                pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
                local_38 = (System_String_c *)
                           CONCAT44(*(undefined4 *)&pOVar19[1].fields.LFJPDELEIHG,
                                    (undefined4)local_38);
                pSVar12 = System_Int32__ToString((int)&local_38 + 4,(MethodInfo *)0x0);
                if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
                  pMVar31 = &pMVar13->fields;
                  pMVar31->HPACPFLKHPK = pSVar12;
                  thunk_FUN_01c20e04(pMVar31);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
                    /* WARNING: Subroutine does not return */
              FUN_01babc64();
            }
          }
          else if (uVar9 == 0x33fd62b5) {
            bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15877/*"_$CurrentScene"*/,(MethodInfo *)0x0);
            if (bVar8) {
              if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
              if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
                (pMVar13->fields).HPACPFLKHPK = ((*ppPVar34)->fields).DLOIHNBNGDB;
                thunk_FUN_01c20e04();
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          }
          else if ((uVar9 == 0x38413c00) &&
                  (bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15897/*"_$PurchaseUnsuccessful"*/,(MethodInfo *)0x0)
                  , bVar8)) {
            pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
            pSVar12 = QuestCondition__JMBCALDIOHO(__this,method_01);
            if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
              pMVar31 = &pMVar13->fields;
              pMVar31->HPACPFLKHPK = pSVar12;
              thunk_FUN_01c20e04(pMVar31);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
        else {
                    /* try { // try from 036486d8 to 037486df has its CatchHandler @ 0364889c */
          if (uVar9 == 0x3a53eacc) {
                    /* try { // try from 036492d0 to 037492db has its CatchHandler @ 036494bc */
            bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15909/*"_$TabTo"*/,(MethodInfo *)0x0);
            if (bVar8) {
                    /* try { // try from 036492dc to 037492e7 has its CatchHandler @ 036494b8 */
              if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
              if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
                    /* try { // try from 036492f0 to 037492fb has its CatchHandler @ 036494b4 */
                (pMVar13->fields).HPACPFLKHPK = ((*ppPVar34)->fields).HMGLKIEIMPF;
                thunk_FUN_01c20e04();
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          }
          else {
                    /* try { // try from 036486e4 to 037486eb has its CatchHandler @ 036488a0 */
                    /* try { // try from 036486ec to 037486f3 has its CatchHandler @ 0364887c */
            if (uVar9 == 0x4142a35f) {
              bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15900/*"_$RaidId"*/,(MethodInfo *)0x0);
              if (bVar8) {
                if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
                pSVar12 = System_Int32__ToString((int)*ppPVar34 + 0x58,(MethodInfo *)0x0);
                if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
                  pMVar31 = &pMVar13->fields;
                  pMVar31->HPACPFLKHPK = pSVar12;
                  thunk_FUN_01c20e04(pMVar31);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
            }
            else {
                    /* try { // try from 0364870c to 0374871b has its CatchHandler @ 03648878 */
              if ((uVar9 == 0x43e26fad) &&
                 (bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15908/*"_$TabFrom"*/,(MethodInfo *)0x0),
                 bVar8)) {
                if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                    /* try { // try from 03648724 to 03748737 has its CatchHandler @ 03648898 */
                pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
                if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
                  (pMVar13->fields).HPACPFLKHPK = ((*ppPVar34)->fields).LDDHCAMIBKH;
                  thunk_FUN_01c20e04();
                  return;
                }
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
            }
          }
        }
        goto LAB_03649488;
      }
      if (0x126194fa < uVar9) {
        if (uVar9 == 0x20e98a5d) {
          bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15872/*"_$ButtonName"*/,(MethodInfo *)0x0);
          if (bVar8) {
            if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
            if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
              (pMVar13->fields).HPACPFLKHPK = ((*ppPVar34)->fields).GLKBIGJCDIP;
              thunk_FUN_01c20e04();
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
        else if (uVar9 == 0x2400e419) {
          bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15884/*"_$GameStarted"*/,(MethodInfo *)0x0);
          if (bVar8) {
            pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
            if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_04566e5a == '\0') {
              FUN_01bab630(&GameUtils_TypeInfo);
              DAT_04566e5a = '\x01';
            }
            if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            ppSVar1 = &StringLiteral_1567/*"0"*/;
            if (GameUtils_TypeInfo->static_fields->_CANIKCKLKBL_k__BackingField != false) {
              ppSVar1 = (System_String_o **)&StringLiteral_1606/*"1"*/;
            }
            if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
              pMVar31 = &pMVar13->fields;
              pMVar31->HPACPFLKHPK = *ppSVar1;
              thunk_FUN_01c20e04(pMVar31);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
        else if ((uVar9 == 0x2d3c6e6b) &&
                (bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15911/*"_$UrlOpned"*/,(MethodInfo *)0x0),
                bVar8)) {
          if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
          if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
            (pMVar13->fields).HPACPFLKHPK = ((*ppPVar34)->fields).JEMIJCDAKLB;
            thunk_FUN_01c20e04();
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        goto LAB_03649488;
      }
      if (uVar9 == 0x30fcae1) {
        bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15889/*"_$LevelUp"*/,(MethodInfo *)0x0);
        if (bVar8) {
          if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
          pSVar12 = System_Int32__ToString((int)*ppPVar34 + 0xe4,(MethodInfo *)0x0);
          if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
            pMVar31 = &pMVar13->fields;
            pMVar31->HPACPFLKHPK = pSVar12;
            thunk_FUN_01c20e04(pMVar31);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        goto LAB_03649488;
      }
      if (uVar9 != 0x105fd6cf) {
                    /* try { // try from 0364812c to 03748133 has its CatchHandler @ 0364817c */
                    /* try { // try from 03648134 to 03748137 has its CatchHandler @ 0364816c */
                    /* try { // try from 03648138 to 0374813b has its CatchHandler @ 0364815c */
                    /* try { // try from 0364813c to 0374813f has its CatchHandler @ 03648154 */
                    /* try { // try from 03648140 to 03748143 has its CatchHandler @ 03647da4 */
                    /* try { // try from 03648144 to 03748147 has its CatchHandler @ 03648150 */
                    /* try { // try from 03648148 to 03748193 has its CatchHandler @ 03647da4 */
        if ((uVar9 == 0x126194fa) &&
           (bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15904/*"_$SceneFrom"*/,(MethodInfo *)0x0), bVar8
           )) {
                    /* catch() { ... } // from try @ 03648144 with catch @ 03648150 */
                    /* catch() { ... } // from try @ 0364813c with catch @ 03648154 */
          if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
                    /* catch() { ... } // from try @ 03648088 with catch @ 03648158 */
          pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
                    /* catch() { ... } // from try @ 03648138 with catch @ 0364815c */
          if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
                    /* catch() { ... } // from try @ 03648054 with catch @ 03648160 */
                    /* catch() { ... } // from try @ 03648034 with catch @ 03648164 */
            (pMVar13->fields).HPACPFLKHPK = ((*ppPVar34)->fields).FBIABCNMNMD;
                    /* catch() { ... } // from try @ 03648018 with catch @ 03648168 */
            thunk_FUN_01c20e04();
            return;
                    /* catch() { ... } // from try @ 03648134 with catch @ 0364816c */
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        goto LAB_03649488;
      }
                    /* catch() { ... } // from try @ 0364865c with catch @ 036488a4 */
                    /* catch() { ... } // from try @ 03648600 with catch @ 036488a8 */
                    /* catch() { ... } // from try @ 03648848 with catch @ 036488ac */
      bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15868/*"_$BestAcquiredMagicLevel"*/,(MethodInfo *)0x0);
    }
    else {
                    /* try { // try from 03648228 to 03748233 has its CatchHandler @ 03647da4 */
      if (uVar9 < 0x7dda02df) {
                    /* try { // try from 03648234 to 0374823b has its CatchHandler @ 0364823c */
        if (uVar9 < 0x62086153) {
                    /* catch() { ... } // from try @ 036481b8 with catch @ 0364823c
                       catch() { ... } // from try @ 03648234 with catch @ 0364823c */
          if (uVar9 == 0x4c47ce09) {
            bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15895/*"_$PerkName"*/,(MethodInfo *)0x0);
            if (bVar8) {
              if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
              if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
                (pMVar13->fields).HPACPFLKHPK = ((*ppPVar34)->fields).LMPMHKIABOM;
                thunk_FUN_01c20e04();
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          }
          else if (uVar9 == 0x5078dee2) {
                    /* try { // try from 0364895c to 03748967 has its CatchHandler @ 03648480 */
            bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15880/*"_$EnergyChange"*/,(MethodInfo *)0x0);
            if (bVar8) {
                    /* try { // try from 03648968 to 0374896f has its CatchHandler @ 03648970 */
              if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
                    /* catch() { ... } // from try @ 036488ec with catch @ 03648970
                       catch() { ... } // from try @ 03648968 with catch @ 03648970 */
              pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
              pSVar12 = System_Int32__ToString((int)*ppPVar34 + 0xe0,(MethodInfo *)0x0);
              if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
                pMVar31 = &pMVar13->fields;
                pMVar31->HPACPFLKHPK = pSVar12;
                thunk_FUN_01c20e04(pMVar31);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          }
          else if ((uVar9 == 0x62086152) &&
                  (bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15876/*"_$CurRaidFloor"*/,(MethodInfo *)0x0)
                  , bVar8)) {
            if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
            pSVar12 = System_Int32__ToString((int)*ppPVar34 + 0xf0,(MethodInfo *)0x0);
            if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
              pMVar31 = &pMVar13->fields;
              pMVar31->HPACPFLKHPK = pSVar12;
              thunk_FUN_01c20e04(pMVar31);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          goto LAB_03649488;
        }
        if (uVar9 == 0x6760922a) {
          bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15887/*"_$InLottery"*/,(MethodInfo *)0x0);
          if (bVar8) {
            if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
                    /* try { // try from 03649248 to 0374924f has its CatchHandler @ 036494dc */
            pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
            ppSVar1 = &StringLiteral_1567/*"0"*/;
            if (((*ppPVar34)->fields).BILELFMLGNC != false) {
              ppSVar1 = (System_String_o **)&StringLiteral_1606/*"1"*/;
            }
                    /* try { // try from 03649260 to 03749267 has its CatchHandler @ 036494d8 */
            if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
              (pMVar13->fields).HPACPFLKHPK = *ppSVar1;
              thunk_FUN_01c20e04();
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          goto LAB_03649488;
        }
        if (uVar9 == 0x6ea79046) {
          bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15867/*"_$BestAcquiredHelmLevel"*/,(MethodInfo *)0x0);
        }
        else {
          if (uVar9 != 0x7dda02de) goto LAB_03649488;
                    /* try { // try from 0364865c to 03748687 has its CatchHandler @ 036488a4 */
          bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15870/*"_$BestAcquiredWeaponLevel"*/,(MethodInfo *)0x0);
        }
      }
      else if (uVar9 < 0x89ff5aac) {
        if (uVar9 == 0x80ec72c3) {
          bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15905/*"_$SceneTo"*/,(MethodInfo *)0x0);
          if (bVar8) {
            if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
            if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
              (pMVar13->fields).HPACPFLKHPK = ((*ppPVar34)->fields).GABDPMIFKDG;
              thunk_FUN_01c20e04();
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          goto LAB_03649488;
        }
        if (uVar9 == 0x85249abc) {
          bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15910/*"_$TimerName"*/,(MethodInfo *)0x0);
          if (bVar8) {
            if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar24 = ((*ppPVar34)->fields).BEMCEBHHIEC;
            pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
            pSVar12 = StringLiteral_1/*""*/;
            if (pSVar24 != (System_String_o *)0x0) {
              pSVar12 = pSVar24;
            }
            if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
              (pMVar13->fields).HPACPFLKHPK = pSVar12;
              thunk_FUN_01c20e04();
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          goto LAB_03649488;
        }
                    /* try { // try from 03648480 to 037485ff has its CatchHandler @ 03648480
                       catch() { ... } // from try @ 03648480 with catch @ 03648480
                       catch() { ... } // from try @ 036487ac with catch @ 03648480
                       catch() { ... } // from try @ 03648860 with catch @ 03648480
                       catch() { ... } // from try @ 03648868 with catch @ 03648480
                       catch() { ... } // from try @ 0364895c with catch @ 03648480 */
        if (uVar9 != 0x89ff5aab) goto LAB_03649488;
        bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15871/*"_$BestArmor"*/,(MethodInfo *)0x0);
      }
      else {
        if (uVar9 == 0x8a18111d) {
          bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15894/*"_$PacksSummarySize"*/,(MethodInfo *)0x0);
          if (bVar8) {
            if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            __this_01 = ((*ppPVar34)->fields)._HIDGMMHJLLD_k__BackingField;
            pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
            local_38 = (System_String_c *)CONCAT44(local_38._4_4_,__this_01);
            pSVar12 = System_Single__ToString
                                (__this_01,(System_String_o *)&local_38,StringLiteral_1572/*"0.00"*/);
            if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
              pMVar31 = &pMVar13->fields;
              pMVar31->HPACPFLKHPK = pSVar12;
              thunk_FUN_01c20e04(pMVar31);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          goto LAB_03649488;
        }
        if (uVar9 == 0x8a716901) {
          bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15883/*"_$FightResult"*/,(MethodInfo *)0x0);
          if (bVar8) {
            if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
            if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
              (pMVar13->fields).HPACPFLKHPK = ((*ppPVar34)->fields).PNPKEKHEMCD;
              thunk_FUN_01c20e04();
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          goto LAB_03649488;
        }
        if (uVar9 != 0x8b24db23) goto LAB_03649488;
        bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15866/*"_$BestAcquiredArmorLevel"*/,(MethodInfo *)0x0);
      }
    }
  }
  else {
                    /* catch() { ... } // from try @ 03648024 with catch @ 03648170 */
                    /* catch() { ... } // from try @ 03647fb0 with catch @ 03648174 */
                    /* catch() { ... } // from try @ 03647f54 with catch @ 03648178 */
                    /* catch() { ... } // from try @ 0364812c with catch @ 0364817c */
    if (0xc1816fd8 < uVar9) {
      if (uVar9 < 0xe27a4ffa) {
        if (uVar9 < 0xd0587b94) {
          if (uVar9 == 0xc22bf45a) {
            bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15874/*"_$ChosenLocale"*/,(MethodInfo *)0x0);
            if (bVar8) {
              if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pDVar26 = ((*ppPVar34)->fields).POJBNHBGEBH;
              pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
              pDVar2 = (DBNEEHGBCJD_Fields *)&StringLiteral_1/*""*/;
              if (pDVar26 != (DBNEEHGBCJD_o *)0x0) {
                pDVar2 = &pDVar26->fields;
              }
              if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
                (pMVar13->fields).HPACPFLKHPK = pDVar2->_COIPKAKHDFP_k__BackingField;
                    /* try { // try from 03648f84 to 03749247 has its CatchHandler @ 03648f84
                       catch() { ... } // from try @ 03648f84 with catch @ 03648f84
                       catch() { ... } // from try @ 0364930c with catch @ 03648f84
                       catch() { ... } // from try @ 036494a8 with catch @ 03648f84
                       catch() { ... } // from try @ 036494f0 with catch @ 03648f84
                       catch() { ... } // from try @ 03649534 with catch @ 03648f84 */
                thunk_FUN_01c20e04();
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          }
          else if (uVar9 == 0xcfa995b7) {
            bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15907/*"_$StoryTutorialStep"*/,(MethodInfo *)0x0);
            if (bVar8) {
              pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
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
              pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
              if (pAVar20 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pLVar23 = (pAVar20->fields).LMCDOMHENMC;
              if (pLVar23 == (LPAPAMPGDFN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
                pMVar31 = &pMVar13->fields;
                pMVar31->HPACPFLKHPK = (pLVar23->fields).HEADCHPANBF;
                thunk_FUN_01c20e04(pMVar31);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          }
          else if ((uVar9 == 0xd0587b93) &&
                  (bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15879/*"_$Enchantment"*/,(MethodInfo *)0x0)
                  , bVar8)) {
            pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
            pSVar12 = QuestCondition__DNPEBFIKPHB(__this,method_00);
            if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
              pMVar31 = &pMVar13->fields;
              pMVar31->HPACPFLKHPK = pSVar12;
              thunk_FUN_01c20e04(pMVar31);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
        else if (uVar9 == 0xd98b953e) {
                    /* try { // try from 03649284 to 0374928f has its CatchHandler @ 036494c8 */
          bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15890/*"_$LotteryLastSpinNumber"*/,(MethodInfo *)0x0);
          if (bVar8) {
                    /* try { // try from 03649290 to 0374929b has its CatchHandler @ 036494cc */
            if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
                    /* try { // try from 036492a4 to 037492af has its CatchHandler @ 036494c4 */
            pSVar12 = System_Int32__ToString((int)*ppPVar34 + 0xec,(MethodInfo *)0x0);
            if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
              pMVar31 = &pMVar13->fields;
                    /* try { // try from 036492b0 to 037492b7 has its CatchHandler @ 036494d0 */
              pMVar31->HPACPFLKHPK = pSVar12;
              thunk_FUN_01c20e04(pMVar31);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
        else if (uVar9 == 0xda08340b) {
          bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15903/*"_$RaidResult"*/,(MethodInfo *)0x0);
          if (bVar8) {
            if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
            if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
              (pMVar13->fields).HPACPFLKHPK = ((*ppPVar34)->fields).LOLFFJGLKLD;
              thunk_FUN_01c20e04();
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
        else if ((uVar9 == 0xe27a4ff9) &&
                (bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15902/*"_$RaidPurchase"*/,(MethodInfo *)0x0),
                bVar8)) {
          if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
          if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
            (pMVar13->fields).HPACPFLKHPK = ((*ppPVar34)->fields).LJMELPHJPOG;
                    /* try { // try from 036486c8 to 037486cf has its CatchHandler @ 03648884 */
            thunk_FUN_01c20e04();
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      else if (uVar9 < 0xf1bc0aba) {
        if (uVar9 == 0xe2c4110f) {
          bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15865/*"_$ActualCoinPackItem"*/,(MethodInfo *)0x0);
          if (bVar8) {
            pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_04563eaa == '\0') {
              FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
              DAT_04563eaa = '\x01';
            }
            if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pDVar27 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
            if (pDVar27 != (Item_o *)0x0) {
              pHVar25 = (pDVar27->fields)._CPLLGJKGGMD_k__BackingField;
              if ((pHVar25 == (HOOAAGABMBL_o *)0x0) ||
                 (pSVar12 = (pHVar25->fields)._COIPKAKHDFP_k__BackingField,
                 pSVar12 == (System_String_o *)0x0)) {
                pSVar12 = string_TypeInfo->static_fields->Empty;
              }
              if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
                pMVar31 = &pMVar13->fields;
                pMVar31->HPACPFLKHPK = pSVar12;
                thunk_FUN_01c20e04(pMVar31);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
        else if (uVar9 == 0xef9d4e72) {
          bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15898/*"_$Raid"*/,(MethodInfo *)0x0);
          if (bVar8) {
            if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
            if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
              (pMVar13->fields).HPACPFLKHPK = ((*ppPVar34)->fields).EICOIEGEFAF;
              thunk_FUN_01c20e04();
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
        else if ((uVar9 == 0xf1bc0ab9) &&
                (bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15864/*"_$ActionID"*/,(MethodInfo *)0x0),
                bVar8)) {
          pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
          if (DAT_04566c75 == '\0') {
            FUN_01bab630(&PHLKGOCKIGP_TypeInfo);
            DAT_04566c75 = '\x01';
          }
          pSVar12 = PHLKGOCKIGP_TypeInfo->static_fields->_AGGOFPAGILE_k__BackingField;
          if (pSVar12 == (System_String_o *)0x0) {
            pSVar12 = string_TypeInfo->static_fields->Empty;
          }
          if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
            pMVar31 = &pMVar13->fields;
            pMVar31->HPACPFLKHPK = pSVar12;
            thunk_FUN_01c20e04(pMVar31);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      else if (uVar9 == 0xf6b66863) {
        bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15893/*"_$PacksCount"*/,(MethodInfo *)0x0);
        if (bVar8) {
          if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar33 = ((*ppPVar34)->fields)._JOFOHDAGJIN_k__BackingField;
          pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
          if (pSVar33 == (System_Collections_Generic_IReadOnlyList_string__o *)0x0) {
            pSVar12 = (System_String_o *)0x0;
                    /* catch() { ... } // from try @ 0364952c with catch @ 03649548
                       catch() { ... } // from try @ 03649540 with catch @ 03649548 */
          }
          else {
            pSVar28 = pSVar33->klass;
            uVar7._0_1_ = (pSVar28->_2).rank;
            uVar7._1_1_ = (pSVar28->_2).minimumAlignment;
            uVar29 = (ulong)uVar7;
            if (uVar29 != 0) {
              piVar30 = &((pSVar28->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar30 + -2))->interfaceType ==
                    (Il2CppClass *)System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo)
                {
                  ppIVar14 = &pSVar28->vtable[*piVar30].methodPtr;
                  goto LAB_03649578;
                }
                uVar29 = uVar29 - 1;
                piVar30 = piVar30 + 4;
              } while (uVar29 != 0);
            }
            ppIVar14 = (Il2CppMethodPointer *)
                       FUN_01b81914(pSVar33,
                                    System_Collections_Generic_IReadOnlyCollection<string>_TypeInfo,
                                    0);
LAB_03649578:
            uVar10 = (**ppIVar14)(pSVar33,(MethodInfo *)ppIVar14[1]);
            local_38 = (System_String_c *)CONCAT44(uVar10,(undefined4)local_38);
            pSVar12 = System_Int32__ToString((int)&local_38 + 4,(MethodInfo *)0x0);
          }
          pSVar24 = StringLiteral_1567/*"0"*/;
          if (pSVar12 != (System_String_o *)0x0) {
            pSVar24 = pSVar12;
          }
          if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
            (pMVar13->fields).HPACPFLKHPK = pSVar24;
            thunk_FUN_01c20e04();
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      else {
                    /* try { // try from 03648848 to 0374884f has its CatchHandler @ 036488ac */
                    /* try { // try from 03648850 to 03748853 has its CatchHandler @ 03648894 */
                    /* try { // try from 03648854 to 03748857 has its CatchHandler @ 03648890 */
        if (uVar9 == 0xf6bffdf4) {
          bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15888/*"_$Iterator"*/,(MethodInfo *)0x0);
          if (bVar8) {
            if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
            if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
              (pMVar13->fields).HPACPFLKHPK = ((*ppPVar34)->fields).APJMNGDIDKM;
              thunk_FUN_01c20e04();
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
        else {
                    /* try { // try from 03648858 to 0374885b has its CatchHandler @ 03648888 */
                    /* try { // try from 0364885c to 0374885f has its CatchHandler @ 03648874 */
                    /* try { // try from 03648860 to 03748863 has its CatchHandler @ 03648480 */
                    /* try { // try from 03648864 to 03748867 has its CatchHandler @ 03648870 */
                    /* try { // try from 03648868 to 037488cb has its CatchHandler @ 03648480 */
                    /* catch() { ... } // from try @ 03648864 with catch @ 03648870 */
                    /* catch() { ... } // from try @ 0364885c with catch @ 03648874 */
                    /* catch() { ... } // from try @ 0364870c with catch @ 03648878 */
                    /* catch() { ... } // from try @ 036486ec with catch @ 0364887c */
                    /* catch() { ... } // from try @ 03648788 with catch @ 03648880 */
          if ((uVar9 == 0xfa1d247d) &&
             (bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15875/*"_$ClanTutStepToRun"*/,(MethodInfo *)0x0),
             bVar8)) {
                    /* catch() { ... } // from try @ 036486c8 with catch @ 03648884 */
                    /* catch() { ... } // from try @ 03648858 with catch @ 03648888 */
            if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
                    /* catch() { ... } // from try @ 03648744 with catch @ 0364888c */
            pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
                    /* catch() { ... } // from try @ 03648854 with catch @ 03648890 */
            if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
                    /* catch() { ... } // from try @ 03648850 with catch @ 03648894 */
                    /* catch() { ... } // from try @ 03648724 with catch @ 03648898 */
              (pMVar13->fields).HPACPFLKHPK = ((*ppPVar34)->fields).GHOHAHIJJJN;
                    /* catch() { ... } // from try @ 036486d8 with catch @ 0364889c */
              thunk_FUN_01c20e04();
              return;
                    /* catch() { ... } // from try @ 036486e4 with catch @ 036488a0 */
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
      }
      goto LAB_03649488;
    }
    if (0xaf069ea7 < uVar9) {
      if (uVar9 < 0xbbb5b2c5) {
        if (uVar9 == 0xb2d0b993) {
          bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15885/*"_$GemsPrice"*/,(MethodInfo *)0x0);
          if (bVar8) {
            if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
            pSVar12 = System_Int32__ToString((int)*ppPVar34 + 0xe8,(MethodInfo *)0x0);
            if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
              pMVar31 = &pMVar13->fields;
              pMVar31->HPACPFLKHPK = pSVar12;
              thunk_FUN_01c20e04(pMVar31);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
        else if (uVar9 == 0xb8a92d85) {
          bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15896/*"_$Purchase"*/,(MethodInfo *)0x0);
          if (bVar8) {
            if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pHVar25 = ((*ppPVar34)->fields).CJLNOJMBNPN;
            pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
            ppSVar1 = &StringLiteral_1/*""*/;
            if (pHVar25 != (HOOAAGABMBL_o *)0x0) {
              ppSVar1 = &(pHVar25->fields)._COIPKAKHDFP_k__BackingField;
            }
            if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
              (pMVar13->fields).HPACPFLKHPK = *ppSVar1;
              thunk_FUN_01c20e04();
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
        else if ((uVar9 == 0xbbb5b2c4) &&
                (bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15892/*"_$PackName"*/,(MethodInfo *)0x0),
                bVar8)) {
          if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
          if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
            (pMVar13->fields).HPACPFLKHPK = ((*ppPVar34)->fields).MCEKGACJNMK;
            thunk_FUN_01c20e04();
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        goto LAB_03649488;
      }
                    /* try { // try from 03648744 to 0374874f has its CatchHandler @ 0364888c */
      if (uVar9 == 0xbfca31e1) {
                    /* try { // try from 03649300 to 0374930b has its CatchHandler @ 036494b0 */
                    /* try { // try from 0364930c to 037494a3 has its CatchHandler @ 03648f84 */
        bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15886/*"_$InEclipseMode"*/,(MethodInfo *)0x0);
        if (bVar8) {
          pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
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
          pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (pAVar20 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          ppSVar1 = &StringLiteral_1567/*"0"*/;
          if ((pAVar20->fields).IOHEOKOOJFA != false) {
            ppSVar1 = (System_String_o **)&StringLiteral_1606/*"1"*/;
          }
          if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
            pMVar31 = &pMVar13->fields;
            pMVar31->HPACPFLKHPK = *ppSVar1;
            thunk_FUN_01c20e04(pMVar31);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        goto LAB_03649488;
      }
      if (uVar9 == 0xbffe5ff8) {
        bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15881/*"_$Fight"*/,(MethodInfo *)0x0);
        if (bVar8) {
          if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
          pAVar16 = PKHMIGFEJCL__ACPCMCCBDEI(*ppPVar34,(MethodInfo *)0x0);
          pSVar12 = StringLiteral_1/*""*/;
          if (pAVar16 != (FightList_o *)0x0) {
            if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pAVar16 = PKHMIGFEJCL__ACPCMCCBDEI(*ppPVar34,(MethodInfo *)0x0);
            if (pAVar16 == (FightList_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pDVar17 = (pAVar16->fields).KOILJHHCIEE;
            if (pDVar17 == (DNELIPCHKLK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pSVar12 = (System_String_o *)
                      (*(pDVar17->klass->vtable)._3_ToString.methodPtr)
                                (pDVar17,(pDVar17->klass->vtable)._3_ToString.method);
          }
          if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
            pMVar31 = &pMVar13->fields;
            pMVar31->HPACPFLKHPK = pSVar12;
            thunk_FUN_01c20e04(pMVar31);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        goto LAB_03649488;
      }
      if ((uVar9 != 0xc1816fd8) ||
         (bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15891/*"_$Offer"*/,(MethodInfo *)0x0), !bVar8)
         ) goto LAB_03649488;
                    /* try { // try from 03648788 to 037487ab has its CatchHandler @ 03648880 */
      if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pNVar32 = ((*ppPVar34)->fields).LKNIEMOMBAA;
      pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
      if (pNVar32 != (NCCFNKMICGK_o *)0x0) {
        pNVar22 = pNVar32->klass;
        uVar6._0_1_ = (pNVar22->_2).rank;
        uVar6._1_1_ = (pNVar22->_2).minimumAlignment;
                    /* try { // try from 036487ac to 03748847 has its CatchHandler @ 03648480 */
        uVar29 = (ulong)uVar6;
        if (uVar29 != 0) {
          piVar30 = &((pNVar22->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar30 + -2))->interfaceType ==
                (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
              ppIVar14 = &pNVar22->vtable[*piVar30 + 2].methodPtr;
              goto LAB_036495d0;
            }
            uVar29 = uVar29 - 1;
            piVar30 = piVar30 + 4;
          } while (uVar29 != 0);
        }
        ppIVar14 = (Il2CppMethodPointer *)FUN_01b81914(pNVar32,NCCFNKMICGK_TypeInfo,2);
LAB_036495d0:
        pSVar12 = (System_String_o *)(**ppIVar14)(pNVar32,(MethodInfo *)ppIVar14[1]);
        if (pSVar12 != (System_String_o *)0x0) goto LAB_036495f8;
      }
      pSVar12 = string_TypeInfo->static_fields->Empty;
LAB_036495f8:
      if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
        pMVar31 = &pMVar13->fields;
        pMVar31->HPACPFLKHPK = pSVar12;
        thunk_FUN_01c20e04(pMVar31);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03648194 to 03748197 has its CatchHandler @ 036481a8 */
    if (uVar9 < 0xaccaba20) {
                    /* catch() { ... } // from try @ 03648194 with catch @ 036481a8 */
      if (uVar9 == 0x8d0d973e) {
        bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15873/*"_$ButtonType"*/,(MethodInfo *)0x0);
        if (bVar8) {
          if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
          if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
            (pMVar13->fields).HPACPFLKHPK = ((*ppPVar34)->fields).NKIAFKKEOBI;
            thunk_FUN_01c20e04();
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      else {
                    /* try { // try from 036481b8 to 03748227 has its CatchHandler @ 0364823c */
        if (uVar9 == 0x96f161a3) {
                    /* try { // try from 036488cc to 037488cf has its CatchHandler @ 036488dc */
          bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15899/*"_$RaidAvatar"*/,(MethodInfo *)0x0);
          if (bVar8) {
                    /* catch() { ... } // from try @ 036488cc with catch @ 036488dc */
            if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            iVar4 = ((*ppPVar34)->fields).OILECKFDMDB;
            if (-1 < iVar4) {
                    /* try { // try from 036488ec to 0374895b has its CatchHandler @ 03648970 */
              if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pCVar18 = GameUtils__MJDCGINJMOP(iVar4,false,(MethodInfo *)0x0);
              if (pCVar18 != (CNLGMNIEGFG_o *)0x0) {
                pPVar15 = GameUtils__DDHNCKDHKAC
                                    ((pCVar18->fields).super.MECHOBPGHFJ,(MethodInfo *)0x0);
                pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
                ppSVar1 = &StringLiteral_1/*""*/;
                if (pPVar15 != (ModelParameters_o *)0x0) {
                  ppSVar1 = &(pPVar15->fields).NILOEHGNJNL;
                }
                if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
                  (pMVar13->fields).HPACPFLKHPK = *ppSVar1;
                  thunk_FUN_01c20e04();
                  return;
                }
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
                    /* try { // try from 0364952c to 03749533 has its CatchHandler @ 03649548 */
            pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
            if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
                    /* try { // try from 03649534 to 0374953f has its CatchHandler @ 03648f84 */
              (pMVar13->fields).HPACPFLKHPK = StringLiteral_1/*""*/;
              thunk_FUN_01c20e04();
              return;
                    /* try { // try from 03649540 to 03749547 has its CatchHandler @ 03649548 */
            }
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
        }
        else if ((uVar9 == 0xaccaba1f) &&
                (bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15882/*"_$FightAvgFPS"*/,(MethodInfo *)0x0),
                bVar8)) {
          if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
          pSVar12 = System_Single__ToString
                              (__this_00,(MethodInfo *)&((*ppPVar34)->fields).FAOAFEINLEL);
          if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
            pMVar31 = &pMVar13->fields;
            pMVar31->HPACPFLKHPK = pSVar12;
            thunk_FUN_01c20e04(pMVar31);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
      goto LAB_03649488;
    }
    if (uVar9 == 0xadaf8de5) {
      bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15906/*"_$SetItem"*/,(MethodInfo *)0x0);
      if (bVar8) {
        if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
        if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
          (pMVar13->fields).HPACPFLKHPK = ((*ppPVar34)->fields).GMOMPDAHJOL;
          thunk_FUN_01c20e04();
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      goto LAB_03649488;
    }
    if (uVar9 == 0xadf0e9e3) {
      bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15878/*"_$Deliver"*/,(MethodInfo *)0x0);
      if (bVar8) {
        if (*ppPVar34 == (PKHMIGFEJCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pHVar25 = ((*ppPVar34)->fields).CJLNOJMBNPN;
        pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
        ppSVar1 = &StringLiteral_1/*""*/;
        if (pHVar25 != (HOOAAGABMBL_o *)0x0) {
          ppSVar1 = &(pHVar25->fields)._COIPKAKHDFP_k__BackingField;
        }
        if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
          (pMVar13->fields).HPACPFLKHPK = *ppSVar1;
          thunk_FUN_01c20e04();
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      goto LAB_03649488;
    }
    if (uVar9 != 0xaf069ea7) goto LAB_03649488;
                    /* try { // try from 03648600 to 03748627 has its CatchHandler @ 036488a8 */
    bVar8 = System_String__op_Equality(pSVar12,StringLiteral_15869/*"_$BestAcquiredRangedLevel"*/,(MethodInfo *)0x0);
  }
  if (bVar8 == false) {
LAB_03649488:
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 036494a4 to 037494a7 has its CatchHandler @ 036494d4 */
                    /* try { // try from 036494a8 to 037494eb has its CatchHandler @ 03648f84 */
    if (DAT_04565b7d == '\0') {
                    /* catch() { ... } // from try @ 03649300 with catch @ 036494b0 */
                    /* catch() { ... } // from try @ 036492f0 with catch @ 036494b4 */
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* catch() { ... } // from try @ 036492dc with catch @ 036494b8 */
                    /* catch() { ... } // from try @ 036492d0 with catch @ 036494bc */
      DAT_04565b7d = '\x01';
    }
                    /* catch() { ... } // from try @ 036492a4 with catch @ 036494c4 */
                    /* catch() { ... } // from try @ 03649284 with catch @ 036494c8 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03649290 with catch @ 036494cc */
      thunk_FUN_01ba7564();
                    /* catch() { ... } // from try @ 036492b0 with catch @ 036494d0 */
    }
                    /* catch() { ... } // from try @ 036494a4 with catch @ 036494d4 */
                    /* catch() { ... } // from try @ 03649260 with catch @ 036494d8 */
    pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* catch() { ... } // from try @ 03649248 with catch @ 036494dc */
    if (pAVar20 != (Roster_o *)0x0) {
      pMVar21 = Roster__HHLHDCPKLON(pAVar20,pSVar12,(MethodInfo *)0x0);
                    /* try { // try from 036494ec to 037494ef has its CatchHandler @ 0364951c */
                    /* try { // try from 036494f0 to 0374952b has its CatchHandler @ 03648f84 */
      pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
      pMVar3 = (MEMHEPBAJJA_HIAEDCDJJDJ_Fields *)&StringLiteral_1567/*"0"*/;
      if (pMVar21 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
        pMVar3 = &pMVar21->fields;
      }
      if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
        (pMVar13->fields).HPACPFLKHPK = pMVar3->JAICMIMBIOA;
        thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 036494ec with catch @ 0364951c */
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pMVar13 = (HPACPFLKHPK->fields).JDGILABGBGH;
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
  pAVar20 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar20 != (Roster_o *)0x0) {
    if (pSVar12 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar12 = System_String__Replace
                        (pSVar12,StringLiteral_15863/*"_$"*/,StringLiteral_15862/*"_"*/,(MethodInfo *)0x0);
    pMVar21 = Roster__HKIEGNBOFCD(pAVar20,pSVar12,0,(MethodInfo *)0x0);
    if (pMVar21 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
      pSVar12 = (pMVar21->fields).JAICMIMBIOA;
      goto LAB_03648cf0;
    }
  }
  pSVar12 = (System_String_o *)0x0;
LAB_03648cf0:
  pSVar24 = StringLiteral_1567/*"0"*/;
  if (pSVar12 != (System_String_o *)0x0) {
    pSVar24 = pSVar12;
  }
  if (pMVar13 != (MMFIDKMDADC_o *)0x0) {
    pMVar31 = &pMVar13->fields;
    pMVar31->HPACPFLKHPK = pSVar24;
    thunk_FUN_01c20e04(pMVar31);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LKEFNNIDODP(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x3549B74]
// QuestCondition$$LKEFNNIDODP @ RVA 0x3549B74

void QuestCondition__LKEFNNIDODP
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  CFGLKHFFEKA_o *__this_00;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  System_String_o *pSVar4;
  int32_t local_24;
  
  if ((DAT_04568b1d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_6614/*"Full"*/);
    FUN_01bab630(&StringLiteral_8803/*"Major"*/);
    FUN_01bab630(&StringLiteral_9075/*"Minor"*/);
    FUN_01bab630(&StringLiteral_10488/*"Production"*/);
    FUN_01bab630(&StringLiteral_5196/*"DataVersion"*/);
    FUN_01bab630(&StringLiteral_10703/*"QuestCondition.VersionControllerFunction: unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_14765/*"Version"*/);
    DAT_04568b1d = 1;
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_03649e08;
  pSVar4 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  bVar1 = System_String__op_Equality(pSVar4,StringLiteral_10488/*"Production"*/,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_00 == (CFGLKHFFEKA_o *)0x0) goto LAB_03649e08;
    local_24 = CFGLKHFFEKA__OJDCDFFBHPD(__this_00,(MethodInfo *)0x0);
LAB_03649cfc:
    pSVar4 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
  }
  else {
    bVar1 = System_String__op_Equality(pSVar4,StringLiteral_8803/*"Major"*/,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 == (CFGLKHFFEKA_o *)0x0) goto LAB_03649e08;
      local_24 = CFGLKHFFEKA__FOAJCPHJDKL(__this_00,(MethodInfo *)0x0);
      goto LAB_03649cfc;
    }
    bVar1 = System_String__op_Equality(pSVar4,StringLiteral_9075/*"Minor"*/,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 == (CFGLKHFFEKA_o *)0x0) goto LAB_03649e08;
      local_24 = CFGLKHFFEKA__KFFCDKLFGGP(__this_00,(MethodInfo *)0x0);
      goto LAB_03649cfc;
    }
    bVar1 = System_String__op_Equality(pSVar4,StringLiteral_5196/*"DataVersion"*/,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 == (CFGLKHFFEKA_o *)0x0) goto LAB_03649e08;
      local_24 = CFGLKHFFEKA__KEAMCFNFPHB(__this_00,(MethodInfo *)0x0);
      goto LAB_03649cfc;
    }
    bVar1 = System_String__op_Equality(pSVar4,StringLiteral_6614/*"Full"*/,(MethodInfo *)0x0);
    if ((!bVar1) &&
       (bVar1 = System_String__op_Equality(pSVar4,StringLiteral_14765/*"Version"*/,(MethodInfo *)0x0), !bVar1)) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args != (System_Object_array *)0x0) {
        pSVar4 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
        if ((pSVar4 != (System_String_o *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(pSVar4,(((args->obj).klass)->_1).element_class), lVar2 == 0))
        {
          uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar3,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar4;
          thunk_FUN_01c20e04(args->m_Items,pSVar4);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_10703/*"QuestCondition.VersionControllerFunction: unknown property: "{0}""*/,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      goto LAB_03649e08;
    }
    if (__this_00 == (CFGLKHFFEKA_o *)0x0) goto LAB_03649e08;
    pSVar4 = (System_String_o *)
             (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
  }
  if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
    (JDGILABGBGH->fields).HPACPFLKHPK = pSVar4;
    thunk_FUN_01c20e04(&JDGILABGBGH->fields,pSVar4);
    return;
  }
LAB_03649e08:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GKGHLKPINBP(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x3549E1C]
// QuestCondition$$GKGHLKPINBP @ RVA 0x3549E1C

/* WARNING: Type propagation algorithm not settling */

void QuestCondition__GKGHLKPINBP
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  System_String_o **ppSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_array *pSVar4;
  IGFGDDANEPE_o *__this_00;
  Item_o *__this_01;
  int64_t iVar5;
  int64_t iVar6;
  System_Object_array *args;
  long lVar7;
  undefined8 uVar8;
  System_String_o **ppSVar9;
  int iVar10;
  QuestCondition_o *pLVar11;
  HOOAAGABMBL_o *pHVar12;
  long local_58;
  int32_t local_44;
  
  if ((DAT_04568b1e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10691/*"QuestCondition.PurchaseFunction - unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_10088/*"PaidItem"*/);
    FUN_01bab630(&StringLiteral_6262/*"Failure"*/);
    FUN_01bab630(&StringLiteral_13809/*"Timeout"*/);
    FUN_01bab630(&StringLiteral_14589/*"UpgradeLevel"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    __this = (QuestCondition_o *)FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568b1e = 1;
  }
  local_44 = 0;
  local_58 = 0;
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_0364a20c;
  pSVar3 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
  __this = (QuestCondition_o *)0x0;
  if (pSVar3 == (System_String_o *)0x0) goto LAB_0364a20c;
  pSVar4 = System_String__Split(pSVar3,0x7c,0,(MethodInfo *)0x0);
  __this = (QuestCondition_o *)0x0;
  if (pSVar4 == (System_String_array *)0x0) goto LAB_0364a20c;
  if (pSVar4->max_length == 0) {
    return;
  }
  iVar10 = (int)pSVar4->max_length;
  if (iVar10 == 0) {
LAB_0364a210:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
  ppSVar9 = pSVar4->m_Items + 1;
  if (iVar10 < 2) {
    ppSVar9 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  pSVar3 = pSVar4->m_Items[0];
  pLVar11 = (QuestCondition_o *)*ppSVar9;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  __this_00 = NLPJLHOEAOE__JNFIBDBHNOA(pSVar3,(MethodInfo *)0x0);
  if (__this_00 == (IGFGDDANEPE_o *)0x0) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04563eaa == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04563eaa = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    __this = (QuestCondition_o *)0x0;
    if (__this_01 == (Item_o *)0x0) goto LAB_0364a20c;
    pHVar12 = Item__CKKIPBAIEMN(__this_01,pSVar3,(MethodInfo *)0x0);
  }
  else {
    pHVar12 = (__this_00->fields).PCBECBEFJOI;
  }
  pSVar3 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  bVar2 = System_String__op_Equality(pSVar3,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
  __this = (QuestCondition_o *)(ulong)bVar2;
  if (bVar2) {
    ppSVar9 = &(pHVar12->fields)._GMPAEDFIIHF_k__BackingField;
LAB_0364a024:
    ppSVar1 = (System_String_o **)&StringLiteral_1/*""*/;
    if (pHVar12 != (HOOAAGABMBL_o *)0x0) {
      ppSVar1 = ppSVar9;
    }
    if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) {
LAB_0364a20c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(__this);
    }
    __this = (QuestCondition_o *)*ppSVar1;
  }
  else {
    bVar2 = System_String__op_Equality(pSVar3,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    if (bVar2) {
      ppSVar9 = &(pHVar12->fields)._COIPKAKHDFP_k__BackingField;
      __this = (QuestCondition_o *)0x1;
      goto LAB_0364a024;
    }
    bVar2 = System_String__op_Equality(pSVar3,StringLiteral_14589/*"UpgradeLevel"*/,(MethodInfo *)0x0);
    if (bVar2) {
      if (__this_00 != (IGFGDDANEPE_o *)0x0) {
        local_44 = IGFGDDANEPE__LGIMDOAMCNG(__this_00,(MethodInfo *)0x0);
        __this = (QuestCondition_o *)System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
        goto joined_r0x0364a09c;
      }
      __this = StringLiteral_1567/*"0"*/;
      if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) {
        __this = (QuestCondition_o *)0x1;
        goto LAB_0364a20c;
      }
    }
    else {
      bVar2 = System_String__op_Equality(pSVar3,StringLiteral_13809/*"Timeout"*/,(MethodInfo *)0x0);
      if (!bVar2) {
        bVar2 = System_String__op_Equality(pSVar3,StringLiteral_6262/*"Failure"*/,(MethodInfo *)0x0);
        if (bVar2) {
          __this = (QuestCondition_o *)0x1;
          if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364a20c;
          (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)pLVar11;
          goto LAB_0364a03c;
        }
        bVar2 = System_String__op_Equality(pSVar3,StringLiteral_10088/*"PaidItem"*/,(MethodInfo *)0x0);
        __this = (QuestCondition_o *)(ulong)bVar2;
        if (!bVar2) {
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
          __this = (QuestCondition_o *)0x0;
          if (args != (System_Object_array *)0x0) {
            pSVar3 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
            if ((pSVar3 != (System_String_o *)0x0) &&
               (lVar7 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class),
               lVar7 == 0)) {
              uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar8,0);
            }
            if ((int)args->max_length != 0) {
              args->m_Items[0] = (Il2CppObject *)pSVar3;
              thunk_FUN_01c20e04(args->m_Items,pSVar3);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogErrorFormat(StringLiteral_10691/*"QuestCondition.PurchaseFunction - unknown property: "{0}""*/,args,(MethodInfo *)0x0);
              return;
            }
            goto LAB_0364a210;
          }
          goto LAB_0364a20c;
        }
        ppSVar9 = &(pHVar12->fields)._CGBHMINLKLM_k__BackingField;
        goto LAB_0364a024;
      }
      if (__this_00 == (IGFGDDANEPE_o *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = IGFGDDANEPE__OMMIKNKEKJN(__this_00,(MethodInfo *)0x0);
      }
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar6 = GameUtils__EAHFGGKENCK((MethodInfo *)0x0);
      local_58 = iVar5 - iVar6;
      if (local_58 == 0 || iVar5 < iVar6) {
        local_58 = 0;
      }
      __this = (QuestCondition_o *)System_Int64__ToString((int64_t)&local_58,(MethodInfo *)0x0);
joined_r0x0364a09c:
      if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364a20c;
    }
  }
  (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)__this;
  pLVar11 = __this;
LAB_0364a03c:
  thunk_FUN_01c20e04(&JDGILABGBGH->fields,pLVar11);
  return;
}


// ===== private bool NJLKHFHAAHH(string OMNMKNMLLMF, string KLEPJKBIGPK)  [RVA 0x354A220]
// QuestCondition$$NJLKHFHAAHH @ RVA 0x354A220

bool QuestCondition__NJLKHFHAAHH
               (QuestCondition_o *__this,System_String_o *OMNMKNMLLMF,System_String_o *KLEPJKBIGPK,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  switch((__this->fields).ACCIHBHMFPN) {
  case 1:
    bVar1 = System_String__op_Equality(OMNMKNMLLMF,KLEPJKBIGPK,(MethodInfo *)0x0);
    return bVar1;
  case 2:
    iVar2 = System_String__CompareOrdinal(OMNMKNMLLMF,KLEPJKBIGPK,(MethodInfo *)0x0);
    bVar1 = 0 < iVar2;
    break;
  case 3:
    iVar2 = System_String__CompareOrdinal(OMNMKNMLLMF,KLEPJKBIGPK,(MethodInfo *)0x0);
    bVar1 = (bool)((byte)~(byte)((uint)iVar2 >> 0x18) >> 7);
    break;
  case 4:
    iVar2 = System_String__CompareOrdinal(OMNMKNMLLMF,KLEPJKBIGPK,(MethodInfo *)0x0);
    bVar1 = SUB41((uint)iVar2 >> 0x1f,0);
    break;
  case 5:
    iVar2 = System_String__CompareOrdinal(OMNMKNMLLMF,KLEPJKBIGPK,(MethodInfo *)0x0);
    bVar1 = iVar2 < 1;
    break;
  default:
    bVar1 = false;
  }
  return bVar1;
}


// ===== private void BKOGDOHLABM(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x354A2D8]
// QuestCondition$$BKOGDOHLABM @ RVA 0x354A2D8

void QuestCondition__BKOGDOHLABM
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  DNELIPCHKLK_o *__this_00;
  OOMHDDBCBJP_o *pOVar5;
  Roster_o *__this_01;
  System_Object_array *pSVar6;
  long lVar7;
  NLPJLHOEAOE_o *__this_02;
  undefined8 uVar8;
  OLKPEJMEBPJ_o *pOVar9;
  MEJIKMPNBNL_o *pMVar10;
  undefined8 *puVar11;
  MMFIDKMDADC_Fields *pMVar12;
  
  if ((DAT_04568b1f & 1) == 0) {
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_8602/*"Locked"*/);
    FUN_01bab630(&StringLiteral_1322/*"-1"*/);
    FUN_01bab630(&StringLiteral_3258/*"Available"*/);
    FUN_01bab630(&StringLiteral_10672/*"QuestCondition.BattleFunction: unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_8020/*"IsOpened"*/);
    FUN_01bab630(&StringLiteral_15308/*"Zone"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_10671/*"QuestCondition.BattleFunction: no such battle in stages: "{0}""*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_7076/*"Hidden"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568b1f = 1;
  }
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_0364aa54;
  pSVar4 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
  __this_00 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
  DNELIPCHKLK___ctor(__this_00,pSVar4,(MethodInfo *)0x0);
  pSVar4 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(pSVar4,(MethodInfo *)0x0);
  if (uVar2 < 0x406a5eb4) {
    if (uVar2 == 0xfe07306) {
      bVar1 = System_String__op_Equality(pSVar4,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      if (!bVar1) goto LAB_0364a7c0;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pOVar5 = NLPJLHOEAOE__JIOEHAPGADN(__this_00,(MethodInfo *)0x0);
      if (pOVar5 != (OOMHDDBCBJP_o *)0x0) {
        if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364aa54;
        pSVar4 = (pOVar5->fields).DEKCPPOJFEH;
        goto LAB_0364aa38;
      }
LAB_0364a840:
      pSVar6 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (pSVar6 == (System_Object_array *)0x0) goto LAB_0364aa54;
      if ((__this_00 != (DNELIPCHKLK_o *)0x0) &&
         (lVar7 = thunk_FUN_01bda71c(__this_00,(((pSVar6->obj).klass)->_1).element_class),
         lVar7 == 0)) goto LAB_0364aa5c;
      if ((int)pSVar6->max_length == 0) goto LAB_0364aa58;
      pSVar6->m_Items[0] = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(pSVar6->m_Items,__this_00);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_10671/*"QuestCondition.BattleFunction: no such battle in stages: "{0}""*/,pSVar6,(MethodInfo *)0x0);
LAB_0364a8ac:
      if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364aa54;
      puVar11 = &StringLiteral_1/*""*/;
    }
    else {
      if (uVar2 == 0x3c2dfe59) {
        bVar1 = System_String__op_Equality(pSVar4,StringLiteral_7076/*"Hidden"*/,(MethodInfo *)0x0);
        if (!bVar1) goto LAB_0364a7c0;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pOVar5 = NLPJLHOEAOE__JIOEHAPGADN(__this_00,(MethodInfo *)0x0);
        if ((pOVar5 == (OOMHDDBCBJP_o *)0x0) ||
           (pOVar9 = (pOVar5->fields).LFJPDELEIHG, pOVar9 == (OLKPEJMEBPJ_o *)0x0)) {
          if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364aa54;
          puVar11 = &StringLiteral_1322/*"-1"*/;
          goto LAB_0364aa34;
        }
        bVar1 = OLKPEJMEBPJ__EFLKILFFJKH(pOVar9,(MethodInfo *)0x0);
LAB_0364a6ac:
        puVar11 = &StringLiteral_1606/*"1"*/;
        if (bVar1 == false) {
          puVar11 = &StringLiteral_1567/*"0"*/;
        }
      }
      else {
        if ((uVar2 != 0x406a5eb3) ||
           (bVar1 = System_String__op_Equality(pSVar4,StringLiteral_8602/*"Locked"*/,(MethodInfo *)0x0), !bVar1)
           ) {
LAB_0364a7c0:
          pSVar6 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
          if (pSVar6 != (System_Object_array *)0x0) {
            pSVar4 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
            if ((pSVar4 == (System_String_o *)0x0) ||
               (lVar7 = thunk_FUN_01bda71c(pSVar4,(((pSVar6->obj).klass)->_1).element_class),
               lVar7 != 0)) {
              if ((int)pSVar6->max_length != 0) {
                pSVar6->m_Items[0] = (Il2CppObject *)pSVar4;
                thunk_FUN_01c20e04(pSVar6->m_Items,pSVar4);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UnityEngine_Debug__LogErrorFormat(StringLiteral_10672/*"QuestCondition.BattleFunction: unknown property: "{0}""*/,pSVar6,(MethodInfo *)0x0);
                return;
              }
LAB_0364aa58:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
LAB_0364aa5c:
            uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar8,0);
          }
          goto LAB_0364aa54;
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pOVar5 = NLPJLHOEAOE__JIOEHAPGADN(__this_00,(MethodInfo *)0x0);
        if (((pOVar5 == (OOMHDDBCBJP_o *)0x0) ||
            (pOVar9 = (pOVar5->fields).LFJPDELEIHG, pOVar9 == (OLKPEJMEBPJ_o *)0x0)) ||
           ((pOVar9->fields).PABIMIFJJKF != false)) {
          puVar11 = &StringLiteral_1606/*"1"*/;
        }
        else {
          puVar11 = &StringLiteral_1567/*"0"*/;
        }
      }
      if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) {
LAB_0364aa54:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
LAB_0364aa34:
    pSVar4 = (System_String_o *)*puVar11;
  }
  else {
    if (uVar2 < 0x80246151) {
      if (uVar2 == 0x80246150) {
        bVar1 = System_String__op_Equality(pSVar4,StringLiteral_8020/*"IsOpened"*/,(MethodInfo *)0x0);
        if (bVar1) {
          if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364aa54;
          pMVar12 = &JDGILABGBGH->fields;
          pMVar12->HPACPFLKHPK = StringLiteral_1567/*"0"*/;
          thunk_FUN_01c20e04(pMVar12);
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pOVar5 = NLPJLHOEAOE__JIOEHAPGADN(__this_00,(MethodInfo *)0x0);
          if (pOVar5 == (OOMHDDBCBJP_o *)0x0) {
            return;
          }
          pOVar9 = (pOVar5->fields).LFJPDELEIHG;
          if (pOVar9 == (OLKPEJMEBPJ_o *)0x0) {
            iVar3 = OOMHDDBCBJP__NHGGBEACKBD(pOVar5,(MethodInfo *)0x0);
            pSVar4 = StringLiteral_1606/*"1"*/;
            if (iVar3 != 0x14) {
              return;
            }
          }
          else {
            puVar11 = &StringLiteral_1567/*"0"*/;
            if ((pOVar9->fields).PABIMIFJJKF == false) {
              bVar1 = OLKPEJMEBPJ__EFLKILFFJKH(pOVar9,(MethodInfo *)0x0);
              if (!bVar1) {
                puVar11 = &StringLiteral_1606/*"1"*/;
              }
            }
            pSVar4 = (System_String_o *)*puVar11;
          }
          pMVar12->HPACPFLKHPK = pSVar4;
          goto LAB_0364aa3c;
        }
      }
      else if ((uVar2 == 0x72402638) &&
              (bVar1 = System_String__op_Equality(pSVar4,StringLiteral_3258/*"Available"*/,(MethodInfo *)0x0),
              bVar1)) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pOVar5 = NLPJLHOEAOE__JIOEHAPGADN(__this_00,(MethodInfo *)0x0);
        if (pOVar5 != (OOMHDDBCBJP_o *)0x0) {
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
          __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
          if (__this_01 == (Roster_o *)0x0) goto LAB_0364aa54;
          bVar1 = Roster__FPFOAMMHLFG(__this_01,__this_00,(MethodInfo *)0x0);
          goto LAB_0364a6ac;
        }
        pSVar6 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        if (pSVar6 == (System_Object_array *)0x0) goto LAB_0364aa54;
        if ((__this_00 != (DNELIPCHKLK_o *)0x0) &&
           (lVar7 = thunk_FUN_01bda71c(__this_00,(((pSVar6->obj).klass)->_1).element_class),
           lVar7 == 0)) goto LAB_0364aa5c;
        if ((int)pSVar6->max_length == 0) goto LAB_0364aa58;
        pSVar6->m_Items[0] = (Il2CppObject *)__this_00;
        thunk_FUN_01c20e04(pSVar6->m_Items,__this_00);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_10671/*"QuestCondition.BattleFunction: no such battle in stages: "{0}""*/,pSVar6,(MethodInfo *)0x0);
        if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364aa54;
        puVar11 = &StringLiteral_1567/*"0"*/;
        goto LAB_0364aa34;
      }
      goto LAB_0364a7c0;
    }
    if (uVar2 == 0x86379167) {
      bVar1 = System_String__op_Equality(pSVar4,StringLiteral_15308/*"Zone"*/,(MethodInfo *)0x0);
      if (!bVar1) goto LAB_0364a7c0;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pOVar5 = NLPJLHOEAOE__JIOEHAPGADN(__this_00,(MethodInfo *)0x0);
      if (pOVar5 == (OOMHDDBCBJP_o *)0x0) goto LAB_0364a840;
      pMVar10 = (pOVar5->fields).IAJPHAAMKPC;
      if (pMVar10 == (MEJIKMPNBNL_o *)0x0) goto LAB_0364a8ac;
      if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364aa54;
      pSVar4 = (pMVar10->fields).DEKCPPOJFEH;
    }
    else {
      if ((uVar2 != 0xd155d06d) ||
         (bVar1 = System_String__op_Equality(pSVar4,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0), !bVar1))
      goto LAB_0364a7c0;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pOVar5 = NLPJLHOEAOE__JIOEHAPGADN(__this_00,(MethodInfo *)0x0);
      if (pOVar5 == (OOMHDDBCBJP_o *)0x0) {
        pSVar6 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        if (pSVar6 == (System_Object_array *)0x0) goto LAB_0364aa54;
        if ((__this_00 != (DNELIPCHKLK_o *)0x0) &&
           (lVar7 = thunk_FUN_01bda71c(__this_00,(((pSVar6->obj).klass)->_1).element_class),
           lVar7 == 0)) goto LAB_0364aa5c;
        if ((int)pSVar6->max_length == 0) goto LAB_0364aa58;
        pSVar6->m_Items[0] = (Il2CppObject *)__this_00;
        thunk_FUN_01c20e04(pSVar6->m_Items,__this_00);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        UnityEngine_Debug__LogErrorFormat(StringLiteral_10671/*"QuestCondition.BattleFunction: no such battle in stages: "{0}""*/,pSVar6,(MethodInfo *)0x0);
        iVar3 = 0xd;
      }
      else {
        iVar3 = OOMHDDBCBJP__NHGGBEACKBD(pOVar5,(MethodInfo *)0x0);
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      if ((__this_02 == (NLPJLHOEAOE_o *)0x0) ||
         (pSVar4 = NLPJLHOEAOE__PGDMIFLKLJE(__this_02,iVar3,(MethodInfo *)0x0),
         JDGILABGBGH == (MMFIDKMDADC_o *)0x0)) goto LAB_0364aa54;
    }
  }
LAB_0364aa38:
  (JDGILABGBGH->fields).HPACPFLKHPK = pSVar4;
LAB_0364aa3c:
  thunk_FUN_01c20e04(&JDGILABGBGH->fields);
  return;
}


// ===== private void HGLOABLOKGJ(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x354AA68]
// QuestCondition$$HGLOABLOKGJ @ RVA 0x354AA68

void QuestCondition__HGLOABLOKGJ
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  CFGLKHFFEKA_o *__this_00;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  System_String_o *pSVar4;
  int32_t local_24;
  
  if ((DAT_04568b20 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10702/*"QuestCondition.UserVersionFunction: unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_6614/*"Full"*/);
    FUN_01bab630(&StringLiteral_8803/*"Major"*/);
    FUN_01bab630(&StringLiteral_9075/*"Minor"*/);
    FUN_01bab630(&StringLiteral_10488/*"Production"*/);
    FUN_01bab630(&StringLiteral_5196/*"DataVersion"*/);
    FUN_01bab630(&StringLiteral_14765/*"Version"*/);
    DAT_04568b20 = 1;
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = EOAOCPLIKOI__KEAMCFNFPHB((MethodInfo *)0x0);
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_0364acfc;
  pSVar4 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  bVar1 = System_String__op_Equality(pSVar4,StringLiteral_10488/*"Production"*/,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_00 == (CFGLKHFFEKA_o *)0x0) goto LAB_0364acfc;
    local_24 = CFGLKHFFEKA__OJDCDFFBHPD(__this_00,(MethodInfo *)0x0);
LAB_0364abf0:
    pSVar4 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
  }
  else {
    bVar1 = System_String__op_Equality(pSVar4,StringLiteral_8803/*"Major"*/,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 == (CFGLKHFFEKA_o *)0x0) goto LAB_0364acfc;
      local_24 = CFGLKHFFEKA__FOAJCPHJDKL(__this_00,(MethodInfo *)0x0);
      goto LAB_0364abf0;
    }
    bVar1 = System_String__op_Equality(pSVar4,StringLiteral_9075/*"Minor"*/,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 == (CFGLKHFFEKA_o *)0x0) goto LAB_0364acfc;
      local_24 = CFGLKHFFEKA__KFFCDKLFGGP(__this_00,(MethodInfo *)0x0);
      goto LAB_0364abf0;
    }
    bVar1 = System_String__op_Equality(pSVar4,StringLiteral_5196/*"DataVersion"*/,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this_00 == (CFGLKHFFEKA_o *)0x0) goto LAB_0364acfc;
      local_24 = CFGLKHFFEKA__KEAMCFNFPHB(__this_00,(MethodInfo *)0x0);
      goto LAB_0364abf0;
    }
    bVar1 = System_String__op_Equality(pSVar4,StringLiteral_6614/*"Full"*/,(MethodInfo *)0x0);
    if ((!bVar1) &&
       (bVar1 = System_String__op_Equality(pSVar4,StringLiteral_14765/*"Version"*/,(MethodInfo *)0x0), !bVar1)) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args != (System_Object_array *)0x0) {
        pSVar4 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
        if ((pSVar4 != (System_String_o *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(pSVar4,(((args->obj).klass)->_1).element_class), lVar2 == 0))
        {
          uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar3,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar4;
          thunk_FUN_01c20e04(args->m_Items,pSVar4);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_10702/*"QuestCondition.UserVersionFunction: unknown property: "{0}""*/,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      goto LAB_0364acfc;
    }
    if (__this_00 == (CFGLKHFFEKA_o *)0x0) goto LAB_0364acfc;
    pSVar4 = (System_String_o *)
             (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
  }
  if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
    (JDGILABGBGH->fields).HPACPFLKHPK = pSVar4;
    thunk_FUN_01c20e04(&JDGILABGBGH->fields,pSVar4);
    return;
  }
LAB_0364acfc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BIEMKONHPDA(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x354AD10]
// QuestCondition$$BIEMKONHPDA @ RVA 0x354AD10

void QuestCondition__BIEMKONHPDA
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  undefined8 *puVar1;
  bool_conflict bVar2;
  bool bVar3;
  uint16_t c;
  uint32_t uVar4;
  int32_t OOGPLJBADCD;
  QuestCondition_FLJLCPOKFKJ_o *__this_00;
  System_String_o *pSVar5;
  Item_o *pDVar6;
  HOOAAGABMBL_o *pHVar7;
  System_Predicate_T__o *match;
  GGHCLMEFIGO_o *pGVar8;
  IGFGDDANEPE_o *pIVar9;
  int64_t *__this_01;
  System_String_o *pSVar10;
  NILLKLHKLHG_DIPIFJPCFOE_o *__this_02;
  FOKJBDHLIMG_o *__this_03;
  PerkInfoItem_o *EIKFGOCCOIE;
  System_Object_array *args;
  long lVar11;
  undefined8 uVar12;
  MethodInfo *pMVar13;
  NMAHEBEALAB_o *pNVar14;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *pCVar15;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *pSVar16;
  QuestCondition_FLJLCPOKFKJ_Fields *pLVar17;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_04;
  Roster_o *pAVar18;
  int64_t local_70;
  Il2CppMethodPointer local_68;
  undefined1 local_60 [24];
  Il2CppClass *pIStack_48;
  int32_t local_38;
  int32_t local_34;
  
  if ((DAT_04568b21 & 1) == 0) {
    FUN_01bab630(&char_TypeInfo);
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_LEGDPJHPEOB_FLJLCPOKFKJ_BPDMPHCNODP__);
    FUN_01bab630(&QuestCondition_FLJLCPOKFKJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&MDKJJDGLPKO_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&System_Predicate<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&StringLiteral_10636/*"Quantity"*/);
    FUN_01bab630(&StringLiteral_5837/*"Equipped"*/);
    FUN_01bab630(&StringLiteral_10454/*"Price"*/);
    FUN_01bab630(&StringLiteral_10071/*"PackLabel"*/);
    FUN_01bab630(&StringLiteral_11086/*"ReceiveForgeMaterial3"*/);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_11084/*"ReceiveForgeMaterial1"*/);
    FUN_01bab630(&StringLiteral_9422/*"NextMoneyUpgradePrice"*/);
    FUN_01bab630(&StringLiteral_9421/*"NextBonusUpgradePrice"*/);
    FUN_01bab630(&StringLiteral_11074/*"RealPrice"*/);
    FUN_01bab630(&StringLiteral_4580/*"ConfigDiscountEnd"*/);
    FUN_01bab630(&StringLiteral_4581/*"ConfigDiscountStart"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_3536/*"BonusDeliveryPrice"*/);
    FUN_01bab630(&StringLiteral_12509/*"SubType"*/);
    FUN_01bab630(&StringLiteral_12183/*"SliderType"*/);
    FUN_01bab630(&StringLiteral_11104/*"RecieveGold"*/);
    FUN_01bab630(&StringLiteral_3537/*"BonusPrice"*/);
    FUN_01bab630(&StringLiteral_10221/*"PerkExists"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_10687/*"QuestCondition.ItemFunction - unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_11103/*"RecieveBonus"*/);
    FUN_01bab630(&StringLiteral_8409/*"Level"*/);
    FUN_01bab630(&StringLiteral_9424/*"NextUpgradeDeliveryTime"*/);
    FUN_01bab630(&StringLiteral_9188/*"MoneyDeliveryPrice"*/);
    FUN_01bab630(&StringLiteral_9423/*"NextUpgradeDeliveryPrice"*/);
    FUN_01bab630(&StringLiteral_3257/*"Availability"*/);
    FUN_01bab630(&StringLiteral_11085/*"ReceiveForgeMaterial2"*/);
    FUN_01bab630(&StringLiteral_7340/*"Image"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568b21 = 1;
  }
  local_60._8_8_ = (InvokerMethod)0x0;
  local_60._0_8_ = (Il2CppMethodPointer)0x0;
  pIStack_48 = (Il2CppClass *)0x0;
  local_60._16_8_ = (char *)0x0;
  local_38 = 0;
  local_70 = 0;
  local_68 = (Il2CppMethodPointer)0x0;
  __this_00 = (QuestCondition_FLJLCPOKFKJ_o *)thunk_FUN_01bda818(QuestCondition_FLJLCPOKFKJ_TypeInfo);
  QuestCondition_FLJLCPOKFKJ___ctor(__this_00,(MethodInfo *)0x0);
  local_34 = 0;
  if ((ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) ||
     (pSVar5 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0),
     __this_00 == (QuestCondition_FLJLCPOKFKJ_o *)0x0)) goto LAB_0364bb58;
  pLVar17 = &__this_00->fields;
  pLVar17->result = pSVar5;
  thunk_FUN_01c20e04(pLVar17,pSVar5);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pDVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (pDVar6 == (Item_o *)0x0) goto LAB_0364bb58;
  pHVar7 = Item__CKKIPBAIEMN(pDVar6,pLVar17->result,(MethodInfo *)0x0);
  if (pHVar7 == (HOOAAGABMBL_o *)0x0) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04563eaa == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04563eaa = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if (pDVar6 == (Item_o *)0x0) goto LAB_0364bb58;
    __this_04 = (pDVar6->fields)._MOCBNLFMNAL_k__BackingField;
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
    method = (MethodInfo *)0x0;
    System_Predicate<object>___ctor();
    if (__this_04 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_0364bb58;
    pHVar7 = (HOOAAGABMBL_o *)
             System_Collections_Generic_List<object>__Find
                       ((System_Collections_Generic_List_object__o *)__this_04,match,
                        Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__);
    if (pHVar7 == (HOOAAGABMBL_o *)0x0) {
      return;
    }
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
  pSVar5 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  pAVar18 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  uVar4 = <PrivateImplementationDetails>__ComputeStringHash(pSVar5,(MethodInfo *)0x0);
  if (uVar4 < 0x7e98c351) {
    if (uVar4 < 0x4155597e) {
      if (uVar4 < 0x2bf732f9) {
        if (uVar4 == 0xfe07306) {
          bVar3 = System_String__op_Equality(pSVar5,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
          if (bVar3) {
            if ((pHVar7 != (HOOAAGABMBL_o *)0x0) && (JDGILABGBGH != (MMFIDKMDADC_o *)0x0)) {
              pSVar5 = (pHVar7->fields)._COIPKAKHDFP_k__BackingField;
              goto LAB_0364b96c;
            }
            goto LAB_0364bb58;
          }
        }
        else if (uVar4 == 0x291e6abd) {
          bVar3 = System_String__op_Equality(pSVar5,StringLiteral_12509/*"SubType"*/,(MethodInfo *)0x0);
          if (bVar3) {
            if ((pHVar7 != (HOOAAGABMBL_o *)0x0) && (JDGILABGBGH != (MMFIDKMDADC_o *)0x0)) {
              pSVar5 = (pHVar7->fields)._DKODBGOHKGH_k__BackingField;
              goto LAB_0364b96c;
            }
            goto LAB_0364bb58;
          }
        }
        else if ((uVar4 == 0x2bf732f8) &&
                (bVar3 = System_String__op_Equality(pSVar5,StringLiteral_10636/*"Quantity"*/,(MethodInfo *)0x0),
                bVar3)) {
          if ((pAVar18 == (Roster_o *)0x0) ||
             (pGVar8 = (pAVar18->fields).OIDPLCLELEN, pGVar8 == (GGHCLMEFIGO_o *)0x0))
          goto LAB_0364bb58;
          pIVar9 = GGHCLMEFIGO__JNFIBDBHNOA(pGVar8,pHVar7,(MethodInfo *)0x0);
          pSVar5 = StringLiteral_1567/*"0"*/;
          if (pIVar9 != (IGFGDDANEPE_o *)0x0) {
            local_38 = IGFGDDANEPE__LDJLMEFOMLG(pIVar9,(MethodInfo *)0x0);
            pSVar5 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
          }
          goto joined_r0x0364b69c;
        }
      }
      else if (uVar4 == 0x2eebf7a5) {
        pMVar13 = (MethodInfo *)0x0;
        bVar3 = System_String__op_Equality(pSVar5,StringLiteral_9424/*"NextUpgradeDeliveryTime"*/,(MethodInfo *)0x0);
        if (bVar3) {
          pHVar7 = QuestCondition__HOPFJHBDDCA((QuestCondition_o *)0x1,pHVar7,pMVar13);
          local_70 = QuestCondition__ODJOCIIEDDE((QuestCondition_o *)pHVar7,pHVar7,pMVar13);
LAB_0364b954:
          pSVar5 = System_Int64__ToString((int64_t)&local_70,(MethodInfo *)0x0);
joined_r0x0364b69c:
          if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
LAB_0364b96c:
            (JDGILABGBGH->fields).HPACPFLKHPK = pSVar5;
            thunk_FUN_01c20e04(&JDGILABGBGH->fields);
            return;
          }
          goto LAB_0364bb58;
        }
      }
      else if (uVar4 == 0x3c890a11) {
        bVar3 = System_String__op_Equality(pSVar5,StringLiteral_3537/*"BonusPrice"*/,(MethodInfo *)0x0);
        if (bVar3) {
          if (pHVar7 == (HOOAAGABMBL_o *)0x0) goto LAB_0364bb58;
          pCVar15 = &(pHVar7->fields)._AHMCDBKNKAJ_k__BackingField;
          goto LAB_0364b7b4;
        }
      }
      else if ((uVar4 == 0x4155597d) &&
              (bVar3 = System_String__op_Equality(pSVar5,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0),
              bVar3)) {
        if (pHVar7 == (HOOAAGABMBL_o *)0x0) goto LAB_0364bb58;
        local_38 = (pHVar7->fields)._JDEHPJEIOCI_k__BackingField;
        pSVar5 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
        goto joined_r0x0364b69c;
      }
    }
    else if (uVar4 < 0x5e836fdf) {
      if (uVar4 == 0x569e2da2) {
        pMVar13 = (MethodInfo *)0x0;
        bVar3 = System_String__op_Equality(pSVar5,StringLiteral_9421/*"NextBonusUpgradePrice"*/,(MethodInfo *)0x0);
        if (bVar3) {
          pHVar7 = QuestCondition__HOPFJHBDDCA((QuestCondition_o *)0x1,pHVar7,pMVar13);
          bVar3 = false;
LAB_0364b950:
          local_70 = QuestCondition__BNIDHODEMHP((QuestCondition_o *)pHVar7,pHVar7,bVar3,method);
          goto LAB_0364b954;
        }
      }
      else if (uVar4 == 0x590ca79a) {
        bVar3 = System_String__op_Equality(pSVar5,StringLiteral_7340/*"Image"*/,(MethodInfo *)0x0);
        if (bVar3) {
          if ((pHVar7 != (HOOAAGABMBL_o *)0x0) && (JDGILABGBGH != (MMFIDKMDADC_o *)0x0)) {
            pSVar5 = (pHVar7->fields)._GPEFIOMJHNN_k__BackingField;
            goto LAB_0364b96c;
          }
          goto LAB_0364bb58;
        }
      }
      else if ((uVar4 == 0x5e836fde) &&
              (bVar3 = System_String__op_Equality(pSVar5,StringLiteral_10071/*"PackLabel"*/,(MethodInfo *)0x0),
              bVar3)) {
        if ((pHVar7 == (HOOAAGABMBL_o *)0x0) || (JDGILABGBGH == (MMFIDKMDADC_o *)0x0))
        goto LAB_0364bb58;
        pSVar5 = (pHVar7->fields)._ILMMODKJGFK_k__BackingField;
        goto LAB_0364b96c;
      }
    }
    else if (uVar4 < 0x6b9fb737) {
      if (uVar4 == 0x6a9295c2) {
        bVar3 = System_String__op_Equality(pSVar5,StringLiteral_11074/*"RealPrice"*/,(MethodInfo *)0x0);
        if (bVar3) {
          if (pHVar7 != (HOOAAGABMBL_o *)0x0) {
            pSVar5 = HOOAAGABMBL__ANEHPKMBLHA(pHVar7,(MethodInfo *)0x0);
            bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar5,(MethodInfo *)0x0);
            if (!bVar3) {
              pSVar10 = HOOAAGABMBL__ANEHPKMBLHA(pHVar7,(MethodInfo *)0x0);
              if (pSVar10 == (System_String_o *)0x0) goto LAB_0364bb58;
              c = System_String__get_Chars(pSVar10,0,(MethodInfo *)0x0);
              if ((char_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(char_TypeInfo);
              }
              bVar3 = System_Char__IsDigit(c,(MethodInfo *)0x0);
              if (bVar3) {
                pSVar5 = System_String__Concat(StringLiteral_167/*" "*/,pSVar5,(MethodInfo *)0x0);
              }
            }
            if ((MDKJJDGLPKO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar5 = MDKJJDGLPKO__AKDFFHMBJID(pSVar5,StringLiteral_1/*""*/,&local_34,(MethodInfo *)0x0);
            if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
              (JDGILABGBGH->fields).HPACPFLKHPK = pSVar5;
              thunk_FUN_01c20e04(&JDGILABGBGH->fields,pSVar5);
              (JDGILABGBGH->fields).AOOEHPBLBGM = local_34 + (JDGILABGBGH->fields).AOOEHPBLBGM;
              return;
            }
          }
          goto LAB_0364bb58;
        }
      }
      else if ((uVar4 == 0x6b9fb736) &&
              (bVar3 = System_String__op_Equality(pSVar5,StringLiteral_3257/*"Availability"*/,(MethodInfo *)0x0),
              bVar3)) {
        if (pHVar7 == (HOOAAGABMBL_o *)0x0) goto LAB_0364bb58;
        bVar3 = HOOAAGABMBL__ACBLFBAIHPN(pHVar7,(MethodInfo *)0x0);
LAB_0364ba6c:
        puVar1 = &StringLiteral_1606/*"1"*/;
        if (bVar3 == false) {
          puVar1 = &StringLiteral_1567/*"0"*/;
        }
        if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
          pSVar5 = (System_String_o *)*puVar1;
          goto LAB_0364b96c;
        }
        goto LAB_0364bb58;
      }
    }
    else if (uVar4 == 0x72a6fdd8) {
      bVar3 = System_String__op_Equality(pSVar5,StringLiteral_11104/*"RecieveGold"*/,(MethodInfo *)0x0);
      if (bVar3) {
        if (pHVar7 == (HOOAAGABMBL_o *)0x0) goto LAB_0364bb58;
        local_60._8_8_ = (pHVar7->fields)._DILLJMLCPON_k__BackingField.fields.hiddenValue;
        local_60._0_8_ = (pHVar7->fields)._DILLJMLCPON_k__BackingField.fields.currentCryptoKey;
        pIStack_48 = *(Il2CppClass **)
                      &(pHVar7->fields)._DILLJMLCPON_k__BackingField.fields.fakeValueActive;
        local_60._16_8_ = (pHVar7->fields)._DILLJMLCPON_k__BackingField.fields.fakeValue;
        goto LAB_0364b7b8;
      }
    }
    else if ((uVar4 == 0x7e98c350) &&
            (bVar3 = System_String__op_Equality(pSVar5,StringLiteral_5837/*"Equipped"*/,(MethodInfo *)0x0), bVar3)
            ) {
      if ((pAVar18 == (Roster_o *)0x0) ||
         (pGVar8 = (pAVar18->fields).OIDPLCLELEN, pGVar8 == (GGHCLMEFIGO_o *)0x0))
      goto LAB_0364bb58;
      pIVar9 = GGHCLMEFIGO__JNFIBDBHNOA(pGVar8,pHVar7,(MethodInfo *)0x0);
      if (pIVar9 == (IGFGDDANEPE_o *)0x0) {
        return;
      }
      bVar2 = (pIVar9->fields).OFIKEBGDMBE;
      if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(System_Convert_TypeInfo);
      }
      local_68 = (Il2CppMethodPointer)System_Convert__ToDouble(bVar2 != false,(MethodInfo *)0x0);
      pSVar5 = System_Double__ToString((double)local_68,(MethodInfo *)&local_68);
      goto joined_r0x0364b69c;
    }
  }
  else if (uVar4 < 0xa19e0872) {
    if (uVar4 < 0x9beae524) {
      if (uVar4 == 0x89629a3c) {
        bVar3 = System_String__op_Equality(pSVar5,StringLiteral_4581/*"ConfigDiscountStart"*/,(MethodInfo *)0x0);
        if (bVar3) {
          if (pHVar7 == (HOOAAGABMBL_o *)0x0) goto LAB_0364bb58;
          pNVar14 = (pHVar7->fields).DLBFLPBOJNI;
          if (pNVar14 != (NMAHEBEALAB_o *)0x0) {
            __this_01 = &(pNVar14->fields).LKENIPBKAJI;
            goto LAB_0364b72c;
          }
LAB_0364bb28:
          pSVar10 = (System_String_o *)0x0;
LAB_0364bb2c:
          pSVar5 = StringLiteral_1567/*"0"*/;
          if (pSVar10 != (System_String_o *)0x0) {
            pSVar5 = pSVar10;
          }
          goto joined_r0x0364b69c;
        }
      }
      else if (uVar4 == 0x98cca0d4) {
        bVar3 = System_String__op_Equality(pSVar5,StringLiteral_12183/*"SliderType"*/,(MethodInfo *)0x0);
        if (bVar3) {
          if (pHVar7 == (HOOAAGABMBL_o *)0x0) goto LAB_0364bb58;
          OOGPLJBADCD = HOOAAGABMBL__LHILOAKFKLP(pHVar7,(MethodInfo *)0x0);
          pSVar5 = MMOGKBGEPGM__GKMAFGODLLG(OOGPLJBADCD,(MethodInfo *)0x0);
          goto joined_r0x0364b69c;
        }
      }
      else if ((uVar4 == 0x9beae523) &&
              (bVar3 = System_String__op_Equality(pSVar5,StringLiteral_11084/*"ReceiveForgeMaterial1"*/,(MethodInfo *)0x0),
              bVar3)) {
        if (pHVar7 == (HOOAAGABMBL_o *)0x0) goto LAB_0364bb58;
        local_60._8_8_ = (pHVar7->fields)._EAOJFBDIFLL_k__BackingField.fields.hiddenValue;
        local_60._0_8_ = (pHVar7->fields)._EAOJFBDIFLL_k__BackingField.fields.currentCryptoKey;
        pIStack_48 = *(Il2CppClass **)
                      &(pHVar7->fields)._EAOJFBDIFLL_k__BackingField.fields.fakeValueActive;
        local_60._16_8_ = (pHVar7->fields)._EAOJFBDIFLL_k__BackingField.fields.fakeValue;
        goto LAB_0364b7b8;
      }
    }
    else if (uVar4 < 0x9deae84a) {
      if (uVar4 == 0x9ceae6b6) {
        bVar3 = System_String__op_Equality(pSVar5,StringLiteral_11085/*"ReceiveForgeMaterial2"*/,(MethodInfo *)0x0);
        if (bVar3) {
          if (pHVar7 == (HOOAAGABMBL_o *)0x0) goto LAB_0364bb58;
          local_60._8_8_ = (pHVar7->fields)._GNFNOKJDGFH_k__BackingField.fields.hiddenValue;
          local_60._0_8_ = (pHVar7->fields)._GNFNOKJDGFH_k__BackingField.fields.currentCryptoKey;
          pIStack_48 = *(Il2CppClass **)
                        &(pHVar7->fields)._GNFNOKJDGFH_k__BackingField.fields.fakeValueActive;
          local_60._16_8_ = (pHVar7->fields)._GNFNOKJDGFH_k__BackingField.fields.fakeValue;
          goto LAB_0364b7b8;
        }
      }
      else if ((uVar4 == 0x9deae849) &&
              (bVar3 = System_String__op_Equality(pSVar5,StringLiteral_11086/*"ReceiveForgeMaterial3"*/,(MethodInfo *)0x0),
              bVar3)) {
        if (pHVar7 == (HOOAAGABMBL_o *)0x0) goto LAB_0364bb58;
        local_60._8_8_ = (pHVar7->fields)._JMHDOFLEICP_k__BackingField.fields.hiddenValue;
        local_60._0_8_ = (pHVar7->fields)._JMHDOFLEICP_k__BackingField.fields.currentCryptoKey;
        pIStack_48 = *(Il2CppClass **)
                      &(pHVar7->fields)._JMHDOFLEICP_k__BackingField.fields.fakeValueActive;
        local_60._16_8_ = (pHVar7->fields)._JMHDOFLEICP_k__BackingField.fields.fakeValue;
LAB_0364b7b8:
        pSVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ToString
                           ((CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)local_60,
                            (MethodInfo *)0x0);
        goto joined_r0x0364b69c;
      }
    }
    else if (uVar4 == 0xa0b8e47d) {
      pMVar13 = (MethodInfo *)0x0;
      bVar3 = System_String__op_Equality(pSVar5,StringLiteral_9422/*"NextMoneyUpgradePrice"*/,(MethodInfo *)0x0);
      if (bVar3) {
        pHVar7 = QuestCondition__HOPFJHBDDCA((QuestCondition_o *)0x1,pHVar7,pMVar13);
        bVar3 = true;
        goto LAB_0364b950;
      }
    }
    else if ((uVar4 == 0xa19e0871) &&
            (bVar3 = System_String__op_Equality(pSVar5,StringLiteral_3536/*"BonusDeliveryPrice"*/,(MethodInfo *)0x0), bVar3)
            ) {
      if (pHVar7 == (HOOAAGABMBL_o *)0x0) goto LAB_0364bb58;
      pCVar15 = &(pHVar7->fields)._BGAELGPOEHE_k__BackingField;
LAB_0364b7b4:
      local_60._8_8_ = (pCVar15->fields).hiddenValue;
      local_60._0_8_ = (pCVar15->fields).currentCryptoKey;
      pIStack_48 = *(Il2CppClass **)&(pCVar15->fields).fakeValueActive;
      local_60._16_8_ = (pCVar15->fields).fakeValue;
      goto LAB_0364b7b8;
    }
  }
  else if (uVar4 < 0xc66317f2) {
    if (uVar4 == 0xb1e7cb25) {
      bVar3 = System_String__op_Equality(pSVar5,StringLiteral_4580/*"ConfigDiscountEnd"*/,(MethodInfo *)0x0);
      if (bVar3) {
        if (pHVar7 == (HOOAAGABMBL_o *)0x0) goto LAB_0364bb58;
        pNVar14 = (pHVar7->fields).DLBFLPBOJNI;
                    /* try { // try from 0364b724 to 0374befb has its CatchHandler @ 0364b724
                       catch() { ... } // from try @ 0364b724 with catch @ 0364b724
                       catch() { ... } // from try @ 0364bf5c with catch @ 0364b724
                       catch() { ... } // from try @ 0364cd30 with catch @ 0364b724
                       catch() { ... } // from try @ 0364cd60 with catch @ 0364b724
                       catch() { ... } // from try @ 0364cda0 with catch @ 0364b724 */
        if (pNVar14 == (NMAHEBEALAB_o *)0x0) goto LAB_0364bb28;
        __this_01 = &(pNVar14->fields).ALLCFABAGOB;
LAB_0364b72c:
        pSVar10 = System_Int64__ToString((int64_t)__this_01,(MethodInfo *)0x0);
        goto LAB_0364bb2c;
      }
    }
    else if (uVar4 == 0xb5eb0f28) {
      bVar3 = System_String__op_Equality(pSVar5,StringLiteral_9188/*"MoneyDeliveryPrice"*/,(MethodInfo *)0x0);
      if (bVar3) {
        if (pHVar7 == (HOOAAGABMBL_o *)0x0) goto LAB_0364bb58;
        pCVar15 = &(pHVar7->fields)._AHGGPINAJNM_k__BackingField;
        goto LAB_0364b7b4;
      }
    }
    else if (uVar4 == 0xc66317f1) {
      pMVar13 = (MethodInfo *)0x0;
      bVar3 = System_String__op_Equality(pSVar5,StringLiteral_9423/*"NextUpgradeDeliveryPrice"*/,(MethodInfo *)0x0);
      if (bVar3) {
        pHVar7 = QuestCondition__HOPFJHBDDCA((QuestCondition_o *)0x1,pHVar7,pMVar13);
        local_70 = QuestCondition__LDBLLGOEDFF((QuestCondition_o *)pHVar7,pHVar7,false,method);
        goto LAB_0364b954;
      }
    }
  }
  else if (uVar4 < 0xdd3ec7cb) {
    if (uVar4 == 0xd155d06d) {
      bVar3 = System_String__op_Equality(pSVar5,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
      if (bVar3) {
        if ((pHVar7 != (HOOAAGABMBL_o *)0x0) && (JDGILABGBGH != (MMFIDKMDADC_o *)0x0)) {
          pSVar5 = (pHVar7->fields)._GMPAEDFIIHF_k__BackingField;
          goto LAB_0364b96c;
        }
        goto LAB_0364bb58;
      }
    }
    else if ((uVar4 == 0xdd3ec7ca) &&
            (bVar3 = System_String__op_Equality(pSVar5,StringLiteral_10454/*"Price"*/,(MethodInfo *)0x0), bVar3
            )) {
      if (pHVar7 == (HOOAAGABMBL_o *)0x0) goto LAB_0364bb58;
      pIStack_48 = *(Il2CppClass **)
                    &(pHVar7->fields)._JIJJJBAGEFK_k__BackingField.fields.fakeValueActive;
      local_60._16_8_ = (pHVar7->fields)._JIJJJBAGEFK_k__BackingField.fields.fakeValue;
      local_60._8_8_ = (pHVar7->fields)._JIJJJBAGEFK_k__BackingField.fields.hiddenValue;
      local_60._0_8_ = (pHVar7->fields)._JIJJJBAGEFK_k__BackingField.fields.currentCryptoKey;
      goto LAB_0364b7b8;
    }
  }
  else if (uVar4 == 0xdd9b6835) {
    bVar3 = System_String__op_Equality(pSVar5,StringLiteral_10221/*"PerkExists"*/,(MethodInfo *)0x0);
    if (bVar3) {
      pSVar16 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
      if (pSVar16 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0)
      goto LAB_0364bb58;
      if ((pSVar16->fields)._size < 2) {
        return;
      }
      if ((pAVar18 == (Roster_o *)0x0) ||
         (pGVar8 = (pAVar18->fields).OIDPLCLELEN, pGVar8 == (GGHCLMEFIGO_o *)0x0))
      goto LAB_0364bb58;
      pIVar9 = GGHCLMEFIGO__JNFIBDBHNOA(pGVar8,pHVar7,(MethodInfo *)0x0);
      pSVar16 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
      if ((pSVar16 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0) ||
         (__this_02 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar16,1,
                                 Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                                ), __this_02 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0))
      goto LAB_0364bb58;
      pSVar5 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(__this_02,(MethodInfo *)0x0);
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(GameUtils_TypeInfo);
      }
      __this_03 = GameUtils_TypeInfo->static_fields->DDMMFEDBMCC;
      if ((__this_03 == (FOKJBDHLIMG_o *)0x0) ||
         (EIKFGOCCOIE = FOKJBDHLIMG__JMMDGEOBMOC(__this_03,pSVar5,(MethodInfo *)0x0),
         pIVar9 == (IGFGDDANEPE_o *)0x0)) goto LAB_0364bb58;
      bVar3 = IGFGDDANEPE__FGDEJFIKMCP(pIVar9,EIKFGOCCOIE,(MethodInfo *)0x0);
      goto LAB_0364ba6c;
    }
  }
  else if ((uVar4 == 0xe572231d) &&
          (bVar3 = System_String__op_Equality(pSVar5,StringLiteral_11103/*"RecieveBonus"*/,(MethodInfo *)0x0), bVar3))
  {
    if (pHVar7 == (HOOAAGABMBL_o *)0x0) goto LAB_0364bb58;
    local_60._8_8_ = (pHVar7->fields)._OFDIEEPACGC_k__BackingField.fields.hiddenValue;
    local_60._0_8_ = (pHVar7->fields)._OFDIEEPACGC_k__BackingField.fields.currentCryptoKey;
    pIStack_48 = *(Il2CppClass **)
                  &(pHVar7->fields)._OFDIEEPACGC_k__BackingField.fields.fakeValueActive;
    local_60._16_8_ = (pHVar7->fields)._OFDIEEPACGC_k__BackingField.fields.fakeValue;
    goto LAB_0364b7b8;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  if (args != (System_Object_array *)0x0) {
    pSVar5 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
    if ((pSVar5 != (System_String_o *)0x0) &&
       (lVar11 = thunk_FUN_01bda71c(pSVar5,(((args->obj).klass)->_1).element_class), lVar11 == 0)) {
      uVar12 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar12,0);
    }
    if ((int)args->max_length != 0) {
      args->m_Items[0] = (Il2CppObject *)pSVar5;
      thunk_FUN_01c20e04(args->m_Items,pSVar5);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_10687/*"QuestCondition.ItemFunction - unknown property: "{0}""*/,args,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_0364bb58:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MLHFPLAJIBB(NILLKLHKLHG.GLEGDBCJEOA AJOBAPIPBJB, MMFIDKMDADC KDBIBINALOL)  [RVA 0x354BE8C]
// QuestCondition$$MLHFPLAJIBB @ RVA 0x354BE8C

void QuestCondition__MLHFPLAJIBB
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *AJOBAPIPBJB,
               MMFIDKMDADC_o *KDBIBINALOL,MethodInfo *method)

{
  int32_t OHLKNCPBCBL;
  int32_t BMPJIDHGCBN;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *__this_00;
  NILLKLHKLHG_DIPIFJPCFOE_o *__this_01;
  System_String_o *pSVar1;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_04568b22 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HintSchemeUtility_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&Method_PCOEHCPGBBG_AICKIDLLIBK<MIBHAJBEMIK>__);
    __this = (QuestCondition_o *)FUN_01bab630(&StringLiteral_10679/*"QuestCondition.FightControlHintPrefabFunction: unknown property: "{0}""*/);
                    /* try { // try from 0364befc to 0374bf03 has its CatchHandler @ 0364cd44 */
    DAT_04568b22 = 1;
  }
  if (AJOBAPIPBJB != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
                    /* try { // try from 0364bf18 to 0374bf1b has its CatchHandler @ 0364cd34 */
    OHLKNCPBCBL = PCOEHCPGBBG__AICKIDLLIBK<Int32Enum>
                            ((AJOBAPIPBJB->fields).KCPPJGKAILM,-1,
                             Method_PCOEHCPGBBG_AICKIDLLIBK<MIBHAJBEMIK>__);
                    /* try { // try from 0364bf24 to 0374bf3f has its CatchHandler @ 0364cd38 */
    if (OHLKNCPBCBL == -1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      __this = (QuestCondition_o *)0x0;
      if (args != (System_Object_array *)0x0) {
        pSVar1 = (AJOBAPIPBJB->fields).KCPPJGKAILM;
        if ((pSVar1 != (System_String_o *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(pSVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0))
        {
          uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar3,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar1;
          thunk_FUN_01c20e04(args->m_Items,pSVar1);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_10679/*"QuestCondition.FightControlHintPrefabFunction: unknown property: "{0}""*/,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
    else {
      __this_00 = (AJOBAPIPBJB->fields).EEFPBGNAFFI;
      __this = (QuestCondition_o *)0x0;
      if (__this_00 != (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0) {
        if ((__this_00->fields)._size == 0) {
          if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this = (QuestCondition_o *)HintSchemeUtility__EBKEGMKPJJE(OHLKNCPBCBL,(MethodInfo *)0x0);
        }
        else {
          __this_01 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,0,
                                 Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                                );
                    /* try { // try from 0364bf50 to 0374bf5b has its CatchHandler @ 0364cd40 */
          __this = (QuestCondition_o *)0x0;
          if (__this_01 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0364c068;
          pSVar1 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(__this_01,(MethodInfo *)0x0);
                    /* try { // try from 0364bf5c to 0374cd2b has its CatchHandler @ 0364b724 */
          BMPJIDHGCBN = PCOEHCPGBBG__JBGCINPPLAC(pSVar1,0,(MethodInfo *)0x0);
          if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(HintSchemeUtility_TypeInfo);
          }
          __this = (QuestCondition_o *)
                   HintSchemeUtility__DKFPOGDFDMP(OHLKNCPBCBL,BMPJIDHGCBN,(MethodInfo *)0x0);
        }
        if (KDBIBINALOL != (MMFIDKMDADC_o *)0x0) {
          (KDBIBINALOL->fields).HPACPFLKHPK = (System_String_o *)__this;
          thunk_FUN_01c20e04(&KDBIBINALOL->fields,__this);
          return;
        }
      }
    }
  }
LAB_0364c068:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void GPPPOFIJDBG(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x354C07C]
// QuestCondition$$GPPPOFIJDBG @ RVA 0x354C07C

void QuestCondition__GPPPOFIJDBG
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  QuestCondition_o *KGLJICLJHEL;
  Roster_o *__this_00;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  System_String_o *__this_01;
  
  if ((DAT_04568b23 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_8019/*"IsOpen"*/);
    FUN_01bab630(&StringLiteral_10708/*"QuestCondition.shopAssertFunction - unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    __this = (QuestCondition_o *)FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568b23 = 1;
  }
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    KGLJICLJHEL = (QuestCondition_o *)
                  NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
    __this_01 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
    __this = KGLJICLJHEL;
    if (__this_01 != (System_String_o *)0x0) {
      bVar2 = System_String__Equals(__this_01,StringLiteral_8019/*"IsOpen"*/,(MethodInfo *)0x0);
      if (bVar2) {
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
        __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        __this = (QuestCondition_o *)0x0;
        if (__this_00 != (Roster_o *)0x0) {
          bVar2 = Roster__MHLDNEBLNJG
                            (__this_00,(System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
          __this = (QuestCondition_o *)(ulong)bVar2;
          puVar1 = &StringLiteral_1606/*"1"*/;
          if (!bVar2) {
            puVar1 = &StringLiteral_1567/*"0"*/;
          }
          if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
            (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)*puVar1;
            thunk_FUN_01c20e04(&JDGILABGBGH->fields);
            return;
          }
        }
      }
      else {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        __this = (QuestCondition_o *)0x0;
        if (args != (System_Object_array *)0x0) {
          lVar3 = thunk_FUN_01bda71c(__this_01,(((args->obj).klass)->_1).element_class);
          if (lVar3 == 0) {
            uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar4,0);
          }
          if ((int)args->max_length != 0) {
            args->m_Items[0] = (Il2CppObject *)__this_01;
            thunk_FUN_01c20e04(args->m_Items,__this_01);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            UnityEngine_Debug__LogErrorFormat(StringLiteral_10708/*"QuestCondition.shopAssertFunction - unknown property: "{0}""*/,args,(MethodInfo *)0x0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== public bool DGCODECJJCC(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x354C264]
// QuestCondition$$DGCODECJJCC @ RVA 0x354C264

bool QuestCondition__DGCODECJJCC(QuestCondition_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_LEGDPJHPEOB__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568b24 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<QuestCondition>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<QuestCondition>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<QuestCondition>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<QuestCondition>_GetEnumerator__);
    DAT_04568b24 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields).ACCIHBHMFPN == 6) {
    __this_00 = (__this->fields).AHEFOIOKDOK;
    if (__this_00 == (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<QuestCondition>_GetEnumerator__);
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<QuestCondition>_MoveNext__);
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<QuestCondition>_Dispose__);
        iVar1 = (__this->fields).HJBFKFHHAEO;
        if (iVar1 == 1) {
          return (__this->fields).CKPHGNCGNHK != false;
        }
        if (iVar1 == 2) {
          return (__this->fields).CKPHGNCGNHK == false;
        }
        bVar2 = false;
        goto LAB_0364c354;
      }
      if ((QuestCondition_o *)local_38.fields._current == (QuestCondition_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = QuestCondition__DGCODECJJCC((QuestCondition_o *)local_38.fields._current,AAJBIMFNMBB,method)
      ;
      iVar1 = (__this->fields).HJBFKFHHAEO;
      if (!bVar2 && iVar1 == 2) {
        bVar2 = (__this->fields).CKPHGNCGNHK != false;
        goto LAB_0364c3ac;
      }
    } while (iVar1 != 1 || ((bVar2 ^ 0xffU) & 1) != 0);
    bVar2 = (__this->fields).CKPHGNCGNHK == false;
LAB_0364c3ac:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<QuestCondition>_Dispose__);
  }
  else {
    bVar2 = QuestCondition__IIPMBCPINCC(__this,AAJBIMFNMBB,method);
LAB_0364c354:
    bVar2 = (bool)(bVar2 ^ (__this->fields).CKPHGNCGNHK != false);
  }
  return bVar2;
}


// ===== private string JMBCALDIOHO()  [RVA 0x3549A90]
// QuestCondition$$JMBCALDIOHO @ RVA 0x3549A90

System_String_o * QuestCondition__JMBCALDIOHO(QuestCondition_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  PKHMIGFEJCL_o *pPVar3;
  HOOAAGABMBL_o *pHVar4;
  
  if ((DAT_04568b25 & 1) == 0) {
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_22485/*"|"*/);
    DAT_04568b25 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  pPVar3 = (__this->fields).AAJBIMFNMBB;
  if (pPVar3 != (PKHMIGFEJCL_o *)0x0) {
    pHVar4 = (pPVar3->fields).CJLNOJMBNPN;
    if (pHVar4 == (HOOAAGABMBL_o *)0x0) {
      if (__this_00 != (System_Text_StringBuilder_o *)0x0) goto LAB_03649b58;
    }
    else if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append
                (__this_00,(pHVar4->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
      pPVar3 = (__this->fields).AAJBIMFNMBB;
      if (pPVar3 != (PKHMIGFEJCL_o *)0x0) {
        bVar1 = System_String__IsNullOrEmpty((pPVar3->fields).LPFMHPBACOJ,(MethodInfo *)0x0);
        if (!bVar1) {
          System_Text_StringBuilder__Append(__this_00,StringLiteral_22485/*"|"*/,(MethodInfo *)0x0);
          pPVar3 = (__this->fields).AAJBIMFNMBB;
          if (pPVar3 == (PKHMIGFEJCL_o *)0x0) goto LAB_03649b70;
          System_Text_StringBuilder__Append
                    (__this_00,(pPVar3->fields).LPFMHPBACOJ,(MethodInfo *)0x0);
        }
LAB_03649b58:
                    /* WARNING: Could not recover jumptable at 0x03649b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pSVar2 = (System_String_o *)
                 (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                           (__this_00,(__this_00->klass->vtable)._3_ToString.method);
        return pSVar2;
      }
    }
  }
LAB_03649b70:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool PNMBBPHANIK(bool HPACPFLKHPK)  [RVA 0x354C5C4]
// QuestCondition$$PNMBBPHANIK @ RVA 0x354C5C4

bool QuestCondition__PNMBBPHANIK(QuestCondition_o *__this,bool HPACPFLKHPK,MethodInfo *method)

{
  return ((__this->fields).CKPHGNCGNHK != false) != HPACPFLKHPK;
}


// ===== private void GICMLLPMKKF(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x354C5DC]
// QuestCondition$$GICMLLPMKKF @ RVA 0x354C5DC

void QuestCondition__GICMLLPMKKF
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  System_String_o *pSVar4;
  
  if ((DAT_04568b26 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10706/*"QuestCondition.getSimOperator - unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_4451/*"Code"*/);
    FUN_01bab630(&StringLiteral_6825/*"GetSimOperator"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568b26 = 1;
  }
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((ACCIJLGMHOO->fields).KCPPJGKAILM,StringLiteral_4451/*"Code"*/,(MethodInfo *)0x0);
    if (bVar1) {
      if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_6825/*"GetSimOperator"*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
        (JDGILABGBGH->fields).HPACPFLKHPK = StringLiteral_1/*""*/;
        thunk_FUN_01c20e04(&JDGILABGBGH->fields);
        return;
      }
    }
    else {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args != (System_Object_array *)0x0) {
        pSVar4 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
        if ((pSVar4 != (System_String_o *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(pSVar4,(((args->obj).klass)->_1).element_class), lVar2 == 0))
        {
          uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar3,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar4;
          thunk_FUN_01c20e04(args->m_Items,pSVar4);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_10706/*"QuestCondition.getSimOperator - unknown property: "{0}""*/,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private long BNIDHODEMHP(HOOAAGABMBL IKKAMAMLIKA, bool DHDIAGODPIG)  [RVA 0x354BC80]
// QuestCondition$$BNIDHODEMHP @ RVA 0x354BC80

int64_t QuestCondition__BNIDHODEMHP
                  (QuestCondition_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,bool DHDIAGODPIG,
                  MethodInfo *method)

{
  bool bVar1;
  int64_t iVar2;
  System_String_o *message;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *pCVar3;
  undefined8 *puVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  int64_t local_40;
  int64_t iStack_38;
  int64_t iStack_30;
  undefined8 uStack_28;
  
  if ((DAT_04568b27 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_10685/*"QuestCondition.GetUpgradePrice "*/);
    FUN_01bab630(&StringLiteral_19738/*"money"*/);
    FUN_01bab630(&StringLiteral_511/*" price - no price, item: "*/);
    FUN_01bab630(&StringLiteral_10686/*"QuestCondition.GetUpgradePrice item==null"*/);
    FUN_01bab630(&StringLiteral_16742/*"bonus"*/);
    DAT_04568b27 = 1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    message = StringLiteral_10686/*"QuestCondition.GetUpgradePrice item==null"*/;
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      message = StringLiteral_10686/*"QuestCondition.GetUpgradePrice item==null"*/;
    }
LAB_0364bdc0:
    UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
    iVar2 = 0x7fffffff;
  }
  else {
    if (DHDIAGODPIG) {
      bVar1 = HOOAAGABMBL__LJIADGDFCPK(IKKAMAMLIKA,(MethodInfo *)0x0);
      if (!bVar1) {
        puVar4 = &StringLiteral_19738/*"money"*/;
LAB_0364bd74:
        message = System_String__Concat
                            (StringLiteral_10685/*"QuestCondition.GetUpgradePrice "*/,(System_String_o *)*puVar4,StringLiteral_511/*" price - no price, item: "*/,
                             (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        goto LAB_0364bdc0;
      }
      pCVar3 = &(IKKAMAMLIKA->fields)._JIJJJBAGEFK_k__BackingField;
    }
    else {
      bVar1 = HOOAAGABMBL__NNBJIDNAADK(IKKAMAMLIKA,(MethodInfo *)0x0);
      if (!bVar1) {
        puVar4 = &StringLiteral_16742/*"bonus"*/;
        goto LAB_0364bd74;
      }
      pCVar3 = &(IKKAMAMLIKA->fields)._AHMCDBKNKAJ_k__BackingField;
    }
    local_60.fields.hiddenValue = (pCVar3->fields).hiddenValue;
    local_60.fields.currentCryptoKey = (pCVar3->fields).currentCryptoKey;
    local_60.fields.fakeValueActive = (pCVar3->fields).fakeValueActive;
    local_60.fields.inited = (pCVar3->fields).inited;
    local_60.fields._26_6_ = *(undefined6 *)&(pCVar3->fields).field_0x1a;
    local_60.fields.fakeValue = (pCVar3->fields).fakeValue;
    local_40 = local_60.fields.currentCryptoKey;
    iStack_38 = local_60.fields.hiddenValue;
    iStack_30 = local_60.fields.fakeValue;
    uStack_28 = local_60.fields._24_8_;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_60,(MethodInfo *)0x0)
    ;
  }
  return iVar2;
}


// ===== private long LDBLLGOEDFF(HOOAAGABMBL IKKAMAMLIKA, bool DHDIAGODPIG)  [RVA 0x354BDDC]
// QuestCondition$$LDBLLGOEDFF @ RVA 0x354BDDC

int64_t QuestCondition__LDBLLGOEDFF
                  (QuestCondition_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,bool DHDIAGODPIG,
                  MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *pCVar1;
  int64_t iVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_60;
  int64_t local_40;
  int64_t iStack_38;
  int64_t iStack_30;
  undefined8 uStack_28;
  
  if ((DAT_04568b28 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_10683/*"QuestCondition.GetDeliveryUpgradePrice item==null"*/);
    DAT_04568b28 = 1;
  }
  if (IKKAMAMLIKA == (HOOAAGABMBL_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__Log(StringLiteral_10683/*"QuestCondition.GetDeliveryUpgradePrice item==null"*/,(MethodInfo *)0x0);
    iVar2 = 0x7fffffff;
  }
  else {
    pCVar1 = &(IKKAMAMLIKA->fields)._AHGGPINAJNM_k__BackingField;
    if (!DHDIAGODPIG) {
      pCVar1 = &(IKKAMAMLIKA->fields)._BGAELGPOEHE_k__BackingField;
    }
    local_60.fields.hiddenValue = (pCVar1->fields).hiddenValue;
    local_60.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
    local_60.fields.fakeValueActive = (pCVar1->fields).fakeValueActive;
    local_60.fields.inited = (pCVar1->fields).inited;
    local_60.fields._26_6_ = *(undefined6 *)&(pCVar1->fields).field_0x1a;
    local_60.fields.fakeValue = (pCVar1->fields).fakeValue;
    local_40 = local_60.fields.currentCryptoKey;
    iStack_38 = local_60.fields.hiddenValue;
    iStack_30 = local_60.fields.fakeValue;
    uStack_28 = local_60.fields._24_8_;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_60,(MethodInfo *)0x0)
    ;
  }
  return iVar2;
}


// ===== private void JMGEGLJJDNB(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x354C764]
// QuestCondition$$JMGEGLJJDNB @ RVA 0x354C764

void QuestCondition__JMGEGLJJDNB
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *__this_00;
  int64_t iVar3;
  LAMJOHEKJNJ_o *__this_01;
  LPEBBHNDFCG_o *pLVar4;
  System_String_o *__this_02;
  Roster_o *pAVar5;
  int64_t local_38;
  
  if ((DAT_04568b29 & 1) == 0) {
    FUN_01bab630(&BattlePeriodic_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_5773/*"EnergyRefillTimer"*/);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_12382/*"StarterPackTimer"*/);
    __this = (QuestCondition_o *)FUN_01bab630(&StringLiteral_5492/*"DuelAccessibilityTimer"*/);
    DAT_04568b29 = 1;
  }
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    __this_00 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
    __this = (QuestCondition_o *)NLPJLHOEAOE_TypeInfo;
    if (__this_02 == (System_String_o *)0x0) goto LAB_0364c9fc;
    pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    bVar2 = System_String__Equals(__this_02,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
    __this = (QuestCondition_o *)(ulong)bVar2;
    if (!bVar2) {
      return;
    }
    if (__this_00 == (System_String_o *)0x0) goto LAB_0364c9fc;
    bVar2 = System_String__Equals(__this_00,StringLiteral_5773/*"EnergyRefillTimer"*/,(MethodInfo *)0x0);
    __this = (QuestCondition_o *)(ulong)bVar2;
    if (bVar2) {
      if (pAVar5 == (Roster_o *)0x0) goto LAB_0364c9fc;
      local_38 = (pAVar5->fields).CGLPKJKAOAI;
    }
    else {
      bVar2 = System_String__Equals(__this_00,StringLiteral_5492/*"DuelAccessibilityTimer"*/,(MethodInfo *)0x0);
      if (bVar2) {
        if ((BattlePeriodic_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar3 = BattlePeriodic__IMAKPJNJIJF((MethodInfo *)0x0);
        if (iVar3 < 1) {
          return;
        }
        if ((BattlePeriodic_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar3 = BattlePeriodic__HCIGNMBPBOP((MethodInfo *)0x0);
        local_38 = BattlePeriodic__IMAKPJNJIJF((MethodInfo *)0x0);
        local_38 = iVar3 - local_38;
      }
      else {
        bVar2 = System_String__Equals(__this_00,StringLiteral_12382/*"StarterPackTimer"*/,(MethodInfo *)0x0);
        __this = (QuestCondition_o *)(ulong)bVar2;
        if (pAVar5 == (Roster_o *)0x0) goto LAB_0364c9fc;
        if (bVar2) {
          iVar3 = (pAVar5->fields).AGNKMPBFLEP;
          uVar1 = (GameUtils_TypeInfo->_2).cctor_finished;
        }
        else {
          __this_01 = (pAVar5->fields)._DDGPMHMNKNA_k__BackingField;
          __this = (QuestCondition_o *)0x0;
          if (__this_01 == (LAMJOHEKJNJ_o *)0x0) goto LAB_0364c9fc;
          pLVar4 = LAMJOHEKJNJ__FENHANFAIND(__this_01,__this_00,(MethodInfo *)0x0);
          if (pLVar4 == (LPEBBHNDFCG_o *)0x0) {
            __this = (QuestCondition_o *)0x0;
            if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364c9fc;
            __this = (QuestCondition_o *)string_TypeInfo->static_fields->Empty;
            goto LAB_0364c9c0;
          }
          iVar3 = (pLVar4->fields)._PGKPHJLHJCO_k__BackingField;
          uVar1 = (GameUtils_TypeInfo->_2).cctor_finished;
        }
        if (uVar1 == 0) {
          thunk_FUN_01ba7564(GameUtils_TypeInfo);
        }
        local_38 = GameUtils__HCDHCLBPBHN(iVar3,(MethodInfo *)0x0);
      }
    }
    __this = (QuestCondition_o *)System_Int64__ToString((int64_t)&local_38,(MethodInfo *)0x0);
    if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
LAB_0364c9c0:
      (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)__this;
      thunk_FUN_01c20e04(&JDGILABGBGH->fields);
      return;
    }
  }
LAB_0364c9fc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void ELAEIDFIJGF(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x354CA00]
// QuestCondition$$ELAEIDFIJGF @ RVA 0x354CA00

void QuestCondition__ELAEIDFIJGF
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Collections_Generic_List_IGFGDDANEPE__o *pSVar3;
  GGHCLMEFIGO_o *__this_00;
  Roster_o *pAVar4;
  int32_t local_24;
  
  if ((DAT_04568b2a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Count__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10636/*"Quantity"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568b2a = 1;
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
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar4 != (Roster_o *)0x0) {
    if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
      pSVar2 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
      __this_00 = (pAVar4->fields).OIDPLCLELEN;
      if (__this_00 != (GGHCLMEFIGO_o *)0x0) {
        pSVar3 = GGHCLMEFIGO__IAHEDEMPGPE(__this_00,pSVar2,StringLiteral_1/*""*/,true,(MethodInfo *)0x0);
        pSVar2 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
        if (pSVar2 != (System_String_o *)0x0) {
          bVar1 = System_String__Equals(pSVar2,StringLiteral_10636/*"Quantity"*/,(MethodInfo *)0x0);
          if (!bVar1) {
            return;
          }
          if (pSVar3 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
            local_24 = (pSVar3->fields)._size;
            pSVar2 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
            if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
              (JDGILABGBGH->fields).HPACPFLKHPK = pSVar2;
              thunk_FUN_01c20e04(&JDGILABGBGH->fields,pSVar2);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void EDGFKLMHKLH(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x354CB50]
// QuestCondition$$EDGFKLMHKLH @ RVA 0x354CB50

void QuestCondition__EDGFKLMHKLH
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_array *pSVar3;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_00;
  QuestCondition_o *__this_01;
  DEKKGJNMFEB_o *pDVar4;
  BFBONKPKBNL_o *pBVar5;
  GGLKHCAIGDI_o *__this_02;
  IGFGDDANEPE_o *NKCMBEFHFII;
  System_Object_array *args;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  MethodInfo *pMVar9;
  MethodInfo *method_00;
  double dVar10;
  undefined1 auVar11 [16];
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_03;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  if ((DAT_04568b2b & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&QuestCondition_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_11106/*"Recipe"*/);
    FUN_01bab630(&StringLiteral_3258/*"Available"*/);
    FUN_01bab630(&StringLiteral_3536/*"BonusDeliveryPrice"*/);
    FUN_01bab630(&StringLiteral_5292/*"DeliveryTime"*/);
    FUN_01bab630(&StringLiteral_10677/*"QuestCondition.EnchantmentFunction - unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    FUN_01bab630(&StringLiteral_13809/*"Timeout"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568b2b = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_80.fields.hiddenValue = 0;
  local_80.fields.currentCryptoKey = 0;
  local_80.fields.fakeValueActive = false;
  local_80.fields.inited = false;
  local_80.fields._26_6_ = 0;
  local_80.fields.fakeValue = 0;
  if (((ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) ||
      (pSVar2 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0),
      pSVar2 == (System_String_o *)0x0)) ||
     (pSVar3 = System_String__Split(pSVar2,0x7c,0,(MethodInfo *)0x0),
     pSVar3 == (System_String_array *)0x0)) goto LAB_0364d044;
  if ((int)pSVar3->max_length < 2) {
    return;
  }
  pSVar2 = pSVar3->m_Items[0];
  __this_00 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_00,(MethodInfo *)0x0);
  auVar11 = thunk_FUN_01bda818(QuestCondition_TypeInfo);
  __this_01 = auVar11._0_8_;
  QuestCondition___ctor(__this_01,auVar11._8_8_);
  if (__this_01 == (QuestCondition_o *)0x0) goto LAB_0364d044;
  (__this_01->fields).AAJBIMFNMBB = (__this->fields).AAJBIMFNMBB;
  thunk_FUN_01c20e04();
  EILGGBOIMGE__KFMNMGGDHFD
            ((EILGGBOIMGE_o *)__this_01,pSVar2,__this_00,false,(System_String_o *)0x0,
             (MethodInfo *)0x0);
  if (__this_00 == (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) goto LAB_0364d044;
  if ((uint)pSVar3->max_length < 2) {
LAB_0364d048:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
  pMVar9 = (MethodInfo *)(__this_00->fields).DFJBJLBLBGB;
  EILGGBOIMGE__KFMNMGGDHFD
            ((EILGGBOIMGE_o *)__this_01,pSVar3->m_Items[1],__this_00,false,(System_String_o *)0x0,
             (MethodInfo *)0x0);
  method_00 = (MethodInfo *)(__this_00->fields).DFJBJLBLBGB;
  local_48 = 0;
  if ((int)pSVar3->max_length == 3) {
                    /* try { // try from 0364cd2c to 0374cd2f has its CatchHandler @ 0364cd3c */
                    /* try { // try from 0364cd30 to 0374cd5b has its CatchHandler @ 0364b724 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0364bf18 with catch @ 0364cd34
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0364bf24 with catch @ 0364cd38
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0364cd2c with catch @ 0364cd3c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0364bf50 with catch @ 0364cd40
                        */
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_01,pSVar3->m_Items[2],__this_00,false,(System_String_o *)0x0,
               (MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0364befc with catch @ 0364cd44
                        */
    dVar10 = (__this_00->fields).HNFHNNLOLGK;
                    /* try { // try from 0364cd5c to 0374cd5f has its CatchHandler @ 0364cd88 */
    local_48 = -0x8000000000000000;
    if (dVar10 != INFINITY) {
      local_48 = (long)dVar10;
    }
  }
  pSVar2 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  bVar1 = System_String__op_Equality(pSVar2,StringLiteral_8095/*"Item"*/,(MethodInfo *)0x0);
  if (bVar1) {
    if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364d044;
                    /* catch() { ... } // from try @ 0364cd5c with catch @ 0364cd88 */
    (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)pMVar9;
    method_00 = pMVar9;
    goto LAB_0364cef0;
  }
                    /* try { // try from 0364cd98 to 0374cd9f has its CatchHandler @ 0364cdb4 */
                    /* try { // try from 0364cda0 to 0374cdab has its CatchHandler @ 0364b724 */
                    /* try { // try from 0364cdac to 0374cdb3 has its CatchHandler @ 0364cdb4 */
  bVar1 = System_String__op_Equality(pSVar2,StringLiteral_11106/*"Recipe"*/,(MethodInfo *)0x0);
  if (bVar1) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0364cd98 with catch @ 0364cdb4
                       catch(type#2 @ 00000000) { ... } // from try @ 0364cdac with catch @ 0364cdb4
                        */
    if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364d044;
    (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)method_00;
    goto LAB_0364cef0;
  }
  bVar1 = System_String__op_Equality(pSVar2,StringLiteral_13809/*"Timeout"*/,(MethodInfo *)0x0);
  if (bVar1) {
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar4 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pDVar4 == (DEKKGJNMFEB_o *)0x0) goto LAB_0364d044;
    pBVar5 = DEKKGJNMFEB__NCFEMNMDBMJ
                       (pDVar4,(System_String_o *)pMVar9,(System_String_o *)method_00,
                        (MethodInfo *)0x0);
    pMVar9 = StringLiteral_1567/*"0"*/;
    if (pBVar5 != (BFBONKPKBNL_o *)0x0) {
      uStack_58._0_4_ = (pBVar5->fields)._LAOFJOMPFDL_k__BackingField.fields.fakeValue;
      uStack_58._4_1_ = (pBVar5->fields)._LAOFJOMPFDL_k__BackingField.fields.fakeValueActive;
      uStack_58._5_1_ = (pBVar5->fields)._LAOFJOMPFDL_k__BackingField.fields.inited;
      uStack_58._6_2_ =
           *(undefined2 *)&(pBVar5->fields)._LAOFJOMPFDL_k__BackingField.fields.field_0xe;
      local_60._0_4_ = (pBVar5->fields)._LAOFJOMPFDL_k__BackingField.fields.currentCryptoKey;
      local_60._4_4_ = (pBVar5->fields)._LAOFJOMPFDL_k__BackingField.fields.hiddenValue;
      __this_03.fields.fakeValue = 0;
      __this_03.fields.fakeValueActive = false;
      __this_03.fields.inited = false;
      __this_03.fields._14_2_ = 0;
      __this_03.fields._0_8_ = &local_60;
      pMVar9 = (MethodInfo *)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(__this_03,method_00);
    }
joined_r0x0364ce60:
    method_00 = pMVar9;
    if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) {
LAB_0364d044:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  else {
    bVar1 = System_String__op_Equality(pSVar2,StringLiteral_5292/*"DeliveryTime"*/,(MethodInfo *)0x0);
    if (bVar1) {
      pMVar9 = (MethodInfo *)System_Int64__ToString((int64_t)&local_48,(MethodInfo *)0x0);
      goto joined_r0x0364ce60;
    }
    bVar1 = System_String__op_Equality(pSVar2,StringLiteral_3536/*"BonusDeliveryPrice"*/,(MethodInfo *)0x0);
    if (bVar1) {
      if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar4 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pDVar4 == (DEKKGJNMFEB_o *)0x0) goto LAB_0364d044;
      pBVar5 = DEKKGJNMFEB__NCFEMNMDBMJ
                         (pDVar4,(System_String_o *)pMVar9,(System_String_o *)method_00,
                          (MethodInfo *)0x0);
      pMVar9 = StringLiteral_1567/*"0"*/;
      if (pBVar5 != (BFBONKPKBNL_o *)0x0) {
        local_80.fields.hiddenValue =
             (pBVar5->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
        local_80.fields.currentCryptoKey =
             (pBVar5->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
        local_80.fields.fakeValueActive =
             (pBVar5->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
        local_80.fields.inited = (pBVar5->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
        local_80.fields._26_6_ =
             *(undefined6 *)&(pBVar5->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
        local_80.fields.fakeValue = (pBVar5->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
        pMVar9 = (MethodInfo *)
                 CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ToString
                           (&local_80,(MethodInfo *)0x0);
      }
      goto joined_r0x0364ce60;
    }
    bVar1 = System_String__op_Equality(pSVar2,StringLiteral_3258/*"Available"*/,(MethodInfo *)0x0);
    if (!bVar1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args != (System_Object_array *)0x0) {
        pSVar2 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
        if ((pSVar2 != (System_String_o *)0x0) &&
           (lVar6 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar6 == 0))
        {
          uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar7,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar2;
          thunk_FUN_01c20e04(args->m_Items,pSVar2);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_10677/*"QuestCondition.EnchantmentFunction - unknown property: "{0}""*/,args,(MethodInfo *)0x0);
          return;
        }
        goto LAB_0364d048;
      }
      goto LAB_0364d044;
    }
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar4 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pDVar4 == (DEKKGJNMFEB_o *)0x0) goto LAB_0364d044;
    __this_02 = DEKKGJNMFEB__LDGJEEGACHJ(pDVar4,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    NKCMBEFHFII = NLPJLHOEAOE__JNFIBDBHNOA((System_String_o *)pMVar9,(MethodInfo *)0x0);
    if (((__this_02 == (GGLKHCAIGDI_o *)0x0) || (NKCMBEFHFII == (IGFGDDANEPE_o *)0x0)) ||
       (bVar1 = GGLKHCAIGDI__DDAKFOBLNJL(__this_02,NKCMBEFHFII,(MethodInfo *)0x0), !bVar1)) {
      puVar8 = &StringLiteral_1567/*"0"*/;
    }
    else {
      puVar8 = &StringLiteral_1606/*"1"*/;
    }
    if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364d044;
    method_00 = (MethodInfo *)*puVar8;
  }
  (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)method_00;
LAB_0364cef0:
  thunk_FUN_01c20e04(&JDGILABGBGH->fields,method_00);
  return;
}


// ===== private bool AIEGIBNJEIM()  [RVA 0x3544EF0]
// QuestCondition$$AIEGIBNJEIM @ RVA 0x3544EF0

bool QuestCondition__AIEGIBNJEIM(QuestCondition_o *__this,MethodInfo *method)

{
                    /* try { // try from 03644f00 to 03744f07 has its CatchHandler @ 03645c30 */
  return (__this->fields).ACCIHBHMFPN - 8U < 3;
}


// ===== private bool IIPMBCPINCC(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x354C470]
// QuestCondition$$IIPMBCPINCC @ RVA 0x354C470

bool QuestCondition__IIPMBCPINCC(QuestCondition_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_00;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_01;
  MethodInfo *method_00;
  PKHMIGFEJCL_o **ppPVar3;
  
  if ((DAT_04568b2c & 1) == 0) {
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    DAT_04568b2c = 1;
  }
  ppPVar3 = &(__this->fields).AAJBIMFNMBB;
  *ppPVar3 = AAJBIMFNMBB;
  thunk_FUN_01c20e04(ppPVar3,AAJBIMFNMBB);
  iVar1 = (__this->fields).ACCIHBHMFPN;
  __this_00 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_00,(MethodInfo *)0x0);
  if (iVar1 == 7) {
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this,(__this->fields).HGLHAHMIGDB,__this_00,false,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    if (__this_00 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
      bVar2 = EILGGBOIMGE_FMFDKGKCBBG__AADLDMNDIKG(__this_00,(MethodInfo *)0x0);
      if (bVar2) {
        bVar2 = (__this_00->fields).HNFHNNLOLGK == 1.0;
      }
      else {
        bVar2 = false;
      }
      return bVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_01 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_01,(MethodInfo *)0x0);
  EILGGBOIMGE__KFMNMGGDHFD
            ((EILGGBOIMGE_o *)__this,(__this->fields).HGLHAHMIGDB,__this_00,false,
             (System_String_o *)0x0,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  EILGGBOIMGE__KFMNMGGDHFD
            ((EILGGBOIMGE_o *)__this,(__this->fields).NKNANOCKLNG,__this_01,false,
             (System_String_o *)0x0,(MethodInfo *)0x0);
  if ((__this->fields).ACCIHBHMFPN - 8U < 3) {
    bVar2 = QuestCondition__DFAGIFLDKAP(__this,__this_00,__this_01,method_00);
    return bVar2;
  }
  bVar2 = QuestCondition__NMANJLBNKBG(__this,__this_00,__this_01,method_00);
  return bVar2;
}


// ===== private HOOAAGABMBL HOPFJHBDDCA(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x354BB6C]
// QuestCondition$$HOPFJHBDDCA @ RVA 0x354BB6C

HOOAAGABMBL_o *
QuestCondition__HOPFJHBDDCA(QuestCondition_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  int32_t iVar1;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *__this_01;
  int64_t iVar2;
  HOOAAGABMBL_o *pHVar3;
  long lVar4;
  Roster_o *pAVar5;
  
  if ((DAT_04568b2d & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568b2d = 1;
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
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar5 != (Roster_o *)0x0) &&
     (__this_00 = (pAVar5->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
    __this_01 = GGHCLMEFIGO__JNFIBDBHNOA(__this_00,IKKAMAMLIKA,(MethodInfo *)0x0);
    if ((__this_01 != (IGFGDDANEPE_o *)0x0) &&
       (((iVar2 = IGFGDDANEPE__OMMIKNKEKJN(__this_01,(MethodInfo *)0x0), 0 < iVar2 &&
         (iVar1 = IGFGDDANEPE__IJNIFKFEGND(__this_01,(MethodInfo *)0x0), 0 < iVar1)) &&
        (pHVar3 = IGFGDDANEPE__DHNBLNPDGMD(__this_01,(MethodInfo *)0x0),
        pHVar3 != (HOOAAGABMBL_o *)0x0)))) {
      lVar4 = (*(pHVar3->klass->vtable)._7_FAOBHLCDKJI.methodPtr)
                        (pHVar3,(pHVar3->klass->vtable)._7_FAOBHLCDKJI.method);
      if (lVar4 != 0) {
        pHVar3 = (__this_01->fields).LFPOIAJDMBK;
        if (pHVar3 != (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0364bc68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pHVar3 = (HOOAAGABMBL_o *)
                   (*(pHVar3->klass->vtable)._7_FAOBHLCDKJI.methodPtr)
                             (pHVar3,(pHVar3->klass->vtable)._7_FAOBHLCDKJI.method);
          return pHVar3;
        }
        goto LAB_0364bc7c;
      }
    }
    return (HOOAAGABMBL_o *)0x0;
  }
LAB_0364bc7c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FBPIMGAKHFI(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x354D278]
// QuestCondition$$FBPIMGAKHFI @ RVA 0x354D278

void QuestCondition__FBPIMGAKHFI
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  DNELIPCHKLK_o *__this_00;
  Roster_o *__this_01;
  PAMEPBLOLPB_o *pPVar2;
  MEJIKMPNBNL_o *__this_02;
  OOMHDDBCBJP_o *__this_03;
  FightList_o *pAVar3;
  System_Object_array *pSVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  MMFIDKMDADC_Fields *pMVar9;
  System_String_o *pSVar10;
  int32_t local_34;
  
  if ((DAT_04568b2e & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<object>__);
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_14953/*"WinCount"*/);
    FUN_01bab630(&StringLiteral_5579/*"ERROR: QuestCondition.FightInfoFunction - roster is null"*/);
    FUN_01bab630(&StringLiteral_10681/*"QuestCondition.FightInfoFunction - unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_5577/*"ERROR: QuestCondition.FightInfoFunction - no fight {0} for battle {1}|{2}"*/);
    FUN_01bab630(&StringLiteral_8677/*"LossCount"*/);
    FUN_01bab630(&StringLiteral_5578/*"ERROR: QuestCondition.FightInfoFunction - no zone {0}"*/);
    __this = (QuestCondition_o *)FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568b2e = 1;
  }
  local_34 = 0;
  if ((ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) &&
     (__this = (QuestCondition_o *)NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0),
     JDGILABGBGH != (MMFIDKMDADC_o *)0x0)) {
    pMVar9 = &JDGILABGBGH->fields;
    pMVar9->HPACPFLKHPK = StringLiteral_1567/*"0"*/;
    thunk_FUN_01c20e04(pMVar9);
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
    lVar5 = Method_System_Array_Empty<object>__;
    if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField == (Roster_o *)0x0) {
      lVar7 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
      if (lVar7 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<object>__);
        lVar7 = *(long *)(lVar5 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01b81620();
      }
      if (*(int *)(lVar7 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01b81620();
      }
      pSVar4 = (System_Object_array *)**(undefined8 **)(lVar5 + 0xb8);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      puVar8 = &StringLiteral_5579/*"ERROR: QuestCondition.FightInfoFunction - roster is null"*/;
LAB_0364d4e4:
      UnityEngine_Debug__LogFormat((System_String_o *)*puVar8,pSVar4,(MethodInfo *)0x0);
      return;
    }
    __this_00 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
    DNELIPCHKLK___ctor(__this_00,(System_String_o *)__this,(MethodInfo *)0x0);
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
    __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    __this = (QuestCondition_o *)0x0;
    if (__this_01 != (Roster_o *)0x0) {
      pPVar2 = Roster__EKOLJIPEEHA(__this_01,__this_00,(MethodInfo *)0x0);
      if (pPVar2 != (PAMEPBLOLPB_o *)0x0) {
        pSVar10 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
        bVar1 = System_String__op_Equality(pSVar10,StringLiteral_8677/*"LossCount"*/,(MethodInfo *)0x0);
        if (bVar1) {
          local_34 = (pPVar2->fields).KHIBOGMCNJA;
        }
        else {
          bVar1 = System_String__op_Equality(pSVar10,StringLiteral_14953/*"WinCount"*/,(MethodInfo *)0x0);
          if (!bVar1) {
            pSVar4 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
            __this = (QuestCondition_o *)0x0;
            if (pSVar4 != (System_Object_array *)0x0) {
              if ((pSVar10 == (System_String_o *)0x0) ||
                 (lVar5 = thunk_FUN_01bda71c(pSVar10,(((pSVar4->obj).klass)->_1).element_class),
                 lVar5 != 0)) {
                if ((int)pSVar4->max_length != 0) {
                  pSVar4->m_Items[0] = (Il2CppObject *)pSVar10;
                  thunk_FUN_01c20e04(pSVar4->m_Items,pSVar10);
                  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  UnityEngine_Debug__LogErrorFormat(StringLiteral_10681/*"QuestCondition.FightInfoFunction - unknown property: "{0}""*/,pSVar4,(MethodInfo *)0x0);
                  return;
                }
                goto LAB_0364d770;
              }
              goto LAB_0364d774;
            }
            goto LAB_0364d76c;
          }
          local_34 = (pPVar2->fields).AAECGBAMDEL;
        }
        pSVar10 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
        pMVar9->HPACPFLKHPK = pSVar10;
        thunk_FUN_01c20e04(pMVar9,pSVar10);
        return;
      }
      __this = (QuestCondition_o *)0x0;
      if (__this_00 != (DNELIPCHKLK_o *)0x0) {
        pSVar10 = (__this_00->fields).GDPFBDIJNHA;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_02 = NLPJLHOEAOE__KHHBHBLIANB(pSVar10,(MethodInfo *)0x0);
        if (__this_02 == (MEJIKMPNBNL_o *)0x0) {
          pSVar4 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
          __this = (QuestCondition_o *)0x0;
          if (pSVar4 != (System_Object_array *)0x0) {
            pSVar10 = (__this_00->fields).GDPFBDIJNHA;
            if ((pSVar10 == (System_String_o *)0x0) ||
               (lVar5 = thunk_FUN_01bda71c(pSVar10,(((pSVar4->obj).klass)->_1).element_class),
               lVar5 != 0)) {
              if ((int)pSVar4->max_length != 0) {
                pSVar4->m_Items[0] = (Il2CppObject *)pSVar10;
                thunk_FUN_01c20e04(pSVar4->m_Items,pSVar10);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                puVar8 = &StringLiteral_5578/*"ERROR: QuestCondition.FightInfoFunction - no zone {0}"*/;
                goto LAB_0364d4e4;
              }
              goto LAB_0364d770;
            }
            goto LAB_0364d774;
          }
        }
        else {
          __this_03 = MEJIKMPNBNL__KKPHCCBPIMN
                                (__this_02,(__this_00->fields).GJFJPLHCBKJ,(MethodInfo *)0x0);
          if ((__this_03 != (OOMHDDBCBJP_o *)0x0) &&
             (pAVar3 = OOMHDDBCBJP__PFAOOMAGCHN
                                 (__this_03,(__this_00->fields).ANOPJEEGOLJ,(MethodInfo *)0x0),
             pAVar3 != (FightList_o *)0x0)) {
            return;
          }
          pSVar4 = (System_Object_array *)FUN_01bab718(object___TypeInfo,3);
          __this = (QuestCondition_o *)0x0;
          if (pSVar4 != (System_Object_array *)0x0) {
            pSVar10 = (__this_00->fields).ANOPJEEGOLJ;
            if ((pSVar10 != (System_String_o *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pSVar10,(((pSVar4->obj).klass)->_1).element_class),
               lVar5 == 0)) {
LAB_0364d774:
              uVar6 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar6,0);
            }
            if ((int)pSVar4->max_length != 0) {
              pSVar4->m_Items[0] = (Il2CppObject *)pSVar10;
              thunk_FUN_01c20e04(pSVar4->m_Items,pSVar10);
              pSVar10 = (__this_00->fields).GDPFBDIJNHA;
              if ((pSVar10 != (System_String_o *)0x0) &&
                 (lVar5 = thunk_FUN_01bda71c(pSVar10,(((pSVar4->obj).klass)->_1).element_class),
                 lVar5 == 0)) goto LAB_0364d774;
              if (1 < (uint)pSVar4->max_length) {
                pSVar4->m_Items[1] = (Il2CppObject *)pSVar10;
                thunk_FUN_01c20e04(pSVar4->m_Items + 1,pSVar10);
                pSVar10 = (__this_00->fields).GJFJPLHCBKJ;
                if ((pSVar10 != (System_String_o *)0x0) &&
                   (lVar5 = thunk_FUN_01bda71c(pSVar10,(((pSVar4->obj).klass)->_1).element_class),
                   lVar5 == 0)) goto LAB_0364d774;
                if (2 < (uint)pSVar4->max_length) {
                  pSVar4->m_Items[2] = (Il2CppObject *)pSVar10;
                  thunk_FUN_01c20e04(pSVar4->m_Items + 2,pSVar10);
                  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  puVar8 = &StringLiteral_5577/*"ERROR: QuestCondition.FightInfoFunction - no fight {0} for battle {1}|{2}"*/;
                  goto LAB_0364d4e4;
                }
              }
            }
LAB_0364d770:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
        }
      }
    }
  }
LAB_0364d76c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void LADIDEFJJMK(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x354D780]
// QuestCondition$$LADIDEFJJMK @ RVA 0x354D780

void QuestCondition__LADIDEFJJMK
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  Roster_o *pAVar4;
  LPAPAMPGDFN_o *pLVar5;
  void *pvVar6;
  System_String_o *pSVar7;
  
  if ((DAT_04568b2f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_13979/*"TutorialStep"*/);
    FUN_01bab630(&StringLiteral_10695/*"QuestCondition.RaidInfoFunction - unknown property: "{0}""*/);
    __this = (QuestCondition_o *)FUN_01bab630(&StringLiteral_11337/*"RestoreCurrencyValue"*/);
    DAT_04568b2f = 1;
  }
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_0364d988;
  pSVar7 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  bVar1 = System_String__op_Equality(pSVar7,StringLiteral_13979/*"TutorialStep"*/,(MethodInfo *)0x0);
  if (bVar1) {
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
    __this = (QuestCondition_o *)NLPJLHOEAOE_TypeInfo;
    if ((pAVar4 == (Roster_o *)0x0) ||
       (pLVar5 = (pAVar4->fields).LMCDOMHENMC, pLVar5 == (LPAPAMPGDFN_o *)0x0)) goto LAB_0364d988;
    __this = (QuestCondition_o *)
             CONLFJJLALA__GKMAFGODLLG((pLVar5->fields).AMIMEMOELHE,(MethodInfo *)0x0);
  }
  else {
    bVar1 = System_String__op_Equality(pSVar7,StringLiteral_11337/*"RestoreCurrencyValue"*/,(MethodInfo *)0x0);
    if (!bVar1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      __this = (QuestCondition_o *)0x0;
      if (args != (System_Object_array *)0x0) {
        pSVar7 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
        if ((pSVar7 != (System_String_o *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(pSVar7,(((args->obj).klass)->_1).element_class), lVar2 == 0))
        {
          uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar3,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar7;
          thunk_FUN_01c20e04(args->m_Items,pSVar7);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_10695/*"QuestCondition.RaidInfoFunction - unknown property: "{0}""*/,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      goto LAB_0364d988;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this = (QuestCondition_o *)HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (((NLPJLHOEAOE_c *)__this == (NLPJLHOEAOE_c *)0x0) ||
       (pvVar6 = (((NLPJLHOEAOE_c *)__this)->_1).generic_class, pvVar6 == (void *)0x0))
    goto LAB_0364d988;
    __this = (QuestCondition_o *)System_Int32__ToString((int)pvVar6 + 0x10,(MethodInfo *)0x0);
  }
  if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
    (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)__this;
    thunk_FUN_01c20e04(&JDGILABGBGH->fields,__this);
    return;
  }
LAB_0364d988:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void PHCMABDBLJH(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x354D99C]
// QuestCondition$$PHCMABDBLJH @ RVA 0x354D99C

void QuestCondition__PHCMABDBLJH
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *CJNHFNHJHPE;
  System_String_o *pSVar2;
  Roster_o *__this_00;
  Il2CppMethodPointer local_28;
  
  if ((DAT_04568b30 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568b30 = 1;
  }
  local_28 = (Il2CppMethodPointer)0x0;
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
  if ((ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) &&
     (__this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField,
     __this_00 != (Roster_o *)0x0)) {
    bVar1 = Roster__JGGHLGELFDJ(__this_00,(ACCIJLGMHOO->fields).KCPPJGKAILM,(MethodInfo *)0x0);
    if (bVar1) {
      CJNHFNHJHPE = Roster__NOILDCIGGJB
                              (__this_00,(ACCIJLGMHOO->fields).KCPPJGKAILM,(MethodInfo *)0x0);
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
      pSVar2 = StringLiteral_1567/*"0"*/;
      if (!bVar1) {
        local_28 = (Il2CppMethodPointer)BKOHHDBBJML__HNIHOIAMDPC(CJNHFNHJHPE,(MethodInfo *)0x0);
        pSVar2 = System_Double__ToString((double)local_28,(MethodInfo *)&stack0xffffffffffffffd8);
      }
      if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364dac0;
      (JDGILABGBGH->fields).HPACPFLKHPK = pSVar2;
      thunk_FUN_01c20e04(&JDGILABGBGH->fields);
    }
    return;
  }
LAB_0364dac0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JPNCGJDMAAF(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x354DAC4]
// QuestCondition$$JPNCGJDMAAF @ RVA 0x354DAC4

void QuestCondition__JPNCGJDMAAF
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *__this_00;
  NLPJLHOEAOE_o *__this_01;
  FightList_o *__this_02;
  System_String_o *pSVar2;
  System_String_Fields *pSVar3;
  System_String_Fields KGLJICLJHEL;
  System_String_Fields CJNHFNHJHPE;
  int32_t local_24;
  
  if ((DAT_04568b31 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10705/*"QuestCondition.fightCurrencyCostFunction - currencyName is empty"*/);
    FUN_01bab630(&StringLiteral_10704/*"QuestCondition.fightCurrencyCostFunction - cant fight fight: "*/);
    __this = (QuestCondition_o *)FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568b31 = 1;
  }
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    __this_00 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
    __this = (QuestCondition_o *)0x0;
    if (__this_00 != (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0) {
      if ((__this_00->fields)._size < 1) {
        pSVar3 = (System_String_Fields *)&StringLiteral_1/*""*/;
      }
      else {
        __this = (QuestCondition_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,0,
                            Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                           );
        if ((__this == (QuestCondition_o *)0x0) ||
           (pSVar2 = (__this->fields).HGLHAHMIGDB, pSVar2 == (System_String_o *)0x0))
        goto LAB_0364dcc8;
        __this_00 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
        __this = (QuestCondition_o *)0x0;
        if (__this_00 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0)
        goto LAB_0364dcc8;
        pSVar3 = &pSVar2->fields;
      }
      KGLJICLJHEL = *pSVar3;
      if ((__this_00->fields)._size < 2) {
        pSVar3 = (System_String_Fields *)&StringLiteral_1/*""*/;
      }
      else {
        __this = (QuestCondition_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,1,
                            Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                           );
        if ((__this == (QuestCondition_o *)0x0) ||
           (pSVar2 = (__this->fields).HGLHAHMIGDB, pSVar2 == (System_String_o *)0x0))
        goto LAB_0364dcc8;
        pSVar3 = &pSVar2->fields;
      }
      CJNHFNHJHPE = *pSVar3;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      __this = (QuestCondition_o *)0x0;
      if (__this_01 != (NLPJLHOEAOE_o *)0x0) {
        __this_02 = NLPJLHOEAOE__POGAPHAJGBC
                              (__this_01,(System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
        if (__this_02 == (FightList_o *)0x0) {
          pSVar2 = System_String__Concat
                             (StringLiteral_10704/*"QuestCondition.fightCurrencyCostFunction - cant fight fight: "*/,(System_String_o *)KGLJICLJHEL,(MethodInfo *)0x0);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
          }
        }
        else {
          bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((System_String_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
          if (!bVar1) {
            local_24 = FightList__FCKMLBIPLDK
                                 (__this_02,(System_String_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
            __this = (QuestCondition_o *)System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
            if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
              (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)__this;
              thunk_FUN_01c20e04(&JDGILABGBGH->fields,__this);
              return;
            }
            goto LAB_0364dcc8;
          }
          pSVar2 = StringLiteral_10705/*"QuestCondition.fightCurrencyCostFunction - currencyName is empty"*/;
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pSVar2 = StringLiteral_10705/*"QuestCondition.fightCurrencyCostFunction - currencyName is empty"*/;
          }
        }
        UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0364dcc8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void IHMGPDIJFCI(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x354DCCC]
// QuestCondition$$IHMGPDIJFCI @ RVA 0x354DCCC

void QuestCondition__IHMGPDIJFCI
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  int32_t iVar3;
  PlayerData_o *__this_00;
  EOLFEKNCPLM_o *pEVar4;
  OBCMNBDBNFO_o *pOVar5;
  System_String_o *pSVar6;
  float __this_01;
  double dVar7;
  float fVar8;
  undefined4 local_40;
  undefined4 uStack_3c;
  Il2CppMethodPointer local_38;
  
  if ((DAT_04568b32 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_10320/*"PlayerNameID"*/);
    FUN_01bab630(&StringLiteral_4918/*"CurrLeaderboardPlace"*/);
    FUN_01bab630(&StringLiteral_10825/*"RaidCount"*/);
    FUN_01bab630(&StringLiteral_10990/*"RaidWins"*/);
    FUN_01bab630(&StringLiteral_3268/*"AvgDamagePerRound"*/);
    FUN_01bab630(&StringLiteral_10319/*"PlayerName"*/);
    FUN_01bab630(&StringLiteral_14958/*"WinRate"*/);
    FUN_01bab630(&StringLiteral_5072/*"Dan"*/);
    DAT_04568b32 = 1;
  }
  _local_40 = (Il2CppMethodPointer)0x0;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 == (PlayerData_o *)0x0) {
    return;
  }
  pEVar4 = PlayerData__ELHLAJNJAKD(__this_00,(MethodInfo *)0x0);
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_0364e0b0;
  pSVar6 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(pSVar6,(MethodInfo *)0x0);
  if (uVar2 < 0x525430c9) {
    if (uVar2 < 0x44387d0c) {
      if (uVar2 != 0x3dda09d7) {
        if (uVar2 != 0x44387d0b) {
          return;
        }
        bVar1 = System_String__op_Equality(pSVar6,StringLiteral_14958/*"WinRate"*/,(MethodInfo *)0x0);
        if (pEVar4 == (EOLFEKNCPLM_o *)0x0) {
          return;
        }
        if (!bVar1) {
          return;
        }
        pOVar5 = (pEVar4->fields).PLJJCOHGICK;
        if (pOVar5 == (OBCMNBDBNFO_o *)0x0) goto LAB_0364e0b0;
        fVar8 = ((float)(pOVar5->fields).MGFICIOBKAI * 100.0) / (float)(pOVar5->fields).HHNJEEMAEIH;
        dVar7 = modf((double)fVar8,(double *)&stack0xffffffffffffffc8);
        if (0.0 <= fVar8) {
          if (dVar7 == 0.5) {
            fVar8 = 1.0;
            goto LAB_0364e068;
          }
          __this_01 = (float)(int)(fVar8 + 0.5);
        }
        else if (dVar7 == -0.5) {
          fVar8 = -1.0;
LAB_0364e068:
          __this_01 = (float)(double)local_38;
          if (((long)(double)local_38 & 1U) != 0) {
            __this_01 = (float)(double)local_38 + fVar8;
          }
        }
        else {
          __this_01 = (float)(int)(fVar8 + -0.5);
        }
        _local_40 = (Il2CppMethodPointer)CONCAT44(uStack_3c,__this_01);
        pSVar6 = System_Single__ToString(__this_01,(MethodInfo *)&stack0xffffffffffffffc0);
        goto joined_r0x0364debc;
      }
      bVar1 = System_String__op_Equality(pSVar6,StringLiteral_3268/*"AvgDamagePerRound"*/,(MethodInfo *)0x0);
      if (pEVar4 == (EOLFEKNCPLM_o *)0x0) {
        return;
      }
      if (!bVar1) {
        return;
      }
      pOVar5 = (pEVar4->fields).PLJJCOHGICK;
      if (pOVar5 == (OBCMNBDBNFO_o *)0x0) goto LAB_0364e0b0;
      iVar3 = (pOVar5->fields).JEAFOMDCLHD;
LAB_0364e018:
      _local_40 = (Il2CppMethodPointer)CONCAT44(iVar3,local_40);
    }
    else {
      if (uVar2 == 0x45b876a8) {
        bVar1 = System_String__op_Equality(pSVar6,StringLiteral_10825/*"RaidCount"*/,(MethodInfo *)0x0);
        if (pEVar4 == (EOLFEKNCPLM_o *)0x0) {
          return;
        }
        if (!bVar1) {
          return;
        }
        pOVar5 = (pEVar4->fields).PLJJCOHGICK;
        if (pOVar5 == (OBCMNBDBNFO_o *)0x0) goto LAB_0364e0b0;
        iVar3 = (pOVar5->fields).HHNJEEMAEIH;
        goto LAB_0364e018;
      }
      if (uVar2 != 0x525430c8) {
        return;
      }
      bVar1 = System_String__op_Equality(pSVar6,StringLiteral_5072/*"Dan"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      iVar3 = PlayerData__IGIHHCEONEM(__this_00,(MethodInfo *)0x0);
      _local_40 = (Il2CppMethodPointer)CONCAT44(iVar3,local_40);
    }
    pSVar6 = System_Int32__ToString((int32_t)&stack0xffffffffffffffc4,(MethodInfo *)0x0);
  }
  else {
    if (0xcada1cce < uVar2) {
      if (uVar2 == 0xead208ea) {
        bVar1 = System_String__op_Equality(pSVar6,StringLiteral_10990/*"RaidWins"*/,(MethodInfo *)0x0);
        if (pEVar4 == (EOLFEKNCPLM_o *)0x0) {
          return;
        }
        if (!bVar1) {
          return;
        }
        pOVar5 = (pEVar4->fields).PLJJCOHGICK;
        if (pOVar5 == (OBCMNBDBNFO_o *)0x0) goto LAB_0364e0b0;
        iVar3 = (pOVar5->fields).MGFICIOBKAI;
      }
      else {
        if (uVar2 != 0xf0fdf9a7) {
          return;
        }
        bVar1 = System_String__op_Equality(pSVar6,StringLiteral_4918/*"CurrLeaderboardPlace"*/,(MethodInfo *)0x0);
        if (pEVar4 == (EOLFEKNCPLM_o *)0x0) {
          return;
        }
        if (!bVar1) {
          return;
        }
        iVar3 = (pEVar4->fields).IINFDIJOFIG;
      }
      goto LAB_0364e018;
    }
    if (uVar2 == 0x904e4983) {
      bVar1 = System_String__op_Equality(pSVar6,StringLiteral_10319/*"PlayerName"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pSVar6 = PlayerData__GKMAFGODLLG(__this_00,(MethodInfo *)0x0);
    }
    else {
      if (uVar2 != 0xcada1cce) {
        return;
      }
      bVar1 = System_String__op_Equality(pSVar6,StringLiteral_10320/*"PlayerNameID"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pSVar6 = PlayerData__GGHGAIBPPJO(__this_00,(MethodInfo *)0x0);
    }
  }
joined_r0x0364debc:
  if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
    (JDGILABGBGH->fields).HPACPFLKHPK = pSVar6;
    thunk_FUN_01c20e04(&JDGILABGBGH->fields,pSVar6);
    return;
  }
LAB_0364e0b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LNKNMAHDPDP(NILLKLHKLHG.GLEGDBCJEOA AJOBAPIPBJB, MMFIDKMDADC KDBIBINALOL)  [RVA 0x354E0B4]
// QuestCondition$$LNKNMAHDPDP @ RVA 0x354E0B4

void QuestCondition__LNKNMAHDPDP
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *AJOBAPIPBJB,
               MMFIDKMDADC_o *KDBIBINALOL,MethodInfo *method)

{
  int32_t OHLKNCPBCBL;
  int32_t BMPJIDHGCBN;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *__this_00;
  NILLKLHKLHG_DIPIFJPCFOE_o *__this_01;
  System_String_o *pSVar1;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  int32_t local_24;
  
  if ((DAT_04568b33 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HintSchemeUtility_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&Method_PCOEHCPGBBG_AICKIDLLIBK<MIBHAJBEMIK>__);
    __this = (QuestCondition_o *)FUN_01bab630(&StringLiteral_10675/*"QuestCondition.ControlHintIndexFunction: - unknown property: "{0}""*/);
    DAT_04568b33 = 1;
  }
  if (AJOBAPIPBJB != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    OHLKNCPBCBL = PCOEHCPGBBG__AICKIDLLIBK<Int32Enum>
                            ((AJOBAPIPBJB->fields).KCPPJGKAILM,-1,
                             Method_PCOEHCPGBBG_AICKIDLLIBK<MIBHAJBEMIK>__);
    if (OHLKNCPBCBL == -1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      __this = (QuestCondition_o *)0x0;
      if (args != (System_Object_array *)0x0) {
        pSVar1 = (AJOBAPIPBJB->fields).KCPPJGKAILM;
        if ((pSVar1 != (System_String_o *)0x0) &&
           (lVar2 = thunk_FUN_01bda71c(pSVar1,(((args->obj).klass)->_1).element_class), lVar2 == 0))
        {
          uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar3,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar1;
          thunk_FUN_01c20e04(args->m_Items,pSVar1);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_10675/*"QuestCondition.ControlHintIndexFunction: - unknown property: "{0}""*/,args,(MethodInfo *)0x0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
    else {
      __this_00 = (AJOBAPIPBJB->fields).EEFPBGNAFFI;
      __this = (QuestCondition_o *)0x0;
      if (__this_00 != (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0) {
        if ((__this_00->fields)._size == 0) {
          if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          local_24 = HintSchemeUtility__LOIDNFBMHNN(OHLKNCPBCBL,(MethodInfo *)0x0);
        }
        else {
          __this_01 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,0,
                                 Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                                );
          __this = (QuestCondition_o *)0x0;
          if (__this_01 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0364e2a4;
          pSVar1 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(__this_01,(MethodInfo *)0x0);
          BMPJIDHGCBN = PCOEHCPGBBG__JBGCINPPLAC(pSVar1,0,(MethodInfo *)0x0);
          if ((HintSchemeUtility_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(HintSchemeUtility_TypeInfo);
          }
          local_24 = HintSchemeUtility__MICKHLIJECC(OHLKNCPBCBL,BMPJIDHGCBN,(MethodInfo *)0x0);
        }
        __this = (QuestCondition_o *)System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
        if (KDBIBINALOL != (MMFIDKMDADC_o *)0x0) {
          (KDBIBINALOL->fields).HPACPFLKHPK = (System_String_o *)__this;
          thunk_FUN_01c20e04(&KDBIBINALOL->fields,__this);
          return;
        }
      }
    }
  }
LAB_0364e2a4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void OAJDAEINPJL(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x354E2B8]
// QuestCondition$$OAJDAEINPJL @ RVA 0x354E2B8

/* WARNING: Type propagation algorithm not settling */

void QuestCondition__OAJDAEINPJL
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  System_String_o **ppSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_array *pSVar4;
  IGFGDDANEPE_o *__this_00;
  Item_o *__this_01;
  int64_t iVar5;
  int64_t iVar6;
  System_Object_array *args;
  long lVar7;
  undefined8 uVar8;
  System_String_o **ppSVar9;
  int iVar10;
  QuestCondition_o *pLVar11;
  HOOAAGABMBL_o *pHVar12;
  long lStack_58;
  int32_t iStack_44;
  
  if ((DAT_04568b1e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10691/*"QuestCondition.PurchaseFunction - unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_10088/*"PaidItem"*/);
    FUN_01bab630(&StringLiteral_6262/*"Failure"*/);
    FUN_01bab630(&StringLiteral_13809/*"Timeout"*/);
    FUN_01bab630(&StringLiteral_14589/*"UpgradeLevel"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    __this = (QuestCondition_o *)FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568b1e = 1;
  }
  iStack_44 = 0;
  lStack_58 = 0;
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_0364a20c;
  pSVar3 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
  __this = (QuestCondition_o *)0x0;
  if (pSVar3 == (System_String_o *)0x0) goto LAB_0364a20c;
  pSVar4 = System_String__Split(pSVar3,0x7c,0,(MethodInfo *)0x0);
  __this = (QuestCondition_o *)0x0;
  if (pSVar4 == (System_String_array *)0x0) goto LAB_0364a20c;
  if (pSVar4->max_length == 0) {
    return;
  }
  iVar10 = (int)pSVar4->max_length;
  if (iVar10 == 0) {
LAB_0364a210:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
  ppSVar9 = pSVar4->m_Items + 1;
  if (iVar10 < 2) {
    ppSVar9 = (System_String_o **)&StringLiteral_1/*""*/;
  }
  pSVar3 = pSVar4->m_Items[0];
  pLVar11 = (QuestCondition_o *)*ppSVar9;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  __this_00 = NLPJLHOEAOE__JNFIBDBHNOA(pSVar3,(MethodInfo *)0x0);
  if (__this_00 == (IGFGDDANEPE_o *)0x0) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04563eaa == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04563eaa = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    __this = (QuestCondition_o *)0x0;
    if (__this_01 == (Item_o *)0x0) goto LAB_0364a20c;
    pHVar12 = Item__CKKIPBAIEMN(__this_01,pSVar3,(MethodInfo *)0x0);
  }
  else {
    pHVar12 = (__this_00->fields).PCBECBEFJOI;
  }
  pSVar3 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  bVar2 = System_String__op_Equality(pSVar3,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
  __this = (QuestCondition_o *)(ulong)bVar2;
  if (bVar2) {
    ppSVar9 = &(pHVar12->fields)._GMPAEDFIIHF_k__BackingField;
LAB_0364a024:
    ppSVar1 = (System_String_o **)&StringLiteral_1/*""*/;
    if (pHVar12 != (HOOAAGABMBL_o *)0x0) {
      ppSVar1 = ppSVar9;
    }
    if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) {
LAB_0364a20c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(__this);
    }
    __this = (QuestCondition_o *)*ppSVar1;
  }
  else {
    bVar2 = System_String__op_Equality(pSVar3,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    if (bVar2) {
      ppSVar9 = &(pHVar12->fields)._COIPKAKHDFP_k__BackingField;
      __this = (QuestCondition_o *)0x1;
      goto LAB_0364a024;
    }
    bVar2 = System_String__op_Equality(pSVar3,StringLiteral_14589/*"UpgradeLevel"*/,(MethodInfo *)0x0);
    if (bVar2) {
      if (__this_00 != (IGFGDDANEPE_o *)0x0) {
        iStack_44 = IGFGDDANEPE__LGIMDOAMCNG(__this_00,(MethodInfo *)0x0);
        __this = (QuestCondition_o *)System_Int32__ToString((int32_t)&iStack_44,(MethodInfo *)0x0);
        goto joined_r0x0364a09c;
      }
      __this = StringLiteral_1567/*"0"*/;
      if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) {
        __this = (QuestCondition_o *)0x1;
        goto LAB_0364a20c;
      }
    }
    else {
      bVar2 = System_String__op_Equality(pSVar3,StringLiteral_13809/*"Timeout"*/,(MethodInfo *)0x0);
      if (!bVar2) {
        bVar2 = System_String__op_Equality(pSVar3,StringLiteral_6262/*"Failure"*/,(MethodInfo *)0x0);
        if (bVar2) {
          __this = (QuestCondition_o *)0x1;
          if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364a20c;
          (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)pLVar11;
          goto LAB_0364a03c;
        }
        bVar2 = System_String__op_Equality(pSVar3,StringLiteral_10088/*"PaidItem"*/,(MethodInfo *)0x0);
        __this = (QuestCondition_o *)(ulong)bVar2;
        if (!bVar2) {
          args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
          __this = (QuestCondition_o *)0x0;
          if (args != (System_Object_array *)0x0) {
            pSVar3 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
            if ((pSVar3 != (System_String_o *)0x0) &&
               (lVar7 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class),
               lVar7 == 0)) {
              uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar8,0);
            }
            if ((int)args->max_length != 0) {
              args->m_Items[0] = (Il2CppObject *)pSVar3;
              thunk_FUN_01c20e04(args->m_Items,pSVar3);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogErrorFormat(StringLiteral_10691/*"QuestCondition.PurchaseFunction - unknown property: "{0}""*/,args,(MethodInfo *)0x0);
              return;
            }
            goto LAB_0364a210;
          }
          goto LAB_0364a20c;
        }
        ppSVar9 = &(pHVar12->fields)._CGBHMINLKLM_k__BackingField;
        goto LAB_0364a024;
      }
      if (__this_00 == (IGFGDDANEPE_o *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = IGFGDDANEPE__OMMIKNKEKJN(__this_00,(MethodInfo *)0x0);
      }
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar6 = GameUtils__EAHFGGKENCK((MethodInfo *)0x0);
      lStack_58 = iVar5 - iVar6;
      if (lStack_58 == 0 || iVar5 < iVar6) {
        lStack_58 = 0;
      }
      __this = (QuestCondition_o *)System_Int64__ToString((int64_t)&lStack_58,(MethodInfo *)0x0);
joined_r0x0364a09c:
      if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364a20c;
    }
  }
  (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)__this;
  pLVar11 = __this;
LAB_0364a03c:
  thunk_FUN_01c20e04(&JDGILABGBGH->fields,pLVar11);
  return;
}


// ===== private bool LMBKEEOPFKD(EILGGBOIMGE.FMFDKGKCBBG MDNDPPNLDCP, EILGGBOIMGE.FMFDKGKCBBG OKFMDMKDMCP)  [RVA 0x354E2BC]
// QuestCondition$$LMBKEEOPFKD @ RVA 0x354E2BC

bool QuestCondition__LMBKEEOPFKD
               (QuestCondition_o *__this,EILGGBOIMGE_FMFDKGKCBBG_o *MDNDPPNLDCP,
               EILGGBOIMGE_FMFDKGKCBBG_o *OKFMDMKDMCP,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  QuestCondition_o *__this_00;
  System_String_array *__this_01;
  MethodInfo *method_00;
  long lVar3;
  ulong uVar4;
  System_String_array *local_40;
  System_String_array *local_38;
  
  __this_00 = __this;
  method_00 = (MethodInfo *)OKFMDMKDMCP;
  if ((DAT_04568b34 & 1) == 0) {
    __this_00 = (QuestCondition_o *)FUN_01bab630(&Method_Util_JGJFNOOGAEP<string[]>__);
    DAT_04568b34 = 1;
  }
  __this_01 = QuestCondition__GGHIHLMENAC(__this_00,MDNDPPNLDCP,method_00);
  local_38 = __this_01;
  local_40 = QuestCondition__GGHIHLMENAC((QuestCondition_o *)__this_01,OKFMDMKDMCP,method_00);
  if ((__this_01 != (System_String_array *)0x0) && (local_40 != (System_String_array *)0x0)) {
    if ((int)local_40->max_length < (int)__this_01->max_length) {
      Util__JGJFNOOGAEP<object>
                ((Il2CppObject **)&local_38,(Il2CppObject **)&local_40,
                 Method_Util_JGJFNOOGAEP<string[]>__);
      __this_01 = local_38;
      if (local_38 == (System_String_array *)0x0) goto LAB_0364e39c;
    }
    lVar3 = 4;
    do {
      uVar1 = (uint)__this_01->max_length;
      uVar4 = lVar3 - 4;
      if ((long)(int)uVar1 <= (long)uVar4) {
LAB_0364e3a0:
        return (long)(int)uVar1 <= (long)uVar4;
      }
      if (uVar1 <= uVar4) {
LAB_0364e3c0:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      if (local_40 == (System_String_array *)0x0) break;
      if ((uint)local_40->max_length <= uVar4) goto LAB_0364e3c0;
      bVar2 = QuestCondition__NJLKHFHAAHH
                        (__this,__this_01->m_Items[lVar3 + -4],local_40->m_Items[lVar3 + -4],method)
      ;
      if (!bVar2) goto LAB_0364e3a0;
      lVar3 = lVar3 + 1;
      __this_01 = local_38;
    } while (local_38 != (System_String_array *)0x0);
  }
LAB_0364e39c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x354D058]
// QuestCondition$$.ctor @ RVA 0x354D058

void QuestCondition___ctor(QuestCondition_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_LEGDPJHPEOB__o *__this_00;
  System_Collections_Generic_List_LEGDPJHPEOB__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568b35 & 1) == 0) {
    FUN_01bab630(&EILGGBOIMGE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<QuestCondition>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<QuestCondition>_TypeInfo);
    DAT_04568b35 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_LEGDPJHPEOB__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<QuestCondition>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<QuestCondition>__ctor__);
  ppSVar1 = &(__this->fields).AHEFOIOKDOK;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  if ((EILGGBOIMGE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  EILGGBOIMGE___ctor((EILGGBOIMGE_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private bool NHEMICDOEJI(int EDLBBIAPNBL, int FCFEHLOCHAJ)  [RVA 0x354E3C4]
// QuestCondition$$NHEMICDOEJI @ RVA 0x354E3C4

bool QuestCondition__NHEMICDOEJI
               (QuestCondition_o *__this,int32_t EDLBBIAPNBL,int32_t FCFEHLOCHAJ,MethodInfo *method)

{
  switch((__this->fields).ACCIHBHMFPN) {
  case 1:
    return EDLBBIAPNBL == FCFEHLOCHAJ;
  case 2:
    return FCFEHLOCHAJ < EDLBBIAPNBL;
  case 3:
    return FCFEHLOCHAJ <= EDLBBIAPNBL;
  case 4:
    return EDLBBIAPNBL < FCFEHLOCHAJ;
  case 5:
    return EDLBBIAPNBL <= FCFEHLOCHAJ;
  default:
    return false;
  }
}


// ===== private void BALPKELOBFL(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC CBIGMIHGDFO)  [RVA 0x354E430]
// QuestCondition$$BALPKELOBFL @ RVA 0x354E430

void QuestCondition__BALPKELOBFL
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *CBIGMIHGDFO,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  System_String_o *JJDMDJPNINC;
  System_Object_array *args;
  long lVar3;
  undefined8 uVar4;
  System_String_o *a;
  
  if ((DAT_04568b36 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_13973/*"TutStepComplete"*/);
    FUN_01bab630(&StringLiteral_10329/*"PlayerRole"*/);
    FUN_01bab630(&StringLiteral_10707/*"QuestCondition.raidClanFunction unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    __this = (QuestCondition_o *)FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568b36 = 1;
  }
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    a = (ACCIJLGMHOO->fields).KCPPJGKAILM;
    JJDMDJPNINC = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(a,StringLiteral_13973/*"TutStepComplete"*/,(MethodInfo *)0x0);
    if (bVar2) {
      bVar2 = KFCFGKEHPNK__ECJLKNEAMKH(JJDMDJPNINC,(MethodInfo *)0x0);
      __this = (QuestCondition_o *)(ulong)bVar2;
      puVar1 = &StringLiteral_1606/*"1"*/;
      if (!bVar2) {
        puVar1 = &StringLiteral_1567/*"0"*/;
      }
      if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) {
        __this = (QuestCondition_o *)*puVar1;
LAB_0364e53c:
        (CBIGMIHGDFO->fields).HPACPFLKHPK = (System_String_o *)__this;
        thunk_FUN_01c20e04(&CBIGMIHGDFO->fields);
        return;
      }
    }
    else {
      bVar2 = System_String__op_Equality(a,StringLiteral_10329/*"PlayerRole"*/,(MethodInfo *)0x0);
      if (bVar2) {
        __this = (QuestCondition_o *)KFCFGKEHPNK__DJDNNHMCGAE((MethodInfo *)0x0);
        if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) goto LAB_0364e53c;
      }
      else {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        __this = (QuestCondition_o *)0x0;
        if (args != (System_Object_array *)0x0) {
          if ((a != (System_String_o *)0x0) &&
             (lVar3 = thunk_FUN_01bda71c(a,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
            uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar4,0);
          }
          if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          args->m_Items[0] = (Il2CppObject *)a;
          thunk_FUN_01c20e04(args->m_Items,a);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_10707/*"QuestCondition.raidClanFunction unknown property: "{0}""*/,args,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void MJBFPGIKBKC(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x354E5F0]
// QuestCondition$$MJBFPGIKBKC @ RVA 0x354E5F0

void QuestCondition__MJBFPGIKBKC
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  int32_t iVar3;
  int iVar4;
  MAHMMAJGPLN_o *__this_00;
  Il2CppObject *pIVar5;
  int64_t *__this_01;
  System_Object_array *args;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  System_String_o *NJEIIGAGMCL;
  System_String_o *pSVar11;
  KMBNFNCDDBP_o *pKVar12;
  System_Enum_o local_68;
  int32_t local_58;
  float local_4c;
  int64_t local_48;
  undefined8 local_38;
  
  if ((DAT_04568b37 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&HMCJKEJGGCB_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&LLKDCCJMFLE_TypeInfo);
    FUN_01bab630(&MDKJJDGLPKO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_6654/*"GMTOffset"*/);
    FUN_01bab630(&StringLiteral_14612/*"UseAbsoluteButtonsLayout"*/);
    FUN_01bab630(&StringLiteral_8320/*"Language"*/);
    FUN_01bab630(&StringLiteral_7950/*"IsDebug"*/);
    FUN_01bab630(&StringLiteral_9989/*"Os"*/);
    FUN_01bab630(&StringLiteral_5344/*"DeviceType"*/);
    FUN_01bab630(&StringLiteral_10997/*"Ram"*/);
    FUN_01bab630(&StringLiteral_14620/*"UseRelativeButtonsLayout"*/);
    FUN_01bab630(&StringLiteral_9279/*"MyGamezF2P"*/);
    FUN_01bab630(&StringLiteral_9990/*"OsName"*/);
    FUN_01bab630(&StringLiteral_6194/*"FacebookLoginSupport"*/);
    FUN_01bab630(&StringLiteral_2779/*"AdvertisingSupport"*/);
    FUN_01bab630(&StringLiteral_14645/*"UserObserved"*/);
    FUN_01bab630(&StringLiteral_5636/*"Editor"*/);
    FUN_01bab630(&StringLiteral_7149/*"HuaweiF2P"*/);
    FUN_01bab630(&StringLiteral_12803/*"Tablet"*/);
    FUN_01bab630(&StringLiteral_13776/*"Time"*/);
    FUN_01bab630(&StringLiteral_5413/*"DisplayHeight"*/);
    FUN_01bab630(&StringLiteral_6712/*"GamingServiceName"*/);
    FUN_01bab630(&StringLiteral_2956/*"AndroidAPILevel"*/);
    FUN_01bab630(&StringLiteral_10255/*"Phone"*/);
    FUN_01bab630(&StringLiteral_10086/*"Paid"*/);
    FUN_01bab630(&StringLiteral_6586/*"FramesCount"*/);
    FUN_01bab630(&StringLiteral_11317/*"ResolutionGUI"*/);
    FUN_01bab630(&StringLiteral_11318/*"ResolutionLocation"*/);
    FUN_01bab630(&StringLiteral_2996/*"AnyF2P"*/);
    FUN_01bab630(&StringLiteral_4948/*"CurrentPlatformName"*/);
    FUN_01bab630(&StringLiteral_6142/*"F2P"*/);
    FUN_01bab630(&StringLiteral_10700/*"QuestCondition.SysInfoFunction - unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_8698/*"LowGraphicsSupport"*/);
    FUN_01bab630(&StringLiteral_9991/*"OsVersion"*/);
    FUN_01bab630(&StringLiteral_11683/*"SamsungF2P"*/);
    FUN_01bab630(&StringLiteral_6708/*"GamingServiceAlias"*/);
    FUN_01bab630(&StringLiteral_4592/*"Connection"*/);
    FUN_01bab630(&StringLiteral_7293/*"Id"*/);
    FUN_01bab630(&StringLiteral_5343/*"DeviceTotalMem"*/);
    FUN_01bab630(&StringLiteral_4338/*"ChinaF2P"*/);
    FUN_01bab630(&StringLiteral_6709/*"GamingServiceHasAccount"*/);
    FUN_01bab630(&StringLiteral_10630/*"QualityCondition"*/);
    FUN_01bab630(&StringLiteral_11034/*"RatingUrl"*/);
    FUN_01bab630(&StringLiteral_8061/*"IsbnF2P"*/);
    FUN_01bab630(&StringLiteral_9284/*"NBO"*/);
    FUN_01bab630(&StringLiteral_12544/*"Switch"*/);
    FUN_01bab630(&StringLiteral_6710/*"GamingServiceLogin"*/);
    FUN_01bab630(&StringLiteral_5416/*"DisplayWidth"*/);
    FUN_01bab630(&StringLiteral_2997/*"AnyPaid"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_4842/*"CpuCount"*/);
    FUN_01bab630(&StringLiteral_10995/*"RaidsSupport"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    FUN_01bab630(&StringLiteral_12400/*"Steam"*/);
    DAT_04568b37 = 1;
  }
  local_38 = 0;
  local_48 = 0;
  local_4c = 0.0;
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045611dc == '\0') {
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    DAT_045611dc = '\x01';
  }
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_0364f7c0;
  pSVar11 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  pKVar12 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(pSVar11,(MethodInfo *)0x0);
  if (uVar2 < 0x8120edda) {
    iVar4 = (int)pKVar12;
    if (uVar2 < 0x3b86ff60) {
      if (uVar2 < 0xe60b7a1) {
        if (uVar2 < 0x5c94020) {
          if (uVar2 == 0x4a66623) {
            bVar1 = System_String__op_Equality(pSVar11,StringLiteral_10630/*"QualityCondition"*/,(MethodInfo *)0x0);
            if (bVar1) {
              if ((LLKDCCJMFLE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pSVar11 = LLKDCCJMFLE__IDCJKHFCJKM((MethodInfo *)0x0);
joined_r0x0364f5fc:
              if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) goto LAB_0364f718;
              goto LAB_0364f7c0;
            }
          }
          else if ((uVar2 == 0x5c9401f) &&
                  (bVar1 = System_String__op_Equality(pSVar11,StringLiteral_2997/*"AnyPaid"*/,(MethodInfo *)0x0),
                  bVar1)) {
            iVar3 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
            bVar1 = GNAFJMPJNKI__GDIGIFHOPAK(iVar3,(MethodInfo *)0x0);
            goto LAB_0364f350;
          }
        }
        else if (uVar2 == 0x9ea4ff9) {
          bVar1 = System_String__op_Equality(pSVar11,StringLiteral_4592/*"Connection"*/,(MethodInfo *)0x0);
          if (bVar1) {
            bVar1 = IEICNBBBNEJ__EHLKEFJNKPA((MethodInfo *)0x0);
            goto LAB_0364f350;
          }
        }
        else {
          if (uVar2 == 0xe2ec313) {
            puVar9 = &StringLiteral_14620/*"UseRelativeButtonsLayout"*/;
            goto LAB_0364f3b0;
          }
          if ((uVar2 == 0xe60b7a0) &&
             (bVar1 = System_String__op_Equality(pSVar11,StringLiteral_5343/*"DeviceTotalMem"*/,(MethodInfo *)0x0),
             bVar1)) {
            if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (DAT_045611dc == '\0') {
              FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
              DAT_045611dc = '\x01';
            }
            if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pKVar12 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
            if (pKVar12 == (KMBNFNCDDBP_o *)0x0) goto LAB_0364f7c0;
            lVar8 = (pKVar12->fields).OPDGKICDOKN;
            lVar6 = lVar8 + 0x3ff;
            if (-1 < lVar8) {
              lVar6 = lVar8;
            }
            local_4c = (float)(lVar6 >> 10);
            pSVar11 = System_Single__ToString(local_4c,(MethodInfo *)&local_4c);
            goto joined_r0x0364f5fc;
          }
        }
      }
      else if (uVar2 < 0x29592e3f) {
        if (uVar2 == 0x125b89b2) {
          bVar1 = System_String__op_Equality(pSVar11,StringLiteral_5413/*"DisplayHeight"*/,(MethodInfo *)0x0);
          if (bVar1) {
            if (pKVar12 == (KMBNFNCDDBP_o *)0x0) goto LAB_0364f7c0;
            iVar4 = iVar4 + 100;
            goto LAB_0364f684;
          }
        }
        else if (uVar2 == 0x1f62d9d0) {
          bVar1 = System_String__op_Equality(pSVar11,StringLiteral_6710/*"GamingServiceLogin"*/,(MethodInfo *)0x0);
          if (bVar1) {
            bVar1 = IMAPABEJECG__HCDIBNJMKLH((MethodInfo *)0x0);
            goto LAB_0364f350;
          }
        }
        else if ((uVar2 == 0x29592e3e) &&
                (bVar1 = System_String__op_Equality(pSVar11,StringLiteral_14645/*"UserObserved"*/,(MethodInfo *)0x0),
                bVar1)) {
          __this_00 = MAHMMAJGPLN__AIHNLLGNBLC((MethodInfo *)0x0);
          if (__this_00 == (MAHMMAJGPLN_o *)0x0) goto LAB_0364f7c0;
          bVar1 = ILFBPCOFKDN__BPIJNBLKBLK((ILFBPCOFKDN_o *)__this_00,(MethodInfo *)0x0);
LAB_0364f350:
          puVar9 = &StringLiteral_1606/*"1"*/;
          puVar10 = &StringLiteral_1567/*"0"*/;
LAB_0364f360:
          if (bVar1 == false) {
            puVar9 = puVar10;
          }
joined_r0x0364f710:
          if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364f7c0;
          goto LAB_0364f714;
        }
      }
      else if (uVar2 == 0x30466030) {
        bVar1 = System_String__op_Equality(pSVar11,StringLiteral_7149/*"HuaweiF2P"*/,(MethodInfo *)0x0);
        if (bVar1) {
          iVar3 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
          bVar1 = iVar3 == 5;
          goto LAB_0364f70c;
        }
      }
      else if (uVar2 == 0x36e8b900) {
        bVar1 = System_String__op_Equality(pSVar11,StringLiteral_7293/*"Id"*/,(MethodInfo *)0x0);
        if (bVar1) {
          if ((pKVar12 != (KMBNFNCDDBP_o *)0x0) && (JDGILABGBGH != (MMFIDKMDADC_o *)0x0)) {
            pSVar11 = (pKVar12->fields).IGLHCNLNIPK;
            goto LAB_0364f718;
          }
          goto LAB_0364f7c0;
        }
      }
      else if ((uVar2 == 0x3b86ff5f) &&
              (bVar1 = System_String__op_Equality(pSVar11,StringLiteral_8061/*"IsbnF2P"*/,(MethodInfo *)0x0),
              bVar1)) {
        iVar3 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
        bVar1 = iVar3 == 6;
        goto LAB_0364f70c;
      }
    }
    else if (uVar2 < 0x5dcb927b) {
      if (uVar2 < 0x4968bf99) {
        if (uVar2 != 0x3d5d4b7a) {
          if (uVar2 == 0x4900ae5c) {
            puVar9 = &StringLiteral_14612/*"UseAbsoluteButtonsLayout"*/;
          }
          else {
            if (uVar2 != 0x4968bf98) goto LAB_0364f728;
            puVar9 = &StringLiteral_5636/*"Editor"*/;
          }
          goto LAB_0364f384;
        }
        bVar1 = System_String__op_Equality(pSVar11,StringLiteral_11317/*"ResolutionGUI"*/,(MethodInfo *)0x0);
        if (bVar1) {
          if (pKVar12 == (KMBNFNCDDBP_o *)0x0) goto LAB_0364f7c0;
          iVar3 = (pKVar12->fields).OLLNCDKABBG;
LAB_0364f12c:
          if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar11 = EOAOCPLIKOI__CGOHCNGCGFN(iVar3,(MethodInfo *)0x0);
          goto joined_r0x0364f5fc;
        }
      }
      else if (uVar2 == 0x55d54241) {
        bVar1 = System_String__op_Equality(pSVar11,StringLiteral_11034/*"RatingUrl"*/,(MethodInfo *)0x0);
        if (bVar1) {
          if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pIVar5 = IFAMAAGNCBJ__GPBMELHDADN<object>
                             (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
          if (pIVar5 != (Il2CppObject *)0x0) {
            pSVar11 = Core_Configs_Models_BuildSettingsExtension__GetRateUrl
                                (pIVar5[9].monitor,(MethodInfo *)0x0);
            NJEIIGAGMCL = string_TypeInfo->static_fields->Empty;
            if ((MDKJJDGLPKO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(MDKJJDGLPKO_TypeInfo);
            }
            pSVar11 = MDKJJDGLPKO__AKDFFHMBJID
                                (pSVar11,NJEIIGAGMCL,(int32_t *)((long)&local_38 + 4),
                                 (MethodInfo *)0x0);
            if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
              (JDGILABGBGH->fields).HPACPFLKHPK = pSVar11;
              thunk_FUN_01c20e04(&JDGILABGBGH->fields,pSVar11);
              (JDGILABGBGH->fields).AOOEHPBLBGM = local_38._4_4_ + (JDGILABGBGH->fields).AOOEHPBLBGM
              ;
              return;
            }
          }
          goto LAB_0364f7c0;
        }
      }
      else if (uVar2 == 0x5682e828) {
        bVar1 = System_String__op_Equality(pSVar11,StringLiteral_6712/*"GamingServiceName"*/,(MethodInfo *)0x0);
        if (bVar1) {
          pSVar11 = IMAPABEJECG__KCHJCGEMCGE((MethodInfo *)0x0);
          goto joined_r0x0364f5fc;
        }
      }
      else if ((uVar2 == 0x5dcb927a) &&
              (bVar1 = System_String__op_Equality(pSVar11,StringLiteral_2956/*"AndroidAPILevel"*/,(MethodInfo *)0x0),
              bVar1)) {
        if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        iVar3 = EOAOCPLIKOI__FLAEIMOEDKO((MethodInfo *)0x0);
LAB_0364f628:
        local_38._0_4_ = iVar3;
        iVar4 = (int)&local_38;
        goto LAB_0364f684;
      }
    }
    else if (uVar2 < 0x5ebdf216) {
      if (uVar2 == 0x5de47937) {
        bVar1 = System_String__op_Equality(pSVar11,StringLiteral_9989/*"Os"*/,(MethodInfo *)0x0);
        if (bVar1) {
          if ((pKVar12 == (KMBNFNCDDBP_o *)0x0) || (JDGILABGBGH == (MMFIDKMDADC_o *)0x0))
          goto LAB_0364f7c0;
          pSVar11 = (pKVar12->fields).PDAOKOMFJEA;
          goto LAB_0364f718;
        }
      }
      else if (uVar2 == 0x5e812830) {
        bVar1 = System_String__op_Equality(pSVar11,StringLiteral_4842/*"CpuCount"*/,(MethodInfo *)0x0);
        if (bVar1) {
          if (pKVar12 == (KMBNFNCDDBP_o *)0x0) goto LAB_0364f7c0;
          iVar4 = iVar4 + 0x68;
LAB_0364f684:
          pSVar11 = System_Int32__ToString(iVar4,(MethodInfo *)0x0);
          goto joined_r0x0364f5fc;
        }
      }
      else if (uVar2 == 0x5ebdf215) {
        puVar9 = &StringLiteral_6194/*"FacebookLoginSupport"*/;
        goto LAB_0364f384;
      }
    }
    else if (uVar2 == 0x8120edd9) {
      bVar1 = System_String__op_Equality(pSVar11,StringLiteral_9991/*"OsVersion"*/,(MethodInfo *)0x0);
      if (bVar1) {
        if ((pKVar12 != (KMBNFNCDDBP_o *)0x0) && (JDGILABGBGH != (MMFIDKMDADC_o *)0x0)) {
          pSVar11 = (pKVar12->fields).EPDMHECLIAN;
          goto LAB_0364f718;
        }
        goto LAB_0364f7c0;
      }
    }
    else if (uVar2 == 0x69cb438f) {
      bVar1 = System_String__op_Equality(pSVar11,StringLiteral_5416/*"DisplayWidth"*/,(MethodInfo *)0x0);
      if (bVar1) {
        if (pKVar12 == (KMBNFNCDDBP_o *)0x0) goto LAB_0364f7c0;
        iVar4 = iVar4 + 0x60;
        goto LAB_0364f684;
      }
    }
    else if ((uVar2 == 0x746cd448) &&
            (bVar1 = System_String__op_Equality(pSVar11,StringLiteral_6709/*"GamingServiceHasAccount"*/,(MethodInfo *)0x0), bVar1
            )) {
      bVar1 = IMAPABEJECG__FCBJDMNEPGB((MethodInfo *)0x0);
      goto LAB_0364f350;
    }
  }
  else if (uVar2 < 0xb6407b94) {
    if (uVar2 < 0x9a0ef004) {
      if (uVar2 < 0x9169f5d5) {
        if (uVar2 == 0x8b530ee8) {
          puVar9 = &StringLiteral_7950/*"IsDebug"*/;
LAB_0364f384:
          bVar1 = System_String__op_Equality(pSVar11,(System_String_o *)*puVar9,(MethodInfo *)0x0);
          if (bVar1) {
            if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364f7c0;
            puVar9 = &StringLiteral_1567/*"0"*/;
LAB_0364f714:
            pSVar11 = (System_String_o *)*puVar9;
LAB_0364f718:
            (JDGILABGBGH->fields).HPACPFLKHPK = pSVar11;
            thunk_FUN_01c20e04(&JDGILABGBGH->fields);
            return;
          }
        }
        else if ((uVar2 == 0x9169f5d4) &&
                (bVar1 = System_String__op_Equality(pSVar11,StringLiteral_9990/*"OsName"*/,(MethodInfo *)0x0),
                bVar1)) {
          if ((pKVar12 != (KMBNFNCDDBP_o *)0x0) && (JDGILABGBGH != (MMFIDKMDADC_o *)0x0)) {
            pSVar11 = (pKVar12->fields).FKCAHAMGGHM;
            goto LAB_0364f718;
          }
          goto LAB_0364f7c0;
        }
      }
      else {
        if (uVar2 == 0x92d249d2) {
          puVar9 = &StringLiteral_9284/*"NBO"*/;
          goto LAB_0364f384;
        }
        if (uVar2 == 0x96e1765c) {
          puVar9 = &StringLiteral_2779/*"AdvertisingSupport"*/;
LAB_0364f3b0:
          bVar1 = System_String__op_Equality(pSVar11,(System_String_o *)*puVar9,(MethodInfo *)0x0);
          if (bVar1) {
            if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364f7c0;
            puVar9 = &StringLiteral_1606/*"1"*/;
            goto LAB_0364f714;
          }
        }
        else if ((uVar2 == 0x9a0ef003) &&
                (bVar1 = System_String__op_Equality(pSVar11,StringLiteral_8698/*"LowGraphicsSupport"*/,(MethodInfo *)0x0),
                bVar1)) {
          iVar3 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
          bVar1 = GNAFJMPJNKI__NCOIGMBGENK(iVar3,(MethodInfo *)0x0);
          goto LAB_0364f350;
        }
      }
    }
    else if (uVar2 < 0xac89b404) {
      if (uVar2 == 0x9a658680) {
        bVar1 = System_String__op_Equality(pSVar11,StringLiteral_4338/*"ChinaF2P"*/,(MethodInfo *)0x0);
        if (bVar1) {
          iVar3 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
          bVar1 = iVar3 == 8;
          goto LAB_0364f70c;
        }
      }
      else if (uVar2 == 0x9a73db9b) {
        bVar1 = System_String__op_Equality(pSVar11,StringLiteral_8320/*"Language"*/,(MethodInfo *)0x0);
        if (bVar1) {
          if ((pKVar12 != (KMBNFNCDDBP_o *)0x0) && (JDGILABGBGH != (MMFIDKMDADC_o *)0x0)) {
            pSVar11 = (pKVar12->fields).AHAKHHLCPAB;
            goto LAB_0364f718;
          }
          goto LAB_0364f7c0;
        }
      }
      else if ((uVar2 == 0xac89b403) &&
              (bVar1 = System_String__op_Equality(pSVar11,StringLiteral_10997/*"Ram"*/,(MethodInfo *)0x0),
              bVar1)) {
        if (pKVar12 == (KMBNFNCDDBP_o *)0x0) goto LAB_0364f7c0;
        __this_01 = &(pKVar12->fields).OPDGKICDOKN;
        goto LAB_0364f5f4;
      }
    }
    else if (uVar2 == 0xaf691464) {
      bVar1 = System_String__op_Equality(pSVar11,StringLiteral_6654/*"GMTOffset"*/,(MethodInfo *)0x0);
      if (bVar1) {
        if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        local_48 = EOAOCPLIKOI__BAIKGKFPDGC((MethodInfo *)0x0);
LAB_0364f5f0:
        __this_01 = &local_48;
LAB_0364f5f4:
        pSVar11 = System_Int64__ToString((int64_t)__this_01,(MethodInfo *)0x0);
        goto joined_r0x0364f5fc;
      }
    }
    else if (uVar2 == 0xb2436d36) {
      bVar1 = System_String__op_Equality(pSVar11,StringLiteral_6586/*"FramesCount"*/,(MethodInfo *)0x0);
      if (bVar1) {
        iVar3 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
        goto LAB_0364f628;
      }
    }
    else if ((uVar2 == 0xb6407b93) &&
            (bVar1 = System_String__op_Equality(pSVar11,StringLiteral_12400/*"Steam"*/,(MethodInfo *)0x0),
            bVar1)) {
      iVar3 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
      bVar1 = iVar3 == 2;
      goto LAB_0364f70c;
    }
  }
  else if (uVar2 < 0xda2009f6) {
    if (uVar2 < 0xcb097f20) {
      if (uVar2 == 0xc206b628) {
        bVar1 = System_String__op_Equality(pSVar11,StringLiteral_11318/*"ResolutionLocation"*/,(MethodInfo *)0x0);
        if (bVar1) {
          if (pKVar12 == (KMBNFNCDDBP_o *)0x0) goto LAB_0364f7c0;
          iVar3 = (pKVar12->fields).OEHPOKNPOGE;
          goto LAB_0364f12c;
        }
      }
      else if (uVar2 == 0xc4291fdd) {
        bVar1 = System_String__op_Equality(pSVar11,StringLiteral_6708/*"GamingServiceAlias"*/,(MethodInfo *)0x0);
        if (bVar1) {
          pSVar11 = IMAPABEJECG__PLPICDIFHHG((MethodInfo *)0x0);
          goto joined_r0x0364f5fc;
        }
      }
      else if ((uVar2 == 0xcb097f1f) &&
              (bVar1 = System_String__op_Equality(pSVar11,StringLiteral_9279/*"MyGamezF2P"*/,(MethodInfo *)0x0),
              bVar1)) {
        iVar3 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
        bVar1 = iVar3 == 7;
        goto LAB_0364f70c;
      }
    }
    else if (uVar2 == 0xd0aa3b1a) {
      bVar1 = System_String__op_Equality(pSVar11,StringLiteral_4948/*"CurrentPlatformName"*/,(MethodInfo *)0x0);
      if (bVar1) {
        local_58 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
        local_68.klass = (System_Enum_c *)HMCJKEJGGCB_TypeInfo;
        local_68.monitor = (void *)0xffffffffffffffff;
        pSVar11 = System_Enum__ToString(&local_68,(MethodInfo *)0x0);
        goto joined_r0x0364f5fc;
      }
    }
    else if (uVar2 == 0xd9f3d991) {
      bVar1 = System_String__op_Equality(pSVar11,StringLiteral_12544/*"Switch"*/,(MethodInfo *)0x0);
      if (bVar1) {
        iVar3 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
        bVar1 = iVar3 == 3;
        goto LAB_0364f70c;
      }
    }
    else if (uVar2 == 0xda2009f5) {
      puVar9 = &StringLiteral_10995/*"RaidsSupport"*/;
      goto LAB_0364f3b0;
    }
  }
  else if (uVar2 < 0xede65f0c) {
    if (uVar2 == 0xdf2fadcb) {
      bVar1 = System_String__op_Equality(pSVar11,StringLiteral_2996/*"AnyF2P"*/,(MethodInfo *)0x0);
      if (bVar1) {
        iVar3 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
        bVar1 = GNAFJMPJNKI__KHIBBBCNMCJ(iVar3,(MethodInfo *)0x0);
        goto LAB_0364f350;
      }
    }
    else if (uVar2 == 0xdfe4e404) {
      bVar1 = System_String__op_Equality(pSVar11,StringLiteral_13776/*"Time"*/,(MethodInfo *)0x0);
      if (bVar1) {
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b87 == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b87 = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        local_48 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
        goto LAB_0364f5f0;
      }
    }
    else if ((uVar2 == 0xede65f0b) &&
            (bVar1 = System_String__op_Equality(pSVar11,StringLiteral_5344/*"DeviceType"*/,(MethodInfo *)0x0), bVar1
            )) {
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = EOAOCPLIKOI__PDGPEFAMKLM((MethodInfo *)0x0);
      puVar9 = &StringLiteral_12803/*"Tablet"*/;
      puVar10 = &StringLiteral_10255/*"Phone"*/;
      goto LAB_0364f360;
    }
  }
  else if (uVar2 == 0xeec44193) {
    bVar1 = System_String__op_Equality(pSVar11,StringLiteral_6142/*"F2P"*/,(MethodInfo *)0x0);
    if (bVar1) {
      iVar3 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
      bVar1 = iVar3 == 1;
      goto LAB_0364f70c;
    }
  }
  else if (uVar2 == 0xefc1ef01) {
    bVar1 = System_String__op_Equality(pSVar11,StringLiteral_11683/*"SamsungF2P"*/,(MethodInfo *)0x0);
    if (bVar1) {
      iVar3 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
      bVar1 = iVar3 == 4;
      goto LAB_0364f70c;
    }
  }
  else if ((uVar2 == 0xf5240e27) &&
          (bVar1 = System_String__op_Equality(pSVar11,StringLiteral_10086/*"Paid"*/,(MethodInfo *)0x0), bVar1)
          ) {
    iVar3 = GBCDMPDHIDJ__PAFKHAKEDFL((MethodInfo *)0x0);
    bVar1 = iVar3 == 0;
LAB_0364f70c:
    puVar9 = &StringLiteral_1606/*"1"*/;
    if (!bVar1) {
      puVar9 = &StringLiteral_1567/*"0"*/;
    }
    goto joined_r0x0364f710;
  }
LAB_0364f728:
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  if (args != (System_Object_array *)0x0) {
    pSVar11 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
    if ((pSVar11 != (System_String_o *)0x0) &&
       (lVar6 = thunk_FUN_01bda71c(pSVar11,(((args->obj).klass)->_1).element_class), lVar6 == 0)) {
      uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar7,0);
    }
    if ((int)args->max_length != 0) {
      args->m_Items[0] = (Il2CppObject *)pSVar11;
      thunk_FUN_01c20e04(args->m_Items,pSVar11);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_10700/*"QuestCondition.SysInfoFunction - unknown property: "{0}""*/,args,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_0364f7c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GABLJCLLGPG(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x354F7D4]
// QuestCondition$$GABLJCLLGPG @ RVA 0x354F7D4

void QuestCondition__GABLJCLLGPG
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  System_String_o *pSVar3;
  NLPJLHOEAOE_o *pNVar4;
  FightList_o *__this_00;
  DNELIPCHKLK_o *pDVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *__this_01;
  MGNDHCBAPEN_string__float__o *item;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *__this_02;
  System_Object_array *pSVar6;
  long lVar7;
  undefined8 uVar8;
  QuestCondition_o *pLVar9;
  undefined8 *puVar10;
  PAMEPBLOLPB_o *pPVar11;
  float OEBANKNLEMN;
  Il2CppMethodPointer local_50;
  Il2CppMethodPointer local_48;
  int32_t local_34;
  
  if ((DAT_04568b38 & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_IndexOf__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10384/*"Power"*/);
    FUN_01bab630(&StringLiteral_10806/*"RaidCharge"*/);
    FUN_01bab630(&StringLiteral_14870/*"Weapon"*/);
    FUN_01bab630(&StringLiteral_14953/*"WinCount"*/);
    FUN_01bab630(&StringLiteral_13797/*"TimeLeft"*/);
    FUN_01bab630(&StringLiteral_3535/*"Bonus"*/);
    FUN_01bab630(&StringLiteral_6310/*"Fight"*/);
    FUN_01bab630(&StringLiteral_5372/*"Difficulty"*/);
    FUN_01bab630(&StringLiteral_3076/*"Armor"*/);
    FUN_01bab630(&StringLiteral_8772/*"Magic"*/);
    FUN_01bab630(&StringLiteral_9186/*"Money"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_10809/*"RaidChargeLevel"*/);
    FUN_01bab630(&StringLiteral_15308/*"Zone"*/);
    FUN_01bab630(&StringLiteral_5793/*"EnoughCurrency"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_10680/*"QuestCondition.FightFunction - unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_8409/*"Level"*/);
    FUN_01bab630(&StringLiteral_4299/*"CheckCurrency"*/);
    FUN_01bab630(&StringLiteral_8677/*"LossCount"*/);
    FUN_01bab630(&StringLiteral_13824/*"Timestamp"*/);
    FUN_01bab630(&StringLiteral_3077/*"ArmorLevel"*/);
    FUN_01bab630(&StringLiteral_7067/*"HelmLevel"*/);
    FUN_01bab630(&StringLiteral_8780/*"MagicLevel"*/);
    FUN_01bab630(&StringLiteral_5304/*"Description"*/);
    FUN_01bab630(&StringLiteral_3426/*"Battle"*/);
    FUN_01bab630(&StringLiteral_14872/*"WeaponLevel"*/);
    FUN_01bab630(&StringLiteral_5576/*"ERROR: QuestCondition.FightFunction - cant fight fight: "{0}""*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    FUN_01bab630(&StringLiteral_11017/*"Ranged"*/);
    FUN_01bab630(&StringLiteral_11019/*"RangedLevel"*/);
    __this = (QuestCondition_o *)FUN_01bab630(&StringLiteral_7066/*"Helm"*/);
    DAT_04568b38 = 1;
  }
  local_34 = 0;
  local_50 = (Il2CppMethodPointer)0x0;
  local_48 = (Il2CppMethodPointer)0x0;
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_036503d0;
  pSVar3 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
  }
  pNVar4 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  __this = (QuestCondition_o *)0x0;
  if (pNVar4 == (NLPJLHOEAOE_o *)0x0) goto LAB_036503d0;
  __this_00 = NLPJLHOEAOE__POGAPHAJGBC(pNVar4,pSVar3,(MethodInfo *)0x0);
  if (__this_00 == (FightList_o *)0x0) {
    pSVar6 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    __this = (QuestCondition_o *)0x0;
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_036503d0;
    if ((pSVar3 != (System_String_o *)0x0) &&
       (lVar7 = thunk_FUN_01bda71c(pSVar3,(((pSVar6->obj).klass)->_1).element_class), lVar7 == 0))
    goto LAB_036503d8;
    if ((int)pSVar6->max_length != 0) {
      pSVar6->m_Items[0] = (Il2CppObject *)pSVar3;
      thunk_FUN_01c20e04(pSVar6->m_Items,pSVar3);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogFormat(StringLiteral_5576/*"ERROR: QuestCondition.FightFunction - cant fight fight: "{0}""*/,pSVar6,(MethodInfo *)0x0);
      return;
    }
    goto LAB_036503d4;
  }
  pSVar3 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  uVar2 = <PrivateImplementationDetails>__ComputeStringHash(pSVar3,(MethodInfo *)0x0);
  if (uVar2 < 0x86379168) {
    if (uVar2 < 0x621c885d) {
      if (uVar2 < 0x3719202b) {
        if (uVar2 == 0xfe07306) {
          bVar1 = System_String__op_Equality(pSVar3,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
          if (bVar1) {
            pDVar5 = (__this_00->fields).KOILJHHCIEE;
            __this = (QuestCondition_o *)0x0;
            if (pDVar5 == (DNELIPCHKLK_o *)0x0) goto LAB_036503d0;
            __this = (QuestCondition_o *)
                     (*(pDVar5->klass->vtable)._3_ToString.methodPtr)
                               (pDVar5,(pDVar5->klass->vtable)._3_ToString.method);
            pLVar9 = __this;
joined_r0x036500a4:
            if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
LAB_0365031c:
              (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)pLVar9;
              thunk_FUN_01c20e04(&JDGILABGBGH->fields);
              return;
            }
            goto LAB_036503d0;
          }
        }
        else if (uVar2 == 0x29ade1c3) {
          bVar1 = System_String__op_Equality(pSVar3,StringLiteral_13824/*"Timestamp"*/,(MethodInfo *)0x0);
          if (bVar1) {
            pPVar11 = (__this_00->fields).JPBIBBBMCCD;
            if (pPVar11 == (PAMEPBLOLPB_o *)0x0) goto LAB_036503c0;
            local_48 = (Il2CppMethodPointer)(pPVar11->fields).DKMPMFFECBK;
            __this = (QuestCondition_o *)
                     System_Int64__ToString((int64_t)&stack0xffffffffffffffb8,(MethodInfo *)0x0);
            pLVar9 = __this;
            goto joined_r0x036500a4;
          }
        }
        else if ((uVar2 == 0x3719202a) &&
                (bVar1 = System_String__op_Equality(pSVar3,StringLiteral_3077/*"ArmorLevel"*/,(MethodInfo *)0x0),
                bVar1)) {
          puVar10 = &StringLiteral_3076/*"Armor"*/;
          goto LAB_036502f4;
        }
      }
      else if (uVar2 < 0x4155597e) {
        if (uVar2 == 0x4132b520) {
                    /* try { // try from 036500e8 to 037500eb has its CatchHandler @ 036500f0 */
                    /* try { // try from 036500ec to 0375010f has its CatchHandler @ 0364ff44 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036500e8 with catch @ 036500f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036500bc with catch @ 036500f4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036500a8 with catch @ 036500f8
                        */
          bVar1 = System_String__op_Equality(pSVar3,StringLiteral_14953/*"WinCount"*/,(MethodInfo *)0x0);
          if (bVar1) {
            pPVar11 = (__this_00->fields).JPBIBBBMCCD;
            if (pPVar11 != (PAMEPBLOLPB_o *)0x0) {
              local_34 = (pPVar11->fields).AAECGBAMDEL;
              goto LAB_0365010c;
            }
            goto LAB_036503c0;
          }
        }
        else if ((uVar2 == 0x4155597d) &&
                (bVar1 = System_String__op_Equality(pSVar3,StringLiteral_8409/*"Level"*/,(MethodInfo *)0x0),
                bVar1)) {
          pPVar11 = (__this_00->fields).JPBIBBBMCCD;
          if (pPVar11 != (PAMEPBLOLPB_o *)0x0) {
            local_34 = (pPVar11->fields).GHPHFGBIPCI;
LAB_0365010c:
                    /* try { // try from 03650110 to 03750113 has its CatchHandler @ 0365013c */
                    /* try { // try from 03650114 to 0375014b has its CatchHandler @ 0364ff44 */
            __this = (QuestCondition_o *)
                     System_Int32__ToString((int32_t)&stack0xffffffffffffffcc,(MethodInfo *)0x0);
            pLVar9 = __this;
            goto joined_r0x036500a4;
          }
LAB_036503c0:
          __this = (QuestCondition_o *)0x1;
          pLVar9 = StringLiteral_1567/*"0"*/;
          goto joined_r0x036500a4;
        }
      }
      else if (uVar2 == 0x521c41c5) {
        bVar1 = System_String__op_Equality(pSVar3,StringLiteral_10809/*"RaidChargeLevel"*/,(MethodInfo *)0x0);
        if (bVar1) {
          puVar10 = &StringLiteral_10806/*"RaidCharge"*/;
          goto LAB_036502f4;
        }
      }
      else {
                    /* try { // try from 0364fe24 to 0374fe27 has its CatchHandler @ 0364fe50 */
                    /* try { // try from 0364fe28 to 0374fe5f has its CatchHandler @ 0364fbfc */
        if ((uVar2 == 0x621c885c) &&
           (bVar1 = System_String__op_Equality(pSVar3,StringLiteral_4299/*"CheckCurrency"*/,(MethodInfo *)0x0), bVar1))
        {
                    /* catch() { ... } // from try @ 0364fe24 with catch @ 0364fe50 */
          bVar1 = FightList__PHEKFMPOHBK(__this_00,(MethodInfo *)0x0);
          goto LAB_03650008;
        }
      }
    }
    else if (uVar2 < 0x756008e5) {
      if (uVar2 == 0x66de7a09) {
        bVar1 = System_String__op_Equality(pSVar3,StringLiteral_5304/*"Description"*/,(MethodInfo *)0x0);
        if (bVar1) {
          __this = (QuestCondition_o *)FightList__CJPIFPJMENP(__this_00,(MethodInfo *)0x0);
          pLVar9 = __this;
          goto joined_r0x036500a4;
        }
      }
      else {
        if (uVar2 == 0x725e221d) {
          puVar10 = &StringLiteral_10806/*"RaidCharge"*/;
          goto LAB_036501e0;
        }
                    /* try { // try from 0364fbfc to 0374fce3 has its CatchHandler @ 0364fbfc
                       catch() { ... } // from try @ 0364fbfc with catch @ 0364fbfc
                       catch() { ... } // from try @ 0364fd0c with catch @ 0364fbfc
                       catch() { ... } // from try @ 0364fe00 with catch @ 0364fbfc
                       catch() { ... } // from try @ 0364fe28 with catch @ 0364fbfc
                       catch() { ... } // from try @ 0364fe68 with catch @ 0364fbfc */
        if ((uVar2 == 0x756008e4) &&
           (bVar1 = System_String__op_Equality(pSVar3,StringLiteral_3535/*"Bonus"*/,(MethodInfo *)0x0), bVar1))
        {
          __this_01 = &(__this_00->fields).LGLKMANDGPD;
LAB_03650144:
          __this = (QuestCondition_o *)
                   CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ToString
                             (__this_01,(MethodInfo *)0x0);
                    /* try { // try from 0365014c to 03750153 has its CatchHandler @ 03650168 */
          pLVar9 = __this;
          goto joined_r0x036500a4;
        }
      }
    }
    else {
                    /* try { // try from 0364fd0c to 0374fdfb has its CatchHandler @ 0364fbfc */
      if (uVar2 < 0x84b84175) {
        if (uVar2 == 0x816b51f2) {
                    /* try { // try from 03650154 to 0375015f has its CatchHandler @ 0364ff44 */
                    /* try { // try from 03650160 to 03750167 has its CatchHandler @ 03650168 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0365014c with catch @ 03650168
                       catch(type#2 @ 00000000) { ... } // from try @ 03650160 with catch @ 03650168
                        */
          bVar1 = System_String__op_Equality(pSVar3,StringLiteral_8780/*"MagicLevel"*/,(MethodInfo *)0x0);
          if (bVar1) {
            puVar10 = &StringLiteral_8772/*"Magic"*/;
            goto LAB_036502f4;
          }
        }
        else if (uVar2 == 0x84b84174) {
          puVar10 = &StringLiteral_3076/*"Armor"*/;
          goto LAB_036501e0;
        }
      }
      else if (uVar2 == 0x8520a210) {
        bVar1 = System_String__op_Equality(pSVar3,StringLiteral_5372/*"Difficulty"*/,(MethodInfo *)0x0);
        if (bVar1) {
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          OEBANKNLEMN = GameUtils__PINMGKELLJI(__this_00,(MethodInfo *)0x0);
          if ((Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          item = Nekki_SF2_GUI_Map_DifficultyPanel__GetDifficultyEvaluationPair
                           (OEBANKNLEMN,(MethodInfo *)0x0);
          if (DAT_045669da == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo);
            DAT_045669da = '\x01';
          }
          if ((Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_02 = Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->static_fields->CAGNGFDHPGF;
          __this = (QuestCondition_o *)0x0;
          if (__this_02 == (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0)
          goto LAB_036503d0;
          local_34 = System_Collections_Generic_List<object>__IndexOf
                               ((System_Collections_Generic_List_object__o *)__this_02,
                                (Il2CppObject *)item,
                                Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_IndexOf__
                               );
LAB_03650308:
          __this = (QuestCondition_o *)
                   System_Int32__ToString((int32_t)&stack0xffffffffffffffcc,(MethodInfo *)0x0);
          pLVar9 = __this;
          goto joined_r0x036500a4;
        }
      }
      else if ((uVar2 == 0x86379167) &&
              (bVar1 = System_String__op_Equality(pSVar3,StringLiteral_15308/*"Zone"*/,(MethodInfo *)0x0),
              bVar1)) {
        pDVar5 = (__this_00->fields).KOILJHHCIEE;
        __this = (QuestCondition_o *)0x1;
        if ((pDVar5 != (DNELIPCHKLK_o *)0x0) && (JDGILABGBGH != (MMFIDKMDADC_o *)0x0)) {
          pLVar9 = (QuestCondition_o *)(pDVar5->fields).GDPFBDIJNHA;
          goto LAB_0365031c;
        }
        goto LAB_036503d0;
      }
    }
  }
  else if (uVar2 < 0xbd4b2046) {
    if (uVar2 < 0x9d9dc59a) {
      if (uVar2 == 0x87286d02) {
        bVar1 = System_String__op_Equality(pSVar3,StringLiteral_5793/*"EnoughCurrency"*/,(MethodInfo *)0x0);
        if (bVar1) {
          if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = GameUtils__EPLDDILOPAJ(__this_00,(MethodInfo *)0x0);
LAB_03650008:
          if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(System_Convert_TypeInfo);
          }
          local_50 = (Il2CppMethodPointer)System_Convert__ToDouble(bVar1,(MethodInfo *)0x0);
          __this = (QuestCondition_o *)
                   System_Double__ToString((double)local_50,(MethodInfo *)&stack0xffffffffffffffb0);
          pLVar9 = __this;
          goto joined_r0x036500a4;
        }
      }
      else if (uVar2 == 0x957fd957) {
        bVar1 = System_String__op_Equality(pSVar3,StringLiteral_3426/*"Battle"*/,(MethodInfo *)0x0);
        if (bVar1) {
          pDVar5 = (__this_00->fields).KOILJHHCIEE;
          __this = (QuestCondition_o *)0x1;
          if ((pDVar5 == (DNELIPCHKLK_o *)0x0) || (JDGILABGBGH == (MMFIDKMDADC_o *)0x0))
          goto LAB_036503d0;
          pLVar9 = (QuestCondition_o *)(pDVar5->fields).GJFJPLHCBKJ;
          goto LAB_0365031c;
        }
      }
      else if (uVar2 == 0x9d9dc599) {
        puVar10 = &StringLiteral_7066/*"Helm"*/;
        goto LAB_036501e0;
      }
    }
    else if (uVar2 < 0xb7c10362) {
                    /* try { // try from 0364fce4 to 0374fceb has its CatchHandler @ 0364fe0c */
      if (uVar2 == 0xb34b4bef) {
        bVar1 = System_String__op_Equality(pSVar3,StringLiteral_9186/*"Money"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03650110 with catch @ 0365013c */
        if (bVar1) {
          __this_01 = &(__this_00->fields).JHCMAOFOCPH;
          goto LAB_03650144;
        }
      }
      else if (uVar2 == 0xb7c10361) {
                    /* try { // try from 0364fd00 to 0374fd0b has its CatchHandler @ 0364fe08 */
        puVar10 = &StringLiteral_14870/*"Weapon"*/;
        goto LAB_036501e0;
      }
    }
    else {
                    /* try { // try from 0364fe60 to 0374fe67 has its CatchHandler @ 0364fe7c */
                    /* try { // try from 0364fe68 to 0374fe73 has its CatchHandler @ 0364fbfc */
      if (uVar2 == 0xb960112c) {
        puVar10 = &StringLiteral_8772/*"Magic"*/;
LAB_036501e0:
        bVar1 = System_String__op_Equality(pSVar3,(System_String_o *)*puVar10,(MethodInfo *)0x0);
        if (bVar1) {
          __this = (QuestCondition_o *)
                   FightList__HBJFJLBICEI(__this_00,(System_String_o *)*puVar10,(MethodInfo *)0x0)
          ;
          pLVar9 = __this;
          goto joined_r0x036500a4;
        }
      }
      else {
                    /* try { // try from 0364fe74 to 0374fe7b has its CatchHandler @ 0364fe7c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0364fe60 with catch @ 0364fe7c
                       catch(type#2 @ 00000000) { ... } // from try @ 0364fe74 with catch @ 0364fe7c
                        */
        if ((uVar2 == 0xbd4b2045) &&
           (bVar1 = System_String__op_Equality(pSVar3,StringLiteral_13797/*"TimeLeft"*/,(MethodInfo *)0x0), bVar1)
           ) {
          local_48 = (Il2CppMethodPointer)FightList__JGJMOEOBKGG(__this_00,(MethodInfo *)0x0);
          __this = (QuestCondition_o *)
                   System_Int64__ToString((int64_t)&stack0xffffffffffffffb8,(MethodInfo *)0x0);
          pLVar9 = __this;
          goto joined_r0x036500a4;
        }
      }
    }
  }
  else if (uVar2 < 0xcd18416a) {
    if (uVar2 < 0xc749a5e7) {
      if (uVar2 == 0xc62776f1) {
                    /* try { // try from 036500bc to 037500c7 has its CatchHandler @ 036500f4 */
                    /* try { // try from 036500c8 to 037500e7 has its CatchHandler @ 0364ff44 */
        bVar1 = System_String__op_Equality(pSVar3,StringLiteral_8677/*"LossCount"*/,(MethodInfo *)0x0);
        if (bVar1) {
          pPVar11 = (__this_00->fields).JPBIBBBMCCD;
          if (pPVar11 != (PAMEPBLOLPB_o *)0x0) {
            local_34 = (pPVar11->fields).KHIBOGMCNJA;
            goto LAB_0365010c;
          }
          goto LAB_036503c0;
        }
      }
      else if ((uVar2 == 0xc749a5e6) &&
              (bVar1 = System_String__op_Equality(pSVar3,StringLiteral_10384/*"Power"*/,(MethodInfo *)0x0),
              bVar1)) {
        local_34 = (__this_00->fields).GKCEBBGMBGA;
        goto LAB_03650308;
      }
    }
    else {
      if (uVar2 == 0xcb2ec7a2) {
        puVar10 = &StringLiteral_11017/*"Ranged"*/;
        goto LAB_036501e0;
      }
      if ((uVar2 == 0xcd184169) &&
         (bVar1 = System_String__op_Equality(pSVar3,StringLiteral_6310/*"Fight"*/,(MethodInfo *)0x0), bVar1)) {
                    /* try { // try from 0364fdfc to 0374fdff has its CatchHandler @ 0364fe04 */
        pDVar5 = (__this_00->fields).KOILJHHCIEE;
                    /* try { // try from 0364fe00 to 0374fe23 has its CatchHandler @ 0364fbfc */
        __this = (QuestCondition_o *)0x1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0364fdfc with catch @ 0364fe04
                        */
        if ((pDVar5 != (DNELIPCHKLK_o *)0x0) && (JDGILABGBGH != (MMFIDKMDADC_o *)0x0)) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0364fd00 with catch @ 0364fe08
                        */
          pLVar9 = (QuestCondition_o *)(pDVar5->fields).ANOPJEEGOLJ;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0364fce4 with catch @ 0364fe0c
                        */
          goto LAB_0365031c;
        }
        goto LAB_036503d0;
      }
    }
  }
  else if (uVar2 < 0xd155d06e) {
    if (uVar2 == 0xd09d0029) {
      bVar1 = System_String__op_Equality(pSVar3,StringLiteral_14872/*"WeaponLevel"*/,(MethodInfo *)0x0);
      if (bVar1) {
        puVar10 = &StringLiteral_14870/*"Weapon"*/;
        goto LAB_036502f4;
      }
    }
    else if ((uVar2 == 0xd155d06d) &&
            (bVar1 = System_String__op_Equality(pSVar3,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0), bVar1
            )) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar4 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
      __this = (QuestCondition_o *)0x0;
      if (pNVar4 == (NLPJLHOEAOE_o *)0x0) goto LAB_036503d0;
      __this = (QuestCondition_o *)
               NLPJLHOEAOE__PGDMIFLKLJE(pNVar4,(__this_00->fields).JDNKKGPNHPB,(MethodInfo *)0x0);
      pLVar9 = __this;
      goto joined_r0x036500a4;
    }
  }
  else if (uVar2 == 0xd20440f0) {
    bVar1 = System_String__op_Equality(pSVar3,StringLiteral_11019/*"RangedLevel"*/,(MethodInfo *)0x0);
    if (bVar1) {
      puVar10 = &StringLiteral_11017/*"Ranged"*/;
      goto LAB_036502f4;
    }
  }
  else {
                    /* try { // try from 0364ff44 to 037500a7 has its CatchHandler @ 0364ff44
                       catch() { ... } // from try @ 0364ff44 with catch @ 0364ff44
                       catch() { ... } // from try @ 036500c8 with catch @ 0364ff44
                       catch() { ... } // from try @ 036500ec with catch @ 0364ff44
                       catch() { ... } // from try @ 03650114 with catch @ 0364ff44
                       catch() { ... } // from try @ 03650154 with catch @ 0364ff44 */
    if ((uVar2 == 0xd7a49ad1) &&
       (bVar1 = System_String__op_Equality(pSVar3,StringLiteral_7067/*"HelmLevel"*/,(MethodInfo *)0x0), bVar1)) {
      puVar10 = &StringLiteral_7066/*"Helm"*/;
LAB_036502f4:
      local_34 = FightList__DGDKAHOOFNK(__this_00,(System_String_o *)*puVar10,(MethodInfo *)0x0);
      goto LAB_03650308;
    }
  }
  pSVar6 = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  __this = (QuestCondition_o *)0x0;
  if (pSVar6 != (System_Object_array *)0x0) {
    if ((pSVar3 != (System_String_o *)0x0) &&
       (lVar7 = thunk_FUN_01bda71c(pSVar3,(((pSVar6->obj).klass)->_1).element_class), lVar7 == 0)) {
LAB_036503d8:
      uVar8 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar8,0);
    }
    if ((int)pSVar6->max_length != 0) {
      pSVar6->m_Items[0] = (Il2CppObject *)pSVar3;
      thunk_FUN_01c20e04(pSVar6->m_Items,pSVar3);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogErrorFormat(StringLiteral_10680/*"QuestCondition.FightFunction - unknown property: "{0}""*/,pSVar6,(MethodInfo *)0x0);
      return;
    }
LAB_036503d4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
LAB_036503d0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private void BFCMIJJPDKK(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x35503E4]
// QuestCondition$$BFCMIJJPDKK @ RVA 0x35503E4

/* WARNING: Type propagation algorithm not settling */

void QuestCondition__BFCMIJJPDKK
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  RaidConfig_EFAJBOEHPLJ_o *pJVar3;
  PlayerData_o *__this_00;
  System_Object_array *args;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  MMFIDKMDADC_Fields *pMVar8;
  RaidConfig_NOPCEDPNNKO_o *__this_01;
  int32_t local_34;
  
  if ((DAT_04568b39 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<object>__);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_10698/*"QuestCondition.RaidPackInfoFunction: unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_4824/*"Count"*/);
    FUN_01bab630(&StringLiteral_10693/*"QuestCondition.RaidCurrenciesFunction: raidItems is null"*/);
    FUN_01bab630(&StringLiteral_7289/*"Icon"*/);
    FUN_01bab630(&StringLiteral_10692/*"QuestCondition.RaidCurrenciesFunction: Cant find currency with name :"*/);
    __this = (QuestCondition_o *)FUN_01bab630(&StringLiteral_7340/*"Image"*/);
    DAT_04568b39 = 1;
  }
  local_34 = 0;
  if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) {
LAB_03650788:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  pMVar8 = &JDGILABGBGH->fields;
  pMVar8->HPACPFLKHPK = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04(pMVar8);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (QuestCondition_o *)HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  lVar4 = Method_System_Array_Empty<object>__;
  if ((RaidConfig_o *)__this == (RaidConfig_o *)0x0) goto LAB_03650788;
  __this_01 = (((RaidConfig_o *)__this)->fields).OFMMMBIIDAE;
  if (__this_01 != (RaidConfig_NOPCEDPNNKO_o *)0x0) {
    if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_03650788;
    pSVar2 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
    pJVar3 = RaidConfig_NOPCEDPNNKO__BHJOLIJDBLO(__this_01,pSVar2,(MethodInfo *)0x0);
    if (pJVar3 == (RaidConfig_EFAJBOEHPLJ_o *)0x0) {
      pSVar2 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(StringLiteral_10692/*"QuestCondition.RaidCurrenciesFunction: Cant find currency with name :"*/,pSVar2,(MethodInfo *)0x0);
      lVar4 = Method_System_Array_Empty<object>__;
      lVar6 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
      if (lVar6 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<object>__);
        lVar6 = *(long *)(lVar4 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01b81620();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_01b81620();
      }
      args = (System_Object_array *)**(undefined8 **)(lVar4 + 0xb8);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      goto LAB_03650668;
    }
    pSVar2 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
    bVar1 = System_String__op_Equality(pSVar2,StringLiteral_7340/*"Image"*/,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (pJVar3->fields).super.KPDPJONADPJ;
    }
    else {
      bVar1 = System_String__op_Equality(pSVar2,StringLiteral_7289/*"Icon"*/,(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__op_Equality(pSVar2,StringLiteral_4824/*"Count"*/,(MethodInfo *)0x0);
        if (bVar1) {
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
          __this = (QuestCondition_o *)0x0;
          if (__this_00 == (PlayerData_o *)0x0) goto LAB_03650788;
          local_34 = PlayerData__OHDDLJKGLGA
                               (__this_00,(pJVar3->fields).super.JIJLBFGKNJK,(MethodInfo *)0x0);
          pSVar2 = System_Int32__ToString((int32_t)&local_34,(MethodInfo *)0x0);
          pMVar8->HPACPFLKHPK = pSVar2;
          goto LAB_03650698;
        }
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
        __this = (QuestCondition_o *)0x0;
        if (args == (System_Object_array *)0x0) goto LAB_03650788;
        pSVar2 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
        if ((pSVar2 != (System_String_o *)0x0) &&
           (lVar4 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar4 == 0))
        {
          uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar5,0);
        }
        if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        args->m_Items[0] = (Il2CppObject *)pSVar2;
        thunk_FUN_01c20e04(args->m_Items,pSVar2);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        puVar7 = &StringLiteral_10698/*"QuestCondition.RaidPackInfoFunction: unknown property: "{0}""*/;
        goto LAB_036505b4;
      }
      pSVar2 = (pJVar3->fields).super.APBICPEOMOM;
    }
    pMVar8->HPACPFLKHPK = pSVar2;
LAB_03650698:
    thunk_FUN_01c20e04(pMVar8,pSVar2);
    return;
  }
  lVar6 = *(long *)(Method_System_Array_Empty<object>__ + 0x38);
  if (lVar6 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<object>__);
    lVar6 = *(long *)(lVar4 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01b81620();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
  args = (System_Object_array *)**(long **)(lVar4 + 0xb8);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  puVar7 = &StringLiteral_10693/*"QuestCondition.RaidCurrenciesFunction: raidItems is null"*/;
LAB_036505b4:
  pSVar2 = (System_String_o *)*puVar7;
LAB_03650668:
  UnityEngine_Debug__LogErrorFormat(pSVar2,args,(MethodInfo *)0x0);
  return;
}


// ===== private bool NMANJLBNKBG(EILGGBOIMGE.FMFDKGKCBBG MDNDPPNLDCP, EILGGBOIMGE.FMFDKGKCBBG OKFMDMKDMCP)  [RVA 0x354D104]
// QuestCondition$$NMANJLBNKBG @ RVA 0x354D104

bool QuestCondition__NMANJLBNKBG
               (QuestCondition_o *__this,EILGGBOIMGE_FMFDKGKCBBG_o *MDNDPPNLDCP,
               EILGGBOIMGE_FMFDKGKCBBG_o *OKFMDMKDMCP,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  System_String_o *a;
  System_String_o *b;
  double dVar4;
  double dVar5;
  
  if ((__this->fields).LDNECFGEICA == 1) {
    bVar3 = QuestCondition__LMBKEEOPFKD(__this,MDNDPPNLDCP,OKFMDMKDMCP,method);
    return bVar3;
  }
  if (MDNDPPNLDCP != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
    bVar3 = EILGGBOIMGE_FMFDKGKCBBG__AADLDMNDIKG(MDNDPPNLDCP,(MethodInfo *)0x0);
    if (!bVar3) {
      if (OKFMDMKDMCP == (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) goto LAB_0364d274;
      bVar3 = EILGGBOIMGE_FMFDKGKCBBG__AADLDMNDIKG(OKFMDMKDMCP,(MethodInfo *)0x0);
      if (!bVar3) {
        a = (MDNDPPNLDCP->fields).DFJBJLBLBGB;
        b = (OKFMDMKDMCP->fields).DFJBJLBLBGB;
        goto LAB_0364d224;
      }
    }
    bVar3 = EILGGBOIMGE_FMFDKGKCBBG__AADLDMNDIKG(MDNDPPNLDCP,(MethodInfo *)0x0);
    if (bVar3) {
      if (OKFMDMKDMCP == (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) goto LAB_0364d274;
      bVar3 = EILGGBOIMGE_FMFDKGKCBBG__AADLDMNDIKG(OKFMDMKDMCP,(MethodInfo *)0x0);
      if (bVar3) {
        dVar4 = (MDNDPPNLDCP->fields).HNFHNNLOLGK;
        dVar5 = (OKFMDMKDMCP->fields).HNFHNNLOLGK;
        iVar1 = -0x80000000;
        if (dVar4 != INFINITY) {
          iVar1 = (int)dVar4;
        }
        iVar2 = -0x80000000;
        if (dVar5 != INFINITY) {
          iVar2 = (int)dVar5;
        }
        switch((__this->fields).ACCIHBHMFPN) {
        case 1:
          bVar3 = iVar1 == iVar2;
          break;
        case 2:
          bVar3 = iVar2 < iVar1;
          break;
        case 3:
          bVar3 = iVar2 <= iVar1;
          break;
        case 4:
          bVar3 = iVar1 < iVar2;
          break;
        case 5:
          bVar3 = iVar1 <= iVar2;
          break;
        default:
          bVar3 = false;
        }
        return bVar3;
      }
    }
    a = (System_String_o *)
        (*(MDNDPPNLDCP->klass->vtable)._3_ToString.methodPtr)
                  (MDNDPPNLDCP,(MDNDPPNLDCP->klass->vtable)._3_ToString.method);
    if (OKFMDMKDMCP != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
      b = (System_String_o *)
          (*(OKFMDMKDMCP->klass->vtable)._3_ToString.methodPtr)
                    (OKFMDMKDMCP,(OKFMDMKDMCP->klass->vtable)._3_ToString.method);
LAB_0364d224:
      bVar3 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
      return bVar3;
    }
  }
LAB_0364d274:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FFAEANEALKG(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x355079C]
// QuestCondition$$FFAEANEALKG @ RVA 0x355079C

void QuestCondition__FFAEANEALKG
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  return;
}


// ===== private void GJIOAPOLCND(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC JDGILABGBGH)  [RVA 0x35507A0]
// QuestCondition$$GJIOAPOLCND @ RVA 0x35507A0

void QuestCondition__GJIOAPOLCND
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_array *pSVar3;
  System_Object_array *args;
  long lVar4;
  undefined8 uVar5;
  System_String_o **ppSVar6;
  undefined8 *puVar7;
  System_String_o *a;
  
  if ((DAT_04568b3a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10999/*"Random"*/);
    FUN_01bab630(&StringLiteral_1322/*"-1"*/);
    FUN_01bab630(&StringLiteral_10701/*"QuestCondition.TestFunction - unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_2036/*"4"*/);
    FUN_01bab630(&StringLiteral_1882/*"10"*/);
    FUN_01bab630(&StringLiteral_12877/*"Test10"*/);
    FUN_01bab630(&StringLiteral_12879/*"TestValue"*/);
    FUN_01bab630(&StringLiteral_12875/*"Test01"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    __this = (QuestCondition_o *)FUN_01bab630(&StringLiteral_12874/*"Test00"*/);
    DAT_04568b3a = 1;
  }
  if (((ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) ||
      (pSVar2 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0),
      __this = (QuestCondition_o *)0x0, pSVar2 == (System_String_o *)0x0)) ||
     (pSVar3 = System_String__Split(pSVar2,0x7c,0,(MethodInfo *)0x0), __this = (QuestCondition_o *)0x0,
     pSVar3 == (System_String_array *)0x0)) goto LAB_03650a34;
  if (pSVar3->max_length == 0) {
    ppSVar6 = (System_String_o **)&StringLiteral_1322/*"-1"*/;
  }
  else {
    if ((int)pSVar3->max_length == 0) goto LAB_03650a38;
    ppSVar6 = pSVar3->m_Items;
  }
  a = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  pSVar2 = *ppSVar6;
  bVar1 = System_String__op_Equality(a,StringLiteral_12874/*"Test00"*/,(MethodInfo *)0x0);
  __this = (QuestCondition_o *)(ulong)bVar1;
  if (bVar1) {
    if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_03650a34;
    puVar7 = &StringLiteral_1567/*"0"*/;
  }
  else {
    bVar1 = System_String__op_Equality(a,StringLiteral_12875/*"Test01"*/,(MethodInfo *)0x0);
    __this = (QuestCondition_o *)(ulong)bVar1;
    if (bVar1) {
      if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_03650a34;
      puVar7 = &StringLiteral_1606/*"1"*/;
    }
    else {
      bVar1 = System_String__op_Equality(a,StringLiteral_10999/*"Random"*/,(MethodInfo *)0x0);
      __this = (QuestCondition_o *)(ulong)bVar1;
      if (bVar1) {
        if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_03650a34;
        puVar7 = &StringLiteral_2036/*"4"*/;
      }
      else {
        bVar1 = System_String__op_Equality(a,StringLiteral_12877/*"Test10"*/,(MethodInfo *)0x0);
        __this = (QuestCondition_o *)(ulong)bVar1;
        if (!bVar1) {
          bVar1 = System_String__op_Equality(a,StringLiteral_12879/*"TestValue"*/,(MethodInfo *)0x0);
          __this = (QuestCondition_o *)(ulong)bVar1;
          if (!bVar1) {
            args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
            __this = (QuestCondition_o *)0x0;
            if (args != (System_Object_array *)0x0) {
              pSVar2 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
              if ((pSVar2 != (System_String_o *)0x0) &&
                 (lVar4 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class),
                 lVar4 == 0)) {
                uVar5 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
                FUN_01bab798(uVar5,0);
              }
              if ((int)args->max_length != 0) {
                args->m_Items[0] = (Il2CppObject *)pSVar2;
                thunk_FUN_01c20e04(args->m_Items,pSVar2);
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UnityEngine_Debug__LogErrorFormat(StringLiteral_10701/*"QuestCondition.TestFunction - unknown property: "{0}""*/,args,(MethodInfo *)0x0);
                return;
              }
LAB_03650a38:
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
LAB_03650a34:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8(__this);
          }
          if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_03650a34;
          (JDGILABGBGH->fields).HPACPFLKHPK = pSVar2;
          goto LAB_03650968;
        }
        if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_03650a34;
        puVar7 = &StringLiteral_1882/*"10"*/;
      }
    }
  }
  pSVar2 = (System_String_o *)*puVar7;
  (JDGILABGBGH->fields).HPACPFLKHPK = pSVar2;
LAB_03650968:
  thunk_FUN_01c20e04(&JDGILABGBGH->fields,pSVar2);
  return;
}


// ===== protected override void CLAHGJADKJD(NILLKLHKLHG.AOBOECPEMLA HPACPFLKHPK)  [RVA 0x3550A48]
// QuestCondition$$CLAHGJADKJD @ RVA 0x3550A48

void QuestCondition__CLAHGJADKJD
               (QuestCondition_o *__this,NILLKLHKLHG_AOBOECPEMLA_o *HPACPFLKHPK,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  uint32_t uVar3;
  int32_t iVar4;
  MethodInfo *in_x3;
  undefined8 *puVar5;
  NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO;
  MMFIDKMDADC_o *JDGILABGBGH;
  System_String_o *pSVar6;
  
  if ((DAT_04568b3b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NILLKLHKLHG_GLEGDBCJEOA_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&StringLiteral_5433/*"Div"*/);
    FUN_01bab630(&StringLiteral_10935/*"RaidPackInfo"*/);
    FUN_01bab630(&StringLiteral_13814/*"Timer"*/);
    FUN_01bab630(&StringLiteral_6616/*"FullFunction - unknown function: "*/);
    FUN_01bab630(&StringLiteral_10581/*"Purchase"*/);
    FUN_01bab630(&StringLiteral_6310/*"Fight"*/);
    FUN_01bab630(&StringLiteral_11874/*"SessionSettings"*/);
    FUN_01bab630(&StringLiteral_10942/*"RaidPlayer"*/);
    FUN_01bab630(&StringLiteral_12026/*"ShopInfo"*/);
    FUN_01bab630(&StringLiteral_14774/*"VersionController"*/);
    FUN_01bab630(&StringLiteral_10709/*"QuestCondition::FullFunction function == null"*/);
    FUN_01bab630(&StringLiteral_9287/*"NDiv"*/);
    FUN_01bab630(&StringLiteral_12179/*"Slice"*/);
    FUN_01bab630(&StringLiteral_10862/*"RaidInfo"*/);
    FUN_01bab630(&StringLiteral_4673/*"ControlHintPrefab"*/);
    FUN_01bab630(&StringLiteral_2720/*"Achievements"*/);
    FUN_01bab630(&StringLiteral_5196/*"DataVersion"*/);
    FUN_01bab630(&StringLiteral_5701/*"Enchantment"*/);
    FUN_01bab630(&StringLiteral_12526/*"Sum"*/);
    FUN_01bab630(&StringLiteral_10227/*"PerkInfo"*/);
    FUN_01bab630(&StringLiteral_5287/*"Deliver"*/);
    FUN_01bab630(&StringLiteral_12507/*"Sub"*/);
    FUN_01bab630(&StringLiteral_10905/*"RaidLootInfo"*/);
    FUN_01bab630(&StringLiteral_9797/*"Offer"*/);
    FUN_01bab630(&StringLiteral_10827/*"RaidCurrencies"*/);
    FUN_01bab630(&StringLiteral_9230/*"Multi"*/);
    FUN_01bab630(&StringLiteral_12002/*"ShopAssert"*/);
    FUN_01bab630(&StringLiteral_11416/*"Root"*/);
    FUN_01bab630(&StringLiteral_6347/*"FightInfo"*/);
    FUN_01bab630(&StringLiteral_12871/*"Test"*/);
    FUN_01bab630(&StringLiteral_8117/*"ItemsOfType"*/);
    FUN_01bab630(&StringLiteral_9142/*"Mod"*/);
    FUN_01bab630(&StringLiteral_10068/*"Pack"*/);
    FUN_01bab630(&StringLiteral_6341/*"FightCurrencyCost"*/);
    FUN_01bab630(&StringLiteral_4373/*"Clan"*/);
    FUN_01bab630(&StringLiteral_8095/*"Item"*/);
    FUN_01bab630(&StringLiteral_12582/*"SysInfo"*/);
    FUN_01bab630(&StringLiteral_14518/*"UnlockedCharacters"*/);
    FUN_01bab630(&StringLiteral_4672/*"ControlHintIndex"*/);
    FUN_01bab630(&StringLiteral_6825/*"GetSimOperator"*/);
    FUN_01bab630(&StringLiteral_3437/*"BattlePass"*/);
    FUN_01bab630(&StringLiteral_10305/*"Player"*/);
    FUN_01bab630(&StringLiteral_6339/*"FightControlHintIndex"*/);
    FUN_01bab630(&StringLiteral_4559/*"Concat"*/);
    FUN_01bab630(&StringLiteral_2612/*"ABGroupExists"*/);
    FUN_01bab630(&StringLiteral_6340/*"FightControlHintPrefab"*/);
    FUN_01bab630(&StringLiteral_3426/*"Battle"*/);
    FUN_01bab630(&StringLiteral_14405/*"UniformIntRandom"*/);
    FUN_01bab630(&StringLiteral_9805/*"Offers"*/);
    FUN_01bab630(&StringLiteral_2750/*"AdAvailable"*/);
    FUN_01bab630(&StringLiteral_10857/*"RaidGift"*/);
    DAT_04568b3b = 1;
  }
  if (HPACPFLKHPK == (NILLKLHKLHG_AOBOECPEMLA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  ACCIJLGMHOO = (NILLKLHKLHG_GLEGDBCJEOA_o *)(HPACPFLKHPK->fields).IMMNELPBGIF;
  if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    bVar1 = (NILLKLHKLHG_GLEGDBCJEOA_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (ACCIJLGMHOO->klass->_2).naturalAligment) &&
       ((ACCIJLGMHOO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)NILLKLHKLHG_GLEGDBCJEOA_TypeInfo)) {
      pSVar6 = (ACCIJLGMHOO->fields).IHJHOFMNAOA;
      JDGILABGBGH = (HPACPFLKHPK->fields).JDGILABGBGH;
      uVar3 = <PrivateImplementationDetails>__ComputeStringHash(pSVar6,(MethodInfo *)0x0);
      if (uVar3 < 0x4e48867e) {
        if (uVar3 < 0x2ffcbe06) {
          if (uVar3 < 0x907f311) {
            if (uVar3 < 0x2f24ec3) {
              if (uVar3 == 0x7d2482) {
                bVar2 = System_String__op_Equality(pSVar6,StringLiteral_5701/*"Enchantment"*/,(MethodInfo *)0x0);
                if (bVar2) {
                  QuestCondition__EDGFKLMHKLH(__this,ACCIJLGMHOO,JDGILABGBGH,in_x3);
                  return;
                }
              }
              else if (uVar3 == 0x231f21c) {
                bVar2 = System_String__op_Equality(pSVar6,StringLiteral_10942/*"RaidPlayer"*/,(MethodInfo *)0x0);
                if (bVar2) {
                  QuestCondition__IHMGPDIJFCI((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
                  return;
                }
              }
              else if ((uVar3 == 0x2f24ec2) &&
                      (bVar2 = System_String__op_Equality
                                         (pSVar6,StringLiteral_8117/*"ItemsOfType"*/,(MethodInfo *)0x0), bVar2)) {
                QuestCondition__ELAEIDFIJGF((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
                return;
              }
            }
            else if (uVar3 == 0x34f48f5) {
              bVar2 = System_String__op_Equality(pSVar6,StringLiteral_4673/*"ControlHintPrefab"*/,(MethodInfo *)0x0);
              if (bVar2) {
                QuestCondition__AICLKMJCJFG((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
                return;
              }
            }
            else if (uVar3 == 0x5281493) {
              bVar2 = System_String__op_Equality(pSVar6,StringLiteral_10857/*"RaidGift"*/,(MethodInfo *)0x0);
              if (bVar2) {
                QuestCondition__HGGGJHFFIPK((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
                return;
              }
            }
            else if (uVar3 == 0x907f310) {
              puVar5 = &StringLiteral_14518/*"UnlockedCharacters"*/;
LAB_03651380:
              bVar2 = System_String__op_Equality
                                (pSVar6,(System_String_o *)*puVar5,(MethodInfo *)0x0);
              if (bVar2) {
                return;
              }
            }
          }
          else if (uVar3 < 0x1f648007) {
            if (uVar3 == 0xfc11df1) {
              bVar2 = System_String__op_Equality(pSVar6,StringLiteral_12179/*"Slice"*/,(MethodInfo *)0x0);
              if (bVar2) {
                iVar4 = 2;
LAB_03651654:
                EILGGBOIMGE__HNPCMGENAGN
                          ((EILGGBOIMGE_o *)__this,ACCIJLGMHOO,JDGILABGBGH,iVar4,(MethodInfo *)0x0);
                return;
              }
            }
            else if (uVar3 == 0x1c70fc20) {
              bVar2 = System_String__op_Equality(pSVar6,StringLiteral_10305/*"Player"*/,(MethodInfo *)0x0);
              if (bVar2) {
                QuestCondition__FPHCAGCJDDG((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
                return;
              }
            }
            else if ((uVar3 == 0x1f648006) &&
                    (bVar2 = System_String__op_Equality(pSVar6,StringLiteral_8095/*"Item"*/,(MethodInfo *)0x0)
                    , bVar2)) {
              QuestCondition__BIEMKONHPDA(__this,ACCIJLGMHOO,JDGILABGBGH,in_x3);
              return;
            }
          }
          else if (uVar3 == 0x271ffe11) {
            bVar2 = System_String__op_Equality(pSVar6,StringLiteral_12026/*"ShopInfo"*/,(MethodInfo *)0x0);
            if (bVar2) {
              QuestCondition__MIANEPDADJJ((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
              return;
            }
          }
          else if (uVar3 == 0x2ad0a995) {
            bVar2 = System_String__op_Equality(pSVar6,StringLiteral_6339/*"FightControlHintIndex"*/,(MethodInfo *)0x0);
            if (bVar2) {
              QuestCondition__BJHNMDHPNMB((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
              return;
            }
          }
          else if ((uVar3 == 0x2ffcbe05) &&
                  (bVar2 = System_String__op_Equality(pSVar6,StringLiteral_12871/*"Test"*/,(MethodInfo *)0x0),
                  bVar2)) {
            QuestCondition__GJIOAPOLCND((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
            return;
          }
        }
        else if (uVar3 < 0x44a37324) {
          if (uVar3 < 0x3ed8d0b6) {
            if (uVar3 == 0x3afbdb82) {
              puVar5 = &StringLiteral_10581/*"Purchase"*/;
LAB_0365173c:
              bVar2 = System_String__op_Equality
                                (pSVar6,(System_String_o *)*puVar5,(MethodInfo *)0x0);
              if (bVar2) {
                QuestCondition__GKGHLKPINBP((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
                return;
              }
            }
            else if (uVar3 == 0x3e5d6f9d) {
              bVar2 = System_String__op_Equality(pSVar6,StringLiteral_4559/*"Concat"*/,(MethodInfo *)0x0);
              if (bVar2) {
                iVar4 = 1;
                goto LAB_03651654;
              }
            }
            else if ((uVar3 == 0x3ed8d0b5) &&
                    (bVar2 = System_String__op_Equality
                                       (pSVar6,StringLiteral_12507/*"Sub"*/,(MethodInfo *)0x0), bVar2)) {
              iVar4 = 2;
              goto LAB_03651acc;
            }
          }
          else if (uVar3 == 0x3fd8d248) {
            bVar2 = System_String__op_Equality(pSVar6,StringLiteral_12526/*"Sum"*/,(MethodInfo *)0x0);
            if (bVar2) {
              iVar4 = 1;
LAB_03651acc:
              EILGGBOIMGE__LDJDDOBJFOL
                        ((EILGGBOIMGE_o *)__this,ACCIJLGMHOO,JDGILABGBGH,iVar4,(MethodInfo *)0x0);
              return;
            }
          }
          else if (uVar3 == 0x43ac8937) {
            bVar2 = System_String__op_Equality(pSVar6,StringLiteral_5196/*"DataVersion"*/,(MethodInfo *)0x0);
            if (bVar2) {
              QuestCondition__HGLOABLOKGJ((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
              return;
            }
          }
          else if ((uVar3 == 0x44a37323) &&
                  (bVar2 = System_String__op_Equality(pSVar6,StringLiteral_9142/*"Mod"*/,(MethodInfo *)0x0),
                  bVar2)) {
            iVar4 = 6;
            goto LAB_03651acc;
          }
        }
        else if (uVar3 < 0x4a2b080b) {
          if (uVar3 == 0x46e277f3) {
            bVar2 = System_String__op_Equality(pSVar6,StringLiteral_14405/*"UniformIntRandom"*/,(MethodInfo *)0x0);
            if (bVar2) {
              iVar4 = 7;
              goto LAB_03651acc;
            }
          }
          else {
            if (uVar3 == 0x4955b9ae) {
              puVar5 = &StringLiteral_5287/*"Deliver"*/;
              goto LAB_0365173c;
            }
            if ((uVar3 == 0x4a2b080a) &&
               (bVar2 = System_String__op_Equality(pSVar6,StringLiteral_9805/*"Offers"*/,(MethodInfo *)0x0),
               bVar2)) {
              QuestCondition__PBEAFDJJGPL(__this,ACCIJLGMHOO,JDGILABGBGH,in_x3);
              return;
            }
          }
        }
        else if (uVar3 == 0x4a693ee8) {
          bVar2 = System_String__op_Equality(pSVar6,StringLiteral_5433/*"Div"*/,(MethodInfo *)0x0);
          if (bVar2) {
            iVar4 = 4;
            goto LAB_03651acc;
          }
        }
        else if (uVar3 == 0x4c73948a) {
          bVar2 = System_String__op_Equality(pSVar6,StringLiteral_11874/*"SessionSettings"*/,(MethodInfo *)0x0);
          if (bVar2) {
            QuestCondition__PHCMABDBLJH((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
            return;
          }
        }
        else if ((uVar3 == 0x4e48867d) &&
                (bVar2 = System_String__op_Equality(pSVar6,StringLiteral_9797/*"Offer"*/,(MethodInfo *)0x0),
                bVar2)) {
          QuestCondition__DKBJDHLGNLP(__this,ACCIJLGMHOO,JDGILABGBGH,in_x3);
          return;
        }
      }
      else if (uVar3 < 0xa1295a66) {
        if (uVar3 < 0x8a4cb348) {
          if (uVar3 < 0x6626c3da) {
            if (uVar3 == 0x51a391d1) {
              bVar2 = System_String__op_Equality(pSVar6,StringLiteral_2720/*"Achievements"*/,(MethodInfo *)0x0);
              if (bVar2) {
                QuestCondition__OFKHAGFCLDB(__this,ACCIJLGMHOO,JDGILABGBGH,in_x3);
                return;
              }
            }
            else if (uVar3 == 0x52a2d8da) {
              bVar2 = System_String__op_Equality(pSVar6,StringLiteral_10827/*"RaidCurrencies"*/,(MethodInfo *)0x0);
              if (bVar2) {
                QuestCondition__BFCMIJJPDKK((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
                return;
              }
            }
            else if ((uVar3 == 0x6626c3d9) &&
                    (bVar2 = System_String__op_Equality(pSVar6,StringLiteral_6340/*"FightControlHintPrefab"*/,(MethodInfo *)0x0)
                    , bVar2)) {
              QuestCondition__MLHFPLAJIBB((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
              return;
            }
          }
          else if (uVar3 == 0x804bdc46) {
            bVar2 = System_String__op_Equality(pSVar6,StringLiteral_12582/*"SysInfo"*/,(MethodInfo *)0x0);
            if (bVar2) {
              QuestCondition__MJBFPGIKBKC((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
              return;
            }
          }
          else if (uVar3 == 0x80c3a8a3) {
            bVar2 = System_String__op_Equality(pSVar6,StringLiteral_6341/*"FightCurrencyCost"*/,(MethodInfo *)0x0);
            if (bVar2) {
              QuestCondition__JPNCGJDMAAF((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
              return;
            }
          }
          else if ((uVar3 == 0x8a4cb347) &&
                  (bVar2 = System_String__op_Equality(pSVar6,StringLiteral_10905/*"RaidLootInfo"*/,(MethodInfo *)0x0),
                  bVar2)) {
            QuestCondition__GELLNLKENNG((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
            return;
          }
        }
        else if (uVar3 < 0x957fd958) {
          if (uVar3 == 0x8bfd56c3) {
            bVar2 = System_String__op_Equality(pSVar6,StringLiteral_2750/*"AdAvailable"*/,(MethodInfo *)0x0);
            if (bVar2) {
              QuestCondition__HLACBAJGCAI((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
              return;
            }
          }
          else if (uVar3 == 0x91e4822b) {
            bVar2 = System_String__op_Equality(pSVar6,StringLiteral_14774/*"VersionController"*/,(MethodInfo *)0x0);
            if (bVar2) {
              QuestCondition__LKEFNNIDODP((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
              return;
            }
          }
          else if ((uVar3 == 0x957fd957) &&
                  (bVar2 = System_String__op_Equality(pSVar6,StringLiteral_3426/*"Battle"*/,(MethodInfo *)0x0),
                  bVar2)) {
            QuestCondition__BKOGDOHLABM((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
            return;
          }
        }
        else if (uVar3 == 0x96314371) {
          bVar2 = System_String__op_Equality(pSVar6,StringLiteral_6347/*"FightInfo"*/,(MethodInfo *)0x0);
          if (bVar2) {
            QuestCondition__FBPIMGAKHFI((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
            return;
          }
        }
        else if (uVar3 == 0xa055c06c) {
          bVar2 = System_String__op_Equality(pSVar6,StringLiteral_9287/*"NDiv"*/,(MethodInfo *)0x0);
          if (bVar2) {
            iVar4 = 5;
            goto LAB_03651acc;
          }
        }
        else if (uVar3 == 0xa1295a65) {
          puVar5 = &StringLiteral_11416/*"Root"*/;
          goto LAB_03651380;
        }
      }
      else if (uVar3 < 0xdd3ce540) {
        if (uVar3 < 0xc151467e) {
          if (uVar3 == 0xa9a2fee9) {
            bVar2 = System_String__op_Equality(pSVar6,StringLiteral_10862/*"RaidInfo"*/,(MethodInfo *)0x0);
            if (bVar2) {
              QuestCondition__LADIDEFJJMK((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
              return;
            }
          }
          else if (uVar3 == 0xbaf7c21a) {
            bVar2 = System_String__op_Equality(pSVar6,StringLiteral_3437/*"BattlePass"*/,(MethodInfo *)0x0);
            if (bVar2) {
              QuestCondition__FKEMCJBEHPG((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
              return;
            }
          }
          else if ((uVar3 == 0xc151467d) &&
                  (bVar2 = System_String__op_Equality(pSVar6,StringLiteral_4373/*"Clan"*/,(MethodInfo *)0x0),
                  bVar2)) {
            QuestCondition__BALPKELOBFL((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
            return;
          }
        }
        else if (uVar3 == 0xca32d500) {
          bVar2 = System_String__op_Equality(pSVar6,StringLiteral_10068/*"Pack"*/,(MethodInfo *)0x0);
          if (bVar2) {
            QuestCondition__NKLINMGNJOC((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
            return;
          }
        }
        else if (uVar3 == 0xcd184169) {
          bVar2 = System_String__op_Equality(pSVar6,StringLiteral_6310/*"Fight"*/,(MethodInfo *)0x0);
          if (bVar2) {
            QuestCondition__GABLJCLLGPG((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
            return;
          }
        }
        else if ((uVar3 == 0xdd3ce53f) &&
                (bVar2 = System_String__op_Equality(pSVar6,StringLiteral_12002/*"ShopAssert"*/,(MethodInfo *)0x0),
                bVar2)) {
          QuestCondition__GPPPOFIJDBG((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
          return;
        }
      }
      else if (uVar3 < 0xeb53a5c3) {
        if (uVar3 == 0xe10580d5) {
          bVar2 = System_String__op_Equality(pSVar6,StringLiteral_2612/*"ABGroupExists"*/,(MethodInfo *)0x0);
          if (bVar2) {
            QuestCondition__FGHECLAEAMP((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
            return;
          }
        }
        else if (uVar3 == 0xe9823410) {
          bVar2 = System_String__op_Equality(pSVar6,StringLiteral_10935/*"RaidPackInfo"*/,(MethodInfo *)0x0);
          if (bVar2) {
            QuestCondition__IPJIBPNKEIE((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
            return;
          }
        }
        else if ((uVar3 == 0xeb53a5c2) &&
                (bVar2 = System_String__op_Equality(pSVar6,StringLiteral_13814/*"Timer"*/,(MethodInfo *)0x0),
                bVar2)) {
          QuestCondition__JMGEGLJJDNB((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
          return;
        }
      }
      else if (uVar3 < 0xfc3cdfce) {
        if (uVar3 == 0xecf09411) {
          bVar2 = System_String__op_Equality(pSVar6,StringLiteral_4672/*"ControlHintIndex"*/,(MethodInfo *)0x0);
          if (bVar2) {
            QuestCondition__LNKNMAHDPDP((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
            return;
          }
        }
        else if ((uVar3 == 0xfc3cdfcd) &&
                (bVar2 = System_String__op_Equality(pSVar6,StringLiteral_10227/*"PerkInfo"*/,(MethodInfo *)0x0),
                bVar2)) {
          QuestCondition__CJAINBKPAHF((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
          return;
        }
      }
      else if (uVar3 == 0xfc844d52) {
        bVar2 = System_String__op_Equality(pSVar6,StringLiteral_9230/*"Multi"*/,(MethodInfo *)0x0);
        if (bVar2) {
          iVar4 = 3;
          goto LAB_03651acc;
        }
      }
      else if ((uVar3 == 0xfde16ae6) &&
              (bVar2 = System_String__op_Equality(pSVar6,StringLiteral_6825/*"GetSimOperator"*/,(MethodInfo *)0x0),
              bVar2)) {
        QuestCondition__GICMLLPMKKF((QuestCondition_o *)0x1,ACCIJLGMHOO,JDGILABGBGH,in_x3);
        return;
      }
      pSVar6 = System_String__Concat
                         (StringLiteral_6616/*"FullFunction - unknown function: "*/,(ACCIJLGMHOO->fields).IHJHOFMNAOA,(MethodInfo *)0x0);
      if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MFBNFJGBPBB_TypeInfo);
      }
      MFBNFJGBPBB__CPMLEOKGPKJ(pSVar6,(MethodInfo *)0x0);
      if (DAT_04568807 == '\0') {
        FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
        DAT_04568807 = '\x01';
      }
      if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar6 = MFBNFJGBPBB_TypeInfo->static_fields->OEOFMBEAELA;
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      goto LAB_03650d5c;
    }
  }
  pSVar6 = StringLiteral_10709/*"QuestCondition::FullFunction function == null"*/;
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pSVar6 = StringLiteral_10709/*"QuestCondition::FullFunction function == null"*/;
  }
LAB_03650d5c:
  UnityEngine_Debug__LogError((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
  return;
}


// ===== private void IPJIBPNKEIE(NILLKLHKLHG.GLEGDBCJEOA ACCIJLGMHOO, MMFIDKMDADC CBIGMIHGDFO)  [RVA 0x3551B8C]
// QuestCondition$$IPJIBPNKEIE @ RVA 0x3551B8C

void QuestCondition__IPJIBPNKEIE
               (QuestCondition_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *CBIGMIHGDFO,MethodInfo *method)

{
  char cVar1;
  bool bVar2;
  uint32_t uVar3;
  int __this_00;
  System_String_o *KGLJICLJHEL;
  RaidConfig_o *pJVar4;
  RaidConfig_ENBCJNLAHAC_o *pJVar5;
  RaidConfig_FNILDHLJBBJ_o *pJVar6;
  System_Collections_Generic_List_DDMHMABAHHD__o *__this_01;
  Il2CppObject *pIVar7;
  int64_t *__this_02;
  System_Object_array *args;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  System_String_o *s;
  System_Enum_o local_50;
  int32_t local_40;
  undefined4 local_34;
  
  if ((DAT_04568b3c & 1) == 0) {
    FUN_01bab630(&DPLBMJODBEK_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_10698/*"QuestCondition.RaidPackInfoFunction: unknown property: "{0}""*/);
    FUN_01bab630(&StringLiteral_5306/*"DescriptionSales"*/);
    FUN_01bab630(&StringLiteral_2761/*"AddPercent"*/);
    FUN_01bab630(&StringLiteral_10697/*"QuestCondition.RaidPackInfoFunction: pack "{0}" not found"*/);
    FUN_01bab630(&StringLiteral_12025/*"ShopHide"*/);
    FUN_01bab630(&StringLiteral_7346/*"ImageSales"*/);
    FUN_01bab630(&StringLiteral_5750/*"EndTime"*/);
    FUN_01bab630(&StringLiteral_8690/*"LotteryDialogType"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_8673/*"LootContainerSize"*/);
    FUN_01bab630(&StringLiteral_12374/*"StartTime"*/);
    FUN_01bab630(&StringLiteral_6717/*"GemsPrice"*/);
    FUN_01bab630(&StringLiteral_2799/*"Alias"*/);
    FUN_01bab630(&StringLiteral_7340/*"Image"*/);
    FUN_01bab630(&StringLiteral_5410/*"DiscountHides"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_5304/*"Description"*/);
    FUN_01bab630(&StringLiteral_10580/*"Purchasable"*/);
    __this = (QuestCondition_o *)FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568b3c = 1;
  }
  local_34 = 0;
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_0365229c;
  s = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  KGLJICLJHEL = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
  }
  pJVar4 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  __this = (QuestCondition_o *)0x0;
  if (pJVar4 == (RaidConfig_o *)0x0) goto LAB_0365229c;
  pJVar5 = RaidConfig__DIFLKMKBENA(pJVar4,KGLJICLJHEL,false,(MethodInfo *)0x0);
  if (pJVar5 == (RaidConfig_ENBCJNLAHAC_o *)0x0) {
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    __this = (QuestCondition_o *)0x0;
    if (args == (System_Object_array *)0x0) goto LAB_0365229c;
    if ((KGLJICLJHEL != (System_String_o *)0x0) &&
       (lVar8 = thunk_FUN_01bda71c(KGLJICLJHEL,(((args->obj).klass)->_1).element_class), lVar8 == 0)
       ) goto LAB_036522a4;
    if ((int)args->max_length == 0) goto LAB_036522a0;
    args->m_Items[0] = (Il2CppObject *)KGLJICLJHEL;
    thunk_FUN_01c20e04(args->m_Items,KGLJICLJHEL);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar10 = &StringLiteral_10697/*"QuestCondition.RaidPackInfoFunction: pack "{0}" not found"*/;
    goto LAB_03652278;
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(s,(MethodInfo *)0x0);
  if (uVar3 < 0x4f780123) {
    if (uVar3 < 0x130e7e1e) {
      if (uVar3 == 0xfe07306) {
        bVar2 = System_String__op_Equality(s,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        if (bVar2) {
          __this = (QuestCondition_o *)0x1;
          if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) {
            __this = (QuestCondition_o *)(pJVar5->fields).JIJLBFGKNJK;
            goto LAB_036521fc;
          }
          goto LAB_0365229c;
        }
      }
      else if (uVar3 == 0x118c9d61) {
        bVar2 = System_String__op_Equality(s,StringLiteral_12025/*"ShopHide"*/,(MethodInfo *)0x0);
        if (bVar2) {
          cVar1 = (pJVar5->fields).PCDOKDMDNMB;
LAB_036520c0:
          __this = (QuestCondition_o *)0x1;
          puVar10 = &StringLiteral_1567/*"0"*/;
          if (cVar1 != '\0') {
            puVar10 = &StringLiteral_1606/*"1"*/;
          }
          if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) {
            __this = (QuestCondition_o *)*puVar10;
            goto LAB_036521fc;
          }
          goto LAB_0365229c;
        }
      }
      else if ((uVar3 == 0x130e7e1d) &&
              (bVar2 = System_String__op_Equality(s,StringLiteral_2761/*"AddPercent"*/,(MethodInfo *)0x0), bVar2)) {
        __this_00 = (int)pJVar5 + 0x3c;
LAB_03652068:
        __this = (QuestCondition_o *)System_Int32__ToString(__this_00,(MethodInfo *)0x0);
joined_r0x036521f4:
        if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) {
LAB_036521fc:
          (CBIGMIHGDFO->fields).HPACPFLKHPK = (System_String_o *)__this;
          thunk_FUN_01c20e04(&CBIGMIHGDFO->fields);
          return;
        }
        goto LAB_0365229c;
      }
    }
    else if (uVar3 < 0x43804cd4) {
      if (uVar3 == 0x22e1f2f7) {
        bVar2 = System_String__op_Equality(s,StringLiteral_2799/*"Alias"*/,(MethodInfo *)0x0);
        if (bVar2) {
          __this = (QuestCondition_o *)0x1;
          if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) {
            __this = (QuestCondition_o *)(pJVar5->fields).JMGIACHBIKG;
            goto LAB_036521fc;
          }
          goto LAB_0365229c;
        }
      }
      else if ((uVar3 == 0x43804cd3) &&
              (bVar2 = System_String__op_Equality(s,StringLiteral_5306/*"DescriptionSales"*/,(MethodInfo *)0x0), bVar2)) {
        __this = (QuestCondition_o *)0x1;
        if (CBIGMIHGDFO == (MMFIDKMDADC_o *)0x0) goto LAB_0365229c;
        __this = (QuestCondition_o *)(pJVar5->fields).IEOMJEPNIBB;
        goto LAB_036521fc;
      }
    }
    else if (uVar3 == 0x43cf37cb) {
      bVar2 = System_String__op_Equality(s,StringLiteral_5750/*"EndTime"*/,(MethodInfo *)0x0);
      if (bVar2) {
        __this_02 = &(pJVar5->fields).CEGNAMELGID;
LAB_036521ec:
        __this = (QuestCondition_o *)System_Int64__ToString((int64_t)__this_02,(MethodInfo *)0x0);
        goto joined_r0x036521f4;
      }
    }
    else if ((uVar3 == 0x4f780122) &&
            (bVar2 = System_String__op_Equality(s,StringLiteral_6717/*"GemsPrice"*/,(MethodInfo *)0x0), bVar2)) {
      __this_00 = (int)pJVar5 + 0x38;
      goto LAB_03652068;
    }
  }
  else if (uVar3 < 0x8a74d38f) {
    if (uVar3 < 0x590ca79b) {
      if (uVar3 == 0x558ae6be) {
        bVar2 = System_String__op_Equality(s,StringLiteral_8690/*"LotteryDialogType"*/,(MethodInfo *)0x0);
        if (bVar2) {
          local_50.klass = (System_Enum_c *)DPLBMJODBEK_TypeInfo;
          local_50.monitor = (void *)0xffffffffffffffff;
          local_40 = (pJVar5->fields).KMKNJMEDEAH;
          __this = (QuestCondition_o *)System_Enum__ToString(&local_50,(MethodInfo *)0x0);
          goto joined_r0x036521f4;
        }
      }
      else if ((uVar3 == 0x590ca79a) &&
              (bVar2 = System_String__op_Equality(s,StringLiteral_7340/*"Image"*/,(MethodInfo *)0x0), bVar2)) {
        __this = (QuestCondition_o *)0x1;
        if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) {
          __this = (QuestCondition_o *)(pJVar5->fields).KPDPJONADPJ;
          goto LAB_036521fc;
        }
        goto LAB_0365229c;
      }
    }
    else if (uVar3 == 0x8a74d38e) {
      bVar2 = System_String__op_Equality(s,StringLiteral_7346/*"ImageSales"*/,(MethodInfo *)0x0);
      if (bVar2) {
        __this = (QuestCondition_o *)0x1;
        if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) {
          __this = (QuestCondition_o *)(pJVar5->fields).IEAEDGLMPPK;
          goto LAB_036521fc;
        }
        goto LAB_0365229c;
      }
    }
    else if ((uVar3 == 0x66de7a09) &&
            (bVar2 = System_String__op_Equality(s,StringLiteral_5304/*"Description"*/,(MethodInfo *)0x0), bVar2)) {
      __this = (QuestCondition_o *)0x1;
      if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) {
        __this = (QuestCondition_o *)(pJVar5->fields).BPCADJLKKGA;
        goto LAB_036521fc;
      }
      goto LAB_0365229c;
    }
  }
  else if (uVar3 < 0xd09a3c90) {
    if (uVar3 == 0xa56bc057) {
      bVar2 = System_String__op_Equality(s,StringLiteral_5410/*"DiscountHides"*/,(MethodInfo *)0x0);
      if (bVar2) {
        __this = (QuestCondition_o *)0x1;
        if (CBIGMIHGDFO != (MMFIDKMDADC_o *)0x0) {
          __this = (QuestCondition_o *)(pJVar5->fields).KIDAPFADKEE;
          goto LAB_036521fc;
        }
        goto LAB_0365229c;
      }
    }
    else if ((uVar3 == 0xd09a3c8f) &&
            (bVar2 = System_String__op_Equality(s,StringLiteral_10580/*"Purchasable"*/,(MethodInfo *)0x0), bVar2)) {
      cVar1 = (pJVar5->fields).AIEJIFADLHH;
      goto LAB_036520c0;
    }
  }
  else if (uVar3 == 0xd6195a6e) {
    bVar2 = System_String__op_Equality(s,StringLiteral_12374/*"StartTime"*/,(MethodInfo *)0x0);
    if (bVar2) {
      __this_02 = &(pJVar5->fields).NFKHJPMMNLM;
      goto LAB_036521ec;
    }
  }
  else if ((uVar3 == 0xf53f01eb) &&
          (bVar2 = System_String__op_Equality(s,StringLiteral_8673/*"LootContainerSize"*/,(MethodInfo *)0x0), bVar2)) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar4 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    __this = (QuestCondition_o *)0x0;
    if (pJVar4 == (RaidConfig_o *)0x0) goto LAB_0365229c;
    pJVar6 = RaidConfig__OJOIAONADNG(pJVar4,(pJVar5->fields).LEJBNEIJJIF,(MethodInfo *)0x0);
    local_34 = 0xffffffff;
    if ((pJVar6 != (RaidConfig_FNILDHLJBBJ_o *)0x0) && ((pJVar6->fields).HNGIBIJJKAP != false)) {
      __this_01 = (pJVar6->fields).GFBNJPMOEKD;
      __this = (QuestCondition_o *)0x0;
      if (__this_01 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) goto LAB_0365229c;
      pIVar7 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,0,
                          Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
      __this = (QuestCondition_o *)0x0;
      if (pIVar7 == (Il2CppObject *)0x0) goto LAB_0365229c;
      local_34 = *(undefined4 *)&pIVar7[1].monitor;
    }
    __this_00 = (int)&local_34;
    goto LAB_03652068;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
  __this = (QuestCondition_o *)0x0;
  if (args != (System_Object_array *)0x0) {
    if ((s != (System_String_o *)0x0) &&
       (lVar8 = thunk_FUN_01bda71c(s,(((args->obj).klass)->_1).element_class), lVar8 == 0)) {
LAB_036522a4:
      uVar9 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar9,0);
    }
    if ((int)args->max_length == 0) {
LAB_036522a0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = (Il2CppObject *)s;
    thunk_FUN_01c20e04(args->m_Items,s);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    puVar10 = &StringLiteral_10698/*"QuestCondition.RaidPackInfoFunction: unknown property: "{0}""*/;
LAB_03652278:
    UnityEngine_Debug__LogErrorFormat((System_String_o *)*puVar10,args,(MethodInfo *)0x0);
    return;
  }
LAB_0365229c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

