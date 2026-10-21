// Nekki.SF2.GUI.Dialogs.ItemSetDialog$$.ctor @ RVA 0x347CAFC

void Nekki_SF2_GUI_Dialogs_ItemSetDialog___ctor
               (Nekki_SF2_GUI_Dialogs_ItemSetDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Button__o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 0357cb08 to 0367cb0f has its CatchHandler @ 0357cd94 */
                    /* try { // try from 0357cb14 to 0367cb1b has its CatchHandler @ 0357cda4 */
  if ((DAT_0456835e & 1) == 0) {
                    /* try { // try from 0357cb2c to 0367cb33 has its CatchHandler @ 0357cda0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>__ctor__);
                    /* try { // try from 0357cb34 to 0367cb47 has its CatchHandler @ 0357cd3c */
    FUN_01bab630(&System_Collections_Generic_List<Button>_TypeInfo);
    DAT_0456835e = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0357cb4c to 0367cb57 has its CatchHandler @ 0357cd4c */
  (__this->fields).HintCooldown = 5.0;
  __this_00 = (System_Collections_Generic_List_Button__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Button>_TypeInfo,method);
                    /* try { // try from 0357cb58 to 0367cb63 has its CatchHandler @ 0357cd44 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<Button>__ctor__);
  (__this->fields).HFGPCJHGOCP = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).HFGPCJHGOCP,__this_00);
                    /* try { // try from 0357cb74 to 0367cb7b has its CatchHandler @ 0357cd58 */
                    /* try { // try from 0357cb84 to 0367cb8b has its CatchHandler @ 0357cd38 */
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

