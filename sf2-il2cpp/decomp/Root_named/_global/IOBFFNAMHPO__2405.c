// TypeDefIndex 2405
// Namespace: 
// public class IOBFFNAMHPO : QuestAction
// Fields:
//   private string JBNGADJBDHB; // 0x68

// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x3335BC4]
// IOBFFNAMHPO$$HNIHOIAMDPC @ RVA 0x3335BC4

void IOBFFNAMHPO__HNIHOIAMDPC
               (IOBFFNAMHPO_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_0456794a & 1) == 0) {
    FUN_01bab630(&StringLiteral_13991/*"Type"*/);
    DAT_0456794a = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                          (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_13991/*"Type"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).JBNGADJBDHB;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3335C5C]
// IOBFFNAMHPO$$.ctor @ RVA 0x3335C5C

void IOBFFNAMHPO___ctor(IOBFFNAMHPO_o *__this,MethodInfo *method)

{
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x3335C64]
// IOBFFNAMHPO$$MAHFCKJGBPP @ RVA 0x3335C64

void IOBFFNAMHPO__MAHFCKJGBPP(IOBFFNAMHPO_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if ((DAT_0456794b & 1) == 0) {
    FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&StringLiteral_10380/*"Postpone"*/);
    FUN_01bab630(&StringLiteral_6534/*"Force"*/);
    DAT_0456794b = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  pSVar2 = (__this->fields).JBNGADJBDHB;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = MFBNFJGBPBB__ACJKLBMNMEJ(MNBMHEAHIIA,pSVar2,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(pSVar2,StringLiteral_6534/*"Force"*/,(MethodInfo *)0x0);
  if (bVar1) {
    if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    EOOEOHKLOFJ__HJEPIFKKJEP((MethodInfo *)0x0);
  }
  else {
    bVar1 = System_String__op_Equality(pSVar2,StringLiteral_10380/*"Postpone"*/,(MethodInfo *)0x0);
    if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOOEOHKLOFJ_TypeInfo);
    }
    if (bVar1) {
      if (DAT_045679be == '\0') {
        FUN_01bab630(&EOOEOHKLOFJ_TypeInfo);
        DAT_045679be = '\x01';
      }
      if ((EOOEOHKLOFJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      EOOEOHKLOFJ_TypeInfo->static_fields->_FEFAAHBCPED_k__BackingField = true;
    }
    else {
      EOOEOHKLOFJ__CEMNLGBNNDO((MethodInfo *)0x0);
    }
  }
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

