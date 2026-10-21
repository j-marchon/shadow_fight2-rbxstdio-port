// Nekki.SF2.GUI.Menu.MainMenu$$DLJGDLIAODA @ RVA 0x356CF30

void Nekki_SF2_GUI_Menu_MainMenu__DLJGDLIAODA
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MenuAdvertisingButton__o **ppSVar1;
  Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o **ppNVar2;
  bool bVar3;
  EGMONPGHHDP_o *__this_00;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar4;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *pNVar5;
  System_Collections_Generic_List_MenuAdvertisingButton__o *pSVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_RectTransform_o *pUVar8;
  
  if ((DAT_04568c44 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ProgressBarDojoBattlePass>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<ProgressBarDojoPanel>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568c44 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField != false) {
                    /* try { // try from 0366d178 to 0376d1a3 has its CatchHandler @ 036733ac */
    return;
  }
  pSVar6 = (__this->fields).ADBHOMPFAPK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  ppSVar1 = &(__this->fields).ADBHOMPFAPK;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar7 = (__this->fields)._advButtonWidgetPrefab;
    pUVar8 = (__this->fields)._advButtonWidgetPos;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar7 = (UnityEngine_GameObject_o *)
             UnityEngine_Object__Instantiate<object>
                       ((Il2CppObject *)pUVar7,(UnityEngine_Transform_o *)pUVar8,
                        Method_UnityEngine_Object_Instantiate<GameObject>__);
    if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_0366d17c;
    pSVar6 = (System_Collections_Generic_List_MenuAdvertisingButton__o *)
             UnityEngine_GameObject__GetComponent<object>
                       (pUVar7,Method_UnityEngine_GameObject_GetComponent<ProgressBarDojoPanel>__);
    *ppSVar1 = pSVar6;
    thunk_FUN_01c20e04(ppSVar1,pSVar6);
    if ((Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)*ppSVar1 ==
        (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)0x0) goto LAB_0366d17c;
    Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__Init
              ((Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)*ppSVar1,(MethodInfo *)0x0);
  }
                    /* try { // try from 0366d038 to 0376d047 has its CatchHandler @ 03673324 */
  if ((*ppSVar1 != (System_Collections_Generic_List_MenuAdvertisingButton__o *)0x0) &&
     (pUVar7 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)*ppSVar1,(MethodInfo *)0x0),
     pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
                    /* try { // try from 0366d054 to 0376d05b has its CatchHandler @ 036732e4 */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0366d06c to 0376d073 has its CatchHandler @ 036732e0 */
    __this_00 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
    if (__this_00 != (EGMONPGHHDP_o *)0x0) {
      pJVar4 = EGMONPGHHDP__OKBKFJKEAAG(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0366d080 to 0376d087 has its CatchHandler @ 036732dc */
      if ((pJVar4 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0) && ((pJVar4->fields).HKKGMGDDCOD != false)) {
        pNVar5 = (__this->fields).KLPEJDHIIGF;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0366d098 to 0376d09f has its CatchHandler @ 036732d8 */
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 0366d0a0 to 0376d0af has its CatchHandler @ 036732d4 */
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar3) {
          pUVar7 = (__this->fields)._dojoProgressBarPrefab;
          pUVar8 = (__this->fields)._advButtonWidgetPos;
                    /* try { // try from 0366d0c0 to 0376d0eb has its CatchHandler @ 036733b0 */
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pUVar7 = (UnityEngine_GameObject_o *)
                   UnityEngine_Object__Instantiate<object>
                             ((Il2CppObject *)pUVar7,(UnityEngine_Transform_o *)pUVar8,
                              Method_UnityEngine_Object_Instantiate<GameObject>__);
          if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto LAB_0366d17c;
          ppNVar2 = &(__this->fields).KLPEJDHIIGF;
          pNVar5 = (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (pUVar7,
                              Method_UnityEngine_GameObject_GetComponent<ProgressBarDojoBattlePass>__
                             );
                    /* try { // try from 0366d0f8 to 0376d107 has its CatchHandler @ 03673320 */
          *ppNVar2 = pNVar5;
          thunk_FUN_01c20e04(ppNVar2,pNVar5);
          if ((Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)*ppNVar2 ==
              (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0) goto LAB_0366d17c;
                    /* try { // try from 0366d114 to 0376d11b has its CatchHandler @ 036732d0 */
          Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__Init
                    ((Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)*ppNVar2,(MethodInfo *)0x0);
        }
      }
      pNVar5 = (__this->fields).KLPEJDHIIGF;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 0366d12c to 0376d133 has its CatchHandler @ 036732cc */
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
                    /* try { // try from 0366d140 to 0376d147 has its CatchHandler @ 036732c8 */
      pNVar5 = (__this->fields).KLPEJDHIIGF;
      if ((pNVar5 != (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)0x0) &&
         (pUVar7 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
         pUVar7 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 0366d158 to 0376d15f has its CatchHandler @ 036732c4 */
                    /* try { // try from 0366d160 to 0376d16f has its CatchHandler @ 036732c0 */
        UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_0366d17c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

