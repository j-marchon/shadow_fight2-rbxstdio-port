// TypeDefIndex 3292
// Namespace: 
// public class MFEIFNFICGK : LMJFCEPILNI
// Fields:
//   private float <KFFNNOLMECN>k__BackingField; // 0x60

// ===== public override void LLCONNGHGKD(MovesInFightVariables.DOCBHLNBECF CPECAEHDDDB)  [RVA 0x351DE6C]
// MFEIFNFICGK$$LLCONNGHGKD @ RVA 0x351DE6C

void MFEIFNFICGK__LLCONNGHGKD
               (MFEIFNFICGK_o *__this,MovesInFightVariables_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  Fight_o *__this_00;
  
                    /* try { // try from 0361de74 to 0371de7f has its CatchHandler @ 0361e034 */
                    /* try { // try from 0361de8c to 0371de97 has its CatchHandler @ 0361e048 */
  if ((DAT_045689a6 & 1) == 0) {
                    /* try { // try from 0361de98 to 0371dfff has its CatchHandler @ 0361dba4 */
    FUN_01bab630(&Fight_TypeInfo);
    DAT_045689a6 = 1;
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&Fight_TypeInfo);
    DAT_04565b7f = '\x01';
  }
  if ((Fight_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = Fight_TypeInfo->static_fields->IGABFCCGLCO;
  if (__this_00 != (Fight_o *)0x0) {
    if (CPECAEHDDDB != (MovesInFightVariables_DOCBHLNBECF_o *)0x0) {
      Fight__IKKHECKCEJC
                (__this_00,(CPECAEHDDDB->fields).HEMGHNOOJPI,
                 (__this->fields)._KFFNNOLMECN_k__BackingField,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public void .ctor(MFEIFNFICGK IBKIPBJJCPG)  [RVA 0x351DF2C]
// MFEIFNFICGK$$.ctor @ RVA 0x351DF2C

void MFEIFNFICGK___ctor(MFEIFNFICGK_o *__this,MFEIFNFICGK_o *IBKIPBJJCPG,MethodInfo *method)

{
  LMJFCEPILNI___ctor((LMJFCEPILNI_o *)__this,(LMJFCEPILNI_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (MFEIFNFICGK_o *)0x0) {
    (__this->fields)._KFFNNOLMECN_k__BackingField =
         (IBKIPBJJCPG->fields)._KFFNNOLMECN_k__BackingField;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x351DF60]
// MFEIFNFICGK$$.ctor @ RVA 0x351DF60

void MFEIFNFICGK___ctor(MFEIFNFICGK_o *__this,MethodInfo *method)

{
  LMJFCEPILNI___ctor((LMJFCEPILNI_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public float KFJCHIPHLJJ()  [RVA 0x351DF68]
// MFEIFNFICGK$$KFJCHIPHLJJ @ RVA 0x351DF68

float MFEIFNFICGK__KFJCHIPHLJJ(MFEIFNFICGK_o *__this,MethodInfo *method)

{
  return (__this->fields)._KFFNNOLMECN_k__BackingField;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x351DF70]
// MFEIFNFICGK$$HNIHOIAMDPC @ RVA 0x351DF70

void MFEIFNFICGK__HNIHOIAMDPC
               (MFEIFNFICGK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  float fVar1;
  
  if ((DAT_045689a7 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10202/*"PerFrameValue"*/);
    DAT_045689a7 = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,0xd,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_10202/*"PerFrameValue"*/,(MethodInfo *)0x0);
      fVar1 = EIABCPKDEBD__GICIEKCGOHA(LBJNDMNEJJB,0.0,(MethodInfo *)0x0);
      (__this->fields)._KFFNNOLMECN_k__BackingField = fVar1;
                    /* try { // try from 0361e000 to 0371e003 has its CatchHandler @ 0361e044 */
                    /* try { // try from 0361e004 to 0371e007 has its CatchHandler @ 0361e040 */
                    /* try { // try from 0361e008 to 0371e00b has its CatchHandler @ 0361e03c */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0361e00c to 0371e00f has its CatchHandler @ 0361e02c */
  FUN_01bab8c8();
}


// ===== protected void NPEDGPKCFLE(float CJNHFNHJHPE)  [RVA 0x351E010]
// MFEIFNFICGK$$NPEDGPKCFLE @ RVA 0x351E010

void MFEIFNFICGK__NPEDGPKCFLE(MFEIFNFICGK_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
                    /* try { // try from 0361e010 to 0371e013 has its CatchHandler @ 0361e024 */
  (__this->fields)._KFFNNOLMECN_k__BackingField = CJNHFNHJHPE;
                    /* try { // try from 0361e014 to 0371e017 has its CatchHandler @ 0361e020 */
  return;
}

