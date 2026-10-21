// Nekki.SF2.GUI.Dialogs.ChooseBuyItemDialog$$.ctor @ RVA 0x32CDA8C

void Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog___ctor
               (Nekki_SF2_GUI_Dialogs_ChooseBuyItemDialog_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 033cda90 to 034cda93 has its CatchHandler @ 033cdab4 */
                    /* try { // try from 033cda94 to 034cdabb has its CatchHandler @ 033cd790 */
  if ((DAT_04567532 & 1) == 0) {
                    /* catch() { ... } // from try @ 033cda90 with catch @ 033cdab4 */
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
                    /* try { // try from 033cdabc to 034cdacf has its CatchHandler @ 033cdb40 */
    DAT_04567532 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
                    /* catch() { ... } // from try @ 033cd9e4 with catch @ 033cdad0
                       try { // try from 033cdad0 to 034cdae7 has its CatchHandler @ 033cd790 */
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).HBJPBPBIOOB;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
                    /* try { // try from 033cdae8 to 034cdaeb has its CatchHandler @ 033cdb14 */
                    /* try { // try from 033cdaec to 034cdb23 has its CatchHandler @ 033cd790 */
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

