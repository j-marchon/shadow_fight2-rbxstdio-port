// TypeDefIndex 1793
// Namespace: 
// public class PLNJDKGMELH : IALJKCECCLB
// Fields:

// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x3210CD0]
// PLNJDKGMELH$$HNIHOIAMDPC @ RVA 0x3210CD0

void PLNJDKGMELH__HNIHOIAMDPC
               (PLNJDKGMELH_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  PICIKPNGDBE_o *__this_00;
  
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super.DKGMKMJDMPC;
  if (__this_00 != (PICIKPNGDBE_o *)0x0) {
    PICIKPNGDBE__HNIHOIAMDPC
              (__this_00,AHDGNOJPPIB,(ILGLOCBJFEG_o *)__this,
               (__this->fields).super.super.super._MEFGNAIILBJ_k__BackingField,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool EPBENPDCBFE(Model BCKBBGCOMJD, List<string> FPEHEJBLCAO)  [RVA 0x3210D10]
// PLNJDKGMELH$$EPBENPDCBFE @ RVA 0x3210D10

bool PLNJDKGMELH__EPBENPDCBFE
               (PLNJDKGMELH_o *__this,Model_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Model_o *__this_00;
  PICIKPNGDBE_o *__this_01;
  
  __this_00 = ILGLOCBJFEG__EMHAFDFJFIA((ILGLOCBJFEG_o *)__this,BCKBBGCOMJD,(MethodInfo *)0x0);
  if (BCKBBGCOMJD == (Model_o *)0x0) {
    return false;
  }
  __this_01 = (__this->fields).super.DKGMKMJDMPC;
  if ((__this_01 != (PICIKPNGDBE_o *)0x0) &&
     (PICIKPNGDBE__CHKGAHCDFJF(__this_01,(MethodInfo *)0x0), __this_00 != (Model_o *)0x0)) {
    iVar2 = Model__BHIHCKDOJKB(__this_00,(MethodInfo *)0x0);
    bVar1 = IALJKCECCLB__KPIJNMIFOGC((IALJKCECCLB_o *)__this,(float)iVar2,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3210D7C]
// PLNJDKGMELH$$.ctor @ RVA 0x3210D7C

void PLNJDKGMELH___ctor(PLNJDKGMELH_o *__this,MethodInfo *method)

{
  IALJKCECCLB___ctor((IALJKCECCLB_o *)__this,(MethodInfo *)0x0);
  ILGLOCBJFEG__GNLPNKGBAFL((ILGLOCBJFEG_o *)__this,3,(MethodInfo *)0x0);
  return;
}

