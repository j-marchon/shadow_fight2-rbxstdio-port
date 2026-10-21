// TypeDefIndex 609
// Namespace: 
// public class GDMHNGKMPDJ : EAAHMDAMHNI
// Fields:
//   private LCAJGLLBBEC.ELJAALFNLIP AOIGHJKIBAA; // 0x20
//   private OLKKAIFGGAK AHGEJFDEJIF; // 0x28
//   private ObscuredInt EGBBJDLHOMJ; // 0x30

// ===== public override void GIENGNEGHPJ(ABMJNMFPDEJ APOLFFJGBEO)  [RVA 0x35BFE7C]
// GDMHNGKMPDJ$$GIENGNEGHPJ @ RVA 0x35BFE7C

void GDMHNGKMPDJ__GIENGNEGHPJ(GDMHNGKMPDJ_o *__this,ABMJNMFPDEJ_o APOLFFJGBEO,MethodInfo *method)

{
  OLKKAIFGGAK_o *pOVar1;
  OLKKAIFGGAK_o **ppOVar2;
  
  EAAHMDAMHNI__GIENGNEGHPJ((EAAHMDAMHNI_o *)__this,APOLFFJGBEO,(MethodInfo *)0x0);
  pOVar1 = (__this->fields).super.HMMEFNNMBJK;
  if (pOVar1 != (OLKKAIFGGAK_o *)0x0) {
    pOVar1 = OLKKAIFGGAK__GMBBOANEBJJ(pOVar1,(__this->fields).AOIGHJKIBAA,(MethodInfo *)0x0);
    ppOVar2 = &(__this->fields).AHGEJFDEJIF;
    *ppOVar2 = pOVar1;
    thunk_FUN_01c20e04(ppOVar2,pOVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void HNIHOIAMDPC(XmlNode IIBFFEPEHPF)  [RVA 0x35BFEB8]
// GDMHNGKMPDJ$$HNIHOIAMDPC @ RVA 0x35BFEB8

void GDMHNGKMPDJ__HNIHOIAMDPC
               (GDMHNGKMPDJ_o *__this,System_Xml_XmlNode_o *IIBFFEPEHPF,MethodInfo *method)

{
  int32_t iVar1;
  System_Xml_XmlAttributeCollection_o *pSVar2;
  System_Xml_XmlAttribute_o *pSVar3;
  System_String_o *ACCIHBHMFPN;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar4;
  
                    /* try { // try from 036bfeb8 to 037bfebf has its CatchHandler @ 036bffcc */
  if ((DAT_04568f13 & 1) == 0) {
                    /* try { // try from 036bfed4 to 037bfedf has its CatchHandler @ 036bffc4 */
    FUN_01bab630(&StringLiteral_6575/*"Frame"*/);
    FUN_01bab630(&StringLiteral_8907/*"Me"*/);
    FUN_01bab630(&StringLiteral_10305/*"Player"*/);
    DAT_04568f13 = 1;
  }
  EAAHMDAMHNI__HNIHOIAMDPC((EAAHMDAMHNI_o *)__this,IIBFFEPEHPF,(MethodInfo *)0x0);
  if (IIBFFEPEHPF != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 036bff14 to 037bff1f has its CatchHandler @ 036bffb4 */
                    /* try { // try from 036bff24 to 037bff2f has its CatchHandler @ 036bffbc */
    pSVar2 = (System_Xml_XmlAttributeCollection_o *)
             (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                       (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
    if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                         (pSVar2,StringLiteral_10305/*"Player"*/,(MethodInfo *)0x0);
      ACCIHBHMFPN = EIABCPKDEBD__JPKEHIBGOEM(pSVar3,StringLiteral_8907/*"Me"*/,(MethodInfo *)0x0);
      iVar1 = LCAJGLLBBEC__HGMMJIIEOLF(ACCIHBHMFPN,(MethodInfo *)0x0);
      (__this->fields).AOIGHJKIBAA = iVar1;
                    /* try { // try from 036bff64 to 037bff6f has its CatchHandler @ 036bffb0 */
                    /* try { // try from 036bff70 to 037bff97 has its CatchHandler @ 036bfd88 */
      pSVar2 = (System_Xml_XmlAttributeCollection_o *)
               (*(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.methodPtr)
                         (IIBFFEPEHPF,(IIBFFEPEHPF->klass->vtable)._16_get_Attributes.method);
      if (pSVar2 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar3 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar2,StringLiteral_6575/*"Frame"*/,(MethodInfo *)0x0);
        iVar1 = EIABCPKDEBD__EHJNCGCICMP(pSVar3,-1,(MethodInfo *)0x0);
                    /* try { // try from 036bff98 to 037bff9b has its CatchHandler @ 036bffc8 */
                    /* try { // try from 036bff9c to 037bffa3 has its CatchHandler @ 036bffc0 */
        CVar4 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
                CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar1,(MethodInfo *)0x0);
        (__this->fields).EGBBJDLHOMJ.fields = CVar4;
                    /* try { // try from 036bffa4 to 037bffab has its CatchHandler @ 036bffb8 */
                    /* try { // try from 036bffac to 037bffe3 has its CatchHandler @ 036bfd88 */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bff64 with catch @ 036bffb0
                        */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x35BFFB4]
// GDMHNGKMPDJ$$.ctor @ RVA 0x35BFFB4

void GDMHNGKMPDJ___ctor(GDMHNGKMPDJ_o *__this,MethodInfo *method)

{
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bff14 with catch @ 036bffb4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bffa4 with catch @ 036bffb8
                        */
  EAAHMDAMHNI___ctor((EAAHMDAMHNI_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void RandomizeObscuredVars()  [RVA 0x35BFFBC]
// GDMHNGKMPDJ$$RandomizeObscuredVars @ RVA 0x35BFFBC

void GDMHNGKMPDJ__RandomizeObscuredVars(GDMHNGKMPDJ_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bff24 with catch @ 036bffbc
                        */
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &(__this->fields).EGBBJDLHOMJ;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bff9c with catch @ 036bffc0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bfed4 with catch @ 036bffc4
                        */
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,in_x2);
  return;
}


// ===== public override bool DGCODECJJCC()  [RVA 0x35BFFC8]
// GDMHNGKMPDJ$$DGCODECJJCC @ RVA 0x35BFFC8

bool GDMHNGKMPDJ__DGCODECJJCC(GDMHNGKMPDJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  OLKKAIFGGAK_o *pOVar5;
  OPNFCOGALLI_o *__this_00;
  OLKKAIFGGAK_o **ppOVar6;
  
  ppOVar6 = &(__this->fields).AHGEJFDEJIF;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bff98 with catch @ 036bffc8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036bfeb8 with catch @ 036bffcc
                        */
  if (*ppOVar6 == (OLKKAIFGGAK_o *)0x0) {
    pOVar5 = (__this->fields).super.HMMEFNNMBJK;
                    /* try { // try from 036bffe4 to 037bffe7 has its CatchHandler @ 036c0008 */
    if (pOVar5 == (OLKKAIFGGAK_o *)0x0) goto LAB_036c0084;
                    /* try { // try from 036bffe8 to 037c000f has its CatchHandler @ 036bfd88 */
    pOVar5 = OLKKAIFGGAK__GMBBOANEBJJ(pOVar5,(__this->fields).AOIGHJKIBAA,(MethodInfo *)0x0);
    (__this->fields).AHGEJFDEJIF = pOVar5;
    thunk_FUN_01c20e04(ppOVar6,pOVar5);
                    /* catch() { ... } // from try @ 036bffe4 with catch @ 036c0008 */
    if ((__this->fields).AHGEJFDEJIF == (OLKKAIFGGAK_o *)0x0) {
      return false;
    }
  }
                    /* try { // try from 036c0010 to 037c0017 has its CatchHandler @ 036c002c */
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                     (__this->fields).EGBBJDLHOMJ.fields,(MethodInfo *)0x0);
                    /* try { // try from 036c0018 to 037c0023 has its CatchHandler @ 036bfd88 */
  if (iVar2 < 1) {
    bVar1 = true;
  }
  else {
                    /* try { // try from 036c0024 to 037c002b has its CatchHandler @ 036c002c */
    if (*ppOVar6 == (OLKKAIFGGAK_o *)0x0) {
LAB_036c0084:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = ((*ppOVar6)->fields).OAKOFJJIOFF;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 036c0010 with catch @ 036c002c
                       catch(type#2 @ 00000000) { ... } // from try @ 036c0024 with catch @ 036c002c
                        */
    bVar1 = false;
    if (__this_00 != (OPNFCOGALLI_o *)0x0) {
      iVar2 = (__this->fields).super.GCOAKFIEAAL;
      iVar3 = OPNFCOGALLI__MKIHMHHJLHE(__this_00,(MethodInfo *)0x0);
      iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         (__this->fields).EGBBJDLHOMJ.fields,(MethodInfo *)0x0);
      bVar1 = EAAHMDAMHNI__OKACBKHDEIO(iVar2,(float)iVar3,(float)iVar4,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return bVar1;
}

