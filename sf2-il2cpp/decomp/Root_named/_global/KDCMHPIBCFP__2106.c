// TypeDefIndex 2106
// Namespace: 
// public class KDCMHPIBCFP : HJNEOLCKEMD
// Fields:
//   private string <HGDGDPPIKIB>k__BackingField; // 0x60

// ===== public void .ctor(KDCMHPIBCFP IBKIPBJJCPG)  [RVA 0x32CCC7C]
// KDCMHPIBCFP$$.ctor @ RVA 0x32CCC7C

void KDCMHPIBCFP___ctor(KDCMHPIBCFP_o *__this,KDCMHPIBCFP_o *IBKIPBJJCPG,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(HJNEOLCKEMD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (KDCMHPIBCFP_o *)0x0) {
    ppSVar1 = &(__this->fields)._HGDGDPPIKIB_k__BackingField;
    *ppSVar1 = (IBKIPBJJCPG->fields)._HGDGDPPIKIB_k__BackingField;
    thunk_FUN_01c20e04(ppSVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x32CCCB4]
// KDCMHPIBCFP$$HNIHOIAMDPC @ RVA 0x32CCCB4

void KDCMHPIBCFP__HNIHOIAMDPC
               (KDCMHPIBCFP_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04567521 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567521 = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,5,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields)._HGDGDPPIKIB_k__BackingField;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32CCD70]
// KDCMHPIBCFP$$.ctor @ RVA 0x32CCD70

void KDCMHPIBCFP___ctor(KDCMHPIBCFP_o *__this,MethodInfo *method)

{
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string JAKNFKABEKA()  [RVA 0x32CCD78]
// KDCMHPIBCFP$$JAKNFKABEKA @ RVA 0x32CCD78

System_String_o * KDCMHPIBCFP__JAKNFKABEKA(KDCMHPIBCFP_o *__this,MethodInfo *method)

{
  return (__this->fields)._HGDGDPPIKIB_k__BackingField;
}


// ===== protected void HODGJOCCGMJ(string CJNHFNHJHPE)  [RVA 0x32CCD80]
// KDCMHPIBCFP$$HODGJOCCGMJ @ RVA 0x32CCD80

void KDCMHPIBCFP__HODGJOCCGMJ(KDCMHPIBCFP_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._HGDGDPPIKIB_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

