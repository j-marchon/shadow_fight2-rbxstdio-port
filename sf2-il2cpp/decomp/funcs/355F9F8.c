// Nekki.SF2.Core.Fights.ModelContainer$$PlayAnimation @ RVA 0x355F9F8

void Nekki_SF2_Core_Fights_ModelContainer__PlayAnimation
               (Nekki_SF2_Core_Fights_ModelContainer_o *__this,System_String_o *KGLJICLJHEL,
               int32_t OAFGMHOFEKM,MethodInfo *method)

{
  ECENNHNBAME_o *OCFNILDEHHP;
  OLKKAIFGGAK_o *__this_00;
  
  if ((DAT_04568bc1 & 1) == 0) {
    FUN_01bab630(&LDHBHPILNMA_TypeInfo,KGLJICLJHEL,OAFGMHOFEKM);
    DAT_04568bc1 = 1;
  }
  if ((LDHBHPILNMA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  OCFNILDEHHP = LDHBHPILNMA__CCBEONOLBID(KGLJICLJHEL,true,(MethodInfo *)0x0);
  if (OCFNILDEHHP != (ECENNHNBAME_o *)0x0) {
    __this_00 = (__this->fields).MAODNBMLDEG;
    if (__this_00 != (OLKKAIFGGAK_o *)0x0) {
      OLKKAIFGGAK__NFJPOGJJEAK(__this_00,OCFNILDEHHP,0,false,-1,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

