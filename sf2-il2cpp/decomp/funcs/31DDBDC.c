// ONEDJCACCGM$$AIHHFFMBFEL @ RVA 0x31DDBDC

System_String_o * ONEDJCACCGM__AIHHFFMBFEL(int32_t BKFOLMBMFNP,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((DAT_04566d3c & 1) == 0) {
    FUN_01bab630(&ONEDJCACCGM_LPJPCOOMIIP_TypeInfo);
    DAT_04566d3c = 1;
  }
  local_38.klass = (System_Enum_c *)ONEDJCACCGM_LPJPCOOMIIP_TypeInfo;
  local_38.monitor = (void *)0xffffffffffffffff;
  local_28 = BKFOLMBMFNP;
  pSVar1 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  if (pSVar1 != (System_String_o *)0x0) {
    pSVar1 = System_String__ToLower(pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

