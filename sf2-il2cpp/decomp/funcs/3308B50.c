// Nekki.SF2.GUI.Map.ContentBossesFinal$$JEAINKCPKKN @ RVA 0x3308B50

bool Nekki_SF2_GUI_Map_ContentBossesFinal__JEAINKCPKKN
               (Nekki_SF2_GUI_Map_ContentBossesFinal_o *__this,AFFHKININGD_o *AGONJKOMAAA,
               MethodInfo *method)

{
  int32_t JLAFGLDIFOC;
  System_Collections_Generic_List_JBCGDIEHOHH__o *__this_00;
  JBCGDIEHOHH_o *__this_01;
  ACHLOMELAJE_o *__this_02;
  JHBHHHKEFOO_o *pJVar1;
  System_Collections_Generic_List_OCOEAJMJEOP__o *__this_03;
  Il2CppObject *pIVar2;
  DOPEEDABNEK_o *__this_04;
  HOOAAGABMBL_o *pHVar3;
  
  if ((DAT_04567775 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OCOEAJMJEOP>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OCOEAJMJEOP>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567775 = 1;
  }
                    /* try { // try from 03408bac to 03508bb3 has its CatchHandler @ 03408c1c */
  if (AGONJKOMAAA == (AFFHKININGD_o *)0x0) {
    return false;
  }
  __this_00 = (AGONJKOMAAA->fields).FGAENDJJOGN;
  if (__this_00 != (System_Collections_Generic_List_JBCGDIEHOHH__o *)0x0) {
    __this_01 = (JBCGDIEHOHH_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           (__this_00->fields)._size + -1,
                           Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__);
                    /* try { // try from 03408bdc to 03508bdf has its CatchHandler @ 03408c10 */
                    /* try { // try from 03408be4 to 03508bef has its CatchHandler @ 03408c18 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
                    /* try { // try from 03408bf0 to 03508c07 has its CatchHandler @ 03408a80 */
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 03408c08 to 03508c0b has its CatchHandler @ 03408c14 */
                    /* try { // try from 03408c0c to 03508c2b has its CatchHandler @ 03408a80 */
      DAT_04565b7d = '\x01';
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03408bdc with catch @ 03408c10
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03408c08 with catch @ 03408c14
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03408be4 with catch @ 03408c18
                        */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03408bac with catch @ 03408c1c
                        */
      thunk_FUN_01ba7564();
    }
    __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 03408c2c to 03508c2f has its CatchHandler @ 03408ce8 */
                    /* try { // try from 03408c30 to 03508cef has its CatchHandler @ 03408a80 */
    if ((((__this_02 != (ACHLOMELAJE_o *)0x0) &&
         (JLAFGLDIFOC = ACHLOMELAJE__EOEAKGGDBFH(__this_02,(MethodInfo *)0x0),
         __this_01 != (JBCGDIEHOHH_o *)0x0)) &&
        (pJVar1 = JBCGDIEHOHH__ALLFNDNBMCO(__this_01,JLAFGLDIFOC,(MethodInfo *)0x0),
        pJVar1 != (JHBHHHKEFOO_o *)0x0)) &&
       (__this_03 = (pJVar1->fields).GHAAKPDHIJJ,
       __this_03 != (System_Collections_Generic_List_OCOEAJMJEOP__o *)0x0)) {
      if ((__this_03->fields)._size == 0) {
                    /* try { // try from 03408cf0 to 03508cf7 has its CatchHandler @ 03408d0c */
                    /* try { // try from 03408cf8 to 03508d03 has its CatchHandler @ 03408a80 */
        return false;
      }
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_03,0,
                          Method_System_Collections_Generic_List<OCOEAJMJEOP>_get_Item__);
      if (pIVar2 != (Il2CppObject *)0x0) {
        if (*(char *)((long)&pIVar2[1].klass + 5) == '\0') {
          return false;
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04563eaa == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04563eaa = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_04 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
        if (__this_04 != (DOPEEDABNEK_o *)0x0) {
          pHVar3 = DOPEEDABNEK__CKKIPBAIEMN(__this_04,pIVar2[1].monitor,(MethodInfo *)0x0);
          return pHVar3 != (HOOAAGABMBL_o *)0x0;
                    /* catch() { ... } // from try @ 03408c2c with catch @ 03408ce8 */
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

