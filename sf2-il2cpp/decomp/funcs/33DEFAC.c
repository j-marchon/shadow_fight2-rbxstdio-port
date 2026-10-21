// Nekki.SF2.GUI.Pvp.PhaseWeapon$$GNJPFHIGMJB @ RVA 0x33DEFAC

void Nekki_SF2_GUI_Pvp_PhaseWeapon__GNJPFHIGMJB
               (Nekki_SF2_GUI_Pvp_PhaseWeapon_o *__this,int32_t DPJIDNBJIBG,float LFJGFLNMBMC,
               MethodInfo *method)

{
  int index;
  int iVar1;
  bool bVar2;
  BNAIBAODKAK_o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  HOOAAGABMBL_o *pHVar3;
  Nekki_SF2_GUI_TableView_o *__this_02;
  HOOAAGABMBL_o **ppHVar4;
  
  if ((DAT_04567e97 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_04567e97 = 1;
  }
  __this_00 = (__this->fields).super.KPLEAGPMKFD;
  if (__this_00 == (BNAIBAODKAK_o *)0x0) {
LAB_034df0f0:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar2 = BNAIBAODKAK__AAAMBLLDPHJ(__this_00,(MethodInfo *)0x0);
  if (bVar2) {
    __this_01 = (__this->fields).LGHNHMJIDIB;
    (__this->fields).FODBFCKBFDF = false;
    if (__this_01 == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) goto LAB_034df0f0;
    iVar1 = (__this_01->fields)._size + -1;
    if (DPJIDNBJIBG <= iVar1) {
      iVar1 = DPJIDNBJIBG;
    }
    index = 0;
    if (-1 < DPJIDNBJIBG) {
      index = iVar1;
    }
                    /* try { // try from 034df04c to 035df0d7 has its CatchHandler @ 034df04c
                       catch() { ... } // from try @ 034df04c with catch @ 034df04c
                       catch() { ... } // from try @ 034df104 with catch @ 034df04c
                       catch() { ... } // from try @ 034df128 with catch @ 034df04c
                       catch() { ... } // from try @ 034df150 with catch @ 034df04c
                       catch() { ... } // from try @ 034df190 with catch @ 034df04c */
    if ((index != (__this->fields).CCOCEGOEFNL) ||
       (LFJGFLNMBMC <= UnityEngine_Mathf_TypeInfo->static_fields->Epsilon)) {
      (__this->fields).CCOCEGOEFNL = index;
      pHVar3 = (HOOAAGABMBL_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_01,index,
                          Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
      ppHVar4 = &(__this->fields).DPPANFCEMLK;
      *ppHVar4 = pHVar3;
      thunk_FUN_01c20e04(ppHVar4,pHVar3);
      __this_02 = (__this->fields)._TableView;
      if (__this_02 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_034df0f0;
      Nekki_SF2_GUI_TableView__ScrollToCell
                (__this_02,(__this->fields).CCOCEGOEFNL,LFJGFLNMBMC,(MethodInfo *)0x0);
      if (UnityEngine_Mathf_TypeInfo->static_fields->Epsilon < LFJGFLNMBMC) {
        (__this->fields).ACNLMCEJHII = (__this->fields).CCOCEGOEFNL == 0;
                    /* try { // try from 034df0d8 to 035df0df has its CatchHandler @ 034df134 */
        EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}

