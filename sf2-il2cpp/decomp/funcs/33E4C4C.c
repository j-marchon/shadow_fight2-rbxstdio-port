// FCJBEKHDLAF$$DDFNLHMCIND @ RVA 0x33E4C4C

void FCJBEKHDLAF__DDFNLHMCIND(FCJBEKHDLAF_o *__this,GGFFOJJGHGP_o *EJFPCGICJJB,MethodInfo *method)

{
  bool bVar1;
  OLKKAIFGGAK_o *__this_00;
  int MFDCCBAJNIO;
  
  if ((DAT_04567ec3 & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    DAT_04567ec3 = 1;
  }
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = BGFNOPDHEOM__EMHAFDFJFIA(EJFPCGICJJB,(MethodInfo *)0x0);
  if (__this_00 != (OLKKAIFGGAK_o *)0x0) {
    bVar1 = OLKKAIFGGAK__ODAJGLDHJLN(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      if (EJFPCGICJJB != (GGFFOJJGHGP_o *)0x0) {
        MFDCCBAJNIO = (EJFPCGICJJB->fields).ACNLHENNKAJ;
        if (((__this->fields).EPKNDHOGELF != false) && (MFDCCBAJNIO - 1U < 8)) {
          MFDCCBAJNIO = *(int *)(&DAT_00da45b8 + (long)(int)(MFDCCBAJNIO - 1U) * 4);
        }
        if ((__this_00->fields).LBJLDCLMGKD == MFDCCBAJNIO) {
          (__this_00->fields).LBJLDCLMGKD = -1;
        }
        OLKKAIFGGAK__IJDCCIGHPHJ(__this_00,MFDCCBAJNIO,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

