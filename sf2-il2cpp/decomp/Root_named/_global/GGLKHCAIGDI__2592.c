// TypeDefIndex 2592
// Namespace: 
// public class GGLKHCAIGDI
// Fields:
//   private const float BNHJDJJLIEE = 60;
//   private string <COIPKAKHDFP>k__BackingField; // 0x10
//   private string <HONAAKEIHJI>k__BackingField; // 0x18
//   private bool <PDDCGLMFLJL>k__BackingField; // 0x20
//   private List<MDLDFLDGLND> HEHMAPDMHIG; // 0x28
//   private List<LGFLCMBIFCN> PJGPKMDGOIE; // 0x30
//   private List<PFECHOJADFA> NICGLFEBNFM; // 0x38

// ===== public string GIMBGOMDHOH()  [RVA 0x33A5258]
// GGLKHCAIGDI$$GIMBGOMDHOH @ RVA 0x33A5258

System_String_o * GGLKHCAIGDI__GIMBGOMDHOH(GGLKHCAIGDI_o *__this,MethodInfo *method)

{
  return (__this->fields)._HONAAKEIHJI_k__BackingField;
}


// ===== private void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x33A5260]
// GGLKHCAIGDI$$HCOCAAIGNNL @ RVA 0x33A5260

void GGLKHCAIGDI__HCOCAAIGNNL(GGLKHCAIGDI_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public int ICMIMIOJPMK(IGFGDDANEPE NKCMBEFHFII)  [RVA 0x33A5268]
// GGLKHCAIGDI$$ICMIMIOJPMK @ RVA 0x33A5268

int32_t GGLKHCAIGDI__ICMIMIOJPMK
                  (GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_MDLDFLDGLND__o *__this_00;
  HOOAAGABMBL_o *pHVar4;
  System_String_o *b;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04567ce9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MDLDFLDGLND>_GetEnumerator__);
    DAT_04567ce9 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  iVar3 = 0;
  if (NKCMBEFHFII != (IGFGDDANEPE_o *)0x0) {
    pHVar4 = (NKCMBEFHFII->fields).PCBECBEFJOI;
    if (pHVar4 == (HOOAAGABMBL_o *)0x0) {
LAB_034a5364:
      iVar3 = 0;
    }
    else {
      __this_00 = (__this->fields).HEHMAPDMHIG;
      if (__this_00 == (System_Collections_Generic_List_MDLDFLDGLND__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      b = (pHVar4->fields)._GMPAEDFIIHF_k__BackingField;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<MDLDFLDGLND>_GetEnumerator__);
      do {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_38,
                           Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_MoveNext__
                          );
        pIVar1 = local_38.fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_38,
                     Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_Dispose__);
          goto LAB_034a5364;
        }
        if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__op_Equality
                          ((System_String_o *)local_38.fields._current[1].klass,b,(MethodInfo *)0x0)
        ;
      } while (!bVar2);
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 2),
                         (MethodInfo *)0x0);
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_38,Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_Dispose__)
      ;
    }
  }
  return iVar3;
}


// ===== private bool EJJDCEMBFPK(PerkInfoItem DDEPKHECINC)  [RVA 0x33A5404]
// GGLKHCAIGDI$$EJJDCEMBFPK @ RVA 0x33A5404

bool GGLKHCAIGDI__EJJDCEMBFPK(GGLKHCAIGDI_o *__this,PerkInfoItem_o *DDEPKHECINC,MethodInfo *method)

{
  bool bVar1;
  Roster_o *__this_00;
  System_String_o *a;
  KBCOFHAJOCK_o *__this_01;
  PLCCJCFAFKA_o *__this_02;
  Item_o *pDVar2;
  
  if ((DAT_04567cea & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_15240/*"ZONE_2"*/);
    FUN_01bab630(&StringLiteral_5548/*"ENCHANTMENT_MAGIC_RECHARGE"*/);
    DAT_04567cea = 1;
  }
  if (DDEPKHECINC != (PerkInfoItem_o *)0x0) {
    if ((DDEPKHECINC->fields).OCABLLPNEGL == 0) {
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
      pDVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
      if ((pDVar2 != (Item_o *)0x0) &&
         (__this_01 = (pDVar2->fields)._GMODBKFPHPN_k__BackingField,
         __this_01 != (KBCOFHAJOCK_o *)0x0)) {
        __this_02 = KBCOFHAJOCK__JHDDCDEENAK
                              (__this_01,(DDEPKHECINC->fields).AKBDHOEGNNG,(MethodInfo *)0x0);
        if (__this_02 == (PLCCJCFAFKA_o *)0x0) {
          return false;
        }
        bVar1 = PLCCJCFAFKA__PKMBANJNKBC(__this_02,(MethodInfo *)0x0);
        return bVar1;
      }
LAB_034a5580:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      ((DDEPKHECINC->fields).JMGIACHBIKG,StringLiteral_5548/*"ENCHANTMENT_MAGIC_RECHARGE"*/,(MethodInfo *)0x0);
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
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 == (Roster_o *)0x0) goto LAB_034a5580;
      a = Roster__KCKPAFCFAMP(__this_00,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(a,StringLiteral_15240/*"ZONE_2"*/,(MethodInfo *)0x0);
      if (bVar1) {
        return false;
      }
    }
  }
  return true;
}


// ===== private LGFLCMBIFCN LNKIBCOEAPL(string AFKICLAFDKC)  [RVA 0x33A5584]
// GGLKHCAIGDI$$LNKIBCOEAPL @ RVA 0x33A5584

LGFLCMBIFCN_o *
GGLKHCAIGDI__LNKIBCOEAPL(GGLKHCAIGDI_o *__this,System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_LGFLCMBIFCN__o *__this_00;
  LGFLCMBIFCN_o *pLVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567ceb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LGFLCMBIFCN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LGFLCMBIFCN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LGFLCMBIFCN>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LGFLCMBIFCN>_GetEnumerator__);
    DAT_04567ceb = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PJGPKMDGOIE;
  if (__this_00 == (System_Collections_Generic_List_LGFLCMBIFCN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<LGFLCMBIFCN>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<LGFLCMBIFCN>_MoveNext__);
    pLVar2 = (LGFLCMBIFCN_o *)local_48.fields._current;
    if (!bVar1) {
      pLVar2 = (LGFLCMBIFCN_o *)0x0;
      break;
    }
    if ((LGFLCMBIFCN_o *)local_48.fields._current == (LGFLCMBIFCN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((LGFLCMBIFCN_Fields *)((long)local_48.fields._current + 0x10))->
                       _COIPKAKHDFP_k__BackingField,AFKICLAFDKC,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<LGFLCMBIFCN>_Dispose__);
  return pLVar2;
}


// ===== private bool JMGPKBNPLBI(string BEHOODJKGLB, List<PerkInfoItem> EGBBHPHAHAC)  [RVA 0x33A56E0]
// GGLKHCAIGDI$$JMGPKBNPLBI @ RVA 0x33A56E0

bool GGLKHCAIGDI__JMGPKBNPLBI
               (GGLKHCAIGDI_o *__this,System_String_o *BEHOODJKGLB,
               System_Collections_Generic_List_HEFOANCOHDC__o *EGBBHPHAHAC,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567cec & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_get_Current__);
    __this = (GGLKHCAIGDI_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
    DAT_04567cec = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (EGBBHPHAHAC == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)EGBBHPHAHAC,
             Method_System_Collections_Generic_List<PerkInfoItem>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_MoveNext__);
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_034a57ac;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__op_Equality
                      ((System_String_o *)local_48.fields._current[4].klass,BEHOODJKGLB,
                       (MethodInfo *)0x0);
  } while (!bVar2);
  iVar3 = 4;
LAB_034a57ac:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<PerkInfoItem>_Dispose__);
  return bVar1 && iVar3 == 4;
}


// ===== public bool KEEFPHJOACG()  [RVA 0x33A5854]
// GGLKHCAIGDI$$KEEFPHJOACG @ RVA 0x33A5854

bool GGLKHCAIGDI__KEEFPHJOACG(GGLKHCAIGDI_o *__this,MethodInfo *method)

{
  return (__this->fields)._PDDCGLMFLJL_k__BackingField;
}


// ===== private int GCPMMFAOHHG(IGFGDDANEPE NKCMBEFHFII, int DPCEFBCDHPA, bool OKBCMODBOOO)  [RVA 0x33A585C]
// GGLKHCAIGDI$$GCPMMFAOHHG @ RVA 0x33A585C

int32_t GGLKHCAIGDI__GCPMMFAOHHG
                  (GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,
                  bool OKBCMODBOOO,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_00;
  FOKJBDHLIMG_o *__this_01;
  PerkInfoItem_o *EIKFGOCCOIE;
  KBCOFHAJOCK_o *__this_02;
  uint uVar3;
  Item_o *pDVar4;
  int iVar5;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567ced & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567ced = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = GGLKHCAIGDI__NPCHMJCMNDM(__this,NKCMBEFHFII,DPCEFBCDHPA,true,method);
  if (__this_00 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
  iVar5 = 0;
  local_80.fields._index = local_98.fields._index;
  local_80.fields._version = local_98.fields._version;
  local_80.fields._list = local_98.fields._list;
  local_80.fields._current = local_98.fields._current;
LAB_034a5954:
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    pIVar1 = local_80.fields._current;
    if (!bVar2) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__)
      ;
      return iVar5;
    }
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = GameUtils_TypeInfo->static_fields->DDMMFEDBMCC;
    if (__this_01 == (FOKJBDHLIMG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    EIKFGOCCOIE = FOKJBDHLIMG__JMMDGEOBMOC
                            (__this_01,(System_String_o *)pIVar1[1].klass,(MethodInfo *)0x0);
  } while (EIKFGOCCOIE == (PerkInfoItem_o *)0x0);
  if ((EIKFGOCCOIE->fields).OCABLLPNEGL == 0) {
    if (OKBCMODBOOO) goto code_r0x034a59ac;
    goto LAB_034a59c4;
  }
  uVar3 = 1;
  goto LAB_034a5a28;
code_r0x034a59ac:
  if (NKCMBEFHFII == (IGFGDDANEPE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar2 = IGFGDDANEPE__FGDEJFIKMCP(NKCMBEFHFII,EIKFGOCCOIE,(MethodInfo *)0x0);
  if (!bVar2) {
LAB_034a59c4:
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
    pDVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if (pDVar4 == (Item_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_02 = (pDVar4->fields)._GMODBKFPHPN_k__BackingField;
    if (__this_02 == (KBCOFHAJOCK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = KBCOFHAJOCK__CPKKHCAIGLN(__this_02,EIKFGOCCOIE,(MethodInfo *)0x0);
    uVar3 = (uint)bVar2;
LAB_034a5a28:
    iVar5 = iVar5 + uVar3;
  }
  goto LAB_034a5954;
}


// ===== public void RandomizeObscuredVars()  [RVA 0x33A5CFC]
// GGLKHCAIGDI$$RandomizeObscuredVars @ RVA 0x33A5CFC

void GGLKHCAIGDI__RandomizeObscuredVars(GGLKHCAIGDI_o *__this,MethodInfo *method)

{
  System_Action_MDLDFLDGLND__o **ppSVar1;
  System_Action_LGFLCMBIFCN__o **ppSVar2;
  System_Action_PFECHOJADFA__o **ppSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_PFECHOJADFA__o *__this_00;
  System_Collections_Generic_List_MDLDFLDGLND__o *__this_01;
  System_Collections_Generic_List_LGFLCMBIFCN__o *__this_02;
  System_Action_PFECHOJADFA__o *action;
  System_Action_MDLDFLDGLND__o *action_00;
  System_Action_LGFLCMBIFCN__o *action_01;
  
  if ((DAT_04567cee & 1) == 0) {
    FUN_01bab630(&System_Action<MDLDFLDGLND>_TypeInfo);
    FUN_01bab630(&System_Action<LGFLCMBIFCN>_TypeInfo);
    FUN_01bab630(&System_Action<PFECHOJADFA>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LGFLCMBIFCN>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MDLDFLDGLND>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PFECHOJADFA>_ForEach__);
    FUN_01bab630(&Method_GGLKHCAIGDI_<>c_HHBKPEKOOJK__);
    FUN_01bab630(&Method_GGLKHCAIGDI_<>c_JKAPHJFALNF__);
    FUN_01bab630(&Method_GGLKHCAIGDI_<>c_PNEFCJMKMID__);
    FUN_01bab630(&GGLKHCAIGDI_<>c_TypeInfo);
    DAT_04567cee = 1;
    method = extraout_x1;
  }
  __this_01 = (__this->fields).HEHMAPDMHIG;
  if ((GGLKHCAIGDI_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GGLKHCAIGDI_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action_00 = GGLKHCAIGDI_<>c_TypeInfo->static_fields->__9__40_0;
  if (action_00 == (System_Action_MDLDFLDGLND__o *)0x0) {
    if ((GGLKHCAIGDI_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(GGLKHCAIGDI_<>c_TypeInfo,method);
    }
    action_00 = (System_Action_MDLDFLDGLND__o *)
                thunk_FUN_01bda818(System_Action<MDLDFLDGLND>_TypeInfo);
    System_Action<object>___ctor();
    ppSVar1 = &GGLKHCAIGDI_<>c_TypeInfo->static_fields->__9__40_0;
    *ppSVar1 = action_00;
    thunk_FUN_01c20e04(ppSVar1,action_00);
  }
  if (__this_01 != (System_Collections_Generic_List_MDLDFLDGLND__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_01,
               (System_Action_T__o *)action_00,
               Method_System_Collections_Generic_List<MDLDFLDGLND>_ForEach__);
    __this_02 = (__this->fields).PJGPKMDGOIE;
    if ((GGLKHCAIGDI_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action_01 = GGLKHCAIGDI_<>c_TypeInfo->static_fields->__9__40_1;
    if (action_01 == (System_Action_LGFLCMBIFCN__o *)0x0) {
      if ((GGLKHCAIGDI_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action_01 = (System_Action_LGFLCMBIFCN__o *)
                  thunk_FUN_01bda818(System_Action<LGFLCMBIFCN>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &GGLKHCAIGDI_<>c_TypeInfo->static_fields->__9__40_1;
      *ppSVar2 = action_01;
      thunk_FUN_01c20e04(ppSVar2,action_01);
    }
    if (__this_02 != (System_Collections_Generic_List_LGFLCMBIFCN__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_02,
                 (System_Action_T__o *)action_01,
                 Method_System_Collections_Generic_List<LGFLCMBIFCN>_ForEach__);
      __this_00 = (__this->fields).NICGLFEBNFM;
      if ((GGLKHCAIGDI_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = GGLKHCAIGDI_<>c_TypeInfo->static_fields->__9__40_2;
      if (action == (System_Action_PFECHOJADFA__o *)0x0) {
        if ((GGLKHCAIGDI_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action = (System_Action_PFECHOJADFA__o *)
                 thunk_FUN_01bda818(System_Action<PFECHOJADFA>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar3 = &GGLKHCAIGDI_<>c_TypeInfo->static_fields->__9__40_2;
        *ppSVar3 = action;
        thunk_FUN_01c20e04(ppSVar3,action);
      }
      if (__this_00 != (System_Collections_Generic_List_PFECHOJADFA__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (System_Action_T__o *)action,
                   Method_System_Collections_Generic_List<PFECHOJADFA>_ForEach__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool EMFCFMDNOBE(IGFGDDANEPE NKCMBEFHFII, int DPCEFBCDHPA)  [RVA 0x33A5F78]
// GGLKHCAIGDI$$EMFCFMDNOBE @ RVA 0x33A5F78

bool GGLKHCAIGDI__EMFCFMDNOBE
               (GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,
               MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *in_x4;
  
  iVar1 = GGLKHCAIGDI__GCPMMFAOHHG(__this,NKCMBEFHFII,DPCEFBCDHPA,false,in_x4);
  return 0 < iVar1;
}


// ===== private bool JMGPKBNPLBI(PerkInfoItem DDAPPCAKOIL, List<PKKLIJLIKGF> EGBBHPHAHAC)  [RVA 0x33A5F94]
// GGLKHCAIGDI$$JMGPKBNPLBI @ RVA 0x33A5F94

bool GGLKHCAIGDI__JMGPKBNPLBI
               (GGLKHCAIGDI_o *__this,PerkInfoItem_o *DDAPPCAKOIL,
               System_Collections_Generic_List_PKKLIJLIKGF__o *EGBBHPHAHAC,MethodInfo *method)

{
  bool bVar1;
  
  if (DDAPPCAKOIL != (PerkInfoItem_o *)0x0) {
    bVar1 = GGLKHCAIGDI__JMGPKBNPLBI(__this,(DDAPPCAKOIL->fields).JIJLBFGKNJK,EGBBHPHAHAC,method);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string KCHJCGEMCGE()  [RVA 0x33A6120]
// GGLKHCAIGDI$$KCHJCGEMCGE @ RVA 0x33A6120

System_String_o * GGLKHCAIGDI__KCHJCGEMCGE(GGLKHCAIGDI_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}


// ===== public List<PKKLIJLIKGF> NPCHMJCMNDM(IGFGDDANEPE NKCMBEFHFII, int DPCEFBCDHPA, bool GMNHBNDJGDD = True)  [RVA 0x33A5B08]
// GGLKHCAIGDI$$NPCHMJCMNDM @ RVA 0x33A5B08

System_Collections_Generic_List_PKKLIJLIKGF__o *
GGLKHCAIGDI__NPCHMJCMNDM
          (GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,bool GMNHBNDJGDD,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_00;
  System_Collections_Generic_List_PFECHOJADFA__o *__this_01;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  method_00 = (MethodInfo *)(ulong)(uint)DPCEFBCDHPA;
  if ((DAT_04567cef & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PFECHOJADFA>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
    DAT_04567cef = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_PKKLIJLIKGF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
  if ((!GMNHBNDJGDD) || (iVar3 = GGLKHCAIGDI__ICMIMIOJPMK(__this,NKCMBEFHFII,method_00), 0 < iVar3))
  {
    __this_01 = (__this->fields).NICGLFEBNFM;
    if (__this_01 == (System_Collections_Generic_List_PFECHOJADFA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<PFECHOJADFA>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_MoveNext__);
      pIVar1 = local_58.fields._current;
      if (!bVar2) break;
      if ((PFECHOJADFA_o *)local_58.fields._current == (PFECHOJADFA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = PFECHOJADFA__BNNIDPDMOIL
                        ((PFECHOJADFA_o *)local_58.fields._current,NKCMBEFHFII,DPCEFBCDHPA,
                         (MethodInfo *)0x0);
      if (bVar2) {
        if (__this_00 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (System_Collections_Generic_IEnumerable_T__o *)
                   ((PFECHOJADFA_Fields *)((long)pIVar1 + 0x10))->PAPANCDPPIF,
                   Method_System_Collections_Generic_List<PKKLIJLIKGF>_AddRange__);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_58,Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_Dispose__);
  }
  return __this_00;
}


// ===== public List<PKKLIJLIKGF> KALLJLOAGJN(IGFGDDANEPE NKCMBEFHFII, int DPCEFBCDHPA)  [RVA 0x33A6128]
// GGLKHCAIGDI$$KALLJLOAGJN @ RVA 0x33A6128

System_Collections_Generic_List_PKKLIJLIKGF__o *
GGLKHCAIGDI__KALLJLOAGJN
          (GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *item;
  bool bVar3;
  bool bVar4;
  int32_t iVar5;
  MethodInfo *EGBBHPHAHAC;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_00;
  MethodInfo *EGBBHPHAHAC_00;
  MethodInfo *method_00;
  MethodInfo *pMVar6;
  MethodInfo *in_x4;
  PerkInfoItem_array *pHVar7;
  HOOAAGABMBL_o *CNDPGGAFHEA;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  pMVar6 = (MethodInfo *)(ulong)(uint)DPCEFBCDHPA;
  if ((DAT_04567cf0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_get_Current__);
    FUN_01bab630(&Method_LIIFLGALGNK_NIAJINLEHOO<PKKLIJLIKGF>__);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567cf0 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  EGBBHPHAHAC = (MethodInfo *)
                thunk_FUN_01bda818(System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)EGBBHPHAHAC,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
  if (((NKCMBEFHFII != (IGFGDDANEPE_o *)0x0) &&
      ((NKCMBEFHFII->fields).PCBECBEFJOI != (HOOAAGABMBL_o *)0x0)) &&
     (iVar5 = GGLKHCAIGDI__ICMIMIOJPMK(__this,NKCMBEFHFII,pMVar6), 0 < iVar5)) {
    pMVar6 = (MethodInfo *)0x0;
    __this_00 = GGLKHCAIGDI__NPCHMJCMNDM(__this,NKCMBEFHFII,DPCEFBCDHPA,false,in_x4);
    CNDPGGAFHEA = (NKCMBEFHFII->fields).PCBECBEFJOI;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    method_00 = (MethodInfo *)0x0;
    EGBBHPHAHAC_00 = (MethodInfo *)NLPJLHOEAOE__GMJMEKENPAP(CNDPGGAFHEA,true,(MethodInfo *)0x0);
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo);
    }
    LIIFLGALGNK__NIAJINLEHOO<object>
              ((System_Collections_Generic_List_T__o *)__this_00,
               Method_LIIFLGALGNK_NIAJINLEHOO<PKKLIJLIKGF>__);
    if (__this_00 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    do {
      do {
        do {
          bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_60,
                             Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__
                            );
          item = local_60.fields._current;
          if (!bVar3) goto LAB_034a639c;
          bVar3 = GGLKHCAIGDI__EJJDCEMBFPK
                            ((GGLKHCAIGDI_o *)(ulong)bVar3,(PKKLIJLIKGF_o *)local_60.fields._current
                             ,method_00);
          if ((PerkInfoItem_o *)item == (PerkInfoItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          method_00 = EGBBHPHAHAC;
          bVar4 = GGLKHCAIGDI__JMGPKBNPLBI
                            ((GGLKHCAIGDI_o *)(ulong)bVar3,
                             *(System_String_o **)
                              &(((PerkInfoItem_Fields *)((long)item + 0x10))->ICCBEPAFBFI).fields,
                             (System_Collections_Generic_List_PKKLIJLIKGF__o *)EGBBHPHAHAC,pMVar6);
        } while (bVar4);
        method_00 = EGBBHPHAHAC_00;
        bVar4 = GGLKHCAIGDI__JMGPKBNPLBI
                          ((GGLKHCAIGDI_o *)0x0,
                           *(System_String_o **)
                            &(((PerkInfoItem_Fields *)((long)item + 0x10))->ICCBEPAFBFI).fields,
                           (System_Collections_Generic_List_HEFOANCOHDC__o *)EGBBHPHAHAC_00,pMVar6);
        lVar2 = Method_System_Collections_Generic_List<PKKLIJLIKGF>_Add__;
      } while ((bVar3 & (bVar4 ^ 0xffU)) == 0);
      if (EGBBHPHAHAC == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pHVar7 = ((System_Collections_Generic_List_HEFOANCOHDC__Fields *)&EGBBHPHAHAC->invoker_method)
               ->_items;
      *(int32_t *)((long)&EGBBHPHAHAC->name + 4) = *(int32_t *)((long)&EGBBHPHAHAC->name + 4) + 1;
      if (pHVar7 == (PerkInfoItem_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar1 = *(uint *)&EGBBHPHAHAC->name;
      if (uVar1 < (uint)pHVar7->max_length) {
        *(uint *)&EGBBHPHAHAC->name = uVar1 + 1;
        pHVar7->m_Items[(int)uVar1] = (PerkInfoItem_o *)item;
        thunk_FUN_01c20e04(pHVar7->m_Items + (int)uVar1,item);
      }
      else {
        method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)EGBBHPHAHAC,item,
                   (MethodInfo_26E4DAC *)method_00);
      }
    } while (*(int *)&EGBBHPHAHAC->name < iVar5);
LAB_034a639c:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
  }
  return (System_Collections_Generic_List_PKKLIJLIKGF__o *)EGBBHPHAHAC;
}


// ===== public bool MBCCHBNAJKA(IGFGDDANEPE NKCMBEFHFII, int DPCEFBCDHPA)  [RVA 0x33A6510]
// GGLKHCAIGDI$$MBCCHBNAJKA @ RVA 0x33A6510

bool GGLKHCAIGDI__MBCCHBNAJKA
               (GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_PFECHOJADFA__o *__this_00;
  MethodInfo *method_00;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  method_00 = (MethodInfo *)(ulong)(uint)DPCEFBCDHPA;
  if ((DAT_04567cf1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PFECHOJADFA>_GetEnumerator__);
    DAT_04567cf1 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  iVar3 = GGLKHCAIGDI__ICMIMIOJPMK(__this,NKCMBEFHFII,method_00);
  if (iVar3 < 1) {
    bVar1 = false;
  }
  else {
    __this_00 = (__this->fields).NICGLFEBNFM;
    if (__this_00 == (System_Collections_Generic_List_PFECHOJADFA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<PFECHOJADFA>_GetEnumerator__);
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_MoveNext__);
      if (!bVar1) {
        iVar4 = 2;
        goto LAB_034a65fc;
      }
      if ((PFECHOJADFA_o *)local_48.fields._current == (PFECHOJADFA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = PFECHOJADFA__BNNIDPDMOIL
                        ((PFECHOJADFA_o *)local_48.fields._current,NKCMBEFHFII,DPCEFBCDHPA,
                         (MethodInfo *)0x0);
    } while (!bVar2);
    iVar4 = 5;
LAB_034a65fc:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_Dispose__);
    bVar1 = bVar1 && iVar4 == 5;
  }
  return bVar1;
}


// ===== public bool PCDGMIBPFEO(IGFGDDANEPE NKCMBEFHFII, int DPCEFBCDHPA)  [RVA 0x33A66A8]
// GGLKHCAIGDI$$PCDGMIBPFEO @ RVA 0x33A66A8

bool GGLKHCAIGDI__PCDGMIBPFEO
               (GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_00;
  FOKJBDHLIMG_o *__this_01;
  PerkInfoItem_o *pHVar3;
  MethodInfo *in_x4;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567cf2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04567cf2 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = GGLKHCAIGDI__NPCHMJCMNDM(__this,NKCMBEFHFII,DPCEFBCDHPA,true,in_x4);
  if (__this_00 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    pIVar1 = local_50.fields._current;
    if (!bVar2) {
      iVar4 = 5;
      goto LAB_034a67d0;
    }
    if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = GameUtils_TypeInfo->static_fields->DDMMFEDBMCC;
    if (__this_01 == (FOKJBDHLIMG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pHVar3 = FOKJBDHLIMG__JMMDGEOBMOC
                       (__this_01,(System_String_o *)pIVar1[1].klass,(MethodInfo *)0x0);
  } while ((pHVar3 == (PerkInfoItem_o *)0x0) || ((pHVar3->fields).OCABLLPNEGL != 0));
  iVar4 = 4;
LAB_034a67d0:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_50,Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
  return bVar2 && iVar4 == 4;
}


// ===== public string OHGBPDNOLNH(IGFGDDANEPE NKCMBEFHFII, int DPCEFBCDHPA)  [RVA 0x33A6884]
// GGLKHCAIGDI$$OHGBPDNOLNH @ RVA 0x33A6884

System_String_o *
GGLKHCAIGDI__OHGBPDNOLNH
          (GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,MethodInfo *method)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  System_Collections_Generic_List_HEFOANCOHDC__o *EGBBHPHAHAC;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_00;
  System_Text_StringBuilder_o *__this_01;
  FOKJBDHLIMG_o *__this_02;
  PerkInfoItem_o *DDEPKHECINC;
  System_Object_array *args;
  System_String_o *pSVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  undefined8 uVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x4;
  HOOAAGABMBL_o *CNDPGGAFHEA;
  System_String_o *pSVar8;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04567cf3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_get_Current__);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_6163/*"FFFFFF68"*/);
    FUN_01bab630(&StringLiteral_2451/*"<quad name={0} usedsize={1} color=#{2} > ^{3}^\n"*/);
    FUN_01bab630(&StringLiteral_6164/*"FFFFFFFF"*/);
    DAT_04567cf3 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (NKCMBEFHFII != (IGFGDDANEPE_o *)0x0) {
    CNDPGGAFHEA = (NKCMBEFHFII->fields).PCBECBEFJOI;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    EGBBHPHAHAC = NLPJLHOEAOE__GMJMEKENPAP(CNDPGGAFHEA,true,(MethodInfo *)0x0);
    method_01 = (MethodInfo *)0x1;
    __this_00 = GGLKHCAIGDI__NPCHMJCMNDM(__this,NKCMBEFHFII,DPCEFBCDHPA,true,in_x4);
    __this_01 = (System_Text_StringBuilder_o *)
                thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_00 != (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
      local_80.fields._list =
           (System_Collections_Generic_List_T__o *)
           CONCAT44(local_98.fields._list._4_4_,local_98.fields._list._0_4_);
      local_80.fields._index = local_98.fields._index;
      local_80.fields._version = local_98.fields._version;
      local_80.fields._current = local_98.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_80,
                                Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__
                               ), pIVar6 = local_80.fields._current, bVar2) {
        if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_02 = GameUtils_TypeInfo->static_fields->DDMMFEDBMCC;
        if (__this_02 == (FOKJBDHLIMG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        method_00 = (MethodInfo *)0x0;
        DDEPKHECINC = FOKJBDHLIMG__JMMDGEOBMOC
                                (__this_02,(System_String_o *)pIVar6[1].klass,(MethodInfo *)0x0);
        if (DDEPKHECINC != (PerkInfoItem_o *)0x0) {
          bVar2 = GGLKHCAIGDI__EJJDCEMBFPK((GGLKHCAIGDI_o *)DDEPKHECINC,DDEPKHECINC,method_00);
          bVar3 = GGLKHCAIGDI__JMGPKBNPLBI
                            ((GGLKHCAIGDI_o *)(ulong)bVar2,(DDEPKHECINC->fields).JIJLBFGKNJK,
                             EGBBHPHAHAC,method_01);
          if (!bVar3) {
            args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
            if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pSVar4 = KKCBGIBKOCP__LFEHBAMJCMH(DDEPKHECINC,(MethodInfo *)0x0);
            if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if ((pSVar4 != (System_String_o *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pSVar4,(((args->obj).klass)->_1).element_class),
               lVar5 == 0)) {
              uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar7,0);
            }
            if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            args->m_Items[0] = (Il2CppObject *)pSVar4;
            thunk_FUN_01c20e04(args->m_Items,pSVar4);
            local_98.fields._list._0_4_ = 0x42700000;
            pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_98);
            if ((pIVar6 != (Il2CppObject *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pIVar6,(((args->obj).klass)->_1).element_class),
               lVar5 == 0)) {
              uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar7,0);
            }
            if ((uint)args->max_length < 2) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            args->m_Items[1] = pIVar6;
            thunk_FUN_01c20e04(args->m_Items + 1,pIVar6);
            pSVar4 = StringLiteral_2451/*"<quad name={0} usedsize={1} color=#{2} > ^{3}^\n"*/;
            puVar1 = &StringLiteral_6164/*"FFFFFFFF"*/;
            if (!bVar2) {
              puVar1 = &StringLiteral_6163/*"FFFFFF68"*/;
            }
            pIVar6 = (Il2CppObject *)*puVar1;
            if ((pIVar6 != (Il2CppObject *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pIVar6,(((args->obj).klass)->_1).element_class),
               lVar5 == 0)) {
              uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar7,0);
            }
            if ((uint)args->max_length < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            args->m_Items[2] = pIVar6;
            thunk_FUN_01c20e04(args->m_Items + 2,pIVar6);
            pSVar8 = (DDEPKHECINC->fields).JMGIACHBIKG;
            if ((pSVar8 != (System_String_o *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pSVar8,(((args->obj).klass)->_1).element_class),
               lVar5 == 0)) {
              uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
              FUN_01bab798(uVar7,0);
            }
            if ((uint)args->max_length < 4) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            args->m_Items[3] = (Il2CppObject *)pSVar8;
            thunk_FUN_01c20e04(args->m_Items + 3,pSVar8);
            if (__this_01 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            method_01 = (MethodInfo *)0x0;
            System_Text_StringBuilder__AppendFormat(__this_01,pSVar4,args,(MethodInfo *)0x0);
          }
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__)
      ;
      if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
        pSVar4 = (System_String_o *)
                 (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                           (__this_01,(__this_01->klass->vtable)._3_ToString.method);
        return pSVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool JMGPKBNPLBI(PKKLIJLIKGF DDAPPCAKOIL, List<PKKLIJLIKGF> EGBBHPHAHAC)  [RVA 0x33A64E0]
// GGLKHCAIGDI$$JMGPKBNPLBI @ RVA 0x33A64E0

bool GGLKHCAIGDI__JMGPKBNPLBI
               (GGLKHCAIGDI_o *__this,PKKLIJLIKGF_o *DDAPPCAKOIL,
               System_Collections_Generic_List_PKKLIJLIKGF__o *EGBBHPHAHAC,MethodInfo *method)

{
  bool bVar1;
  
  if (DDAPPCAKOIL != (PKKLIJLIKGF_o *)0x0) {
    bVar1 = GGLKHCAIGDI__JMGPKBNPLBI(__this,(DDAPPCAKOIL->fields).DEKCPPOJFEH,EGBBHPHAHAC,method);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public BFBONKPKBNL GPGGNMAFOJD(IGFGDDANEPE NKCMBEFHFII)  [RVA 0x33A2BD8]
// GGLKHCAIGDI$$GPGGNMAFOJD @ RVA 0x33A2BD8

BFBONKPKBNL_o *
GGLKHCAIGDI__GPGGNMAFOJD(GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,MethodInfo *method)

{
  MDLDFLDGLND_o *pMVar1;
  LGFLCMBIFCN_o *__this_00;
  BFBONKPKBNL_o *pBVar2;
  
                    /* try { // try from 034a2c0c to 035a2c13 has its CatchHandler @ 034a2dac */
  if ((((__this->fields)._PDDCGLMFLJL_k__BackingField == false) &&
      (pMVar1 = GGLKHCAIGDI__IPJOEKMPEJA(__this,NKCMBEFHFII,method), pMVar1 != (MDLDFLDGLND_o *)0x0)
      ) && (__this_00 = GGLKHCAIGDI__LNKIBCOEAPL
                                  (__this,(pMVar1->fields)._OMJMODDJNLF_k__BackingField,method),
           __this_00 != (LGFLCMBIFCN_o *)0x0)) {
    pBVar2 = LGFLCMBIFCN__BKBONMDJJBE(__this_00,NKCMBEFHFII,(MethodInfo *)0x0);
    return pBVar2;
  }
  return (BFBONKPKBNL_o *)0x0;
}


// ===== private bool JMGPKBNPLBI(PerkInfoItem DDAPPCAKOIL, List<PerkInfoItem> EGBBHPHAHAC)  [RVA 0x33A6D40]
// GGLKHCAIGDI$$JMGPKBNPLBI @ RVA 0x33A6D40

bool GGLKHCAIGDI__JMGPKBNPLBI
               (GGLKHCAIGDI_o *__this,PerkInfoItem_o *DDAPPCAKOIL,
               System_Collections_Generic_List_HEFOANCOHDC__o *EGBBHPHAHAC,MethodInfo *method)

{
  bool bVar1;
  
  if (DDAPPCAKOIL != (PerkInfoItem_o *)0x0) {
    bVar1 = GGLKHCAIGDI__JMGPKBNPLBI(__this,(DDAPPCAKOIL->fields).JIJLBFGKNJK,EGBBHPHAHAC,method);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LDCHANJGKCF(bool CJNHFNHJHPE)  [RVA 0x33A6EC4]
// GGLKHCAIGDI$$LDCHANJGKCF @ RVA 0x33A6EC4

void GGLKHCAIGDI__LDCHANJGKCF(GGLKHCAIGDI_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._PDDCGLMFLJL_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public bool DDAKFOBLNJL(IGFGDDANEPE NKCMBEFHFII)  [RVA 0x33A6ED0]
// GGLKHCAIGDI$$DDAKFOBLNJL @ RVA 0x33A6ED0

bool GGLKHCAIGDI__DDAKFOBLNJL(GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  BFBONKPKBNL_o *pBVar5;
  System_Collections_Generic_List_BNKBGIIJNLF__o *__this_00;
  Roster_o *__this_01;
  int iVar6;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567cf4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BNKBGIIJNLF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BNKBGIIJNLF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BNKBGIIJNLF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BNKBGIIJNLF>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567cf4 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pBVar5 = GGLKHCAIGDI__GPGGNMAFOJD(__this,NKCMBEFHFII,method);
  if (pBVar5 == (BFBONKPKBNL_o *)0x0) {
    bVar2 = true;
  }
  else {
    __this_00 = (pBVar5->fields).MIOLFPIJMDH;
    if (__this_00 == (System_Collections_Generic_List_BNKBGIIJNLF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<BNKBGIIJNLF>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<BNKBGIIJNLF>_MoveNext__);
      pIVar1 = local_60.fields._current;
      if (!bVar2) {
        iVar6 = 6;
        goto LAB_034a703c;
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
      if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (pIVar1[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_01 == (Roster_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = Roster__FCPIAEEKGEL
                        (__this_01,(System_String_o *)((pIVar1[1].klass)->_1).namespaze,
                         (MethodInfo *)0x0);
      iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)&pIVar1[1].monitor
                         ,(MethodInfo *)0x0);
    } while (iVar4 <= iVar3);
    iVar6 = 5;
LAB_034a703c:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<BNKBGIIJNLF>_Dispose__);
    bVar2 = iVar6 != 5;
  }
  return bVar2;
}


// ===== private void BCBGEDHAPDD(string CJNHFNHJHPE)  [RVA 0x33A7100]
// GGLKHCAIGDI$$BCBGEDHAPDD @ RVA 0x33A7100

void GGLKHCAIGDI__BCBGEDHAPDD(GGLKHCAIGDI_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HONAAKEIHJI_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== private bool JMGPKBNPLBI(PKKLIJLIKGF DDAPPCAKOIL, List<PerkInfoItem> EGBBHPHAHAC)  [RVA 0x33A64F8]
// GGLKHCAIGDI$$JMGPKBNPLBI @ RVA 0x33A64F8

bool GGLKHCAIGDI__JMGPKBNPLBI
               (GGLKHCAIGDI_o *__this,PKKLIJLIKGF_o *DDAPPCAKOIL,
               System_Collections_Generic_List_HEFOANCOHDC__o *EGBBHPHAHAC,MethodInfo *method)

{
  bool bVar1;
  
  if (DDAPPCAKOIL != (PKKLIJLIKGF_o *)0x0) {
    bVar1 = GGLKHCAIGDI__JMGPKBNPLBI(__this,(DDAPPCAKOIL->fields).DEKCPPOJFEH,EGBBHPHAHAC,method);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool ODLAALGANOO(IGFGDDANEPE NKCMBEFHFII)  [RVA 0x33A7108]
// GGLKHCAIGDI$$ODLAALGANOO @ RVA 0x33A7108

bool GGLKHCAIGDI__ODLAALGANOO(GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_PFECHOJADFA__o *__this_01;
  HOOAAGABMBL_o *pHVar3;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567cf5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PFECHOJADFA>_GetEnumerator__);
    DAT_04567cf5 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (((NKCMBEFHFII == (IGFGDDANEPE_o *)0x0) ||
      (pHVar3 = (NKCMBEFHFII->fields).PCBECBEFJOI, pHVar3 == (HOOAAGABMBL_o *)0x0)) ||
     (bVar1 = GGLKHCAIGDI__FCBPFKMMBJD(__this,(pHVar3->fields)._GMPAEDFIIHF_k__BackingField,method),
     !bVar1)) {
    bVar1 = false;
  }
  else {
    __this_01 = (__this->fields).NICGLFEBNFM;
    if (__this_01 == (System_Collections_Generic_List_PFECHOJADFA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<PFECHOJADFA>_GetEnumerator__);
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_MoveNext__);
      __this_00 = local_48.fields._current;
      if (!bVar1) {
        iVar4 = 4;
        goto LAB_034a7218;
      }
      pHVar3 = IGFGDDANEPE__JPNNODJPOCL(NKCMBEFHFII,false,(MethodInfo *)0x0);
      if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((PFECHOJADFA_o *)__this_00 == (PFECHOJADFA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = PFECHOJADFA__BNNIDPDMOIL
                        ((PFECHOJADFA_o *)__this_00,NKCMBEFHFII,
                         (pHVar3->fields)._JDEHPJEIOCI_k__BackingField,(MethodInfo *)0x0);
    } while (!bVar2);
    iVar4 = 7;
LAB_034a7218:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_Dispose__);
    bVar1 = bVar1 && iVar4 == 7;
  }
  return bVar1;
}


// ===== private bool EJJDCEMBFPK(PKKLIJLIKGF DDAPPCAKOIL)  [RVA 0x33A6468]
// GGLKHCAIGDI$$EJJDCEMBFPK @ RVA 0x33A6468

bool GGLKHCAIGDI__EJJDCEMBFPK(GGLKHCAIGDI_o *__this,PKKLIJLIKGF_o *DDAPPCAKOIL,MethodInfo *method)

{
  bool bVar1;
  FOKJBDHLIMG_o *__this_00;
  PerkInfoItem_o *DDEPKHECINC;
  MethodInfo *method_00;
  
  if ((DAT_04567cf6 & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04567cf6 = 1;
  }
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if ((DDAPPCAKOIL != (PKKLIJLIKGF_o *)0x0) &&
     (__this_00 = GameUtils_TypeInfo->static_fields->DDMMFEDBMCC,
     __this_00 != (FOKJBDHLIMG_o *)0x0)) {
    method_00 = (MethodInfo *)0x0;
    DDEPKHECINC = FOKJBDHLIMG__JMMDGEOBMOC
                            (__this_00,(DDAPPCAKOIL->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    bVar1 = GGLKHCAIGDI__EJJDCEMBFPK((GGLKHCAIGDI_o *)DDEPKHECINC,DDEPKHECINC,method_00);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool EJOADHBJICP(IGFGDDANEPE NKCMBEFHFII, int DPCEFBCDHPA)  [RVA 0x33A7448]
// GGLKHCAIGDI$$EJOADHBJICP @ RVA 0x33A7448

bool GGLKHCAIGDI__EJOADHBJICP
               (GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,
               MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *in_x4;
  
  iVar1 = GGLKHCAIGDI__GCPMMFAOHHG(__this,NKCMBEFHFII,DPCEFBCDHPA,true,in_x4);
  return 0 < iVar1;
}


// ===== private bool JMGPKBNPLBI(string BEHOODJKGLB, List<PKKLIJLIKGF> EGBBHPHAHAC)  [RVA 0x33A5FAC]
// GGLKHCAIGDI$$JMGPKBNPLBI @ RVA 0x33A5FAC

bool GGLKHCAIGDI__JMGPKBNPLBI
               (GGLKHCAIGDI_o *__this,System_String_o *BEHOODJKGLB,
               System_Collections_Generic_List_PKKLIJLIKGF__o *EGBBHPHAHAC,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567cf7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_get_Current__);
    __this = (GGLKHCAIGDI_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    DAT_04567cf7 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (EGBBHPHAHAC == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)EGBBHPHAHAC,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_034a6078;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__op_Equality
                      ((System_String_o *)local_48.fields._current[1].klass,BEHOODJKGLB,
                       (MethodInfo *)0x0);
  } while (!bVar2);
  iVar3 = 4;
LAB_034a6078:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
  return bVar1 && iVar3 == 4;
}


// ===== public MDLDFLDGLND IPJOEKMPEJA(IGFGDDANEPE NKCMBEFHFII)  [RVA 0x33A6D58]
// GGLKHCAIGDI$$IPJOEKMPEJA @ RVA 0x33A6D58

MDLDFLDGLND_o *
GGLKHCAIGDI__IPJOEKMPEJA(GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MDLDFLDGLND__o *__this_00;
  HOOAAGABMBL_o *pHVar2;
  System_String_o *b;
  MDLDFLDGLND_o *pMVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567cf8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MDLDFLDGLND>_GetEnumerator__);
    DAT_04567cf8 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (((NKCMBEFHFII == (IGFGDDANEPE_o *)0x0) ||
      (pHVar2 = (NKCMBEFHFII->fields).PCBECBEFJOI, pHVar2 == (HOOAAGABMBL_o *)0x0)) ||
     (__this_00 = (__this->fields).HEHMAPDMHIG,
     __this_00 == (System_Collections_Generic_List_MDLDFLDGLND__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  b = (pHVar2->fields)._GMPAEDFIIHF_k__BackingField;
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MDLDFLDGLND>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_MoveNext__);
    pMVar3 = (MDLDFLDGLND_o *)local_48.fields._current;
    if (!bVar1) {
      pMVar3 = (MDLDFLDGLND_o *)0x0;
      break;
    }
    if ((MDLDFLDGLND_o *)local_48.fields._current == (MDLDFLDGLND_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((MDLDFLDGLND_Fields *)((long)local_48.fields._current + 0x10))->
                       _JEEFFPFPAMB_k__BackingField,b,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_Dispose__);
  return pMVar3;
}


// ===== public bool FCBPFKMMBJD(string DAFCPNPODFD)  [RVA 0x33A72D4]
// GGLKHCAIGDI$$FCBPFKMMBJD @ RVA 0x33A72D4

bool GGLKHCAIGDI__FCBPFKMMBJD(GGLKHCAIGDI_o *__this,System_String_o *DAFCPNPODFD,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_MDLDFLDGLND__o *__this_00;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567cf9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MDLDFLDGLND>_GetEnumerator__);
    DAT_04567cf9 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).HEHMAPDMHIG;
  if (__this_00 == (System_Collections_Generic_List_MDLDFLDGLND__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MDLDFLDGLND>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_MoveNext__);
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_034a73a0;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__op_Equality
                      ((System_String_o *)local_48.fields._current[1].klass,DAFCPNPODFD,
                       (MethodInfo *)0x0);
  } while (!bVar2);
  iVar3 = 4;
LAB_034a73a0:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_Dispose__);
  return bVar1 && iVar3 == 4;
}


// ===== public void .ctor(XmlNode JHMENEKPIBO)  [RVA 0x33A7464]
// GGLKHCAIGDI$$.ctor @ RVA 0x33A7464

/* WARNING: Removing unreachable block (ram,0x034a7bc0) */
/* WARNING: Removing unreachable block (ram,0x034a7e70) */
/* WARNING: Removing unreachable block (ram,0x034a7e64) */

void GGLKHCAIGDI___ctor(GGLKHCAIGDI_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Collections_Generic_List_MDLDFLDGLND__o *pSVar3;
  System_Collections_Generic_List_LGFLCMBIFCN__o *pSVar4;
  System_Collections_Generic_List_PFECHOJADFA__o *pSVar5;
  System_Xml_XmlAttributeCollection_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  System_String_o *pSVar8;
  long *plVar9;
  undefined8 *puVar10;
  System_Xml_XmlNode_o *pSVar11;
  MDLDFLDGLND_o *__this_00;
  LGFLCMBIFCN_o *__this_01;
  PFECHOJADFA_o *__this_02;
  long lVar12;
  MDLDFLDGLND_array *pMVar13;
  LGFLCMBIFCN_array *pLVar14;
  PFECHOJADFA_array *pPVar15;
  ulong uVar16;
  int *piVar17;
  System_Collections_Generic_List_PFECHOJADFA__o **ppSVar18;
  System_Collections_Generic_List_LGFLCMBIFCN__o **ppSVar19;
  System_Collections_Generic_List_MDLDFLDGLND__o **ppSVar20;
  System_String_o **ppSVar21;
  GGLKHCAIGDI_Fields *pGVar22;
  
  if ((DAT_04567cfa & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&LGFLCMBIFCN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MDLDFLDGLND>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LGFLCMBIFCN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PFECHOJADFA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PFECHOJADFA>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LGFLCMBIFCN>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MDLDFLDGLND>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MDLDFLDGLND>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<PFECHOJADFA>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<LGFLCMBIFCN>_TypeInfo);
    FUN_01bab630(&MDLDFLDGLND_TypeInfo);
    FUN_01bab630(&PFECHOJADFA_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_8116/*"Items"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_14757/*"Variations"*/);
    FUN_01bab630(&StringLiteral_10463/*"Prices"*/);
    FUN_01bab630(&StringLiteral_2799/*"Alias"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567cfa = 1;
  }
  pGVar22 = &__this->fields;
  pGVar22->_COIPKAKHDFP_k__BackingField = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(pGVar22);
  ppSVar21 = &(__this->fields)._HONAAKEIHJI_k__BackingField;
  *ppSVar21 = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04(ppSVar21);
  pSVar3 = (System_Collections_Generic_List_MDLDFLDGLND__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MDLDFLDGLND>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<MDLDFLDGLND>__ctor__);
  ppSVar20 = &(__this->fields).HEHMAPDMHIG;
  *ppSVar20 = pSVar3;
  thunk_FUN_01c20e04(ppSVar20,pSVar3);
  pSVar4 = (System_Collections_Generic_List_LGFLCMBIFCN__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<LGFLCMBIFCN>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<LGFLCMBIFCN>__ctor__);
  ppSVar19 = &(__this->fields).PJGPKMDGOIE;
  *ppSVar19 = pSVar4;
  thunk_FUN_01c20e04(ppSVar19,pSVar4);
  pSVar5 = (System_Collections_Generic_List_PFECHOJADFA__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<PFECHOJADFA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar5,
             Method_System_Collections_Generic_List<PFECHOJADFA>__ctor__);
  ppSVar18 = &(__this->fields).NICGLFEBNFM;
  *ppSVar18 = pSVar5;
  thunk_FUN_01c20e04(ppSVar18,pSVar5);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar6 = (System_Xml_XmlAttributeCollection_o *)
               (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                         (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method),
     pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar6,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
    pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
    pGVar22->_COIPKAKHDFP_k__BackingField = pSVar8;
    thunk_FUN_01c20e04(pGVar22,pSVar8);
    pSVar6 = (System_Xml_XmlAttributeCollection_o *)
             (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                       (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (pSVar6 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar7 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar6,StringLiteral_2799/*"Alias"*/,(MethodInfo *)0x0);
      pSVar8 = EIABCPKDEBD__JPKEHIBGOEM(pSVar7,(System_String_o *)0x0,(MethodInfo *)0x0);
      *ppSVar21 = pSVar8;
      thunk_FUN_01c20e04(ppSVar21,pSVar8);
      plVar9 = (long *)(*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                                 (JHMENEKPIBO,StringLiteral_8116/*"Items"*/,
                                  (JHMENEKPIBO->klass->vtable)._51_get_Item.method);
      if ((plVar9 != (long *)0x0) &&
         (plVar9 = (long *)(**(code **)(*plVar9 + 0x208))(plVar9,*(undefined8 *)(*plVar9 + 0x210)),
         plVar9 != (long *)0x0)) {
        plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        do {
          lVar12 = *plVar9;
          uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar10 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
                goto LAB_034a77cc;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_034a77cc:
          uVar16 = (*(code *)*puVar10)(plVar9,puVar10[1]);
          if ((uVar16 & 1) == 0) {
            plVar9 = (long *)thunk_FUN_01bda71c(plVar9,System_IDisposable_TypeInfo);
            if (plVar9 == (long *)0x0) goto LAB_034a7964;
            lVar12 = *plVar9;
            uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar16 == 0) goto LAB_034a793c;
            piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            goto LAB_034a7924;
          }
          lVar12 = *plVar9;
          uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar16 != 0) {
            piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar10 = (undefined8 *)(lVar12 + (long)(*piVar17 + 1) * 0x10 + 0x138);
                goto LAB_034a782c;
              }
              uVar16 = uVar16 - 1;
              piVar17 = piVar17 + 4;
            } while (uVar16 != 0);
          }
          puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,1);
LAB_034a782c:
          pSVar11 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
          if (pSVar11 != (System_Xml_XmlNode_o *)0x0) {
            bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
            if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
               ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
              FUN_01babc64(pSVar11);
            }
          }
          pSVar3 = *ppSVar20;
          __this_00 = (MDLDFLDGLND_o *)thunk_FUN_01bda818(MDLDFLDGLND_TypeInfo);
          MDLDFLDGLND___ctor(__this_00,pSVar11,(MethodInfo *)0x0);
          lVar12 = Method_System_Collections_Generic_List<MDLDFLDGLND>_Add__;
          if (pSVar3 == (System_Collections_Generic_List_MDLDFLDGLND__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar13 = (pSVar3->fields)._items;
          (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
          if (pMVar13 == (MDLDFLDGLND_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pMVar13->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            pMVar13->m_Items[(int)uVar2] = __this_00;
            thunk_FUN_01c20e04(pMVar13->m_Items + (int)uVar2,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_00
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
            ;
          }
        } while( true );
      }
    }
  }
  goto LAB_034a7e60;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_034a7924:
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_034a7958;
    }
  }
LAB_034a793c:
  puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_034a7958:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_034a7964:
  plVar9 = (long *)(*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                             (JHMENEKPIBO,StringLiteral_10463/*"Prices"*/,
                              (JHMENEKPIBO->klass->vtable)._51_get_Item.method);
  if ((plVar9 != (long *)0x0) &&
     (plVar9 = (long *)(**(code **)(*plVar9 + 0x208))(plVar9,*(undefined8 *)(*plVar9 + 0x210)),
     plVar9 != (long *)0x0)) {
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar12 = *plVar9;
      uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_034a7a20;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_034a7a20:
      uVar16 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar16 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_01bda71c(plVar9,System_IDisposable_TypeInfo);
        if (plVar9 == (long *)0x0) goto LAB_034a7bb4;
        lVar12 = *plVar9;
        uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar16 == 0) goto LAB_034a7b8c;
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_034a7b74;
      }
      lVar12 = *plVar9;
      uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_034a7a80;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,1);
LAB_034a7a80:
      pSVar11 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (pSVar11 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
           ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar11);
        }
      }
      pSVar4 = *ppSVar19;
      __this_01 = (LGFLCMBIFCN_o *)thunk_FUN_01bda818(LGFLCMBIFCN_TypeInfo);
      LGFLCMBIFCN___ctor(__this_01,pSVar11,(MethodInfo *)0x0);
      lVar12 = Method_System_Collections_Generic_List<LGFLCMBIFCN>_Add__;
      if (pSVar4 == (System_Collections_Generic_List_LGFLCMBIFCN__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pLVar14 = (pSVar4->fields)._items;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (pLVar14 == (LGFLCMBIFCN_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (pSVar4->fields)._size;
      if (uVar2 < (uint)pLVar14->max_length) {
        (pSVar4->fields)._size = uVar2 + 1;
        pLVar14->m_Items[(int)uVar2] = __this_01;
        thunk_FUN_01c20e04(pLVar14->m_Items + (int)uVar2,__this_01);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)__this_01,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
    } while( true );
  }
  goto LAB_034a7e60;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_034a7dcc:
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_034a7e00;
    }
  }
LAB_034a7de4:
  puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_034a7e00:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
  return;
  while( true ) {
    uVar16 = uVar16 - 1;
    piVar17 = piVar17 + 4;
    if (uVar16 == 0) break;
LAB_034a7b74:
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_034a7ba8;
    }
  }
LAB_034a7b8c:
  puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_IDisposable_TypeInfo,0);
LAB_034a7ba8:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_034a7bb4:
  plVar9 = (long *)(*(JHMENEKPIBO->klass->vtable)._51_get_Item.methodPtr)
                             (JHMENEKPIBO,StringLiteral_14757/*"Variations"*/,
                              (JHMENEKPIBO->klass->vtable)._51_get_Item.method);
  if ((plVar9 != (long *)0x0) &&
     (plVar9 = (long *)(**(code **)(*plVar9 + 0x208))(plVar9,*(undefined8 *)(*plVar9 + 0x210)),
     plVar9 != (long *)0x0)) {
    plVar9 = (long *)(**(code **)(*plVar9 + 0x1b8))(plVar9,*(undefined8 *)(*plVar9 + 0x1c0));
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar12 = *plVar9;
      uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar10 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_034a7c7c;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,0);
LAB_034a7c7c:
      uVar16 = (*(code *)*puVar10)(plVar9,puVar10[1]);
      if ((uVar16 & 1) == 0) {
        plVar9 = (long *)thunk_FUN_01bda71c(plVar9,System_IDisposable_TypeInfo);
        if (plVar9 == (long *)0x0) {
          return;
        }
        lVar12 = *plVar9;
        uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar16 == 0) goto LAB_034a7de4;
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        goto LAB_034a7dcc;
      }
      lVar12 = *plVar9;
      uVar16 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar16 != 0) {
        piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar17 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar10 = (undefined8 *)(lVar12 + (long)(*piVar17 + 1) * 0x10 + 0x138);
            goto LAB_034a7cdc;
          }
          uVar16 = uVar16 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar16 != 0);
      }
      puVar10 = (undefined8 *)FUN_01b81914(plVar9,System_Collections_IEnumerator_TypeInfo,1);
LAB_034a7cdc:
      pSVar11 = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (pSVar11 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
           ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar11);
        }
      }
      pSVar5 = *ppSVar18;
      __this_02 = (PFECHOJADFA_o *)thunk_FUN_01bda818(PFECHOJADFA_TypeInfo);
      PFECHOJADFA___ctor(__this_02,pSVar11,(MethodInfo *)0x0);
      lVar12 = Method_System_Collections_Generic_List<PFECHOJADFA>_Add__;
      if (pSVar5 == (System_Collections_Generic_List_PFECHOJADFA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pPVar15 = (pSVar5->fields)._items;
      (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
      if (pPVar15 == (PFECHOJADFA_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (pSVar5->fields)._size;
      if (uVar2 < (uint)pPVar15->max_length) {
        (pSVar5->fields)._size = uVar2 + 1;
        pPVar15->m_Items[(int)uVar2] = __this_02;
        thunk_FUN_01c20e04(pPVar15->m_Items + (int)uVar2,__this_02);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)__this_02,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
    } while( true );
  }
LAB_034a7e60:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

