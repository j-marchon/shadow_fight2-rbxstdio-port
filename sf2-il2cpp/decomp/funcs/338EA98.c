// FCFGGKLDBFJ$$.ctor @ RVA 0x338EA98

void FCFGGKLDBFJ___ctor(FCFGGKLDBFJ_o *__this,ECENNHNBAME_o *CFNFIOONALH,MethodInfo *method)

{
  System_Collections_Generic_List_ECENNHNBAME__o *__this_00;
  System_Collections_Generic_List_ECENNHNBAME__o **ppSVar1;
  
  if ((DAT_04567c05 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
    DAT_04567c05 = 1;
  }
  __this_00 = (System_Collections_Generic_List_ECENNHNBAME__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ECENNHNBAME>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ECENNHNBAME>__ctor__);
  ppSVar1 = &(__this->fields).PLMBJNAAGOI;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (CFNFIOONALH != (ECENNHNBAME_o *)0x0) {
    (__this->fields).NPFMOEOIEKM = (CFNFIOONALH->fields).JIJLBFGKNJK;
    thunk_FUN_01c20e04();
    FCFGGKLDBFJ__ACHCKILJGJK(__this,CFNFIOONALH,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

