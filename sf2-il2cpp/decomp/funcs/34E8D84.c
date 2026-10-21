// OLKKAIFGGAK$$LKACBDNEJON @ RVA 0x34E8D84

System_Collections_Generic_List_JADGCGOJLJB__o *
OLKKAIFGGAK__LKACBDNEJON(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  OPNFCOGALLI_o *pOVar1;
  System_Collections_Generic_List_JADGCGOJLJB__o *__this_00;
  
  if ((DAT_04568779 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JADGCGOJLJB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<JADGCGOJLJB>_TypeInfo);
    DAT_04568779 = 1;
    method = extraout_x1;
  }
  pOVar1 = (__this->fields).OAKOFJJIOFF;
  if (pOVar1 == (OPNFCOGALLI_o *)0x0) {
    __this_00 = (System_Collections_Generic_List_JADGCGOJLJB__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<JADGCGOJLJB>_TypeInfo,method);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<JADGCGOJLJB>__ctor__);
  }
  else {
    __this_00 = (pOVar1->fields).ACMNENLJLOL;
  }
  return __this_00;
}

