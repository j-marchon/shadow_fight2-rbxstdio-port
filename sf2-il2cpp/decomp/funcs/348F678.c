// PBHDPJBLDLG$$.ctor @ RVA 0x348F678

/* WARNING: Control flow encountered unimplemented instructions */

void PBHDPJBLDLG___ctor(PBHDPJBLDLG_o *__this,
                       Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *MIJCJJCICDA,
                       Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,
                       UnityEngine_GameObject_o *IACFAKIPBBB,bool LAIEJHPIKMI,MethodInfo *method)

{
  OJKCDJCBOBL_o *__this_00;
  OJKCDJCBOBL_o **ppOVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *extraout_x1;
  
  if ((DAT_04568409 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>_TypeInfo);
    FUN_01bab630(&OJKCDJCBOBL_TypeInfo);
    DAT_04568409 = 1;
    MIJCJJCICDA = extraout_x1;
  }
  __this_00 = (OJKCDJCBOBL_o *)thunk_FUN_01bda818(OJKCDJCBOBL_TypeInfo,MIJCJJCICDA);
  OJKCDJCBOBL___ctor(__this_00,(MethodInfo *)0x0);
  ppOVar1 = &(__this->fields).BAKEIGFACAG;
  *ppOVar1 = __this_00;
  thunk_FUN_01c20e04(ppOVar1,__this_00);
  thunk_FUN_01bda818(System_Collections_Generic_List<KeyValuePair<int,_CBPENMDOJDB>>_TypeInfo);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}

