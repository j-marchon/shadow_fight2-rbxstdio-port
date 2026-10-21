// TypeDefIndex 2732
// Namespace: 
// public class ICNKJCHMODO : IALJKCECCLB
// Fields:

// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x33E11A4]
// ICNKJCHMODO$$HNIHOIAMDPC @ RVA 0x33E11A4

void ICNKJCHMODO__HNIHOIAMDPC
               (ICNKJCHMODO_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  PICIKPNGDBE_o *__this_00;
  
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,method);
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


// ===== public void .ctor()  [RVA 0x33E12CC]
// ICNKJCHMODO$$.ctor @ RVA 0x33E12CC

void ICNKJCHMODO___ctor(ICNKJCHMODO_o *__this,MethodInfo *method)

{
  IALJKCECCLB___ctor((IALJKCECCLB_o *)__this,(MethodInfo *)0x0);
  ILGLOCBJFEG__GNLPNKGBAFL((ILGLOCBJFEG_o *)__this,0xd,(MethodInfo *)0x0);
  return;
}


// ===== public override bool EPBENPDCBFE(OLKKAIFGGAK BCKBBGCOMJD, List<string> FPEHEJBLCAO)  [RVA 0x33E12F0]
// ICNKJCHMODO$$EPBENPDCBFE @ RVA 0x33E12F0

bool ICNKJCHMODO__EPBENPDCBFE
               (ICNKJCHMODO_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  bool bVar1;
  OLKKAIFGGAK_o *pOVar2;
  PICIKPNGDBE_o *__this_00;
  
  pOVar2 = ILGLOCBJFEG__EMHAFDFJFIA((ILGLOCBJFEG_o *)__this,BCKBBGCOMJD,(MethodInfo *)0x0);
  if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
    return false;
  }
  __this_00 = (__this->fields).super.DKGMKMJDMPC;
  if ((__this_00 != (PICIKPNGDBE_o *)0x0) &&
     (PICIKPNGDBE__CHKGAHCDFJF(__this_00,(MethodInfo *)0x0), pOVar2 != (OLKKAIFGGAK_o *)0x0)) {
    bVar1 = IALJKCECCLB__KPIJNMIFOGC
                      ((IALJKCECCLB_o *)__this,(pOVar2->fields).EICLGPGPNKE,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

