// FDJKKAFIEFB$$AJKJDLLNCNM @ RVA 0x35B2BB4

void FDJKKAFIEFB__AJKJDLLNCNM
               (FDJKKAFIEFB_o *__this,System_String_o *LNGCJJNKOID,System_String_o *AJNKKPBBGKG,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *JLNPKGGFFDD;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04568ebb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
    FUN_01bab630(&StringLiteral_2758);
    FUN_01bab630(&StringLiteral_855);
    DAT_04568ebb = 1;
  }
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(LNGCJJNKOID,(MethodInfo *)0x0);
  if (bVar1) {
    JLNPKGGFFDD = System_String__Concat
                            (StringLiteral_2758,AJNKKPBBGKG,StringLiteral_855,(MethodInfo *)0x0);
    KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
    return;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).ELBMCMNELDD;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__set_Item
              (__this_00,(Il2CppObject *)LNGCJJNKOID,(Il2CppObject *)AJNKKPBBGKG,
               Method_System_Collections_Generic_Dictionary<string,_string>_set_Item__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

