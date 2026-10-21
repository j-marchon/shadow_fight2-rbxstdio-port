// BEPJMNAHCAD$$KJGPPAJLLCP @ RVA 0x31897C0

void BEPJMNAHCAD__KJGPPAJLLCP(BEPJMNAHCAD_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,MethodInfo *method)

{
  int32_t DPJIDNBJIBG;
  System_Collections_Generic_List_OLKKAIFGGAK__o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04566a01 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_IndexOf__);
    DAT_04566a01 = 1;
  }
  __this_00 = (__this->fields).EHJHKEEDKBE;
  if (__this_00 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    method_00 = Method_System_Collections_Generic_List<OLKKAIFGGAK>_IndexOf__;
    DPJIDNBJIBG = System_Collections_Generic_List<object>__IndexOf
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (Il2CppObject *)BCKBBGCOMJD,
                             (MethodInfo_26E5A4C *)
                             Method_System_Collections_Generic_List<OLKKAIFGGAK>_IndexOf__);
    if (DPJIDNBJIBG != -1) {
      BEPJMNAHCAD__MCEBBHDMEAE(__this,DPJIDNBJIBG,method_00);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

