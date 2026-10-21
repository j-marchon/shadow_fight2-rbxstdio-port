// Nekki.SF2.GUI.Dialogs.BaseDialog$$.ctor @ RVA 0x33AE3C8

void Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
               (Nekki_SF2_GUI_Dialogs_BaseDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Button__o *__this_00;
  System_Collections_Generic_List_Button__o **ppSVar1;
  System_Collections_Generic_List_LBMOOFGGPEB__o *__this_01;
  System_Collections_Generic_List_LBMOOFGGPEB__o **ppSVar2;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 034ae3f4 to 035ae41b has its CatchHandler @ 034ae704 */
  if ((DAT_04567d2e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<LBMOOFGGPEB>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<LBMOOFGGPEB>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<Button>_TypeInfo);
                    /* try { // try from 034ae450 to 035ae47b has its CatchHandler @ 034ae700 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>__ctor__);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567d2e = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_Button__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Button>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<Button>__ctor__);
  ppSVar1 = &(__this->fields).EHGPDKENGAP;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_LBMOOFGGPEB__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<LBMOOFGGPEB>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<LBMOOFGGPEB>__ctor__);
  ppSVar2 = &(__this->fields).DIKHJEINHID;
  *ppSVar2 = __this_01;
                    /* try { // try from 034ae4b0 to 035ae4bb has its CatchHandler @ 034ae6f8 */
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  (__this->fields).DMNJBHNNEKI = StringLiteral_1;
  thunk_FUN_01c20e04();
  (__this->fields).FCBFEJDLODF = true;
                    /* try { // try from 034ae4cc to 035ae4d3 has its CatchHandler @ 034ae6f0 */
  (__this->fields).NIEHEOKFPAN = StringLiteral_1;
                    /* try { // try from 034ae4d8 to 035ae4df has its CatchHandler @ 034ae6f4 */
  thunk_FUN_01c20e04();
  (__this->fields).AHHAONPHEPD = true;
  (__this->fields).FKKACPDDADI = 1;
  (__this->fields).LLBBHINDIDB = StringLiteral_1;
                    /* try { // try from 034ae4f0 to 035ae4ff has its CatchHandler @ 034ae6e4 */
  thunk_FUN_01c20e04();
  (__this->fields).KJLEAJNIFPA = true;
  (__this->fields).IsPausing = true;
                    /* try { // try from 034ae50c to 035ae513 has its CatchHandler @ 034ae6ac */
  Nekki_SF2_GUI_SFMonoBehaviour<object>___ctor
            ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,
             Method_Nekki_SF2_GUI_SFMonoBehaviour<object>__ctor__);
  return;
}

