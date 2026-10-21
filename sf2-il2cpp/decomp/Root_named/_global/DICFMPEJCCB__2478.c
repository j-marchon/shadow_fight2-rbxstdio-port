// TypeDefIndex 2478
// Namespace: 
// public class DICFMPEJCCB : QuestAction
// Fields:
//   private Color KBNCFNICOOG; // 0x64

// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x3372B98]
// DICFMPEJCCB$$MAHFCKJGBPP @ RVA 0x3372B98

void DICFMPEJCCB__MAHFCKJGBPP(DICFMPEJCCB_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  Roster_o *__this_00;
  
                    /* try { // try from 03472b98 to 03572bbf has its CatchHandler @ 03472f08 */
  if ((DAT_04567b35 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567b35 = 1;
  }
  QuestAction__MAHFCKJGBPP((QuestAction_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03472bf4 to 03572c1b has its CatchHandler @ 03472f04 */
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03472c28 to 03572c33 has its CatchHandler @ 03472ef8 */
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (Roster_o *)0x0) {
    Roster__CCHJLOEBOAI
              (__this_00,
               (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)&(__this->fields).super.field_0x54,
               (MethodInfo *)0x0);
                    /* try { // try from 03472c48 to 03572c4f has its CatchHandler @ 03472ef0 */
    QuestAction__FGNINNOOCCL((QuestAction_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x3372C60]
// DICFMPEJCCB$$HNIHOIAMDPC @ RVA 0x3372C60

void DICFMPEJCCB__HNIHOIAMDPC
               (DICFMPEJCCB_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *htmlString;
  
                    /* try { // try from 03472c60 to 03572c67 has its CatchHandler @ 03472ee0 */
  if ((DAT_04567b36 & 1) == 0) {
    FUN_01bab630(&StringLiteral_688/*"#FFFFFFFF"*/);
    FUN_01bab630(&StringLiteral_4476/*"Color"*/);
    DAT_04567b36 = 1;
  }
  QuestAction__HNIHOIAMDPC((QuestAction_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03472cb0 to 03572cbb has its CatchHandler @ 03472ed4 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                          (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 03472cd0 to 03572ce7 has its CatchHandler @ 03472ef4 */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_4476/*"Color"*/,(MethodInfo *)0x0);
      htmlString = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_688/*"#FFFFFFFF"*/,(MethodInfo *)0x0);
      UnityEngine_ColorUtility__TryParseHtmlString
                (htmlString,(UnityEngine_Color_o *)&(__this->fields).super.field_0x54,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3372D08]
// DICFMPEJCCB$$.ctor @ RVA 0x3372D08

void DICFMPEJCCB___ctor(DICFMPEJCCB_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  (__this->fields).KBNCFNICOOG.fields.g = (float)(int)auVar1._8_8_;
  (__this->fields).KBNCFNICOOG.fields.b = (float)(int)((ulong)auVar1._8_8_ >> 0x20);
  *(long *)&(__this->fields).super.field_0x54 = auVar1._0_8_;
  QuestAction___ctor((QuestAction_o *)__this,(MethodInfo *)0x0);
  return;
}

