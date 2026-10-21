// FCJBEKHDLAF$$OGCMOEOKOJP @ RVA 0x33EEC98

void FCJBEKHDLAF__OGCMOEOKOJP
               (FCJBEKHDLAF_o *__this,int32_t DPJIDNBJIBG,OLKKAIFGGAK_o *GANEIBPLOIA,
               MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_OLKKAIFGGAK__o *pSVar2;
  OLKKAIFGGAK_o *method_00;
  
  method_00 = GANEIBPLOIA;
  if ((DAT_04567eed & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
    DAT_04567eed = 1;
  }
  pSVar2 = (__this->fields).IILLHHPGGKA;
  if (pSVar2 != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    if (((-1 < DPJIDNBJIBG) && (iVar1 = (pSVar2->fields)._size, iVar1 != 0)) &&
       (DPJIDNBJIBG <= iVar1 + -1)) {
      GANEIBPLOIA = (OLKKAIFGGAK_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar2,DPJIDNBJIBG,
                               Method_System_Collections_Generic_List<OLKKAIFGGAK>_get_Item__);
      pSVar2 = (__this->fields).IILLHHPGGKA;
      if (pSVar2 == (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) goto LAB_034eed58;
      method_00 = Method_System_Collections_Generic_List<OLKKAIFGGAK>_Remove__;
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)GANEIBPLOIA,
                 (MethodInfo_26E62D4 *)Method_System_Collections_Generic_List<OLKKAIFGGAK>_Remove__)
      ;
    }
    FCJBEKHDLAF__HMDJFLDLPMN(__this,GANEIBPLOIA,(MethodInfo *)method_00);
    return;
  }
LAB_034eed58:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

