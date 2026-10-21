// TypeDefIndex 2370
// Namespace: 
// public class JDJOEMLOACI : QuestAction
// Fields:
//   private string JFNNLEIIIFM; // 0x68

// ===== public void .ctor()  [RVA 0x332D210]
// JDJOEMLOACI$$.ctor @ RVA 0x332D210

void JDJOEMLOACI___ctor(JDJOEMLOACI_o *__this,MethodInfo *method)

{
  if ((DAT_045678e3 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_045678e3 = 1;
  }
  (__this->fields).JFNNLEIIIFM = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x332D270]
// JDJOEMLOACI$$MAHFCKJGBPP @ RVA 0x332D270

void JDJOEMLOACI__MAHFCKJGBPP(JDJOEMLOACI_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  int32_t BFGHCDJJJOO;
  long lVar2;
  System_String_o *OOGPLJBADCD;
  Nekki_SF2_GUI_Map_MapScene_o *__this_00;
  
  if ((DAT_045678e4 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_045678e4 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  OOGPLJBADCD = (__this->fields).JFNNLEIIIFM;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  BFGHCDJJJOO = MFBNFJGBPBB__JBAMHPFEPLG(AAJBIMFNMBB,OOGPLJBADCD,(MethodInfo *)0x0);
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620(lVar2);
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  __this_00 = (Nekki_SF2_GUI_Map_MapScene_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    if (__this_00 == (Nekki_SF2_GUI_Map_MapScene_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Map_MapScene__ChangeRaid(__this_00,BFGHCDJJJOO,(MethodInfo *)0x0);
  }
  QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x332D39C]
// JDJOEMLOACI$$HNIHOIAMDPC @ RVA 0x332D39C

void JDJOEMLOACI__HNIHOIAMDPC
               (JDJOEMLOACI_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045678e5 & 1) == 0) {
    FUN_01bab630(&StringLiteral_7467/*"Index"*/);
    DAT_045678e5 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_7467/*"Index"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).JFNNLEIIIFM;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

