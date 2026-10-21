// Nekki.SF2.GUI.Profile.TricksController$$ScrollToFirstOpenItem @ RVA 0x3155598

bool Nekki_SF2_GUI_Profile_TricksController__ScrollToFirstOpenItem
               (Nekki_SF2_GUI_Profile_TricksController_o *__this,float GGMALJLKHHB,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_String_o *b;
  Nekki_SF2_GUI_TableView_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  System_Collections_Generic_List_KCLPNDAPADO__o *pSVar3;
  ACHLOMELAJE_o *pAVar4;
  int index;
  System_Collections_Generic_List_string__o *__this_01;
  int index_00;
  System_String_o *a;
  
                    /* try { // try from 032555c0 to 033555cb has its CatchHandler @ 032566e4 */
  if ((DAT_04566834 & 1) == 0) {
                    /* try { // try from 032555d0 to 033555f7 has its CatchHandler @ 032566ec */
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03255608 to 03355613 has its CatchHandler @ 032566f8 */
    DAT_04566834 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
                    /* try { // try from 03255628 to 03355633 has its CatchHandler @ 032566e8 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03255648 to 03355653 has its CatchHandler @ 032566fc */
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
     (pSVar3 = (__this->fields).GLNEIGKMPDC,
     pSVar3 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0)) {
                    /* try { // try from 03255668 to 03355673 has its CatchHandler @ 032566dc */
    __this_01 = (pAVar4->fields).MPBEGAIIEAC;
                    /* try { // try from 03255678 to 0335569f has its CatchHandler @ 032566d4 */
    index = 0;
    do {
      if ((pSVar3->fields)._size <= index) {
                    /* try { // try from 03255748 to 0335574f has its CatchHandler @ 03256648 */
        return false;
      }
      if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) break;
      if (0 < (__this_01->fields)._size) {
        index_00 = 0;
        do {
          pSVar3 = (__this->fields).GLNEIGKMPDC;
          if ((pSVar3 == (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) ||
             (pIVar2 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar3,index,
                                  Method_System_Collections_Generic_List<KCLPNDAPADO>_get_Item__),
             pIVar2 == (Il2CppObject *)0x0)) goto LAB_03255750;
                    /* try { // try from 032556b8 to 0335572f has its CatchHandler @ 03256704 */
          a = pIVar2[1].monitor;
          b = (System_String_o *)
              System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)__this_01,index_00,
                         Method_System_Collections_Generic_List<string>_get_Item__);
          bVar1 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
          if (bVar1) {
            if (index < 0) {
              return false;
            }
            pSVar3 = (__this->fields).GLNEIGKMPDC;
            if (pSVar3 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
              if ((pSVar3->fields)._size <= index) {
                return false;
              }
              __this_00 = (__this->fields).super._TableView;
              if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
                Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,index,GGMALJLKHHB,(MethodInfo *)0x0)
                ;
                return true;
              }
            }
            goto LAB_03255750;
          }
          index_00 = index_00 + 1;
        } while (index_00 < (__this_01->fields)._size);
      }
      pSVar3 = (__this->fields).GLNEIGKMPDC;
      index = index + 1;
    } while (pSVar3 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0);
  }
LAB_03255750:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

