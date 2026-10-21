// NHOILKKCIMI$$KHJFFKKHPLA @ RVA 0x33CFFA0

bool NHOILKKCIMI__KHJFFKKHPLA
               (NHOILKKCIMI_o *__this,NHOILKKCIMI_BGFGPENCLEA_o *FEPLAGOGJNL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_HashSet_LogType__o *__this_00;
  
  if ((DAT_04567e54 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<LogType>_Contains__);
    DAT_04567e54 = 1;
  }
  if ((FEPLAGOGJNL != (NHOILKKCIMI_BGFGPENCLEA_o *)0x0) &&
     (__this_00 = (__this->fields).IEJNCANONEC,
     __this_00 != (System_Collections_Generic_HashSet_LogType__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet<Int32Enum>__Contains
                      ((System_Collections_Generic_HashSet_T__o *)__this_00,
                       (FEPLAGOGJNL->fields).GBGNIECFNHD,
                       Method_System_Collections_Generic_HashSet<LogType>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

