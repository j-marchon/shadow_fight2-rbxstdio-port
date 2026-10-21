// Nekki.SF2.GUI.Shop.ParametersPanelContent$$LGJMJMJJGIM @ RVA 0x30F9050

void Nekki_SF2_GUI_Shop_ParametersPanelContent__LGJMJMJJGIM
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  PJKHAJKEHEL_o *pPVar2;
  System_Collections_Generic_List_IHDFIJGDCBL__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar3;
  ABCMPMHNMAP_o *pAVar4;
  PJKHAJKEHEL_o *JOHFLOEABJL;
  PJKHAJKEHEL_o **ppPVar5;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566487 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_Dispose__);
                    /* try { // try from 031f9088 to 032f908f has its CatchHandler @ 031f90f0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_get_Current__);
                    /* try { // try from 031f90a0 to 032f90ab has its CatchHandler @ 031f90ec */
    FUN_01bab630(&Method_System_Collections_Generic_List<IHDFIJGDCBL>_GetEnumerator__);
                    /* try { // try from 031f90ac to 032f90df has its CatchHandler @ 031f8ff0 */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PJKHAJKEHEL_TypeInfo);
    DAT_04566487 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 031f90e0 to 032f90e3 has its CatchHandler @ 031f90e8 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 031f90e4 to 032f9107 has its CatchHandler @ 031f8ff0 */
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f90e0 with catch @ 031f90e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f90a0 with catch @ 031f90ec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031f9088 with catch @ 031f90f0
                        */
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
                    /* try { // try from 031f9108 to 032f910b has its CatchHandler @ 031f9134 */
                    /* try { // try from 031f910c to 032f9143 has its CatchHandler @ 031f8ff0 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
    JOHFLOEABJL = (pAVar3->fields).MFLNIMCFPDK;
                    /* catch() { ... } // from try @ 031f9108 with catch @ 031f9134 */
    pPVar2 = (PJKHAJKEHEL_o *)thunk_FUN_01bda818(PJKHAJKEHEL_TypeInfo);
    method_00 = (MethodInfo *)0x0;
                    /* try { // try from 031f9144 to 032f914b has its CatchHandler @ 031f9160 */
    PJKHAJKEHEL___ctor(pPVar2,JOHFLOEABJL,(MethodInfo *)0x0);
    ppPVar5 = &(__this->fields).GFGOPEKNBPF;
                    /* try { // try from 031f914c to 032f9157 has its CatchHandler @ 031f8ff0 */
    *ppPVar5 = pPVar2;
                    /* try { // try from 031f9158 to 032f915f has its CatchHandler @ 031f9160 */
    thunk_FUN_01c20e04(ppPVar5,pPVar2);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031f9144 with catch @ 031f9160
                       catch(type#2 @ 00000000) { ... } // from try @ 031f9158 with catch @ 031f9160
                        */
    pPVar2 = *ppPVar5;
    if (pPVar2 != (PJKHAJKEHEL_o *)0x0) {
      (*(pPVar2->klass->vtable)._7_LBNKPLKIIOP.methodPtr)
                (pPVar2,(pPVar2->klass->vtable)._7_LBNKPLKIIOP.method);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pAVar4 = MGNPHCAAEIO_TypeInfo->static_fields->EDKELIKNDEP;
      if ((pAVar4 != (ABCMPMHNMAP_o *)0x0) &&
         (__this_00 = (pAVar4->fields).ACHJNNOKEDK,
         __this_00 != (System_Collections_Generic_List_IHDFIJGDCBL__o *)0x0)) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
                   Method_System_Collections_Generic_List<IHDFIJGDCBL>_GetEnumerator__);
        while( true ) {
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_38,
                             Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_MoveNext__
                            );
          if (!bVar1) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<IHDFIJGDCBL>_Dispose__);
            return;
          }
          if ((IHDFIJGDCBL_o *)local_38.fields._current == (IHDFIJGDCBL_o *)0x0) break;
          if ((((IHDFIJGDCBL_Fields *)((long)local_38.fields._current + 0x10))->CHLMHEGKKNH == false
              ) && (((IHDFIJGDCBL_Fields *)((long)local_38.fields._current + 0x10))->OOBNCDKIDFK ==
                    false)) {
            Nekki_SF2_GUI_Shop_ParametersPanelContent__PFFPCAEKIDC
                      (__this,(IHDFIJGDCBL_o *)local_38.fields._current,method_00);
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

