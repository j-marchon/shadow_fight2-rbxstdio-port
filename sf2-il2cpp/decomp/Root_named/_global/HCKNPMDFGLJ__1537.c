// TypeDefIndex 1537
// Namespace: 
// public class HCKNPMDFGLJ : NKPJLEMPIKD
// Fields:
//   private string <COIPKAKHDFP>k__BackingField; // 0x30
//   private IntervalAnimation.IMLPLLLPALI <GMPAEDFIIHF>k__BackingField; // 0x38

// ===== public void .ctor()  [RVA 0x31A6D28]
// HCKNPMDFGLJ$$.ctor @ RVA 0x31A6D28

void HCKNPMDFGLJ___ctor(HCKNPMDFGLJ_o *__this,MethodInfo *method)

{
  NKPJLEMPIKD___ctor((NKPJLEMPIKD_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x31A6D30]
// HCKNPMDFGLJ$$KCHJCGEMCGE @ RVA 0x31A6D30

System_String_o * HCKNPMDFGLJ__KCHJCGEMCGE(HCKNPMDFGLJ_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x31A6D38]
// HCKNPMDFGLJ$$HNIHOIAMDPC @ RVA 0x31A6D38

void HCKNPMDFGLJ__HNIHOIAMDPC
               (HCKNPMDFGLJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *pSVar4;
  
  if ((DAT_04566b16 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566b16 = 1;
  }
  NKPJLEMPIKD__HNIHOIAMDPC((NKPJLEMPIKD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields)._COIPKAKHDFP_k__BackingField = pSVar4;
      thunk_FUN_01c20e04();
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        iVar1 = IntervalAnimation__PKKPCLFNEDC(pSVar4,(MethodInfo *)0x0);
        (__this->fields)._GMPAEDFIIHF_k__BackingField = iVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool EPBENPDCBFE(NKPJLEMPIKD.GBBCKIANDCN PHCGJGCHKCM)  [RVA 0x31A6E38]
// HCKNPMDFGLJ$$EPBENPDCBFE @ RVA 0x31A6E38

bool HCKNPMDFGLJ__EPBENPDCBFE
               (HCKNPMDFGLJ_o *__this,NKPJLEMPIKD_GBBCKIANDCN_o *PHCGJGCHKCM,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  IntervalAnimation_o *__this_00;
  
  if ((DAT_04566b17 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_object>_TypeInfo);
    FUN_01bab630(&IntervalAnimation_TypeInfo);
    FUN_01bab630(&StringLiteral_7628/*"Interval"*/);
    DAT_04566b17 = 1;
  }
  bVar2 = NKPJLEMPIKD__EPBENPDCBFE((NKPJLEMPIKD_o *)__this,PHCGJGCHKCM,(MethodInfo *)0x0);
  if (PHCGJGCHKCM == (NKPJLEMPIKD_GBBCKIANDCN_o *)0x0) {
    return false;
  }
  if (!bVar2) {
    return false;
  }
  __this_00 = (IntervalAnimation_o *)(PHCGJGCHKCM->fields).IGMDDJFPIJL;
  if (__this_00 != (IntervalAnimation_o *)0x0) {
    bVar1 = (System_Collections_Generic_Dictionary<string,_object>_TypeInfo->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Collections_Generic_Dictionary<string,_object>_TypeInfo)) {
LAB_032a6fc8:
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(__this_00);
    }
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                       StringLiteral_7628/*"Interval"*/,
                       Method_System_Collections_Generic_Dictionary<string,_object>_ContainsKey__);
    if (bVar2) {
      __this_00 = (IntervalAnimation_o *)
                  System_Collections_Generic_Dictionary<object,_object>__get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                             StringLiteral_7628/*"Interval"*/,
                             Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__
                            );
      if (__this_00 == (IntervalAnimation_o *)0x0) {
        return false;
      }
      bVar1 = (IntervalAnimation_TypeInfo->_2).naturalAligment;
      if (((__this_00->klass->_2).naturalAligment < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)IntervalAnimation_TypeInfo)) goto LAB_032a6fc8;
      bVar2 = PCOEHCPGBBG__BDLEIEHBFAD
                        ((__this->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
      if (((bVar2) ||
          (bVar2 = System_String__op_Inequality
                             ((__this_00->fields).JIJLBFGKNJK,
                              (__this->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0),
          !bVar2)) &&
         (((__this->fields)._GMPAEDFIIHF_k__BackingField == 0 ||
          (iVar3 = IntervalAnimation__NHGGBEACKBD(__this_00,(MethodInfo *)0x0),
          iVar3 == (__this->fields)._GMPAEDFIIHF_k__BackingField)))) {
        return true;
      }
    }
  }
  return false;
}


// ===== protected void GNLPNKGBAFL(IntervalAnimation.IMLPLLLPALI CJNHFNHJHPE)  [RVA 0x31A6FD0]
// HCKNPMDFGLJ$$GNLPNKGBAFL @ RVA 0x31A6FD0

void HCKNPMDFGLJ__GNLPNKGBAFL(HCKNPMDFGLJ_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GMPAEDFIIHF_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor(HCKNPMDFGLJ IBKIPBJJCPG)  [RVA 0x31A6FD8]
// HCKNPMDFGLJ$$.ctor @ RVA 0x31A6FD8

void HCKNPMDFGLJ___ctor(HCKNPMDFGLJ_o *__this,HCKNPMDFGLJ_o *IBKIPBJJCPG,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  NKPJLEMPIKD___ctor((NKPJLEMPIKD_o *)__this,(NKPJLEMPIKD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (HCKNPMDFGLJ_o *)0x0) {
    ppSVar1 = &(__this->fields)._COIPKAKHDFP_k__BackingField;
    *ppSVar1 = (IBKIPBJJCPG->fields)._COIPKAKHDFP_k__BackingField;
    thunk_FUN_01c20e04(ppSVar1);
    (__this->fields)._GMPAEDFIIHF_k__BackingField =
         (IBKIPBJJCPG->fields)._GMPAEDFIIHF_k__BackingField;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public IntervalAnimation.IMLPLLLPALI NHGGBEACKBD()  [RVA 0x31A701C]
// HCKNPMDFGLJ$$NHGGBEACKBD @ RVA 0x31A701C

int32_t HCKNPMDFGLJ__NHGGBEACKBD(HCKNPMDFGLJ_o *__this,MethodInfo *method)

{
  return (__this->fields)._GMPAEDFIIHF_k__BackingField;
}


// ===== protected void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x31A7024]
// HCKNPMDFGLJ$$HCOCAAIGNNL @ RVA 0x31A7024

void HCKNPMDFGLJ__HCOCAAIGNNL(HCKNPMDFGLJ_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

