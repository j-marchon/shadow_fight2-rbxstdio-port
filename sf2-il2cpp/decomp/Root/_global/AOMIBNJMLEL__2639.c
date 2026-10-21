// TypeDefIndex 2639
// Namespace: 
// public class AOMIBNJMLEL : KJFPGDFNFCL
// Fields:
//   private LJJOOIHCCEP.HEJHMMBJODB JCIKOLNGLBE; // 0x48

// ===== public void .ctor()  [RVA 0x33B3988]
// AOMIBNJMLEL$$.ctor @ RVA 0x33B3988

void AOMIBNJMLEL___ctor(AOMIBNJMLEL_o *__this,MethodInfo *method)

{
  KJFPGDFNFCL___ctor((KJFPGDFNFCL_o *)__this,1,(MethodInfo *)0x0);
                    /* try { // try from 034b399c to 035b39a3 has its CatchHandler @ 034b4798 */
  (__this->fields).JCIKOLNGLBE = 0;
                    /* try { // try from 034b39a4 to 035b39af has its CatchHandler @ 034b4850 */
  return;
}


// ===== public LJJOOIHCCEP.HEJHMMBJODB BAJACGJJDGL()  [RVA 0x33B39A8]
// AOMIBNJMLEL$$BAJACGJJDGL @ RVA 0x33B39A8

int32_t AOMIBNJMLEL__BAJACGJJDGL(AOMIBNJMLEL_o *__this,MethodInfo *method)

{
  return (__this->fields).JCIKOLNGLBE;
}


// ===== protected override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x33B39B0]
// AOMIBNJMLEL$$HNIHOIAMDPC @ RVA 0x33B39B0

void AOMIBNJMLEL__HNIHOIAMDPC
               (AOMIBNJMLEL_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  int32_t iVar1;
  
                    /* try { // try from 034b39b4 to 035b39bb has its CatchHandler @ 034b47c0 */
  iVar1 = LJJOOIHCCEP__GILKLPLMPFM((__this->fields).super.DHKOGAHJNMK,(MethodInfo *)0x0);
  (__this->fields).JCIKOLNGLBE = iVar1;
                    /* try { // try from 034b39cc to 035b39d3 has its CatchHandler @ 034b4a94 */
  return;
}


// ===== public override bool DGCODECJJCC(ECAIEGNAOAL KDFMDHADHMD)  [RVA 0x33B39D0]
// AOMIBNJMLEL$$DGCODECJJCC @ RVA 0x33B39D0

bool AOMIBNJMLEL__DGCODECJJCC(AOMIBNJMLEL_o *__this,ECAIEGNAOAL_o *KDFMDHADHMD,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
                    /* try { // try from 034b39e0 to 035b39e7 has its CatchHandler @ 034b482c */
  if ((DAT_04567d65 & 1) == 0) {
    FUN_01bab630(&Method_KJFPGDFNFCL_AOKIANMEBCH<LJJOOIHCCEP_HEJHMMBJODB>__);
                    /* try { // try from 034b39f8 to 035b39ff has its CatchHandler @ 034b4818 */
    DAT_04567d65 = 1;
  }
                    /* try { // try from 034b3a00 to 035b3a0b has its CatchHandler @ 034b47e8 */
  bVar1 = KJFPGDFNFCL__DGCODECJJCC((KJFPGDFNFCL_o *)__this,KDFMDHADHMD,(MethodInfo *)0x0);
  if (bVar1) {
    if (KDFMDHADHMD == (ECAIEGNAOAL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 034b3a20 to 035b3a27 has its CatchHandler @ 034b47e4 */
    iVar2 = KJFPGDFNFCL__AOKIANMEBCH<Int32Enum>
                      ((KDFMDHADHMD->fields).KOANCCDDBDA,0,
                       Method_KJFPGDFNFCL_AOKIANMEBCH<LJJOOIHCCEP_HEJHMMBJODB>__);
                    /* try { // try from 034b3a38 to 035b3a3f has its CatchHandler @ 034b480c */
                    /* try { // try from 034b3a40 to 035b3a5b has its CatchHandler @ 034b4a18 */
    bVar1 = (iVar2 == (__this->fields).JCIKOLNGLBE) != ((__this->fields).super.GBBHFPBFOPI != false)
    ;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

