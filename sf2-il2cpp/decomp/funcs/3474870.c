// IFAMAAGNCBJ$$Dispose @ RVA 0x3474870

void IFAMAAGNCBJ__Dispose(IFAMAAGNCBJ_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456831d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<Type,_object>_Clear__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    DAT_0456831d = 1;
    method = extraout_x1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo,method);
  }
  IFAMAAGNCBJ_TypeInfo->static_fields->EJCLIBKEICM = (MNAMMGOAMHK_o *)0x0;
  thunk_FUN_01c20e04(IFAMAAGNCBJ_TypeInfo->static_fields,0);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              IFAMAAGNCBJ_TypeInfo->static_fields->ELLLKJAIDHE;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<Type,_object>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

