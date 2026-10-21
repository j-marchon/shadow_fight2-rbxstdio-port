// TypeDefIndex 3368
// Namespace: 
// public class IHDMJONELHA : BOFEMGGNODC
// Fields:
//   private string FDGJPLBDOIA; // 0x68

// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL AAJBIMFNMBB)  [RVA 0x353EBAC]
// IHDMJONELHA$$MAHFCKJGBPP @ RVA 0x353EBAC

void IHDMJONELHA__MAHFCKJGBPP(IHDMJONELHA_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar2;
  
  if ((DAT_04568ae1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ae1 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  KFCFGKEHPNK__LKMPIPHGNKF((__this->fields).FDGJPLBDOIA,(MethodInfo *)0x0);
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
    DAT_04565b84 = '\x01';
  }
  pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0363ec54 to 0373ec7b has its CatchHandler @ 0363f01c */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if (pNVar2 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
      Nekki_SF2_GUI_Menu_MainMenu__UpdateMenu(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0363ecb0 to 0373ecdb has its CatchHandler @ 0363f018 */
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode NPLGCIFGFOK)  [RVA 0x353ECBC]
// IHDMJONELHA$$HNIHOIAMDPC @ RVA 0x353ECBC

void IHDMJONELHA__HNIHOIAMDPC
               (IHDMJONELHA_o *__this,System_Xml_XmlNode_o *NPLGCIFGFOK,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04568ae2 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568ae2 = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,NPLGCIFGFOK,(MethodInfo *)0x0);
  if (NPLGCIFGFOK != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.methodPtr)
                          (NPLGCIFGFOK,(NPLGCIFGFOK->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 0363ed24 to 0373ed33 has its CatchHandler @ 0363f028 */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).FDGJPLBDOIA;
      *ppSVar2 = pSVar1;
                    /* try { // try from 0363ed50 to 0373ed5b has its CatchHandler @ 0363eff4 */
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0363ed64 to 0373ed6f has its CatchHandler @ 0363f004 */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x353ED68]
// IHDMJONELHA$$.ctor @ RVA 0x353ED68

void IHDMJONELHA___ctor(IHDMJONELHA_o *__this,MethodInfo *method)

{
  if ((DAT_04568ae3 & 1) == 0) {
                    /* try { // try from 0363ed88 to 0373ed93 has its CatchHandler @ 0363f010 */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 0363ed98 to 0373eda3 has its CatchHandler @ 0363eff0 */
    DAT_04568ae3 = 1;
  }
  (__this->fields).FDGJPLBDOIA = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
                    /* try { // try from 0363edb0 to 0373edb7 has its CatchHandler @ 0363f00c */
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

