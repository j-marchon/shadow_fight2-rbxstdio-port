// OLKKAIFGGAK$$NFJPOGJJEAK @ RVA 0x34EC600

void OLKKAIFGGAK__NFJPOGJJEAK
               (OLKKAIFGGAK_o *__this,ECENNHNBAME_o *OCFNILDEHHP,int32_t OAFGMHOFEKM,
               bool LGJEEEFEAKB,int32_t KGJLIPJNNKB,MethodInfo *method)

{
  bool bVar1;
  OLKKAIFGGAK_IOJDLINDBDK_o *pOVar2;
  OLKKAIFGGAK_IOJDLINDBDK_Fields *pOVar3;
  CNDPAJOLKFN_o *PHCOHKNFGLE;
  CNDPAJOLKFN_o *__this_00;
  OPNFCOGALLI_o *__this_01;
  
  if ((DAT_04568798 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    DAT_04568798 = 1;
  }
  pOVar2 = (__this->fields).CGJACALFIKM;
  if (pOVar2 != (OLKKAIFGGAK_IOJDLINDBDK_o *)0x0) {
    pOVar3 = &pOVar2->fields;
    pOVar3->BNGDONJEHMH = OCFNILDEHHP;
    thunk_FUN_01c20e04(pOVar3,OCFNILDEHHP);
    pOVar2 = (__this->fields).CGJACALFIKM;
    if (pOVar2 != (OLKKAIFGGAK_IOJDLINDBDK_o *)0x0) {
      (pOVar2->fields).HIHFJJOMDBF = OAFGMHOFEKM;
      (pOVar2->fields).FMGLHJDODPA = LGJEEEFEAKB;
      (pOVar2->fields).JAHFGPMFLGN = KGJLIPJNNKB;
      if (OCFNILDEHHP != (ECENNHNBAME_o *)0x0) {
        PHCOHKNFGLE = ECENNHNBAME__KHNKHIJEFIC(OCFNILDEHHP,(MethodInfo *)0x0);
        __this_00 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
        CNDPAJOLKFN___ctor(__this_00,PHCOHKNFGLE,(MethodInfo *)0x0);
        if (__this_00 != (CNDPAJOLKFN_o *)0x0) {
          bVar1 = CNDPAJOLKFN__EPBENPDCBFE(__this_00,0.0,0.0,0.0,(MethodInfo *)0x0);
          if (bVar1) {
            return;
          }
          (__this_00->fields).super.OHHDBINAJCB =
               (__this_00->fields).super.OHHDBINAJCB * (float)OAFGMHOFEKM;
          __this_01 = (__this->fields).OAKOFJJIOFF;
          if (__this_01 != (OPNFCOGALLI_o *)0x0) {
            OPNFCOGALLI__BKMANKPEDJN(__this_01,__this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

