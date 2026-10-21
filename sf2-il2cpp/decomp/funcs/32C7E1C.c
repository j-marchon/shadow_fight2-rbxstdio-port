// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$FKPLBNEDFGN @ RVA 0x32C7E1C

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__FKPLBNEDFGN
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,MethodInfo *method)

{
  int32_t startIndex;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  System_String_o *pSVar2;
  PLIIGOCLJDL_o *__this_00;
  EOLFEKNCPLM_o *pEVar3;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  GKLPDMLELJF_o *pGVar4;
  System_String_o *pSVar5;
  int32_t local_24;
  
  if ((DAT_045674fb & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_7231);
    DAT_045674fb = 1;
  }
  pEVar3 = (__this->fields).MLAAJICBOAD;
  if (((pEVar3 != (EOLFEKNCPLM_o *)0x0) &&
      (pGVar4 = (pEVar3->fields).MCOPPCNPAHF, pGVar4 != (GKLPDMLELJF_o *)0x0)) &&
     (pNVar1 = (__this->fields)._nameLabel, pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
    (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
              (pNVar1,(pGVar4->fields).LLBEKLPKDHK,(pNVar1->klass->vtable)._75_set_text.method);
    local_24 = (pGVar4->fields).PEBHLKLGDBM;
    pNVar1 = (__this->fields)._danLabel;
                    /* try { // try from 033c7e90 to 034c7e97 has its CatchHandler @ 033c8300 */
    pSVar2 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 033c7ea4 to 034c7eaf has its CatchHandler @ 033c7f68 */
      (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                (pNVar1,pSVar2,(pNVar1->klass->vtable)._75_set_text.method);
      pSVar2 = StringLiteral_7231;
                    /* try { // try from 033c7eb8 to 034c7ebf has its CatchHandler @ 033c7f5c */
      pSVar5 = (pGVar4->fields).FFOIEHLJLDA;
      if (pSVar5 != (System_String_o *)0x0) {
                    /* try { // try from 033c7ed4 to 034c7edb has its CatchHandler @ 033c7f74 */
        startIndex = System_String__IndexOf(pSVar5,0x23,(MethodInfo *)0x0);
        if (-1 < startIndex) {
          pSVar5 = System_String__Substring(pSVar5,startIndex,(MethodInfo *)0x0);
          pSVar2 = System_String__Concat(pSVar2,pSVar5,(MethodInfo *)0x0);
        }
        pNVar1 = (__this->fields)._playerIdLabel;
        if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* try { // try from 033c7f1c to 034c7f23 has its CatchHandler @ 033c7f64 */
          (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
                    (pNVar1,pSVar2,(pNVar1->klass->vtable)._75_set_text.method);
          __this_01 = (__this->fields)._danImage;
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033c7f38 to 034c7f3b has its CatchHandler @ 033c7f70 */
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 033c7f40 to 034c7f43 has its CatchHandler @ 033c7f60 */
          __this_00 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
                    /* try { // try from 033c7f48 to 034c7f4b has its CatchHandler @ 033c7f68 */
                    /* try { // try from 033c7f50 to 034c7f57 has its CatchHandler @ 033c7f64 */
          if ((__this_00 != (PLIIGOCLJDL_o *)0x0) &&
             (pSVar2 = PLIIGOCLJDL__POKFLHLAHNM
                                 (__this_00,(__this->fields).MLAAJICBOAD,(MethodInfo *)0x0),
             __this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
                    /* try { // try from 033c7f58 to 034c7f8b has its CatchHandler @ 033c79c8 */
                    /* catch() { ... } // from try @ 033c7eb8 with catch @ 033c7f5c */
                    /* catch() { ... } // from try @ 033c7f40 with catch @ 033c7f60 */
                    /* catch() { ... } // from try @ 033c7f1c with catch @ 033c7f64
                       catch() { ... } // from try @ 033c7f50 with catch @ 033c7f64 */
            Nekki_SF2_GUI_ResolutionImage__set_SpriteName(__this_01,pSVar2,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033c7ea4 with catch @ 033c7f68
                       catch() { ... } // from try @ 033c7f48 with catch @ 033c7f68 */
                    /* catch() { ... } // from try @ 033c7f38 with catch @ 033c7f70 */
                    /* catch() { ... } // from try @ 033c7ed4 with catch @ 033c7f74 */
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

