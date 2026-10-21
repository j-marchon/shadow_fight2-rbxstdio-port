// BGKIJKALIHG$$EPBENPDCBFE @ RVA 0x33008C4

bool BGKIJKALIHG__EPBENPDCBFE
               (BGKIJKALIHG_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_string__o *pSVar2;
  
  if ((DAT_04567719 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_get_Count__);
    DAT_04567719 = 1;
  }
  ILGLOCBJFEG__EMHAFDFJFIA((ILGLOCBJFEG_o *)__this,BCKBBGCOMJD,(MethodInfo *)0x0);
  if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
    return false;
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(BCKBBGCOMJD->fields).DBLOJJBPLGE;
                    /* try { // try from 03400918 to 0350093f has its CatchHandler @ 03400c58 */
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (__this_00,(Il2CppObject *)(__this->fields).DEKCPPOJFEH,
                       Method_System_Collections_Generic_HashSet<string>_Contains__);
    if (bVar1) {
      return true;
    }
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    if (!bVar1) {
      return false;
    }
    pSVar2 = (BCKBBGCOMJD->fields).DBLOJJBPLGE;
    if (pSVar2 != (System_Collections_Generic_HashSet_string__o *)0x0) {
      return 0 < (pSVar2->fields)._count;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03400974 to 0350099f has its CatchHandler @ 03400c54 */
  FUN_01bab8c8();
}

