// KEFHDOHHHML$$JKJADOKFMAA @ RVA 0x33702E4

bool KEFHDOHHHML__JKJADOKFMAA(KEFHDOHHHML_o *__this,System_Enum_o *MFDCCBAJNIO,MethodInfo *method)

{
  int iVar1;
  int32_t MFDCCBAJNIO_00;
  System_String_o *item;
  MethodInfo *method_00;
  System_Collections_Generic_List_string__o *__this_00;
  
  if ((DAT_04567b13 & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Remove__);
    DAT_04567b13 = 1;
  }
  if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  MFDCCBAJNIO_00 = System_Convert__ToInt32((Il2CppObject *)MFDCCBAJNIO,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._DAOJDNDBECB_k__BackingField;
  item = KEFHDOHHHML__MMKHHPBIDDN(MFDCCBAJNIO_00,method_00);
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
               Method_System_Collections_Generic_List<string>_Remove__);
    iVar1 = (__this->fields)._JOCIAOOICNM_k__BackingField;
    if (iVar1 == MFDCCBAJNIO_00) {
      (__this->fields).NILBOLKCPMB = true;
    }
    return iVar1 == MFDCCBAJNIO_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

