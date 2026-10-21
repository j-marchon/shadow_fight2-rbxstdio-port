// NOMBKAHPOHM$$MAHFCKJGBPP @ RVA 0x32D92F4

void NOMBKAHPOHM__MAHFCKJGBPP(NOMBKAHPOHM_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  undefined4 uVar1;
  int32_t *piVar2;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  FPPKHNNABAD_o *pFVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_045675a7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    DAT_045675a7 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,method);
  piVar2 = &(__this->fields).DPJIDNBJIBG;
  *(PKHMIGFEJCL_o **)piVar2 = AAJBIMFNMBB;
  (__this->fields).OBDMHHJBLKL = (System_Collections_Generic_List_string__o *)0xffffffff;
  thunk_FUN_01c20e04(piVar2,AAJBIMFNMBB);
  __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* try { // try from 033d9358 to 034d9363 has its CatchHandler @ 033d8f0c */
    pFVar3 = Nekki_SF2_Core_Quests_QuestsManager__GetQuestByName
                       (__this_00,(System_String_o *)(__this->fields).BFNEODDCGLC,(MethodInfo *)0x0)
    ;
                    /* try { // try from 033d9364 to 034d936b has its CatchHandler @ 033d936c */
    *(FPPKHNNABAD_o **)&(__this->fields).HAKHAEOBHBI = pFVar3;
                    /* catch() { ... } // from try @ 033d92f0 with catch @ 033d936c
                       catch() { ... } // from try @ 033d9364 with catch @ 033d936c */
    thunk_FUN_01c20e04();
    NOMBKAHPOHM__OAMPJBEDJLK(__this,method_00);
    pFVar3 = (__this->fields).NDBPOFMECGL;
    if (pFVar3 != (FPPKHNNABAD_o *)0x0) {
      uVar1 = *(undefined4 *)&(pFVar3->fields)._GPEFIOMJHNN_k__BackingField;
      *(undefined2 *)&(__this->fields).super.field_0x51 = 0x101;
      *(undefined4 *)((long)&(__this->fields).OBDMHHJBLKL + 4) = uVar1;
      method_01 = extraout_x1;
      do {
        NOMBKAHPOHM__NKLGCNHLBAF(__this,method_01);
        method_01 = extraout_x1_00;
      } while ((__this->fields).super.field_0x51 != '\0');
      (__this->fields).super.field_0x52 = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

