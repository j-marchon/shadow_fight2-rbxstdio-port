// TypeDefIndex 2013
// Namespace: 
// public class LKHLBHNHPNJ : QuestAction
// Fields:
//   private string MOMNHMKOKAN; // 0x68

// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x3297A4C]
// LKHLBHNHPNJ$$MAHFCKJGBPP @ RVA 0x3297A4C

void LKHLBHNHPNJ__MAHFCKJGBPP(LKHLBHNHPNJ_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  bool bVar1;
  AAPGCAPGBLG_o *__this_00;
  PKHMIGFEJCL_o *HLAGOHADLKH;
  System_String_o *pSVar2;
  
  if ((DAT_04567373 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    DAT_04567373 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  HLAGOHADLKH = (__this->fields).super.IJOKKFKPBEP;
  pSVar2 = (__this->fields).MOMNHMKOKAN;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = MFBNFJGBPBB__ACJKLBMNMEJ(HLAGOHADLKH,pSVar2,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = AAPGCAPGBLG__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 == (AAPGCAPGBLG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    AAPGCAPGBLG__JIIBNJFDICI(__this_00,pSVar2,true,(MethodInfo *)0x0);
  }
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x3297B08]
// LKHLBHNHPNJ$$HNIHOIAMDPC @ RVA 0x3297B08

void LKHLBHNHPNJ__HNIHOIAMDPC
               (LKHLBHNHPNJ_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04567374 & 1) == 0) {
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567374 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).MOMNHMKOKAN;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3297BB4]
// LKHLBHNHPNJ$$.ctor @ RVA 0x3297BB4

void LKHLBHNHPNJ___ctor(LKHLBHNHPNJ_o *__this,MethodInfo *method)

{
  if ((DAT_04567375 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567375 = 1;
  }
  (__this->fields).MOMNHMKOKAN = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

