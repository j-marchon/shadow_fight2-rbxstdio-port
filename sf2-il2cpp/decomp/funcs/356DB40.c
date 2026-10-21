// Nekki.SF2.GUI.Menu.MainMenu$$IDMLEMPNLFH @ RVA 0x356DB40

void Nekki_SF2_GUI_Menu_MainMenu__IDMLEMPNLFH
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *pNVar3;
  System_Collections_Generic_List_MenuAdvertisingButton__o *pSVar4;
  
                    /* try { // try from 0366db48 to 0376db4f has its CatchHandler @ 03672e94 */
  if ((DAT_04568c39 & 1) == 0) {
                    /* try { // try from 0366db60 to 0376db67 has its CatchHandler @ 03672e90 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 0366db68 to 0376db77 has its CatchHandler @ 036731f4 */
    DAT_04568c39 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).super.__IsReleased_k__BackingField == false) {
    pNVar3 = (__this->fields).KLPEJDHIIGF;
                    /* try { // try from 0366db80 to 0376db8f has its CatchHandler @ 03672e8c */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0366dba0 to 0376dba7 has its CatchHandler @ 03672e88 */
    if (bVar1) {
      pNVar3 = (__this->fields).KLPEJDHIIGF;
      if ((pNVar3 == (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0366dc40;
                    /* try { // try from 0366dbb8 to 0376dbbf has its CatchHandler @ 03672e84 */
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
      if (bVar1) {
        __this_00 = (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)(__this->fields).KLPEJDHIIGF;
        if (__this_00 == (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *)0x0) goto LAB_0366dc40;
                    /* try { // try from 0366dbcc to 0376dbd3 has its CatchHandler @ 03672e80 */
        Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__UpdateProgressBar(__this_00,(MethodInfo *)0x0)
        ;
      }
    }
    pSVar4 = (__this->fields).ADBHOMPFAPK;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0366dbe4 to 0376dbeb has its CatchHandler @ 03672e7c */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 0366dbec to 0376dbfb has its CatchHandler @ 03672e78 */
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pSVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pSVar4 = (__this->fields).ADBHOMPFAPK;
                    /* try { // try from 0366dc0c to 0376dc13 has its CatchHandler @ 03672e74 */
      if ((pSVar4 != (System_Collections_Generic_List_MenuAdvertisingButton__o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pSVar4,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
        bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar2,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pNVar3 = (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)(__this->fields).ADBHOMPFAPK;
        if (pNVar3 != (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *)0x0) {
                    /* try { // try from 0366dc24 to 0376dc2b has its CatchHandler @ 03672e70 */
          Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__UpdateProgressBar(pNVar3,(MethodInfo *)0x0);
          return;
        }
      }
LAB_0366dc40:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* try { // try from 0366dc38 to 0376dc3f has its CatchHandler @ 03672e6c */
  return;
}

