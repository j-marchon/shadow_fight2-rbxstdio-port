// Nekki.SF2.GUI.Fight.ComboModel$$UpdateHotGroundTimer @ RVA 0x332CF08

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Fight_ComboModel__UpdateHotGroundTimer
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,int32_t LFJGFLNMBMC,MethodInfo *method)

{
  int32_t iVar1;
  System_Predicate_ComboModel_IADNCANFNJH__o **ppSVar2;
  Nekki_SF2_GUI_Fight_ComboModel_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  Nekki_SF2_GUI_Fight_ComboItem_o *__this_01;
  System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *__this_02;
  System_Predicate_ComboModel_IADNCANFNJH__o *match;
  
                    /* try { // try from 0342cf14 to 0352cf1b has its CatchHandler @ 0342cf5c */
                    /* try { // try from 0342cf1c to 0352cf43 has its CatchHandler @ 0342cdf4 */
  if ((DAT_045678d3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Find__);
                    /* try { // try from 0342cf44 to 0352cf47 has its CatchHandler @ 0342cf54 */
    FUN_01bab630(&System_Predicate<ComboModel_IADNCANFNJH>_TypeInfo);
                    /* try { // try from 0342cf48 to 0352cf4b has its CatchHandler @ 0342cf50 */
                    /* try { // try from 0342cf4c to 0352cf77 has its CatchHandler @ 0342cdf4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342cf48 with catch @ 0342cf50
                        */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ComboModel_<>c_OGCNHABBHKM__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342cf44 with catch @ 0342cf54
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342cef4 with catch @ 0342cf58
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342cf14 with catch @ 0342cf5c
                        */
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ComboModel_<>c_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342cee0 with catch @ 0342cf60
                        */
    DAT_045678d3 = 1;
  }
  (__this->fields).OPDLMLAODIG = LFJGFLNMBMC;
  __this_02 = (__this->fields).EGHLGEIJLAM;
                    /* try { // try from 0342cf78 to 0352cf7b has its CatchHandler @ 0342cfa4 */
  if ((Nekki_SF2_GUI_Fight_ComboModel_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0342cf7c to 0352cfb3 has its CatchHandler @ 0342cdf4 */
    thunk_FUN_01ba7564();
  }
  match = Nekki_SF2_GUI_Fight_ComboModel_<>c_TypeInfo->static_fields->__9__36_0;
  if (match == (System_Predicate_ComboModel_IADNCANFNJH__o *)0x0) {
    if ((Nekki_SF2_GUI_Fight_ComboModel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* catch() { ... } // from try @ 0342cf78 with catch @ 0342cfa4 */
                    /* try { // try from 0342cfb4 to 0352cfbb has its CatchHandler @ 0342cfd0 */
    match = (System_Predicate_ComboModel_IADNCANFNJH__o *)
            thunk_FUN_01bda818(System_Predicate<ComboModel_IADNCANFNJH>_TypeInfo);
                    /* try { // try from 0342cfbc to 0352cfc7 has its CatchHandler @ 0342cdf4 */
    in_x3 = (MethodInfo *)0x0;
                    /* try { // try from 0342cfc8 to 0352cfcf has its CatchHandler @ 0342cfd0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0342cfb4 with catch @ 0342cfd0
                       catch(type#2 @ 00000000) { ... } // from try @ 0342cfc8 with catch @ 0342cfd0
                        */
    System_Predicate<object>___ctor();
                    /* try { // try from 0342cfd4 to 0352d0cb has its CatchHandler @ 0342cfd4
                       catch() { ... } // from try @ 0342cfd4 with catch @ 0342cfd4
                       catch() { ... } // from try @ 0342d154 with catch @ 0342cfd4
                       catch() { ... } // from try @ 0342d18c with catch @ 0342cfd4
                       catch() { ... } // from try @ 0342d1bc with catch @ 0342cfd4
                       catch() { ... } // from try @ 0342d1ec with catch @ 0342cfd4 */
    ppSVar2 = &Nekki_SF2_GUI_Fight_ComboModel_<>c_TypeInfo->static_fields->__9__36_0;
    *ppSVar2 = match;
    thunk_FUN_01c20e04(ppSVar2,match);
  }
  if (__this_02 != (System_Collections_Generic_List_ComboModel_IADNCANFNJH__o *)0x0) {
    method_00 = Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Find__;
    __this_00 = (Nekki_SF2_GUI_Fight_ComboModel_o *)
                System_Collections_Generic_List<object>__Find
                          ((System_Collections_Generic_List_object__o *)__this_02,
                           (System_Predicate_T__o *)match,
                           (MethodInfo_26E5414 *)
                           Method_System_Collections_Generic_List<ComboModel_IADNCANFNJH>_Find__);
    if (__this_00 == (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      __this_00 = (Nekki_SF2_GUI_Fight_ComboModel_o *)
                  Nekki_SF2_GUI_Fight_ComboModel__CreateHotGroundTimer
                            (__this,(__this->fields).OPDLMLAODIG,method_00);
    }
    if (__this_00 != (Nekki_SF2_GUI_Fight_ComboModel_o *)0x0) {
      iVar1 = Nekki_SF2_GUI_Fight_ComboModel__JMMHIPLMPMG
                        (__this_00,*(int32_t *)&(__this_00->fields).super.EKFFCOAOHBD,0,in_x3);
      __this_01 = (Nekki_SF2_GUI_Fight_ComboItem_o *)
                  (__this_00->fields).super.super.super.super.super.m_CachedPtr;
      *(int32_t *)&(__this_00->fields).super.super.m_CancellationTokenSource = iVar1;
      if (__this_01 != (Nekki_SF2_GUI_Fight_ComboItem_o *)0x0) {
        Nekki_SF2_GUI_Fight_ComboItem__UpdateCount
                  (__this_01,(__this->fields).OPDLMLAODIG,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

