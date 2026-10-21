// Nekki.SF2.GUI.Fight.FightScene$$SetRenderLayerMask @ RVA 0x323721C

void Nekki_SF2_GUI_Fight_FightScene__SetRenderLayerMask
               (Nekki_SF2_GUI_Fight_FightScene_o *__this,System_Byte_array *CLNMDFIMKAK,
               MethodInfo *method)

{
  MNLIBPAOCLG_o *__this_00;
  FCJBEKHDLAF_o *pFVar1;
  BEPJMNAHCAD_o *pBVar2;
  
  pFVar1 = (__this->fields).NAKHBIFKBGK;
  if ((pFVar1 != (FCJBEKHDLAF_o *)0x0) &&
     (pBVar2 = (pFVar1->fields).FAJCMHDLBEJ, pBVar2 != (BEPJMNAHCAD_o *)0x0)) {
    __this_00 = (pBVar2->fields).LIICCFBEOLC;
    if (__this_00 != (MNLIBPAOCLG_o *)0x0) {
      MNLIBPAOCLG__ECPBBMDOEKB(__this_00,CLNMDFIMKAK,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

