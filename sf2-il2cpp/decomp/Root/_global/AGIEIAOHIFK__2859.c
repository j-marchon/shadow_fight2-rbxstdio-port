// TypeDefIndex 2859
// Namespace: 
// public class AGIEIAOHIFK : LMJFCEPILNI
// Fields:
//   private NILLKLHKLHG <JNIFJMNMCFA>k__BackingField; // 0x60

// ===== public void .ctor(AGIEIAOHIFK IBKIPBJJCPG)  [RVA 0x343A628]
// AGIEIAOHIFK$$.ctor @ RVA 0x343A628

void AGIEIAOHIFK___ctor(AGIEIAOHIFK_o *__this,AGIEIAOHIFK_o *IBKIPBJJCPG,MethodInfo *method)

{
  NILLKLHKLHG_o **ppNVar1;
  
                    /* try { // try from 0353a62c to 0363a633 has its CatchHandler @ 0353a634 */
                    /* catch() { ... } // from try @ 0353a5b8 with catch @ 0353a634
                       catch() { ... } // from try @ 0353a62c with catch @ 0353a634 */
  LMJFCEPILNI___ctor((LMJFCEPILNI_o *)__this,(LMJFCEPILNI_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (AGIEIAOHIFK_o *)0x0) {
    ppNVar1 = &(__this->fields)._JNIFJMNMCFA_k__BackingField;
    *ppNVar1 = (IBKIPBJJCPG->fields)._JNIFJMNMCFA_k__BackingField;
    thunk_FUN_01c20e04(ppNVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x343A660]
// AGIEIAOHIFK$$.ctor @ RVA 0x343A660

void AGIEIAOHIFK___ctor(AGIEIAOHIFK_o *__this,MethodInfo *method)

{
  LMJFCEPILNI___ctor((LMJFCEPILNI_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x343A668]
// AGIEIAOHIFK$$HNIHOIAMDPC @ RVA 0x343A668

void AGIEIAOHIFK__HNIHOIAMDPC
               (AGIEIAOHIFK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *CJNHFNHJHPE;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *JEIGFGPCGMM;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *FGLEGAOAEAO;
  NILLKLHKLHG_o *__this_01;
  NILLKLHKLHG_o **ppNVar2;
  
  if ((DAT_045681c9 & 1) == 0) {
    FUN_01bab630(&System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
    FUN_01bab630(&Method_HEFOANCOHDC_BJKIFFGGDEE__);
    FUN_01bab630(&Method_HEFOANCOHDC_GLHBJFHGHLC__);
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    FUN_01bab630(&StringLiteral_4476/*"Color"*/);
    DAT_045681c9 = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,0x1e,(MethodInfo *)0x0);
  ppNVar2 = &(__this->fields)._JNIFJMNMCFA_k__BackingField;
  *ppNVar2 = (NILLKLHKLHG_o *)0x0;
  thunk_FUN_01c20e04(ppNVar2,0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_4476/*"Color"*/,(MethodInfo *)0x0);
      CJNHFNHJHPE = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      JEIGFGPCGMM = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                    thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
      System_Action<object>___ctor();
      FGLEGAOAEAO = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                    thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
      System_Action<object>___ctor();
      __this_01 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
      NILLKLHKLHG___ctor(__this_01,CJNHFNHJHPE,JEIGFGPCGMM,FGLEGAOAEAO,(Il2CppObject *)__this,
                         (MethodInfo *)0x0);
      (__this->fields)._JNIFJMNMCFA_k__BackingField = __this_01;
      thunk_FUN_01c20e04(ppNVar2,__this_01);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public NILLKLHKLHG EMBBBGLKPNN()  [RVA 0x343A80C]
// AGIEIAOHIFK$$EMBBBGLKPNN @ RVA 0x343A80C

NILLKLHKLHG_o * AGIEIAOHIFK__EMBBBGLKPNN(AGIEIAOHIFK_o *__this,MethodInfo *method)

{
  return (__this->fields)._JNIFJMNMCFA_k__BackingField;
}


// ===== protected void IFPJGDKGGAO(NILLKLHKLHG CJNHFNHJHPE)  [RVA 0x343A814]
// AGIEIAOHIFK$$IFPJGDKGGAO @ RVA 0x343A814

void AGIEIAOHIFK__IFPJGDKGGAO(AGIEIAOHIFK_o *__this,NILLKLHKLHG_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._JNIFJMNMCFA_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void HLCMLOBHLDA(MMDDDDFHOLG.DOCBHLNBECF CPECAEHDDDB, bool LOPENELMPML)  [RVA 0x343A81C]
// AGIEIAOHIFK$$HLCMLOBHLDA @ RVA 0x343A81C

void AGIEIAOHIFK__HLCMLOBHLDA
               (AGIEIAOHIFK_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,bool LOPENELMPML,
               MethodInfo *method)

{
  NILLKLHKLHG_o *__this_00;
  MMFIDKMDADC_o *pMVar1;
  FCJBEKHDLAF_o *pFVar2;
  NHBBOEHHEKG_o *pNVar3;
  OLKKAIFGGAK_o *pOVar4;
  UnityEngine_Color_o EFJKPCADGJH;
  System_Nullable_Color__Fields local_48;
  
  if ((DAT_045681ca & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&StringLiteral_9171/*"ModelColor is not set"*/);
    DAT_045681ca = 1;
  }
  if (LOPENELMPML) {
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7f == '\0') {
      FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
      DAT_04565b7f = '\x01';
    }
    if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO == (FCJBEKHDLAF_o *)0x0) {
      return;
    }
    if (CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
      pOVar4 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7f == '\0') {
        FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
        DAT_04565b7f = '\x01';
      }
      if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pFVar2 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
      if (((pFVar2 != (FCJBEKHDLAF_o *)0x0) &&
          (pNVar3 = (pFVar2->fields).CNHHLPPHNCO, pNVar3 != (NHBBOEHHEKG_o *)0x0)) &&
         (pOVar4 != (OLKKAIFGGAK_o *)0x0)) {
        OLKKAIFGGAK__HLCMLOBHLDA
                  (pOVar4,(UnityEngine_Color_o)(pNVar3->fields).GLECOLINCIH.fields,false,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    __this_00 = (__this->fields)._JNIFJMNMCFA_k__BackingField;
    if (__this_00 == (NILLKLHKLHG_o *)0x0) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_9171/*"ModelColor is not set"*/,(MethodInfo *)0x0);
      return;
    }
    if (CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) {
      pOVar4 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
      pMVar1 = NILLKLHKLHG__CHKGAHCDFJF(__this_00,false,(MethodInfo *)0x0);
      if (pMVar1 != (MMFIDKMDADC_o *)0x0) {
        local_48.hasValue = false;
        local_48._1_3_ = 0;
        local_48.value.fields.r = 0.0;
        local_48.value.fields.g = 0.0;
        local_48.value.fields.b = 0.0;
        local_48.value.fields.a = 0.0;
        EFJKPCADGJH = CFBGPBCDAGA__HPBCENEFAMD
                                ((pMVar1->fields).HPACPFLKHPK,1.0,
                                 (System_Nullable_Color__o *)&local_48,(MethodInfo *)0x0);
        if (pOVar4 != (OLKKAIFGGAK_o *)0x0) {
          OLKKAIFGGAK__HLCMLOBHLDA(pOVar4,EFJKPCADGJH,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

