// TypeDefIndex 1880
// Namespace: 
// public class IMBJAEBFAJK : HJNEOLCKEMD
// Fields:
//   private string <CPLNJFPLOKA>k__BackingField; // 0x60
//   private string <KBHJMEBOEKO>k__BackingField; // 0x68

// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3250730]
// IMBJAEBFAJK$$HNIHOIAMDPC @ RVA 0x3250730

void IMBJAEBFAJK__HNIHOIAMDPC
               (IMBJAEBFAJK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *pSVar1;
  System_Xml_XmlAttribute_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if ((DAT_04567126 & 1) == 0) {
    FUN_01bab630(&StringLiteral_7631/*"IntervalName"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_7633/*"IntervalType"*/);
    DAT_04567126 = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,7,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    pSVar1 = (System_Xml_XmlAttributeCollection_o *)
             (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                       (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar1,StringLiteral_7631/*"IntervalName"*/,(MethodInfo *)0x0);
      pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      (__this->fields)._CPLNJFPLOKA_k__BackingField = pSVar3;
      thunk_FUN_01c20e04();
      pSVar1 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
      if (pSVar1 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar2 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar1,StringLiteral_7633/*"IntervalType"*/,(MethodInfo *)0x0);
        pSVar3 = EIABCPKDEBD__JPKEHIBGOEM(pSVar2,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        ppSVar4 = &(__this->fields)._KBHJMEBOEKO_k__BackingField;
        *ppSVar4 = pSVar3;
        thunk_FUN_01c20e04(ppSVar4,pSVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void ANGPKBJADID(string CJNHFNHJHPE)  [RVA 0x3250840]
// IMBJAEBFAJK$$ANGPKBJADID @ RVA 0x3250840

void IMBJAEBFAJK__ANGPKBJADID(IMBJAEBFAJK_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._CPLNJFPLOKA_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string ANKMCKFKBNK()  [RVA 0x3250848]
// IMBJAEBFAJK$$ANKMCKFKBNK @ RVA 0x3250848

System_String_o * IMBJAEBFAJK__ANKMCKFKBNK(IMBJAEBFAJK_o *__this,MethodInfo *method)

{
  return (__this->fields)._KBHJMEBOEKO_k__BackingField;
}


// ===== public void .ctor()  [RVA 0x3250850]
// IMBJAEBFAJK$$.ctor @ RVA 0x3250850

void IMBJAEBFAJK___ctor(IMBJAEBFAJK_o *__this,MethodInfo *method)

{
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected void MNIFCPADGLA(string CJNHFNHJHPE)  [RVA 0x3250858]
// IMBJAEBFAJK$$MNIFCPADGLA @ RVA 0x3250858

void IMBJAEBFAJK__MNIFCPADGLA(IMBJAEBFAJK_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._KBHJMEBOEKO_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string COMPFDDLDAB()  [RVA 0x3250860]
// IMBJAEBFAJK$$COMPFDDLDAB @ RVA 0x3250860

System_String_o * IMBJAEBFAJK__COMPFDDLDAB(IMBJAEBFAJK_o *__this,MethodInfo *method)

{
  return (__this->fields)._CPLNJFPLOKA_k__BackingField;
}


// ===== public void .ctor(IMBJAEBFAJK IBKIPBJJCPG)  [RVA 0x3250868]
// IMBJAEBFAJK$$.ctor @ RVA 0x3250868

void IMBJAEBFAJK___ctor(IMBJAEBFAJK_o *__this,IMBJAEBFAJK_o *IBKIPBJJCPG,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(HJNEOLCKEMD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (IMBJAEBFAJK_o *)0x0) {
    (__this->fields)._CPLNJFPLOKA_k__BackingField =
         (IBKIPBJJCPG->fields)._CPLNJFPLOKA_k__BackingField;
    thunk_FUN_01c20e04();
    ppSVar1 = &(__this->fields)._KBHJMEBOEKO_k__BackingField;
    *ppSVar1 = (IBKIPBJJCPG->fields)._KBHJMEBOEKO_k__BackingField;
    thunk_FUN_01c20e04(ppSVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

