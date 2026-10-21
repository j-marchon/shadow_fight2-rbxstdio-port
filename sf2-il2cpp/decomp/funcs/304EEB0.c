// Nekki.SF2.GUI.Map.MapCurrencyPanel$$Awake @ RVA 0x304EEB0

void Nekki_SF2_GUI_Map_MapCurrencyPanel__Awake
               (Nekki_SF2_GUI_Map_MapCurrencyPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButtonViewBase_o *pNVar1;
  EEGDOGKBLNG_o *__this_00;
  System_Action_IList_PIADCKMDDAK___o *CJNHFNHJHPE;
  System_Collections_Generic_IList_PIADCKMDDAK__o *IMMNELPBGIF;
  MethodInfo *in_x2;
  
  if ((DAT_04565e36 & 1) == 0) {
    FUN_01bab630(&System_Action<IList<PIADCKMDDAK>>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_MapCurrencyPanel_MMCHECDCGKF__);
    DAT_04565e36 = 1;
  }
  pNVar1 = (__this->fields)._buttonView;
  if (pNVar1 != (Nekki_SF2_GUI_Map_MapButtonViewBase_o *)0x0) {
    (*(pNVar1->klass->vtable)._7_Init.methodPtr)(pNVar1,(pNVar1->klass->vtable)._7_Init.method);
    Nekki_SF2_GUI_Map_MapCurrencyPanel__MMCHECDCGKF(__this,IMMNELPBGIF,in_x2);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    CJNHFNHJHPE = (System_Action_IList_PIADCKMDDAK___o *)
                  thunk_FUN_01bda818(System_Action<IList<PIADCKMDDAK>>_TypeInfo);
                    /* try { // try from 0314ef5c to 0324ef87 has its CatchHandler @ 0314ef5c
                       catch() { ... } // from try @ 0314ef5c with catch @ 0314ef5c
                       catch() { ... } // from try @ 0314ef94 with catch @ 0314ef5c
                       catch() { ... } // from try @ 0314efd8 with catch @ 0314ef5c
                       catch() { ... } // from try @ 0314f024 with catch @ 0314ef5c */
    System_Action<object>___ctor();
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      EEGDOGKBLNG__GILENGKAJNN(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0314ef88 to 0324ef93 has its CatchHandler @ 0314efd8 */
  FUN_01bab8c8();
}

