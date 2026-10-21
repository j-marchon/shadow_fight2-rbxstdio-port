// Nekki.SF2.GUI.Fight.ScreenModel$$MDEAIENJJJH @ RVA 0x355E3A0

void Nekki_SF2_GUI_Fight_ScreenModel__MDEAIENJJJH
               (Nekki_SF2_GUI_Fight_ScreenModel_o *__this,bool IJGKJEKFKDL,MethodInfo *method)

{
  int32_t iVar1;
  BFMEMCBCKLK_o *__this_00;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Action_BFMEMCBCKLK__o *pSVar3;
  System_String_o **ppSVar4;
  float fVar5;
  
  if ((DAT_04568b9f & 1) == 0) {
    FUN_01bab630(&BFMEMCBCKLK_TypeInfo);
    DAT_04568b9f = 1;
  }
  __this_00 = (BFMEMCBCKLK_o *)thunk_FUN_01bda818(BFMEMCBCKLK_TypeInfo);
  BFMEMCBCKLK___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (BFMEMCBCKLK_o *)0x0) {
    (__this_00->fields).HEMGHNOOJPI = (__this->fields)._Type;
    iVar1 = Nekki_SF2_GUI_Fight_ScreenModel__get_CurrentStyleStrip(__this,method_00);
    (__this_00->fields).LKCLAAIHPMG = iVar1;
    pSVar2 = Nekki_SF2_GUI_Fight_ScreenModel__get_CurrentStyleName(__this,method_01);
    ppSVar4 = &(__this_00->fields).AOKLNLDCPGF;
    *ppSVar4 = pSVar2;
    thunk_FUN_01c20e04(ppSVar4,pSVar2);
    fVar5 = Nekki_SF2_GUI_Fight_ScreenModel__get_CurrentStyleValue(__this,method_02);
    (__this_00->fields).GKDHKOCLPBB = fVar5;
    (__this_00->fields).CANHKPJGDFO = IJGKJEKFKDL;
    pSVar3 = (__this->fields).OnStyleChange;
    if (pSVar3 != (System_Action_BFMEMCBCKLK__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0365e45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar3->fields).super.super.invoke_impl)
                ((pSVar3->fields).super.super.method_code,__this_00,
                 (pSVar3->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

