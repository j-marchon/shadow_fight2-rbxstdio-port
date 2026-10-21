// CJFBGEEIPBA$$EBILFKOCKJM @ RVA 0x3365948

System_Collections_Generic_List_NLFLMJPNOLF__o *
CJFBGEEIPBA__EBILFKOCKJM(CJFBGEEIPBA_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_NLFLMJPNOLF__o *__this_00;
  MethodInfo *extraout_x1;
  OJEHKJHEBID_o *pOVar1;
  
  if ((DAT_04567ac1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NLFLMJPNOLF>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NLFLMJPNOLF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NLFLMJPNOLF>_TypeInfo);
    DAT_04567ac1 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_NLFLMJPNOLF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<NLFLMJPNOLF>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<NLFLMJPNOLF>__ctor__);
  pOVar1 = (__this->fields).FBILHKCKHEJ;
  if (pOVar1 != (OJEHKJHEBID_o *)0x0) {
    if (__this_00 == (System_Collections_Generic_List_NLFLMJPNOLF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(pOVar1->fields).MJIHCLLODMF,
               Method_System_Collections_Generic_List<NLFLMJPNOLF>_AddRange__);
  }
  return __this_00;
}

