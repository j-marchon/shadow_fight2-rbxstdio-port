// BCPODJMEKMJ$$NMCMOPHAAPH @ RVA 0x31BE910

void BCPODJMEKMJ__NMCMOPHAAPH(BCPODJMEKMJ_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  CNDPAJOLKFN_o *pCVar3;
  System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *__this_00;
  Il2CppObject *pIVar4;
  int index;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar5;
  
  if ((DAT_04566c06 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>_get_Count__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>_get_Item__
                );
    DAT_04566c06 = 1;
  }
  bVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                     (__this->fields).super.MKNHLACCLLP.fields,(MethodInfo *)0x0);
  if (bVar2) {
    CVar5 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
            CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
    (__this->fields).super.MKNHLACCLLP.fields = CVar5;
    return;
  }
  pCVar3 = (__this->fields).super.BJKKHONDAKP;
  if (pCVar3 != (CNDPAJOLKFN_o *)0x0) {
    CNDPAJOLKFN__FOOHBJNHOKK(pCVar3,(__this->fields).super.CNMHHKAMGPI,(MethodInfo *)0x0);
    pCVar3 = (__this->fields).super.CNMHHKAMGPI;
    if (pCVar3 != (CNDPAJOLKFN_o *)0x0) {
      CNDPAJOLKFN__DGLJCGNHLIG(pCVar3,(MethodInfo *)0x0);
      __this_00 = (__this->fields).PLMBJNAAGOI;
      if (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *)0x0) {
        iVar1 = (__this_00->fields)._size;
        if (iVar1 < 1) {
          return;
        }
        index = 0;
        do {
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>_get_Item__
                             );
          if (((pIVar4 == (Il2CppObject *)0x0) || (pIVar4[1].klass == (Il2CppClass *)0x0)) ||
             (pCVar3 = (__this->fields).super.CNMHHKAMGPI, pCVar3 == (CNDPAJOLKFN_o *)0x0)) break;
          CNDPAJOLKFN__LFENGGKOJDO
                    (pCVar3,*(CNDPAJOLKFN_o **)&((pIVar4[1].klass)->_1).this_arg.bits,
                     *(float *)&pIVar4[1].monitor,(MethodInfo *)0x0);
          index = index + 1;
          if (iVar1 == index) {
            return;
          }
          __this_00 = (__this->fields).PLMBJNAAGOI;
        } while (__this_00 !=
                 (System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

