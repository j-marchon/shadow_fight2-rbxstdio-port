// TypeDefIndex 3336
// Namespace: 
// public class FMENGBCBMLK : LMJFCEPILNI
// Fields:
//   private NILLKLHKLHG <CCLIPLACBLO>k__BackingField; // 0x60

// ===== public NILLKLHKLHG KNHGDBHGPEE()  [RVA 0x352E51C]
// FMENGBCBMLK$$KNHGDBHGPEE @ RVA 0x352E51C

NILLKLHKLHG_o * FMENGBCBMLK__KNHGDBHGPEE(FMENGBCBMLK_o *__this,MethodInfo *method)

{
  return (__this->fields)._CCLIPLACBLO_k__BackingField;
}


// ===== protected void NGMOPOCPEAD(NILLKLHKLHG CJNHFNHJHPE)  [RVA 0x352E524]
// FMENGBCBMLK$$NGMOPOCPEAD @ RVA 0x352E524

void FMENGBCBMLK__NGMOPOCPEAD(FMENGBCBMLK_o *__this,NILLKLHKLHG_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._CCLIPLACBLO_k__BackingField = CJNHFNHJHPE;
                    /* try { // try from 0362e528 to 0372e537 has its CatchHandler @ 0362e778 */
  thunk_FUN_01c20e04();
  return;
}


// ===== public void .ctor(FMENGBCBMLK IBKIPBJJCPG)  [RVA 0x352E52C]
// FMENGBCBMLK$$.ctor @ RVA 0x352E52C

void FMENGBCBMLK___ctor(FMENGBCBMLK_o *__this,FMENGBCBMLK_o *IBKIPBJJCPG,MethodInfo *method)

{
  NILLKLHKLHG_o **ppNVar1;
  
  LMJFCEPILNI___ctor((LMJFCEPILNI_o *)__this,(LMJFCEPILNI_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
                    /* try { // try from 0362e544 to 0372e553 has its CatchHandler @ 0362e77c */
  if (IBKIPBJJCPG != (FMENGBCBMLK_o *)0x0) {
    ppNVar1 = &(__this->fields)._CCLIPLACBLO_k__BackingField;
    *ppNVar1 = (IBKIPBJJCPG->fields)._CCLIPLACBLO_k__BackingField;
                    /* try { // try from 0362e558 to 0372e55f has its CatchHandler @ 0362e780 */
    thunk_FUN_01c20e04(ppNVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x352E564]
// FMENGBCBMLK$$.ctor @ RVA 0x352E564

void FMENGBCBMLK___ctor(FMENGBCBMLK_o *__this,MethodInfo *method)

{
                    /* try { // try from 0362e568 to 0372e573 has its CatchHandler @ 0362e768 */
  LMJFCEPILNI___ctor((LMJFCEPILNI_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x352E56C]
// FMENGBCBMLK$$HNIHOIAMDPC @ RVA 0x352E56C

void FMENGBCBMLK__HNIHOIAMDPC
               (FMENGBCBMLK_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *OAPELGIBHGF;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *JEIGFGPCGMM;
  System_Action_NILLKLHKLHG_AOBOECPEMLA__o *FGLEGAOAEAO;
  NILLKLHKLHG_o *__this_01;
  NILLKLHKLHG_o **ppNVar1;
  
                    /* try { // try from 0362e57c to 0372e587 has its CatchHandler @ 0362e76c */
  if ((DAT_04568a41 & 1) == 0) {
    FUN_01bab630(&System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
                    /* try { // try from 0362e59c to 0372e5a3 has its CatchHandler @ 0362e6c8 */
    FUN_01bab630(&Method_HEFOANCOHDC_BJKIFFGGDEE__);
    FUN_01bab630(&Method_HEFOANCOHDC_GLHBJFHGHLC__);
                    /* try { // try from 0362e5b4 to 0372e5bf has its CatchHandler @ 0362e6c4 */
    FUN_01bab630(&NILLKLHKLHG_TypeInfo);
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
                    /* try { // try from 0362e5d8 to 0372e65b has its CatchHandler @ 0362e6b4 */
    DAT_04568a41 = 1;
  }
  HJNEOLCKEMD__HNIHOIAMDPC((HJNEOLCKEMD_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  HJNEOLCKEMD__GNLPNKGBAFL((HJNEOLCKEMD_o *)__this,0x17,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
      OAPELGIBHGF = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1567/*"0"*/,(MethodInfo *)0x0);
                    /* try { // try from 0362e664 to 0372e66b has its CatchHandler @ 0362e6b0 */
                    /* try { // try from 0362e670 to 0372e683 has its CatchHandler @ 0362e6ac */
      JEIGFGPCGMM = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                    thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
      System_Action<object>___ctor();
                    /* try { // try from 0362e68c to 0372e693 has its CatchHandler @ 0362e770 */
      FGLEGAOAEAO = (System_Action_NILLKLHKLHG_AOBOECPEMLA__o *)
                    thunk_FUN_01bda818(System_Action<NILLKLHKLHG_AOBOECPEMLA>_TypeInfo);
                    /* try { // try from 0362e69c to 0372e69f has its CatchHandler @ 0362e6c0 */
                    /* try { // try from 0362e6a4 to 0372e6a7 has its CatchHandler @ 0362e6b4 */
                    /* try { // try from 0362e6a8 to 0372e6df has its CatchHandler @ 0362e3cc */
      System_Action<object>___ctor();
                    /* catch() { ... } // from try @ 0362e670 with catch @ 0362e6ac */
                    /* catch() { ... } // from try @ 0362e664 with catch @ 0362e6b0 */
      __this_01 = (NILLKLHKLHG_o *)thunk_FUN_01bda818(NILLKLHKLHG_TypeInfo);
                    /* catch() { ... } // from try @ 0362e5d8 with catch @ 0362e6b4
                       catch() { ... } // from try @ 0362e6a4 with catch @ 0362e6b4 */
                    /* catch() { ... } // from try @ 0362e69c with catch @ 0362e6c0 */
                    /* catch() { ... } // from try @ 0362e5b4 with catch @ 0362e6c4 */
                    /* catch() { ... } // from try @ 0362e59c with catch @ 0362e6c8 */
      NILLKLHKLHG___ctor(__this_01,OAPELGIBHGF,JEIGFGPCGMM,FGLEGAOAEAO,(Il2CppObject *)__this,
                         (MethodInfo *)0x0);
      ppNVar1 = &(__this->fields)._CCLIPLACBLO_k__BackingField;
      *ppNVar1 = __this_01;
                    /* try { // try from 0362e6e0 to 0372e6e3 has its CatchHandler @ 0362e75c */
                    /* try { // try from 0362e6e4 to 0372e713 has its CatchHandler @ 0362e3cc */
      thunk_FUN_01c20e04(ppNVar1,__this_01);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

