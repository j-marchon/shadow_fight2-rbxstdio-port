// Nekki.SF2.GUI.Dialogs.StoryDialog$$HALPHJGHPIP @ RVA 0x32BF158

Nekki_SF2_GUI_TimerLabel_o *
Nekki_SF2_GUI_Dialogs_StoryDialog__HALPHJGHPIP
          (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,Nekki_SF2_GUI_LabelAlias_o *FNPBJDFHPDJ,
          NBLEEDEAPHB_o *MLANEHFOIPK,UnityEngine_Transform_o *ELOCKFLGKNO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool value;
  System_Collections_Generic_List_LBMOOFGGPEB__o *__this_00;
  Nekki_SF2_GUI_TimerLabel_o *CJNHFNHJHPE;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MGNDHCBAPEN_LabelAlias__LabelAlias__o *__this_03;
  LBMOOFGGPEB_o *pLVar4;
  LBMOOFGGPEB_array *pLVar5;
  MGNDHCBAPEN_LabelAlias__LabelAlias__array *pMVar6;
  System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *__this_04;
  UnityEngine_Vector3_o value_00;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033bf140 with catch @ 033bf158
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033bf028 with catch @ 033bf15c
                        */
                    /* try { // try from 033bf174 to 034bf177 has its CatchHandler @ 033bf1a0 */
                    /* try { // try from 033bf178 to 034bf1af has its CatchHandler @ 033bec24 */
  if ((DAT_045674c4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<LBMOOFGGPEB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_Add__)
    ;
                    /* catch() { ... } // from try @ 033bf174 with catch @ 033bf1a0 */
    FUN_01bab630(&Method_MGNDHCBAPEN<LabelAlias,_LabelAlias>__ctor__);
                    /* try { // try from 033bf1b0 to 034bf1b7 has its CatchHandler @ 033bf1cc */
    FUN_01bab630(&MGNDHCBAPEN<LabelAlias,_LabelAlias>_TypeInfo);
                    /* try { // try from 033bf1b8 to 034bf1c3 has its CatchHandler @ 033bec24 */
    DAT_045674c4 = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<LBMOOFGGPEB>_Add__;
                    /* try { // try from 033bf1c4 to 034bf1cb has its CatchHandler @ 033bf1cc */
  if ((MLANEHFOIPK != (NBLEEDEAPHB_o *)0x0) &&
     (__this_00 = (__this->fields).super.DIKHJEINHID,
     __this_00 != (System_Collections_Generic_List_LBMOOFGGPEB__o *)0x0)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033bf1b0 with catch @ 033bf1cc
                       catch(type#2 @ 00000000) { ... } // from try @ 033bf1c4 with catch @ 033bf1cc
                        */
    pLVar4 = (MLANEHFOIPK->fields).KOLIPNBCKOB;
    pLVar5 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pLVar5 != (LBMOOFGGPEB_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pLVar5->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pLVar5->m_Items[(int)uVar1] = pLVar4;
        thunk_FUN_01c20e04(pLVar5->m_Items + (int)uVar1);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pLVar4,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      CJNHFNHJHPE = (Nekki_SF2_GUI_TimerLabel_o *)
                    (*(__this->klass->vtable)._37_DBNAPIBFLEB.methodPtr)
                              (__this,MLANEHFOIPK,(__this->klass->vtable)._37_DBNAPIBFLEB.method);
      pLVar4 = (MLANEHFOIPK->fields).KOLIPNBCKOB;
      if (pLVar4 != (LBMOOFGGPEB_o *)0x0) {
        LBMOOFGGPEB__JBGIAEJIKCA(pLVar4,CJNHFNHJHPE,(MethodInfo *)0x0);
        pLVar4 = (MLANEHFOIPK->fields).KOLIPNBCKOB;
        if ((((pLVar4 != (LBMOOFGGPEB_o *)0x0) &&
             (LBMOOFGGPEB__LLCONNGHGKD(pLVar4,(MethodInfo *)0x0),
             CJNHFNHJHPE != (Nekki_SF2_GUI_TimerLabel_o *)0x0)) &&
            (pUVar3 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)CJNHFNHJHPE,(MethodInfo *)0x0),
            pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
           (UnityEngine_Transform__SetParent(pUVar3,ELOCKFLGKNO,false,(MethodInfo *)0x0),
           FNPBJDFHPDJ != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
          value = UnityEngine_UI_Text__get_alignByGeometry
                            ((UnityEngine_UI_Text_o *)FNPBJDFHPDJ,(MethodInfo *)0x0);
          UnityEngine_UI_Text__set_alignByGeometry
                    ((UnityEngine_UI_Text_o *)CJNHFNHJHPE,value,(MethodInfo *)0x0);
          Nekki_SF2_GUI_LabelAlias__set_UseLabelLineSpacing
                    ((Nekki_SF2_GUI_LabelAlias_o *)CJNHFNHJHPE,
                     (FNPBJDFHPDJ->fields)._useLabelFontSize,(MethodInfo *)0x0);
          Nekki_SF2_GUI_LabelAlias__set_LabelLineSpacing
                    ((Nekki_SF2_GUI_LabelAlias_o *)CJNHFNHJHPE,
                     (float)(FNPBJDFHPDJ->fields)._labelFontSize,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
          __this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)FNPBJDFHPDJ,(MethodInfo *)0x0);
          if ((__this_01 != (UnityEngine_Transform_o *)0x0) &&
             (value_00 = UnityEngine_Transform__get_localPosition(__this_01,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__set_localPosition(pUVar3,value_00,(MethodInfo *)0x0);
            __this_02 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
            if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
              __this_04 = (__this->fields).PKCGAKMEKFG;
              __this_03 = (MGNDHCBAPEN_LabelAlias__LabelAlias__o *)
                          thunk_FUN_01bda818(MGNDHCBAPEN<LabelAlias,_LabelAlias>_TypeInfo);
              MGNDHCBAPEN<object,_object>___ctor
                        ((MGNDHCBAPEN_T1__T2__o *)__this_03,(Il2CppObject *)CJNHFNHJHPE,
                         (Il2CppObject *)FNPBJDFHPDJ,
                         Method_MGNDHCBAPEN<LabelAlias,_LabelAlias>__ctor__);
              lVar2 = 
              Method_System_Collections_Generic_List<MGNDHCBAPEN<LabelAlias,_LabelAlias>>_Add__;
              if (__this_04 !=
                  (System_Collections_Generic_List_MGNDHCBAPEN_LabelAlias__LabelAlias___o *)0x0) {
                pMVar6 = (__this_04->fields)._items;
                (__this_04->fields)._version = (__this_04->fields)._version + 1;
                if (pMVar6 != (MGNDHCBAPEN_LabelAlias__LabelAlias__array *)0x0) {
                  uVar1 = (__this_04->fields)._size;
                  if (uVar1 < (uint)pMVar6->max_length) {
                    (__this_04->fields)._size = uVar1 + 1;
                    pMVar6->m_Items[(int)uVar1] = __this_03;
                    thunk_FUN_01c20e04(pMVar6->m_Items + (int)uVar1,__this_03);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this_04,
                               (Il2CppObject *)__this_03,
                               *(MethodInfo_26E4DAC **)
                                (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  }
                  (__this->fields).JBKOKFGICDL = true;
                  return CJNHFNHJHPE;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

