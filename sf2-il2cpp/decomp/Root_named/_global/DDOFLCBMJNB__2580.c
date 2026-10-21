// TypeDefIndex 2580
// Namespace: 
// public class DDOFLCBMJNB : QuestAction
// Fields:
//   private string EPANJLBKHHC; // 0x68

// ===== protected override string OFPHPMGMCAL()  [RVA 0x33A1F28]
// DDOFLCBMJNB$$OFPHPMGMCAL @ RVA 0x33A1F28

System_String_o * DDOFLCBMJNB__OFPHPMGMCAL(DDOFLCBMJNB_o *__this,MethodInfo *method)

{
  return (__this->fields).EPANJLBKHHC;
}


// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x33A1F30]
// DDOFLCBMJNB$$HNIHOIAMDPC @ RVA 0x33A1F30

void DDOFLCBMJNB__HNIHOIAMDPC
               (DDOFLCBMJNB_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04567cc0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9830/*"On"*/);
    FUN_01bab630(&StringLiteral_13847/*"Toggle"*/);
    DAT_04567cc0 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                          (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_13847/*"Toggle"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_9830/*"On"*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).EPANJLBKHHC;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x33A1FDC]
// DDOFLCBMJNB$$.ctor @ RVA 0x33A1FDC

void DDOFLCBMJNB___ctor(DDOFLCBMJNB_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x33A1FE4]
// DDOFLCBMJNB$$MAHFCKJGBPP @ RVA 0x33A1FE4

void DDOFLCBMJNB__MAHFCKJGBPP(DDOFLCBMJNB_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  FUN_03f93a28(DAT_04567cc1);
  return;
}

