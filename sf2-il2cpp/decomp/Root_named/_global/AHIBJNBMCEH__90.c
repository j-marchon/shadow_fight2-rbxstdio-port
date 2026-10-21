// TypeDefIndex 90
// Namespace: 
// public sealed class AHIBJNBMCEH : QuestAction
// Fields:
//   private string GJNGIKHEJJC; // 0x68

// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3000B50]
// AHIBJNBMCEH$$MAHFCKJGBPP @ RVA 0x3000B50

void AHIBJNBMCEH__MAHFCKJGBPP(AHIBJNBMCEH_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  LPGLKMNHELJ_o *__this_00;
  System_String_o *BCFJHEPFBOB;
  
  if ((DAT_04565b24 & 1) == 0) {
    FUN_01bab630(&LPGLKMNHELJ_TypeInfo);
    DAT_04565b24 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  BCFJHEPFBOB = (__this->fields).GJNGIKHEJJC;
  __this_00 = (LPGLKMNHELJ_o *)thunk_FUN_01bda818(LPGLKMNHELJ_TypeInfo);
  LPGLKMNHELJ___ctor(__this_00,BCFJHEPFBOB,false,false,(MethodInfo *)0x0);
  DialogsOpener__IPLAAIJEPOM(__this_00,(MethodInfo *)0x0);
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void PKIFMKGDJJN()  [RVA 0x3000BE4]
// AHIBJNBMCEH$$PKIFMKGDJJN @ RVA 0x3000BE4

void AHIBJNBMCEH__PKIFMKGDJJN(AHIBJNBMCEH_o *__this,MethodInfo *method)

{
  if ((DAT_04565b25 & 1) == 0) {
    FUN_01bab630(&Method_GCIFMNHADDF_ENOBJGKJMFC<LotteryDialog>__);
    DAT_04565b25 = 1;
  }
  QuestAction__PKIFMKGDJJN((QuestAction_o *)__this,(MethodInfo *)0x0);
  DialogsManager__ENOBJGKJMFC<object>(Method_GCIFMNHADDF_ENOBJGKJMFC<LotteryDialog>__);
  return;
}


// ===== public void .ctor()  [RVA 0x3000C34]
// AHIBJNBMCEH$$.ctor @ RVA 0x3000C34

void AHIBJNBMCEH___ctor(AHIBJNBMCEH_o *__this,MethodInfo *method)

{
  if ((DAT_04565b26 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_04565b26 = 1;
  }
  (__this->fields).GJNGIKHEJJC = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x3000C94]
// AHIBJNBMCEH$$HNIHOIAMDPC @ RVA 0x3000C94

void AHIBJNBMCEH__HNIHOIAMDPC
               (AHIBJNBMCEH_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04565b27 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_10877/*"RaidItemPackName"*/);
    DAT_04565b27 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_10877/*"RaidItemPackName"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM
                         (LBJNDMNEJJB,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).GJNGIKHEJJC;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

