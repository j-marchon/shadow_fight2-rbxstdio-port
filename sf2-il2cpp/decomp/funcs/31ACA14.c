// Nekki.SF2.GUI.Pvp.LocationSelectModule$$HCKMKFBGPIM @ RVA 0x31ACA14

void Nekki_SF2_GUI_Pvp_LocationSelectModule__HCKMKFBGPIM
               (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this,MethodInfo *method)

{
  uint uVar1;
  undefined4 uVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_01;
  UnityEngine_GameObject_o *pUVar3;
  JFMLOEMEKLI_array *pJVar4;
  uint uVar5;
  JFMLOEMEKLI_o *pJVar6;
  
                    /* try { // try from 032aca20 to 033aca2b has its CatchHandler @ 032acb50 */
  if ((DAT_04566b52 & 1) == 0) {
                    /* try { // try from 032aca40 to 033aca4b has its CatchHandler @ 032acb54 */
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponentInChildren<ResolutionImage>__);
                    /* try { // try from 032aca4c to 033acb23 has its CatchHandler @ 032ac58c */
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_14114);
    DAT_04566b52 = 1;
  }
  if ((__this->fields).super.NKIKDJEPECM != false) {
    return;
  }
  pJVar4 = (__this->fields).DLCCJFCKAJL;
  if (pJVar4 != (JFMLOEMEKLI_array *)0x0) {
    uVar1 = (uint)pJVar4->max_length;
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032ac9e8 with catch @ 032acb88 */
          FUN_01bab8d0();
        }
        pJVar6 = pJVar4->m_Items[(int)uVar5];
        pUVar3 = (__this->fields).super.selectCellPrefab;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pUVar3 = (UnityEngine_GameObject_o *)
                 UnityEngine_Object__Instantiate<object>
                           ((Il2CppObject *)pUVar3,
                            Method_UnityEngine_Object_Instantiate<GameObject>__);
        if ((pUVar3 == (UnityEngine_GameObject_o *)0x0) ||
           (__this_00 = (Nekki_SF2_GUI_ResolutionImage_o *)
                        UnityEngine_GameObject__GetComponentInChildren<object>
                                  (pUVar3,
                                   Method_UnityEngine_GameObject_GetComponentInChildren<ResolutionImage>__
                                  ), __this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0))
        goto LAB_032acb84;
        uVar2 = StringLiteral_14114._4_4_;
        (__this_00->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14114
        ;
        (__this_00->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar2;
                    /* try { // try from 032acb24 to 033acb27 has its CatchHandler @ 032acb74 */
        thunk_FUN_01c20e04(&(__this_00->fields).super.m_PixelsPerUnitMultiplier);
                    /* try { // try from 032acb28 to 033acb2b has its CatchHandler @ 032acb70 */
        if (pJVar6 == (JFMLOEMEKLI_o *)0x0) goto LAB_032acb84;
                    /* try { // try from 032acb2c to 033acb2f has its CatchHandler @ 032acb6c */
                    /* try { // try from 032acb30 to 033acb33 has its CatchHandler @ 032acb58 */
                    /* try { // try from 032acb34 to 033acb37 has its CatchHandler @ 032acb4c */
                    /* try { // try from 032acb38 to 033acb3b has its CatchHandler @ 032ac58c */
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  (__this_00,(pJVar6->fields).DGGHNFBCNGI,(MethodInfo *)0x0);
                    /* try { // try from 032acb3c to 033acb3f has its CatchHandler @ 032acb48 */
        __this_01 = (__this->fields).super._selectTable;
                    /* try { // try from 032acb40 to 033acbab has its CatchHandler @ 032ac58c */
        if (__this_01 == (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) goto LAB_032acb84;
                    /* catch() { ... } // from try @ 032acb3c with catch @ 032acb48 */
                    /* catch() { ... } // from try @ 032acb34 with catch @ 032acb4c */
        Nekki_SF2_GUI_Pvp_PlayersSelectTable__SetItem(__this_01,pUVar3,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032aca20 with catch @ 032acb50 */
        uVar1 = (uint)pJVar4->max_length;
                    /* catch() { ... } // from try @ 032aca40 with catch @ 032acb54 */
        uVar5 = uVar5 + 1;
                    /* catch() { ... } // from try @ 032acb30 with catch @ 032acb58 */
                    /* catch() { ... } // from try @ 032ac9a0 with catch @ 032acb5c */
      } while ((int)uVar5 < (int)uVar1);
    }
                    /* catch() { ... } // from try @ 032ac9c8 with catch @ 032acb60 */
                    /* catch() { ... } // from try @ 032ac934 with catch @ 032acb64 */
                    /* catch() { ... } // from try @ 032ac968 with catch @ 032acb68 */
                    /* catch() { ... } // from try @ 032acb2c with catch @ 032acb6c */
                    /* catch() { ... } // from try @ 032acb28 with catch @ 032acb70 */
                    /* catch() { ... } // from try @ 032acb24 with catch @ 032acb74 */
                    /* catch() { ... } // from try @ 032ac944 with catch @ 032acb78 */
                    /* catch() { ... } // from try @ 032ac98c with catch @ 032acb7c */
                    /* catch() { ... } // from try @ 032ac978 with catch @ 032acb80 */
    Nekki_SF2_GUI_Pvp_SelectModule__HCKMKFBGPIM
              ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
    return;
  }
LAB_032acb84:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032ac94c with catch @ 032acb84 */
  FUN_01bab8c8();
}

