// TypeDefIndex 938
// Namespace: 
// public class CHKKPKKBBPL : HJNEOLCKEMD
// Fields:
//   private string <KLPGIMMAKPE>k__BackingField; // 0x60

// ===== public void .ctor(CHKKPKKBBPL IBKIPBJJCPG)  [RVA 0x30A748C]
// CHKKPKKBBPL$$.ctor @ RVA 0x30A748C

void CHKKPKKBBPL___ctor(CHKKPKKBBPL_o *__this,CHKKPKKBBPL_o *IBKIPBJJCPG,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(HJNEOLCKEMD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (CHKKPKKBBPL_o *)0x0) {
    ppSVar1 = &(__this->fields)._KLPGIMMAKPE_k__BackingField;
    *ppSVar1 = (IBKIPBJJCPG->fields)._KLPGIMMAKPE_k__BackingField;
    thunk_FUN_01c20e04(ppSVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30A74C4]
// CHKKPKKBBPL$$.ctor @ RVA 0x30A74C4

void CHKKPKKBBPL___ctor(CHKKPKKBBPL_o *__this,MethodInfo *method)

{
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x30A74CC]
// CHKKPKKBBPL$$HNIHOIAMDPC @ RVA 0x30A74CC

void CHKKPKKBBPL__HNIHOIAMDPC
               (CHKKPKKBBPL_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_0456617c & 1) == 0) {
    FUN_01bab630(&StringLiteral_13924/*"Trigger"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456617c = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,0xe,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_13924/*"Trigger"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields)._KLPGIMMAKPE_k__BackingField;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string PLCAMBEKFKH()  [RVA 0x30A7588]
// CHKKPKKBBPL$$PLCAMBEKFKH @ RVA 0x30A7588

System_String_o * CHKKPKKBBPL__PLCAMBEKFKH(CHKKPKKBBPL_o *__this,MethodInfo *method)

{
  return (__this->fields)._KLPGIMMAKPE_k__BackingField;
}


// ===== protected void NDKGLMJFJGP(string CJNHFNHJHPE)  [RVA 0x30A7590]
// CHKKPKKBBPL$$NDKGLMJFJGP @ RVA 0x30A7590

void CHKKPKKBBPL__NDKGLMJFJGP(CHKKPKKBBPL_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._KLPGIMMAKPE_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

