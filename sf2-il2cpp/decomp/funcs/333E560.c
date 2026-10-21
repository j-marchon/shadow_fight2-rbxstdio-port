// AFFHKININGD$$IKDFBAOFNPB @ RVA 0x333E560

int32_t AFFHKININGD__IKDFBAOFNPB(AFFHKININGD_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Func_PJKHAJKEHEL__int__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_PJKHAJKEHEL__o *source;
  System_Func_PJKHAJKEHEL__int__o *selector;
  
  if ((DAT_04567982 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Sum<PJKHAJKEHEL>__);
    FUN_01bab630(&System_Func<PJKHAJKEHEL,_int>_TypeInfo);
    FUN_01bab630(&Method_AFFHKININGD_<>c_IGNCEDGNDPM__);
    FUN_01bab630(&AFFHKININGD_<>c_TypeInfo);
    DAT_04567982 = 1;
    method = extraout_x1;
  }
  source = (__this->fields).MECHOBPGHFJ;
  if ((AFFHKININGD_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(AFFHKININGD_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  selector = AFFHKININGD_<>c_TypeInfo->static_fields->__9__72_0;
  if (selector == (System_Func_PJKHAJKEHEL__int__o *)0x0) {
    if ((AFFHKININGD_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(AFFHKININGD_<>c_TypeInfo,method);
    }
    selector = (System_Func_PJKHAJKEHEL__int__o *)
               thunk_FUN_01bda818(System_Func<PJKHAJKEHEL,_int>_TypeInfo);
    System_Func<object,_int>___ctor();
    ppSVar2 = &AFFHKININGD_<>c_TypeInfo->static_fields->__9__72_0;
    *ppSVar2 = selector;
    thunk_FUN_01c20e04(ppSVar2,selector);
  }
  iVar1 = System_Linq_Enumerable__Sum<object>
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                     (System_Func_TSource__int__o *)selector,
                     Method_System_Linq_Enumerable_Sum<PJKHAJKEHEL>__);
  return iVar1;
}

