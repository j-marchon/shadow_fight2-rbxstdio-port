// HOOAAGABMBL$$FPEKMLPMFPB @ RVA 0x30F0308

bool HOOAAGABMBL__FPEKMLPMFPB(HOOAAGABMBL_o *__this,MethodInfo *method)

{
  GHOPMMBKGMB_o *__this_00;
  GLDKIFOLMAO_o *pGVar1;
  GLDKIFOLMAO_o **ppGVar2;
  
  if ((DAT_0456641f & 1) == 0) {
    FUN_01bab630(&ACHLOMELAJE_TypeInfo);
    DAT_0456641f = 1;
  }
  ppGVar2 = &(__this->fields).FEAKLAKEMBE;
  *ppGVar2 = (GLDKIFOLMAO_o *)0x0;
  thunk_FUN_01c20e04(ppGVar2,0);
  if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = ACHLOMELAJE_TypeInfo->static_fields->FGMAJAGGPCD;
  if (__this_00 != (GHOPMMBKGMB_o *)0x0) {
    pGVar1 = GHOPMMBKGMB__LBBHCIGJNDO
                       (__this_00,(__this->fields)._CIEBCKIBJHL_k__BackingField,(MethodInfo *)0x0);
    if (pGVar1 != (GLDKIFOLMAO_o *)0x0) {
      *ppGVar2 = pGVar1;
      thunk_FUN_01c20e04(ppGVar2,pGVar1);
    }
    return pGVar1 != (GLDKIFOLMAO_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

