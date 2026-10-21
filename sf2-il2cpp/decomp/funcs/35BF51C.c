// Nekki.SF2.GUI.Fight.ViewerFight$$GetStatistic @ RVA 0x35BF51C

GOJLGHMMDBO_o *
Nekki_SF2_GUI_Fight_ViewerFight__GetStatistic
          (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  GOJLGHMMDBO_o *pGVar3;
  Nekki_SF2_GUI_Fight_ScreenModel_o *__this_00;
  
                    /* try { // try from 036bf51c to 037bf60b has its CatchHandler @ 036bf51c
                       catch() { ... } // from try @ 036bf51c with catch @ 036bf51c
                       catch() { ... } // from try @ 036bf630 with catch @ 036bf51c
                       catch() { ... } // from try @ 036bf654 with catch @ 036bf51c
                       catch() { ... } // from try @ 036bf67c with catch @ 036bf51c
                       catch() { ... } // from try @ 036bf6bc with catch @ 036bf51c */
  if ((DAT_04568f0b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568f0b = 1;
  }
  lVar1 = 0x58;
  if (DPJIDNBJIBG != 0) {
    lVar1 = 0x60;
  }
  __this_00 = *(Nekki_SF2_GUI_Fight_ScreenModel_o **)((long)&__this->klass + lVar1);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar2) {
    if (__this_00 != (Nekki_SF2_GUI_Fight_ScreenModel_o *)0x0) {
      pGVar3 = Nekki_SF2_GUI_Fight_ScreenModel__get_Statistic(__this_00,(MethodInfo *)0x0);
      return pGVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return (GOJLGHMMDBO_o *)0x0;
}

