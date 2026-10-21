// TypeDefIndex 1068
// Namespace: 
// public class NCIDPNGDKEC : QuestAction
// Fields:
//   private MKIBNAAANPO.AJLHACNHDHD HBJOMJOOBMH; // 0x64
//   private string IAJBEJGMIMM; // 0x68
//   private bool POPDEICKPLE; // 0x70

// ===== public void .ctor()  [RVA 0x30DC164]
// NCIDPNGDKEC$$.ctor @ RVA 0x30DC164

void NCIDPNGDKEC___ctor(NCIDPNGDKEC_o *__this,MethodInfo *method)

{
  if ((DAT_0456635d & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456635d = 1;
  }
  *(undefined8 *)&(__this->fields).HBJOMJOOBMH = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  *(undefined1 *)&(__this->fields).IAJBEJGMIMM = 1;
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL OKBIKHHKOEN)  [RVA 0x30DC1C4]
// NCIDPNGDKEC$$MAHFCKJGBPP @ RVA 0x30DC1C4

void NCIDPNGDKEC__MAHFCKJGBPP(NCIDPNGDKEC_o *__this,PKHMIGFEJCL_o *OKBIKHHKOEN,MethodInfo *method)

{
  MEJIKMPNBNL_o *BHHBEIACGPB;
  MKIBNAAANPO_o *pMVar1;
  MethodInfo *in_x3;
  MethodInfo *in_x4;
  System_String_o *pSVar2;
  
  if ((DAT_0456635e & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456635e = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,OKBIKHHKOEN,(MethodInfo *)0x0);
  if (*(int *)&(__this->fields).super.field_0x54 == 1) {
    pSVar2 = *(System_String_o **)&(__this->fields).HBJOMJOOBMH;
    if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = MFBNFJGBPBB__HAKLDDOPIAF(OKBIKHHKOEN,pSVar2,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    BHHBEIACGPB = NLPJLHOEAOE__KHHBHBLIANB(pSVar2,(MethodInfo *)0x0);
    if (BHHBEIACGPB != (MEJIKMPNBNL_o *)0x0) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_045663a7 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_045663a7 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pMVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_JLCHCNLLPEC_k__BackingField;
      if (pMVar1 == (MKIBNAAANPO_o *)0x0) goto LAB_031dc360;
      MKIBNAAANPO__LEDDOEKOGHA
                (pMVar1,BHHBEIACGPB,*(int32_t *)&(__this->fields).super.field_0x54,
                 *(bool *)&(__this->fields).IAJBEJGMIMM,in_x4);
    }
  }
  else {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_045663a7 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_045663a7 = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_JLCHCNLLPEC_k__BackingField;
    if (pMVar1 == (MKIBNAAANPO_o *)0x0) {
LAB_031dc360:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    MKIBNAAANPO__CMHINFFLEDJ
              (pMVar1,*(int32_t *)&(__this->fields).super.field_0x54,
               *(bool *)&(__this->fields).IAJBEJGMIMM,in_x3);
  }
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x30DC364]
// NCIDPNGDKEC$$HNIHOIAMDPC @ RVA 0x30DC364

void NCIDPNGDKEC__HNIHOIAMDPC
               (NCIDPNGDKEC_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Xml_XmlAttributeCollection_o *pSVar3;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  
  if ((DAT_0456635f & 1) == 0) {
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<MKIBNAAANPO_AJLHACNHDHD>__);
    FUN_01bab630(&StringLiteral_11152/*"RefreshTutorialBattle"*/);
    FUN_01bab630(&StringLiteral_15308/*"Zone"*/);
    FUN_01bab630(&StringLiteral_13924/*"Trigger"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456635f = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    pSVar3 = (System_Xml_XmlAttributeCollection_o *)
             (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                       (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar3,StringLiteral_13924/*"Trigger"*/,(MethodInfo *)0x0);
      iVar2 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                        (pSVar4,0,Method_EIABCPKDEBD_CKHGJBKDIID<MKIBNAAANPO_AJLHACNHDHD>__);
      *(int32_t *)&(__this->fields).super.field_0x54 = iVar2;
      pSVar3 = (System_Xml_XmlAttributeCollection_o *)
               (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                         (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
      if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar3,StringLiteral_15308/*"Zone"*/,(MethodInfo *)0x0);
        pSVar5 = EIABCPKDEBD__JPKEHIBGOEM(pSVar4,StringLiteral_1/*""*/,(MethodInfo *)0x0);
        *(System_String_o **)&(__this->fields).HBJOMJOOBMH = pSVar5;
        thunk_FUN_01c20e04();
        pSVar3 = (System_Xml_XmlAttributeCollection_o *)
                 (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                           (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
        if (pSVar3 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar3,StringLiteral_11152/*"RefreshTutorialBattle"*/,(MethodInfo *)0x0);
          bVar1 = EIABCPKDEBD__FMBMNDIGLIG(pSVar4,true,(MethodInfo *)0x0);
          *(bool *)&(__this->fields).IAJBEJGMIMM = bVar1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

