// Nekki.SF2.GUI.Dialogs.LotteryDialog.ABIBBAOFADE$$MoveNext @ RVA 0x328ED14

bool Nekki_SF2_GUI_Dialogs_LotteryDialog_ABIBBAOFADE__MoveNext
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_ABIBBAOFADE_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_WaitForSeconds_o *__this_00;
  UnityEngine_WaitForSeconds_o **ppUVar2;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *pEVar3;
  System_Action_o *OGIPJCNPEOP;
  System_Predicate_DILGLGMKOFG__o **ppSVar4;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_DILGLGMKOFG__o *pSVar5;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_o *pNVar6;
  Il2CppObject **ppIVar7;
  System_Predicate_DILGLGMKOFG__o *match;
  int iVar8;
  int iVar9;
  float fVar10;
  
                    /* catch() { ... } // from try @ 0338eca4 with catch @ 0338ed14
                       catch() { ... } // from try @ 0338ed04 with catch @ 0338ed14 */
                    /* try { // try from 0338ed18 to 0348ed1b has its CatchHandler @ 0338ed24 */
                    /* try { // try from 0338ed1c to 0348ed27 has its CatchHandler @ 0338eae8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0338ed18 with catch @ 0338ed24
                        */
                    /* try { // try from 0338ed28 to 0348ed93 has its CatchHandler @ 0338ed28
                       catch() { ... } // from try @ 0338ed28 with catch @ 0338ed28
                       catch() { ... } // from try @ 0338eeb4 with catch @ 0338ed28
                       catch() { ... } // from try @ 0338eefc with catch @ 0338ed28
                       catch() { ... } // from try @ 0338ef5c with catch @ 0338ed28 */
  if ((DAT_04567304 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_FindIndex__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Count__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_FABPNIKKPMN__);
    FUN_01bab630(&System_Predicate<DILGLGMKOFG>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_DNHHDBDKKMP__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo);
    FUN_01bab630(&UnityEngine_WaitForSeconds_TypeInfo);
                    /* try { // try from 0338ed94 to 0348edbf has its CatchHandler @ 0338eecc */
    DAT_04567304 = 1;
    method = extraout_x1;
  }
  iVar8 = (__this->fields).__1__state;
  pNVar6 = (__this->fields).__4__this;
  if (iVar8 == 1) {
    (__this->fields).__1__state = -1;
  }
  else {
    if (iVar8 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    __this_00 = (UnityEngine_WaitForSeconds_o *)
                thunk_FUN_01bda818(UnityEngine_WaitForSeconds_TypeInfo,method);
    UnityEngine_WaitForSeconds___ctor(__this_00,0.1,(MethodInfo *)0x0);
    ppUVar2 = &(__this->fields)._delay_5__2;
    *ppUVar2 = __this_00;
    thunk_FUN_01c20e04(ppUVar2,__this_00);
  }
  if (pNVar6 == (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *)0x0) goto LAB_0338f048;
                    /* try { // try from 0338edfc to 0348ee27 has its CatchHandler @ 0338eec4 */
  if (((pNVar6->fields).FBODAFDBNLH != (BECIPDJBAOG_o *)0x0) && ((pNVar6->fields).GLGOLGJBCAK != -1)
     ) {
    pEVar3 = (pNVar6->fields).Scroller;
    if (pEVar3 == (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) goto LAB_0338f048;
    iVar1 = EnhancedUI_EnhancedScroller_EnhancedScroller__get_StartDataIndex
                      (pEVar3,(MethodInfo *)0x0);
    iVar8 = iVar1 - (pNVar6->fields).GLGOLGJBCAK;
    if (iVar8 < 0) {
                    /* try { // try from 0338ee2c to 0348ee37 has its CatchHandler @ 0338eeb8 */
      pSVar5 = (pNVar6->fields).HPJNLAOAJJE;
      if (pSVar5 == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) goto LAB_0338f048;
      iVar8 = (pSVar5->fields)._size + iVar8;
    }
    if ((1 < iVar8) && ((pNVar6->fields).FBODAFDBNLH != (BECIPDJBAOG_o *)0x0)) {
      pSVar5 = (pNVar6->fields).HPJNLAOAJJE;
      if (pSVar5 == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) goto LAB_0338f048;
      iVar9 = (pSVar5->fields)._size;
                    /* try { // try from 0338ee70 to 0348ee9b has its CatchHandler @ 0338eebc */
      if (DAT_0456033b == '\0') {
        FUN_01bab630(&System_Math_TypeInfo);
        DAT_0456033b = '\x01';
      }
      fVar10 = (float)iVar9 * 0.5 + -1.0;
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0338eea8 to 0348eeab has its CatchHandler @ 0338eec8 */
                    /* try { // try from 0338eeac to 0348eeaf has its CatchHandler @ 0338eec0 */
                    /* try { // try from 0338eeb0 to 0348eeb3 has its CatchHandler @ 0338eeb4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338eeb0 with catch @ 0338eeb4
                       try { // try from 0338eeb4 to 0348eee3 has its CatchHandler @ 0338ed28 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ee2c with catch @ 0338eeb8
                        */
      iVar9 = -0x80000000;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ee70 with catch @ 0338eebc
                        */
      if ((float)(int)fVar10 != INFINITY) {
        iVar9 = (int)fVar10;
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338eeac with catch @ 0338eec0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338edfc with catch @ 0338eec4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338eea8 with catch @ 0338eec8
                        */
      if (iVar8 + 2 <= iVar9) {
        pEVar3 = (pNVar6->fields).Scroller;
        iVar1 = (pNVar6->fields).GLGOLGJBCAK;
        OGIPJCNPEOP = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0338ef44 to 0348ef53 has its CatchHandler @ 0338ef54 */
        System_Action___ctor();
        if (pEVar3 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
                    /* catch() { ... } // from try @ 0338eee4 with catch @ 0338ef54
                       catch() { ... } // from try @ 0338ef44 with catch @ 0338ef54 */
                    /* try { // try from 0338ef58 to 0348ef5b has its CatchHandler @ 0338ef64 */
                    /* try { // try from 0338ef5c to 0348ef67 has its CatchHandler @ 0338ed28 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0338ef58 with catch @ 0338ef64
                        */
                    /* try { // try from 0338ef68 to 0348efd3 has its CatchHandler @ 0338ef68
                       catch() { ... } // from try @ 0338ef68 with catch @ 0338ef68
                       catch() { ... } // from try @ 0338f0f4 with catch @ 0338ef68
                       catch() { ... } // from try @ 0338f13c with catch @ 0338ef68
                       catch() { ... } // from try @ 0338f19c with catch @ 0338ef68 */
          EnhancedUI_EnhancedScroller_EnhancedScroller__JumpToDataIndex
                    (pEVar3,iVar1,0.5,0.5,true,2,(float)iVar8 * 0.2 + 1.1,OGIPJCNPEOP,0,false,
                     (MethodInfo *)0x0);
          pSVar5 = (pNVar6->fields).HPJNLAOAJJE;
          if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          match = Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->__9__92_0;
          if (match == (System_Predicate_DILGLGMKOFG__o *)0x0) {
            if ((Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 0338efd4 to 0348efff has its CatchHandler @ 0338f10c */
            match = (System_Predicate_DILGLGMKOFG__o *)
                    thunk_FUN_01bda818(System_Predicate<DILGLGMKOFG>_TypeInfo);
            System_Predicate<object>___ctor();
            ppSVar4 = &Nekki_SF2_GUI_Dialogs_LotteryDialog_<>c_TypeInfo->static_fields->__9__92_0;
            *ppSVar4 = match;
            thunk_FUN_01c20e04(ppSVar4,match);
          }
          if (pSVar5 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
            iVar1 = System_Collections_Generic_List<object>__FindIndex
                              ((System_Collections_Generic_List_object__o *)pSVar5,
                               (System_Predicate_T__o *)match,
                               Method_System_Collections_Generic_List<DILGLGMKOFG>_FindIndex__);
                    /* try { // try from 0338f03c to 0348f067 has its CatchHandler @ 0338f104 */
            (pNVar6->fields).BECMMEIMOAL = iVar1;
            return false;
          }
        }
        goto LAB_0338f048;
      }
    }
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338ed94 with catch @ 0338eecc
                        */
  pEVar3 = (pNVar6->fields).Scroller;
  if (pEVar3 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
    EnhancedUI_EnhancedScroller_EnhancedScroller__set_LinearVelocity
              (pEVar3,(float)(__this->fields).v,(MethodInfo *)0x0);
                    /* try { // try from 0338eee4 to 0348eefb has its CatchHandler @ 0338ef54 */
    ppIVar7 = &(__this->fields).__2__current;
    *ppIVar7 = (Il2CppObject *)(__this->fields)._delay_5__2;
    thunk_FUN_01c20e04(ppIVar7);
    (__this->fields).__1__state = 1;
                    /* try { // try from 0338eefc to 0348ef43 has its CatchHandler @ 0338ed28 */
    return true;
  }
LAB_0338f048:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

