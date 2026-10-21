// MMDDDDFHOLG$$MDMGLEMDCDP @ RVA 0x336362C

bool MMDDDDFHOLG__MDMGLEMDCDP(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_Dictionary_object__int__o *__this;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_04567a99 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
    FUN_01bab630(&MMDDDDFHOLG_TypeInfo);
    DAT_04567a99 = 1;
    method = extraout_x1;
  }
  if ((MMDDDDFHOLG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method = extraout_x1_00;
  }
  MMDDDDFHOLG__BGLKNLLGJHB(KGLJICLJHEL,method);
  __this = (System_Collections_Generic_Dictionary_object__int__o *)
           MMDDDDFHOLG_TypeInfo->static_fields->HIHPADFEPFO;
  if (__this != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    iVar1 = System_Collections_Generic_Dictionary<object,_int>__get_Item
                      (__this,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
    return 0 < iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

