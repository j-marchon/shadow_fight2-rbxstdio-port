// KFCFGKEHPNK$$GFKNDINNDAE @ RVA 0x30839C8

System_String_o * KFCFGKEHPNK__GFKNDINNDAE(NLFLMJPNOLF_o *NLOFDAJCIML,MethodInfo *method)

{
  CNLGMNIEGFG_o *pCVar1;
  System_Collections_Generic_List_object__o *__this;
  Il2CppObject *pIVar2;
  MGNPHCAAEIO_HLAKGGFFNAO_o *__this_00;
  HBNENINHPGF_o *pHVar3;
  MethodInfo *extraout_x1;
  System_String_o *KGLJICLJHEL;
  
  if ((DAT_0456600c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456600c = 1;
    method = extraout_x1;
  }
  pCVar1 = KFCFGKEHPNK__FHEIBJBHOKF(NLOFDAJCIML,method);
  if (pCVar1 == (CNLGMNIEGFG_o *)0x0) {
    return (System_String_o *)0x0;
  }
  __this = (System_Collections_Generic_List_object__o *)
           (*(pCVar1->klass->vtable)._4_NIKCNPMKAFK.methodPtr)
                     (pCVar1,(pCVar1->klass->vtable)._4_NIKCNPMKAFK.method);
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    if ((__this->fields)._size < 1) {
      return (System_String_o *)0x0;
    }
    pIVar2 = System_Collections_Generic_List<object>__get_Item
                       (__this,0,Method_System_Collections_Generic_List<NIAFDKHDBMA>_get_Item__);
    if (pIVar2 != (Il2CppObject *)0x0) {
      KGLJICLJHEL = pIVar2[5].monitor;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
      if ((__this_00 != (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) &&
         (pHVar3 = MGNPHCAAEIO_HLAKGGFFNAO__BHJOLIJDBLO(__this_00,KGLJICLJHEL,(MethodInfo *)0x0),
         pHVar3 != (HBNENINHPGF_o *)0x0)) {
        return (pHVar3->fields)._PGCEKJLODEJ_k__BackingField;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

