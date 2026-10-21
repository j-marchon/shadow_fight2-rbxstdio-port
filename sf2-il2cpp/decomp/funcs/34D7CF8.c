// NKOIBKNPICN$$FOOHBJNHOKK @ RVA 0x34D7CF8

void NKOIBKNPICN__FOOHBJNHOKK(NKOIBKNPICN_o *__this,NKOIBKNPICN_o *JOHFLOEABJL,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *pSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)JOHFLOEABJL;
  if ((DAT_045686e8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Clear__);
    DAT_045686e8 = 1;
    method_00 = extraout_x1;
  }
  NKOIBKNPICN__NDNPGAKJLHM(__this,method_00);
  pSVar1 = (__this->fields).OOIGOEAHPMA;
  if (pSVar1 != (System_Collections_Generic_List_int__o *)0x0) {
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (JOHFLOEABJL != (NKOIBKNPICN_o *)0x0) {
      System_Collections_Generic_List<int>__AddRange
                (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)
                        (JOHFLOEABJL->fields).OOIGOEAHPMA,
                 Method_System_Collections_Generic_List<int>_AddRange__);
      pSVar1 = (__this->fields).KJNPENJKBKD;
      if (pSVar1 != (System_Collections_Generic_List_int__o *)0x0) {
        System_Collections_Generic_List<int>__AddRange
                  (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)
                          (JOHFLOEABJL->fields).KJNPENJKBKD,
                   Method_System_Collections_Generic_List<int>_AddRange__);
        pSVar1 = (__this->fields).JCJPICMGIHE;
        if (pSVar1 != (System_Collections_Generic_List_int__o *)0x0) {
          System_Collections_Generic_List<int>__AddRange
                    (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)
                            (JOHFLOEABJL->fields).JCJPICMGIHE,
                     Method_System_Collections_Generic_List<int>_AddRange__);
          (__this->fields).BHJAGFIAEAA = (JOHFLOEABJL->fields).BHJAGFIAEAA;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

