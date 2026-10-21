// TypeDefIndex 2261
// Namespace: 
// public class FPJMBGMBAOF : IALJKCECCLB
// Fields:

// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x32FFDE4]
// FPJMBGMBAOF$$HNIHOIAMDPC @ RVA 0x32FFDE4

void FPJMBGMBAOF__HNIHOIAMDPC
               (FPJMBGMBAOF_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  PICIKPNGDBE_o *__this_00;
  
                    /* try { // try from 033ffdf8 to 034ffdff has its CatchHandler @ 033fff78 */
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super.DKGMKMJDMPC;
  if (__this_00 != (PICIKPNGDBE_o *)0x0) {
                    /* try { // try from 033ffe14 to 034ffe1b has its CatchHandler @ 033fff74 */
    PICIKPNGDBE__HNIHOIAMDPC
              (__this_00,AHDGNOJPPIB,(ILGLOCBJFEG_o *)__this,
               (__this->fields).super.super.super._MEFGNAIILBJ_k__BackingField,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool EPBENPDCBFE(Model BCKBBGCOMJD, List<string> FPEHEJBLCAO)  [RVA 0x32FFE24]
// FPJMBGMBAOF$$EPBENPDCBFE @ RVA 0x32FFE24

bool FPJMBGMBAOF__EPBENPDCBFE
               (FPJMBGMBAOF_o *__this,Model_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  bool bVar1;
  Model_o *__this_00;
  PICIKPNGDBE_o *__this_01;
  float CJNHFNHJHPE;
  
                    /* try { // try from 033ffe28 to 034ffe2f has its CatchHandler @ 033fff6c */
                    /* try { // try from 033ffe38 to 034ffe3f has its CatchHandler @ 033fff58 */
  __this_00 = ILGLOCBJFEG__EMHAFDFJFIA((ILGLOCBJFEG_o *)__this,BCKBBGCOMJD,(MethodInfo *)0x0);
  if (BCKBBGCOMJD == (Model_o *)0x0) {
    return false;
  }
  __this_01 = (__this->fields).super.DKGMKMJDMPC;
                    /* try { // try from 033ffe54 to 034ffe5b has its CatchHandler @ 033fff4c */
  if ((__this_01 != (PICIKPNGDBE_o *)0x0) &&
     (PICIKPNGDBE__CHKGAHCDFJF(__this_01,(MethodInfo *)0x0), __this_00 != (Model_o *)0x0)) {
    CJNHFNHJHPE = Model__HCLKOCBDKEJ(__this_00,(MethodInfo *)0x0);
    bVar1 = IALJKCECCLB__KPIJNMIFOGC((IALJKCECCLB_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033ffe88 to 034ffedb has its CatchHandler @ 033fff5c */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32FFE8C]
// FPJMBGMBAOF$$.ctor @ RVA 0x32FFE8C

void FPJMBGMBAOF___ctor(FPJMBGMBAOF_o *__this,MethodInfo *method)

{
  IALJKCECCLB___ctor((IALJKCECCLB_o *)__this,(MethodInfo *)0x0);
  ILGLOCBJFEG__GNLPNKGBAFL((ILGLOCBJFEG_o *)__this,0xb,(MethodInfo *)0x0);
  return;
}

