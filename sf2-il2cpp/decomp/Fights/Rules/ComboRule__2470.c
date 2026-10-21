// Original name: Nekki.SF2.Core.Fights.Rules.ComboRule  (obfuscated HHCPHEMFLGO)
// TypeDefIndex 2470
// Namespace: 
// public class ComboRule : DGCPNJOFKON
// Fields:
//   private int KNJNHJJNHKN; // 0x6C

// ===== public void .ctor(XmlNode AHDGNOJPPIB, HEDFKJBDBFN HEHMPFLAEGE)  [RVA 0x33719A8]
// ComboRule$$.ctor @ RVA 0x33719A8

void ComboRule___ctor(ComboRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  ComboRule_c *pHVar1;
  
  DGCPNJOFKON___ctor((DGCPNJOFKON_o *)__this,AHDGNOJPPIB,HEHMPFLAEGE,0x10,(MethodInfo *)0x0);
  pHVar1 = __this->klass;
  *(undefined4 *)&(__this->fields).super.super.field_0x5c = 0;
  (__this->fields).super.super.EGBPMNKKPFI = false;
  (*(pHVar1->vtable)._12_HNIHOIAMDPC.methodPtr)
            (__this,AHDGNOJPPIB,(pHVar1->vtable)._12_HNIHOIAMDPC.method);
  InFightRule__DENNGFKNHKO((InFightRule_o *)__this,0xb,(MethodInfo *)0x0);
  return;
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x33719F8]
// ComboRule$$HNIHOIAMDPC @ RVA 0x33719F8

void ComboRule__HNIHOIAMDPC
               (ComboRule_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  
                    /* try { // try from 03471a00 to 03571a03 has its CatchHandler @ 03471b24 */
                    /* try { // try from 03471a04 to 03571a07 has its CatchHandler @ 03471b10 */
                    /* try { // try from 03471a08 to 03571a0b has its CatchHandler @ 03471b0c */
                    /* try { // try from 03471a0c to 03571a0f has its CatchHandler @ 03471b08 */
                    /* try { // try from 03471a10 to 03571a13 has its CatchHandler @ 03471b24 */
  if ((DAT_04567b25 & 1) == 0) {
                    /* try { // try from 03471a14 to 03571a17 has its CatchHandler @ 03471b04 */
                    /* try { // try from 03471a18 to 03571a1b has its CatchHandler @ 034714a4 */
                    /* try { // try from 03471a1c to 03571a1f has its CatchHandler @ 03471a90 */
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
                    /* try { // try from 03471a20 to 03571a23 has its CatchHandler @ 03471a84 */
                    /* try { // try from 03471a24 to 03571a2b has its CatchHandler @ 03471a88 */
    DAT_04567b25 = 1;
  }
                    /* try { // try from 03471a2c to 03571a2f has its CatchHandler @ 03471a80 */
                    /* try { // try from 03471a30 to 03571a33 has its CatchHandler @ 03471a68 */
                    /* try { // try from 03471a34 to 03571a37 has its CatchHandler @ 03471a64 */
  Rule__HNIHOIAMDPC((Rule_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
                    /* try { // try from 03471a38 to 03571a3b has its CatchHandler @ 03471a80 */
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03471a3c to 03571a3f has its CatchHandler @ 03471a5c */
                    /* try { // try from 03471a40 to 03571a47 has its CatchHandler @ 03471a78 */
                    /* try { // try from 03471a48 to 03571a4b has its CatchHandler @ 03471a4c */
                    /* catch() { ... } // from try @ 03471a48 with catch @ 03471a4c
                       try { // try from 03471a4c to 03571ab3 has its CatchHandler @ 034714a4 */
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
                    /* catch() { ... } // from try @ 034718b8 with catch @ 03471a50 */
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* catch() { ... } // from try @ 03471904 with catch @ 03471a54 */
                    /* catch() { ... } // from try @ 034718a4 with catch @ 03471a58 */
                    /* catch() { ... } // from try @ 03471a3c with catch @ 03471a5c */
                    /* catch() { ... } // from try @ 03471744 with catch @ 03471a60 */
                    /* catch() { ... } // from try @ 03471a34 with catch @ 03471a64 */
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03471a30 with catch @ 03471a68 */
                    /* catch() { ... } // from try @ 03471714 with catch @ 03471a6c
                       catch() { ... } // from try @ 034717ac with catch @ 03471a6c */
                    /* catch() { ... } // from try @ 03471734 with catch @ 03471a70 */
      iVar1 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03471794 with catch @ 03471a74
                       catch() { ... } // from try @ 034717c4 with catch @ 03471a74 */
      *(int32_t *)&(__this->fields).super.super.field_0x5c = iVar1;
                    /* catch() { ... } // from try @ 03471a40 with catch @ 03471a78 */
                    /* catch() { ... } // from try @ 034716ac with catch @ 03471a7c */
                    /* catch() { ... } // from try @ 03471a2c with catch @ 03471a80
                       catch() { ... } // from try @ 03471a38 with catch @ 03471a80 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03471a20 with catch @ 03471a84 */
  FUN_01bab8c8();
}


// ===== protected override bool DFBPBPPNIBC(JMIFGHKOLCL LDOOMGABFME)  [RVA 0x3371A88]
// ComboRule$$DFBPBPPNIBC @ RVA 0x3371A88

bool ComboRule__DFBPBPPNIBC(ComboRule_o *__this,JMIFGHKOLCL_o *LDOOMGABFME,MethodInfo *method)

{
  undefined1 uVar1;
  
                    /* catch() { ... } // from try @ 03471a24 with catch @ 03471a88 */
                    /* catch() { ... } // from try @ 034716c0 with catch @ 03471a8c */
  if (LDOOMGABFME == (JMIFGHKOLCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* catch() { ... } // from try @ 03471a1c with catch @ 03471a90 */
                    /* catch() { ... } // from try @ 0347199c with catch @ 03471a94 */
                    /* catch() { ... } // from try @ 03471690 with catch @ 03471a98 */
  if ((LDOOMGABFME->fields).ELCBIMMGAFJ == 10) {
                    /* catch() { ... } // from try @ 03471988 with catch @ 03471a9c */
    return false;
  }
                    /* try { // try from 03471ab4 to 03571ab7 has its CatchHandler @ 03471ae0 */
                    /* try { // try from 03471ab8 to 03571aef has its CatchHandler @ 034714a4 */
                    /* WARNING: Could not recover jumptable at 0x03471ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(__this->klass->vtable)._21_FPEEJMINKBI.methodPtr)
                    (__this,(ulong)((LDOOMGABFME->fields).JOEGMBNBPMN <
                                   *(int *)&(__this->fields).super.super.field_0x5c),
                     (__this->klass->vtable)._21_FPEEJMINKBI.method);
  return (bool)uVar1;
}

