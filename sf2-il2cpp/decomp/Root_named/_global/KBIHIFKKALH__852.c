// TypeDefIndex 852
// Namespace: 
// public class KBIHIFKKALH : QuestAction
// Fields:
//   private string CPGHPEGDAGN; // 0x68

// ===== protected override string OFPHPMGMCAL()  [RVA 0x3087FF4]
// KBIHIFKKALH$$OFPHPMGMCAL @ RVA 0x3087FF4

System_String_o * KBIHIFKKALH__OFPHPMGMCAL(KBIHIFKKALH_o *__this,MethodInfo *method)

{
  return (__this->fields).CPGHPEGDAGN;
}


// ===== public void .ctor()  [RVA 0x3087FFC]
// KBIHIFKKALH$$.ctor @ RVA 0x3087FFC

void KBIHIFKKALH___ctor(KBIHIFKKALH_o *__this,MethodInfo *method)

{
  FUN_03f935d8(DAT_0456602e);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x3088054]
// KBIHIFKKALH$$HNIHOIAMDPC @ RVA 0x3088054

void KBIHIFKKALH__HNIHOIAMDPC
               (KBIHIFKKALH_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_0456602f & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456602f = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                          (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).CPGHPEGDAGN;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x3088100]
// KBIHIFKKALH$$MAHFCKJGBPP @ RVA 0x3088100

void KBIHIFKKALH__MAHFCKJGBPP(KBIHIFKKALH_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  Roster_o *__this_00;
  System_String_o *pSVar1;
  
  if ((DAT_04566030 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566030 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
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
  pSVar1 = (__this->fields).CPGHPEGDAGN;
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = MFBNFJGBPBB__ACJKLBMNMEJ(MNBMHEAHIIA,pSVar1,(MethodInfo *)0x0);
  if (__this_00 != (Roster_o *)0x0) {
    Roster__LPFCJFIHKLG(__this_00,pSVar1,(MethodInfo *)0x0);
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

