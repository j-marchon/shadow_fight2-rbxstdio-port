// Nekki.SF2.GUI.Map.MapScene.GEPOIGJOPEC$$MoveNext @ RVA 0x3589B78

bool Nekki_SF2_GUI_Map_MapScene_GEPOIGJOPEC__MoveNext
               (Nekki_SF2_GUI_Map_MapScene_GEPOIGJOPEC_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  GALHNMPIEHA_o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  MethodInfo *extraout_x1;
  Il2CppObject **ppIVar3;
  
  if ((DAT_04568d2e & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
    DAT_04568d2e = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
                    /* try { // try from 03689bc4 to 03789c3f has its CatchHandler @ 03689bc4
                       catch() { ... } // from try @ 03689bc4 with catch @ 03689bc4
                       catch() { ... } // from try @ 03689e34 with catch @ 03689bc4
                       catch() { ... } // from try @ 03689e90 with catch @ 03689bc4
                       catch() { ... } // from try @ 03689f4c with catch @ 03689bc4 */
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if ((Nekki_SF2_GUI_Map_MapScene_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_MapScene_TypeInfo,method);
    }
    bVar2 = Nekki_SF2_GUI_Map_MapScene__IOFENOLJOOO((MethodInfo *)0x0);
    if (bVar2) {
      JJPNLEPEAFM__ENALHJGHEEN((MethodInfo *)0x0);
                    /* try { // try from 03689c40 to 03789c4b has its CatchHandler @ 03689e60 */
      GALHNMPIEHA__DJJAINGGBJN((MethodInfo *)0x0);
    }
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
    }
    __this_00 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
    if (__this_00 == (GALHNMPIEHA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    GALHNMPIEHA__MFKHGFEDMIO(__this_00,(KEFHDOHHHML_o *)0x0,(MethodInfo *)0x0);
  }
  __this_01 = (UnityEngine_WaitForSeconds_o *)
              thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo);
  UnityEngine_WaitForSeconds___ctor(__this_01,1.0,(MethodInfo *)0x0);
  ppIVar3 = &(__this->fields).__2__current;
                    /* try { // try from 03689c64 to 03789c9f has its CatchHandler @ 03689e5c */
  *ppIVar3 = (Il2CppObject *)__this_01;
  thunk_FUN_01c20e04(ppIVar3,__this_01);
  (__this->fields).__1__state = 1;
  return true;
}

