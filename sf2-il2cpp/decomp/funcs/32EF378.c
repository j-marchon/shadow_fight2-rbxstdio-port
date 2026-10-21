// KBFGKFAKGPP$$LLKFLBKKGAK @ RVA 0x32EF378

void KBFGKFAKGPP__LLKFLBKKGAK
               (KBFGKFAKGPP_o *__this,GLCAPECMBLM_o *AHCMAIOOIKM,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  OLKKAIFGGAK_o *__this_00;
  System_Collections_Generic_List_GLCAPECMBLM__o *__this_01;
  
  if ((DAT_04567662 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_RemoveAt__);
    DAT_04567662 = 1;
  }
  if (AHCMAIOOIKM != (GLCAPECMBLM_o *)0x0) {
    Util__JODGPLBHHIA((AHCMAIOOIKM->fields).PBDIPLHDHHD,false,(MethodInfo *)0x0);
    __this_00 = (AHCMAIOOIKM->fields).BCKBBGCOMJD;
    if (__this_00 != (OLKKAIFGGAK_o *)0x0) {
      OLKKAIFGGAK__OOINAEOGPPB(__this_00,AHCMAIOOIKM,(MethodInfo *)0x0);
    }
    __this_01 = (__this->fields).FIFCACFAFPH;
    if (__this_01 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
      System_Collections_Generic_List<object>__RemoveAt
                ((System_Collections_Generic_List_object__o *)__this_01,DPJIDNBJIBG,
                 Method_System_Collections_Generic_List<GLCAPECMBLM>_RemoveAt__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

