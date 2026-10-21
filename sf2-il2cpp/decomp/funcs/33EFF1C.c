// FCJBEKHDLAF$$KAIJCNCDMLO @ RVA 0x33EFF1C

void FCJBEKHDLAF__KAIJCNCDMLO(FCJBEKHDLAF_o *__this,GGFFOJJGHGP_o *EJFPCGICJJB,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  OLKKAIFGGAK_o *__this_00;
  int BKBEIEGNBPA;
  
  if ((DAT_04567efe & 1) == 0) {
    FUN_01bab630(&BGFNOPDHEOM_TypeInfo);
    DAT_04567efe = 1;
  }
  if ((BGFNOPDHEOM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = BGFNOPDHEOM__EMHAFDFJFIA(EJFPCGICJJB,(MethodInfo *)0x0);
  if (__this_00 != (OLKKAIFGGAK_o *)0x0) {
    bVar2 = OLKKAIFGGAK__ODAJGLDHJLN(__this_00,(MethodInfo *)0x0);
    if (bVar2) {
      if (EJFPCGICJJB == (GGFFOJJGHGP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      BKBEIEGNBPA = (EJFPCGICJJB->fields).ACNLHENNKAJ;
      if (((__this->fields).EPKNDHOGELF != false) && (BKBEIEGNBPA - 1U < 8)) {
        BKBEIEGNBPA = *(int *)(&DAT_00da45b8 + (long)(int)(BKBEIEGNBPA - 1U) * 4);
      }
      iVar1 = (__this->fields).PEELENPNLHJ;
      if (iVar1 == 2) {
        OLKKAIFGGAK__IKPHKLHDNMA(__this_00,BKBEIEGNBPA,(MethodInfo *)0x0);
        return;
      }
      if ((iVar1 == 1) && ((__this_00->fields).LBJLDCLMGKD == -1)) {
        (__this_00->fields).LBJLDCLMGKD = BKBEIEGNBPA;
      }
    }
  }
  return;
}

