// Nekki.SF2.GUI.Profile.TricksController$$BACIFGCANEA @ RVA 0x3155328

void Nekki_SF2_GUI_Profile_TricksController__BACIFGCANEA
               (Nekki_SF2_GUI_Profile_TricksController_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KCLPNDAPADO__o *pSVar1;
  System_Comparison_KCLPNDAPADO__o **ppSVar2;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_KCLPNDAPADO__o **ppSVar3;
  System_Comparison_KCLPNDAPADO__o *comparison;
  
  if ((DAT_04566830 & 1) == 0) {
    FUN_01bab630(&System_Comparison<KCLPNDAPADO>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_Sort__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 03255370 to 0335537b has its CatchHandler @ 03256700 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_TricksController_<>c_NJPCGJIEJBP__);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_TricksController_<>c_TypeInfo);
                    /* try { // try from 0325538c to 03355393 has its CatchHandler @ 03256630 */
    DAT_04566830 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032553a4 to 033553ab has its CatchHandler @ 0325661c */
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
                    /* try { // try from 032553ac to 033553c7 has its CatchHandler @ 032566f0 */
  pSVar1 = MGNPHCAAEIO__DCOFAPICGBA(9,(MethodInfo *)0x0);
  ppSVar3 = &(__this->fields).GLNEIGKMPDC;
  *ppSVar3 = pSVar1;
  thunk_FUN_01c20e04(ppSVar3,pSVar1);
  pSVar1 = *ppSVar3;
  if ((Nekki_SF2_GUI_Profile_TricksController_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032553d4 to 033553db has its CatchHandler @ 03256624 */
    thunk_FUN_01ba7564();
  }
  comparison = Nekki_SF2_GUI_Profile_TricksController_<>c_TypeInfo->static_fields->__9__10_0;
  if (comparison == (System_Comparison_KCLPNDAPADO__o *)0x0) {
                    /* try { // try from 032553e8 to 033553eb has its CatchHandler @ 03256618 */
    if ((Nekki_SF2_GUI_Profile_TricksController_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    comparison = (System_Comparison_KCLPNDAPADO__o *)
                 thunk_FUN_01bda818(System_Comparison<KCLPNDAPADO>_TypeInfo);
                    /* try { // try from 03255424 to 0335544b has its CatchHandler @ 03256150 */
    System_Comparison<object>___ctor();
    ppSVar2 = &Nekki_SF2_GUI_Profile_TricksController_<>c_TypeInfo->static_fields->__9__10_0;
    *ppSVar2 = comparison;
    thunk_FUN_01c20e04(ppSVar2,comparison);
  }
  if (pSVar1 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
    System_Collections_Generic_List<object>__Sort
              ((System_Collections_Generic_List_object__o *)pSVar1,
               (System_Comparison_T__o *)comparison,
               Method_System_Collections_Generic_List<KCLPNDAPADO>_Sort__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

