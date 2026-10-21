// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$OnDestroy @ RVA 0x357517C

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__OnDestroy
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  EGMONPGHHDP_o *pEVar1;
  System_Delegate_o *value;
  MethodInfo *extraout_x1;
  System_Action_o **ppSVar2;
  System_Action_o *pSVar3;
  
  if ((DAT_04568c77 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_MMCHECDCGKF__);
    DAT_04568c77 = 1;
    method = extraout_x1;
  }
  (__this->fields).IHIEPGHGHKH = true;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar1 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if (pEVar1 != (EGMONPGHHDP_o *)0x0) {
    ppSVar2 = &(pEVar1->fields)._MJGJOMCLIPN_k__BackingField;
    pSVar3 = *ppSVar2;
    value = (System_Delegate_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    pSVar3 = (System_Action_o *)
             System_Delegate__Remove((System_Delegate_o *)pSVar3,value,(MethodInfo *)0x0);
    if ((pSVar3 != (System_Action_o *)0x0) && (pSVar3->klass != System_Action_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar3);
    }
    *ppSVar2 = pSVar3;
    thunk_FUN_01c20e04(ppSVar2,pSVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

