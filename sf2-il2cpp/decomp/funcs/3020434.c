// IKGDKGBHEFN$$GIENGNEGHPJ @ RVA 0x3020434

void IKGDKGBHEFN__GIENGNEGHPJ(IKGDKGBHEFN_o *__this,MethodInfo *method)

{
  System_Collections_Generic_LinkedList_TableViewCell__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565c3e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_LinkedList<TableViewCell>__ctor__);
    FUN_01bab630(&System_Collections_Generic_LinkedList<TableViewCell>_TypeInfo);
    DAT_04565c3e = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_LinkedList_TableViewCell__o *)
              thunk_FUN_01bda818(System_Collections_Generic_LinkedList<TableViewCell>_TypeInfo,
                                 method);
  System_Collections_Generic_LinkedList<object>___ctor
            ((System_Collections_Generic_LinkedList_T__o *)__this_00,
             Method_System_Collections_Generic_LinkedList<TableViewCell>__ctor__);
  (__this->fields).LNKABGKKHGB = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  return;
}

