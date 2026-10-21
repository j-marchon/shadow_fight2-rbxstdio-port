// TypeDefIndex 385
// Namespace: 
// public class IAGKPNAGKLA : NKPJLEMPIKD
// Fields:
//   private string <MMNODECCMJK>k__BackingField; // 0x30
//   private string <HFALHOCIDCH>k__BackingField; // 0x38

// ===== protected void KACADBDLMLK(string CJNHFNHJHPE)  [RVA 0x347D344]
// IAGKPNAGKLA$$KACADBDLMLK @ RVA 0x347D344

void IAGKPNAGKLA__KACADBDLMLK(IAGKPNAGKLA_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._MMNODECCMJK_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public override bool EPBENPDCBFE(NKPJLEMPIKD.GBBCKIANDCN PHCGJGCHKCM)  [RVA 0x347D34C]
// IAGKPNAGKLA$$EPBENPDCBFE @ RVA 0x347D34C

/* WARNING: Type propagation algorithm not settling */

bool IAGKPNAGKLA__EPBENPDCBFE
               (IAGKPNAGKLA_o *__this,NKPJLEMPIKD_GBBCKIANDCN_o *PHCGJGCHKCM,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_String_o *pSVar3;
  HEFOANCOHDC_o *pHVar4;
  HEFOANCOHDC_o *value;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04568362 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&HEFOANCOHDC_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_9146/*"ModExpires"*/);
    FUN_01bab630(&StringLiteral_10142/*"ParentPerk"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568362 = 1;
  }
  pSVar3 = (__this->fields)._HFALHOCIDCH_k__BackingField;
                    /* try { // try from 0357d3f0 to 0367d5fb has its CatchHandler @ 0357d3f0
                       catch() { ... } // from try @ 0357d3f0 with catch @ 0357d3f0
                       catch() { ... } // from try @ 0357d9ac with catch @ 0357d3f0
                       catch() { ... } // from try @ 0357da58 with catch @ 0357d3f0
                       catch() { ... } // from try @ 0357da60 with catch @ 0357d3f0
                       catch() { ... } // from try @ 0357dbc8 with catch @ 0357d3f0 */
  if ((pSVar3 == (System_String_o *)0x0) ||
     (bVar2 = System_String__op_Equality(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0), bVar2)) {
    bVar2 = NKPJLEMPIKD__EPBENPDCBFE((NKPJLEMPIKD_o *)__this,PHCGJGCHKCM,(MethodInfo *)0x0);
    if (PHCGJGCHKCM == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) {
      return false;
    }
    if (!bVar2) {
      return false;
    }
    if ((PHCGJGCHKCM->fields).IGMDDJFPIJL == (Il2CppObject *)0x0) {
      return false;
    }
  }
  else {
    if ((PHCGJGCHKCM == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) ||
       (pSVar3 = (__this->fields)._HFALHOCIDCH_k__BackingField, pSVar3 == (System_String_o *)0x0))
    goto LAB_0357d5b4;
    bVar2 = System_String__Equals(pSVar3,(PHCGJGCHKCM->fields).BFBIEPIDBON,(MethodInfo *)0x0);
    if (bVar2) {
      return false;
    }
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (PHCGJGCHKCM->fields).IGMDDJFPIJL;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = (System_Collections_Generic_Dictionary<string,_object>_TypeInfo->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Collections_Generic_Dictionary<string,_object>_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(__this_00);
    }
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this_00,StringLiteral_9146/*"ModExpires"*/,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar2) {
      pHVar4 = (HEFOANCOHDC_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (__this_00,StringLiteral_9146/*"ModExpires"*/,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      value = pHVar4;
      if ((pHVar4 != (HEFOANCOHDC_o *)0x0) && ((System_String_c *)pHVar4->klass != string_TypeInfo))
      goto LAB_0357d550;
    }
    else {
      value = (HEFOANCOHDC_o *)0x0;
    }
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this_00,StringLiteral_10142/*"ParentPerk"*/,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar2) {
      pHVar4 = (HEFOANCOHDC_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (__this_00,StringLiteral_10142/*"ParentPerk"*/,
                          Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
      if (pHVar4 != (HEFOANCOHDC_o *)0x0) {
        bVar1 = (HEFOANCOHDC_TypeInfo->_2).naturalAligment;
        if (((pHVar4->klass->_2).naturalAligment < bVar1) ||
           ((pHVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)HEFOANCOHDC_TypeInfo)) {
LAB_0357d550:
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pHVar4);
        }
      }
    }
    else {
      pHVar4 = (HEFOANCOHDC_o *)0x0;
    }
    if (pHVar4 == (__this->fields).super.super._MEFGNAIILBJ_k__BackingField) {
      pSVar3 = (__this->fields)._MMNODECCMJK_k__BackingField;
      if ((pSVar3 != (System_String_o *)0x0) &&
         (bVar2 = System_String__op_Equality(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0), !bVar2)) {
        pSVar3 = (__this->fields)._MMNODECCMJK_k__BackingField;
        if (pSVar3 == (System_String_o *)0x0) {
LAB_0357d5b4:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__Equals(pSVar3,(System_String_o *)value,(MethodInfo *)0x0);
        if (!bVar2) {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}


// ===== public void .ctor()  [RVA 0x347D5C0]
// IAGKPNAGKLA$$.ctor @ RVA 0x347D5C0

void IAGKPNAGKLA___ctor(IAGKPNAGKLA_o *__this,MethodInfo *method)

{
  NKPJLEMPIKD___ctor((NKPJLEMPIKD_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x347D5C8]
// IAGKPNAGKLA$$HNIHOIAMDPC @ RVA 0x347D5C8

void IAGKPNAGKLA__HNIHOIAMDPC
               (IAGKPNAGKLA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04568363 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9345/*"Namespace"*/);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
                    /* try { // try from 0357d5fc to 0367d623 has its CatchHandler @ 0357db34 */
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568363 = 1;
  }
  NKPJLEMPIKD__HNIHOIAMDPC((NKPJLEMPIKD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
                    /* try { // try from 0357d660 to 0367d687 has its CatchHandler @ 0357db30 */
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields)._MMNODECCMJK_k__BackingField = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0357d69c to 0367d6ab has its CatchHandler @ 0357db38 */
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_9345/*"Namespace"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields)._HFALHOCIDCH_k__BackingField;
        *ppSVar4 = pSVar3;
                    /* try { // try from 0357d6bc to 0367d6c3 has its CatchHandler @ 0357db0c */
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string NEDAGPLPFMA()  [RVA 0x347D6C8]
// IAGKPNAGKLA$$NEDAGPLPFMA @ RVA 0x347D6C8

System_String_o * IAGKPNAGKLA__NEDAGPLPFMA(IAGKPNAGKLA_o *__this,MethodInfo *method)

{
                    /* try { // try from 0357d6cc to 0367d6d3 has its CatchHandler @ 0357db2c */
  return (__this->fields)._HFALHOCIDCH_k__BackingField;
}


// ===== protected void HNGMIJDOPMG(string CJNHFNHJHPE)  [RVA 0x347D6D0]
// IAGKPNAGKLA$$HNGMIJDOPMG @ RVA 0x347D6D0

void IAGKPNAGKLA__HNGMIJDOPMG(IAGKPNAGKLA_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HFALHOCIDCH_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor(IAGKPNAGKLA IBKIPBJJCPG)  [RVA 0x347D6D8]
// IAGKPNAGKLA$$.ctor @ RVA 0x347D6D8

void IAGKPNAGKLA___ctor(IAGKPNAGKLA_o *__this,IAGKPNAGKLA_o *IBKIPBJJCPG,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
                    /* try { // try from 0357d6e4 to 0367d6eb has its CatchHandler @ 0357db10 */
  NKPJLEMPIKD___ctor((NKPJLEMPIKD_o *)__this,(NKPJLEMPIKD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
                    /* try { // try from 0357d6f0 to 0367d6f7 has its CatchHandler @ 0357db20 */
  if (IBKIPBJJCPG != (IAGKPNAGKLA_o *)0x0) {
    (__this->fields)._MMNODECCMJK_k__BackingField =
         (IBKIPBJJCPG->fields)._MMNODECCMJK_k__BackingField;
    thunk_FUN_01c20e04();
    ppSVar1 = &(__this->fields)._HFALHOCIDCH_k__BackingField;
                    /* try { // try from 0357d708 to 0367d70f has its CatchHandler @ 0357db28 */
    *ppSVar1 = (IBKIPBJJCPG->fields)._HFALHOCIDCH_k__BackingField;
                    /* try { // try from 0357d710 to 0367d723 has its CatchHandler @ 0357db08 */
    thunk_FUN_01c20e04(ppSVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string HKFFLJHPOLM()  [RVA 0x347D720]
// IAGKPNAGKLA$$HKFFLJHPOLM @ RVA 0x347D720

System_String_o * IAGKPNAGKLA__HKFFLJHPOLM(IAGKPNAGKLA_o *__this,MethodInfo *method)

{
  return (__this->fields)._MMNODECCMJK_k__BackingField;
}

