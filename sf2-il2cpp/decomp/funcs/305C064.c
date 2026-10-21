// ACHLOMELAJE$$OKLLAOCGDCP @ RVA 0x305C064

bool ACHLOMELAJE__OKLLAOCGDCP(ACHLOMELAJE_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if ((DAT_04565edf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Contains__);
    DAT_04565edf = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KGLJICLJHEL,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).CNOABMOGJGB;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (__this_00,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_HashSet<string>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

