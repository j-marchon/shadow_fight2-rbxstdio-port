// HOOAAGABMBL$$NKGIIMLJLGI @ RVA 0x30E84F4

void HOOAAGABMBL__NKGIIMLJLGI(HOOAAGABMBL_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Action_T__o *action;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar1;
  
  if ((DAT_04566424 & 1) == 0) {
    FUN_01bab630(&System_Action<HEFOANCOHDC>_TypeInfo);
    FUN_01bab630(&Method_HOOAAGABMBL_DAFDGCLNAGG__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_ForEach__);
    DAT_04566424 = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields)._GNJCCLBLPLO_k__BackingField;
  action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<HEFOANCOHDC>_TypeInfo,method);
  System_Action<object>___ctor();
  if (pSVar1 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)pSVar1,action,
               Method_System_Collections_Generic_List<HEFOANCOHDC>_ForEach__);
    pSVar1 = (__this->fields)._GNJCCLBLPLO_k__BackingField;
    if (pSVar1 != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
      length = (pSVar1->fields)._size;
      (pSVar1->fields)._size = 0;
      (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

