// TypeDefIndex 1295
// Namespace: 
// public class JECFCDCELIF : BOFEMGGNODC
// Fields:
//   private string NPFMOEOIEKM; // 0x68

// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x3154030]
// JECFCDCELIF$$HNIHOIAMDPC @ RVA 0x3154030

void JECFCDCELIF__HNIHOIAMDPC
               (JECFCDCELIF_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04566824 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566824 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                          (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).NPFMOEOIEKM;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31540DC]
// JECFCDCELIF$$.ctor @ RVA 0x31540DC

void JECFCDCELIF___ctor(JECFCDCELIF_o *__this,MethodInfo *method)

{
  if ((DAT_04566825 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566825 = 1;
  }
  (__this->fields).NPFMOEOIEKM = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x3154134]
// JECFCDCELIF$$MAHFCKJGBPP @ RVA 0x3154134

void JECFCDCELIF__MAHFCKJGBPP(JECFCDCELIF_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  NCNJEIBHGBH_o *__this_00;
  System_String_o *pSVar1;
  
  if ((DAT_04566826 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04566826 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).NPFMOEOIEKM;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MFBNFJGBPBB__ACJKLBMNMEJ(MNBMHEAHIIA,pSVar1,(MethodInfo *)0x0);
  __this_00 = NCNJEIBHGBH__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (NCNJEIBHGBH_o *)0x0) {
    NCNJEIBHGBH__JCDCJJMEAJA(__this_00,pSVar1,(MethodInfo *)0x0);
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override string OFPHPMGMCAL()  [RVA 0x31541DC]
// JECFCDCELIF$$OFPHPMGMCAL @ RVA 0x31541DC

System_String_o * JECFCDCELIF__OFPHPMGMCAL(JECFCDCELIF_o *__this,MethodInfo *method)

{
  return (__this->fields).NPFMOEOIEKM;
}

