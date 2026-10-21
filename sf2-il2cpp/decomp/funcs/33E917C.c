// FCJBEKHDLAF$$LBMHMCCMAEI @ RVA 0x33E917C

void FCJBEKHDLAF__LBMHMCCMAEI(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  KAHMAJKJMBK_o *pKVar1;
  MethodInfo *extraout_x1;
  JIMKCICMMIL_o *pJVar2;
  AFFHKININGD_o *FBFPLEFCDOK;
  
  if ((DAT_04567f34 & 1) == 0) {
    FUN_01bab630(&KAHMAJKJMBK_TypeInfo);
    DAT_04567f34 = 1;
    method = extraout_x1;
  }
  FBFPLEFCDOK = (__this->fields).FBFPLEFCDOK;
  pKVar1 = (KAHMAJKJMBK_o *)thunk_FUN_01bda818(KAHMAJKJMBK_TypeInfo,method);
  KAHMAJKJMBK___ctor(pKVar1,__this,FBFPLEFCDOK,(MethodInfo *)0x0);
  (__this->fields).AMJGAIMHDLO = pKVar1;
  thunk_FUN_01c20e04(&(__this->fields).AMJGAIMHDLO,pKVar1);
  pJVar2 = (__this->fields).ODIAFMNGOLA;
  if ((pJVar2 != (JIMKCICMMIL_o *)0x0) &&
     (pKVar1 = (__this->fields).AMJGAIMHDLO, pKVar1 != (KAHMAJKJMBK_o *)0x0)) {
    (pKVar1->fields).MMCCGGNADOK = (pJVar2->fields).ODIAFMNGOLA;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

