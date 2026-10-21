// Nekki.SF2.GUI.Fight.StylePanel$$Init @ RVA 0x3293CC4

void Nekki_SF2_GUI_Fight_StylePanel__Init
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,
               Nekki_SF2_GUI_ResolutionImage_o *GHHDLIFJDIG,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_StyleBar_o *pNVar1;
  System_Action_T__o *action;
  NDGHNMIHOMN_o *pNVar2;
  System_Collections_Generic_List_KKCEIILPLEC__o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o **ppNVar3;
  
  if ((DAT_0456734c & 1) == 0) {
    FUN_01bab630(&System_Action<KKCEIILPLEC>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KKCEIILPLEC>_ForEach__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 03393d0c to 03493d0f has its CatchHandler @ 03393d40 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_StylePanel_NAJPAGNBGJB__);
                    /* try { // try from 03393d10 to 03493d13 has its CatchHandler @ 03393d28 */
                    /* try { // try from 03393d14 to 03493d17 has its CatchHandler @ 03393d1c */
    DAT_0456734c = 1;
  }
                    /* try { // try from 03393d18 to 03493d5b has its CatchHandler @ 03393af0 */
  ppNVar3 = &(__this->fields).LLCBBBFOKMP;
                    /* catch() { ... } // from try @ 03393d14 with catch @ 03393d1c */
  *ppNVar3 = GHHDLIFJDIG;
                    /* catch() { ... } // from try @ 03393c90 with catch @ 03393d20 */
                    /* catch() { ... } // from try @ 03393cb4 with catch @ 03393d24 */
                    /* catch() { ... } // from try @ 03393d10 with catch @ 03393d28 */
  thunk_FUN_01c20e04(ppNVar3,GHHDLIFJDIG);
                    /* catch() { ... } // from try @ 03393c28 with catch @ 03393d2c */
  pNVar1 = (__this->fields)._styleBar;
                    /* catch() { ... } // from try @ 03393c1c with catch @ 03393d30 */
  if (pNVar1 != (Nekki_SF2_GUI_Fight_StyleBar_o *)0x0) {
                    /* catch() { ... } // from try @ 03393c48 with catch @ 03393d34 */
                    /* catch() { ... } // from try @ 03393c3c with catch @ 03393d38 */
                    /* catch() { ... } // from try @ 03393bf0 with catch @ 03393d3c */
                    /* catch() { ... } // from try @ 03393d0c with catch @ 03393d40 */
                    /* catch() { ... } // from try @ 03393bd0 with catch @ 03393d44 */
    (*(pNVar1->klass->vtable)._4_Init.methodPtr)(pNVar1,(pNVar1->klass->vtable)._4_Init.method);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03393d5c to 03493d5f has its CatchHandler @ 03393d88 */
                    /* try { // try from 03393d60 to 03493d8f has its CatchHandler @ 03393af0 */
    pNVar2 = MGNPHCAAEIO_TypeInfo->static_fields->EMBDCDBPFFE;
    if (pNVar2 != (NDGHNMIHOMN_o *)0x0) {
      __this_00 = (pNVar2->fields).PEMHPNLDPHD;
      action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<KKCEIILPLEC>_TypeInfo);
                    /* catch() { ... } // from try @ 03393d5c with catch @ 03393d88 */
                    /* try { // try from 03393d90 to 03493d97 has its CatchHandler @ 03393dac */
      System_Action<object>___ctor();
                    /* try { // try from 03393d98 to 03493da3 has its CatchHandler @ 03393af0 */
      if (__this_00 != (System_Collections_Generic_List_KKCEIILPLEC__o *)0x0) {
                    /* try { // try from 03393da4 to 03493dab has its CatchHandler @ 03393dac */
                    /* catch() { ... } // from try @ 03393d90 with catch @ 03393dac
                       catch() { ... } // from try @ 03393da4 with catch @ 03393dac */
                    /* try { // try from 03393db0 to 03493ebf has its CatchHandler @ 03393db0
                       catch() { ... } // from try @ 03393db0 with catch @ 03393db0
                       catch() { ... } // from try @ 03393fc0 with catch @ 03393db0
                       catch() { ... } // from try @ 03393ff8 with catch @ 03393db0
                       catch() { ... } // from try @ 03394038 with catch @ 03393db0
                       catch() { ... } // from try @ 03394068 with catch @ 03393db0 */
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)__this_00,action,
                   Method_System_Collections_Generic_List<KKCEIILPLEC>_ForEach__);
        pNVar1 = (__this->fields)._styleBar;
        if (pNVar1 != (Nekki_SF2_GUI_Fight_StyleBar_o *)0x0) {
          Nekki_SF2_GUI_Fight_StyleBar__SetValue(pNVar1,0.0,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

