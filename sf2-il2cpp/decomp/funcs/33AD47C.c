// LGGIHLMJLBB$$MAHFCKJGBPP @ RVA 0x33AD47C

void LGGIHLMJLBB__MAHFCKJGBPP(LGGIHLMJLBB_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_01;
  LEGDPJHPEOB_o *__this_02;
  PKHMIGFEJCL_o **ppPVar1;
  System_String_o *CJNHFNHJHPE;
  DNELIPCHKLK_o *__this_03;
  AFFHKININGD_o *FBFPLEFCDOK;
  NDPMLPGANCI_o *__this_04;
  
  if ((DAT_04567d21 & 1) == 0) {
                    /* try { // try from 034ad4a4 to 035ad4cf has its CatchHandler @ 034ad74c */
    FUN_01bab630(&DNELIPCHKLK_TypeInfo);
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567d21 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* try { // try from 034ad504 to 035ad50f has its CatchHandler @ 034ad72c */
    Nekki_SF2_Core_Quests_QuestsManager__ClearStack
              (__this_00,(System_Collections_Generic_List_string__o *)0x0,(MethodInfo *)0x0);
    __this_01 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
                    /* try { // try from 034ad520 to 035ad527 has its CatchHandler @ 034ad6b4 */
    EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_01,(MethodInfo *)0x0);
                    /* try { // try from 034ad52c to 035ad533 has its CatchHandler @ 034ad6b0 */
    __this_02 = (LEGDPJHPEOB_o *)thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
                    /* try { // try from 034ad538 to 035ad543 has its CatchHandler @ 034ad6a0 */
    LEGDPJHPEOB___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (LEGDPJHPEOB_o *)0x0) {
      ppPVar1 = &(__this_02->fields).AAJBIMFNMBB;
      *ppPVar1 = AAJBIMFNMBB;
      thunk_FUN_01c20e04(ppPVar1,AAJBIMFNMBB);
      EILGGBOIMGE__KFMNMGGDHFD
                ((EILGGBOIMGE_o *)__this_02,(__this->fields).DEKCPPOJFEH,__this_01,false,
                 (System_String_o *)0x0,(MethodInfo *)0x0);
      if (__this_01 != (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) {
                    /* try { // try from 034ad584 to 035ad59f has its CatchHandler @ 034ad6a4 */
        CJNHFNHJHPE = (System_String_o *)
                      (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                                (__this_01,(__this_01->klass->vtable)._3_ToString.method);
        __this_03 = (DNELIPCHKLK_o *)thunk_FUN_01bda818(DNELIPCHKLK_TypeInfo);
                    /* try { // try from 034ad5a0 to 035ad63b has its CatchHandler @ 034acd70 */
        DNELIPCHKLK___ctor(__this_03,(MethodInfo *)0x0);
        if (__this_03 != (DNELIPCHKLK_o *)0x0) {
          DNELIPCHKLK__LGOFNFEIKFB(__this_03,CJNHFNHJHPE,(MethodInfo *)0x0);
          if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          FBFPLEFCDOK = NLPJLHOEAOE__OJDOCBFHNBN(__this_03,(MethodInfo *)0x0);
          if (FBFPLEFCDOK == (AFFHKININGD_o *)0x0) {
            __this_04 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
            if (__this_04 == (NDPMLPGANCI_o *)0x0) goto LAB_034ad65c;
                    /* try { // try from 034ad63c to 035ad643 has its CatchHandler @ 034ad80c */
            NDPMLPGANCI__EKPAFDJIAGI
                      (__this_04,3,(Il2CppObject *)0x0,(System_Action_object__o *)0x0,true,
                       (MethodInfo *)0x0);
          }
          else {
            if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            MGNPHCAAEIO__EEGOPNGLBMJ
                      (FBFPLEFCDOK,false,(OOMHDDBCBJP_o *)0x0,true,true,false,(MethodInfo *)0x0);
          }
                    /* try { // try from 034ad644 to 035ad64b has its CatchHandler @ 034ad730 */
                    /* try { // try from 034ad64c to 035ad64f has its CatchHandler @ 034ad70c */
                    /* try { // try from 034ad650 to 035ad653 has its CatchHandler @ 034ad708 */
                    /* try { // try from 034ad654 to 035ad657 has its CatchHandler @ 034ad704 */
                    /* try { // try from 034ad658 to 035ad65b has its CatchHandler @ 034ad700 */
          BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_034ad65c:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034ad65c to 035ad65f has its CatchHandler @ 034ad6fc */
  FUN_01bab8c8();
}

