// IOIKBGAJIGO$$ABJJDDOFODH @ RVA 0x3374EB0

System_Byte_array *
IOIKBGAJIGO__ABJJDDOFODH
          (System_Byte_array *NGHMDCIKIPM,System_Byte_array *BCNOHGECKOP,MethodInfo *method)

{
  System_Byte_array *array;
  
  if ((DAT_04567b4a & 1) == 0) {
    FUN_01bab630(&byte___TypeInfo);
    DAT_04567b4a = 1;
  }
  if ((NGHMDCIKIPM != (System_Byte_array *)0x0) && (BCNOHGECKOP != (System_Byte_array *)0x0)) {
    array = (System_Byte_array *)
            FUN_01bab718(byte___TypeInfo,(int)BCNOHGECKOP->max_length + (int)NGHMDCIKIPM->max_length
                        );
    System_Array__CopyTo((System_Array_o *)NGHMDCIKIPM,(System_Array_o *)array,0,(MethodInfo *)0x0);
    System_Array__CopyTo
              ((System_Array_o *)BCNOHGECKOP,(System_Array_o *)array,
               (int32_t)NGHMDCIKIPM->max_length,(MethodInfo *)0x0);
    return array;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

