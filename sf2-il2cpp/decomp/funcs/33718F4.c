// BAOGEGACLOH$$.ctor @ RVA 0x33718F4

void BAOGEGACLOH___ctor(BAOGEGACLOH_o *__this,NLBPJNEGNNM_o *FGHHCGFBDKF,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o **ppNVar2;
  NLBPJNEGNNM_o **ppNVar3;
  
                    /* try { // try from 03471904 to 0357191f has its CatchHandler @ 03471a54 */
                    /* try { // try from 03471920 to 03571987 has its CatchHandler @ 034714a4 */
  if ((DAT_04567b24 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567b24 = 1;
  }
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields).JDBNPCMFLOF;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  OHPOFOPJIMB___ctor((OHPOFOPJIMB_o *)__this,0,0,(MethodInfo *)0x0);
  ppNVar2 = &(__this->fields).ILCGLGPADOK;
  *ppNVar2 = (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *)0x0;
                    /* try { // try from 03471988 to 0357198f has its CatchHandler @ 03471a9c */
  thunk_FUN_01c20e04(ppNVar2,0);
  ppNVar3 = &(__this->fields).MAIMCOJJJCM;
  *ppNVar3 = FGHHCGFBDKF;
                    /* try { // try from 0347199c to 035719a3 has its CatchHandler @ 03471a94 */
                    /* try { // try from 034719a4 to 035719ff has its CatchHandler @ 034714a4 */
  thunk_FUN_01c20e04(ppNVar3,FGHHCGFBDKF);
  return;
}

