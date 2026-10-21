// IDDIABHBDEE.<>c$$IFNMELGLFOP @ RVA 0x3389164

System_ValueTuple_string__string__o
IDDIABHBDEE_<>c__IFNMELGLFOP(IDDIABHBDEE___c_o *__this,System_String_o *counter,MethodInfo *method)

{
  System_ValueTuple_string__string__Fields SVar1;
  System_Byte_array *pSVar2;
  System_Byte_array *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str1;
  MethodInfo_2BCF900 *in_x4;
  System_ValueTuple_object__object__o __this_00;
  Il2CppObject local_50;
  
  if ((DAT_04567bd0 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_567);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_568);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_569);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_570);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&Method_System_ValueTuple<string,_string>__ctor__);
    DAT_04567bd0 = 1;
  }
  pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar2,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_567,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_568,(MethodInfo *)0x0);
  pSVar4 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
  if (counter != (System_String_o *)0x0) {
    pSVar4 = System_String__Replace
                       (counter,pSVar4,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
    pSVar2 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar2,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_569,(MethodInfo *)0x0);
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_570,(MethodInfo *)0x0);
    str1 = OMHODMCHILE__NPKGDBHJKCK(pSVar2,pSVar3,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat(pSVar4,str1,(MethodInfo *)0x0);
    local_50.klass = (Il2CppClass *)0x0;
    local_50.monitor = (System_String_o *)0x0;
    __this_00.fields.Item2 = (Il2CppObject *)counter;
    __this_00.fields.Item1 = &local_50;
    System_ValueTuple<object,_object>___ctor
              (__this_00,(Il2CppObject *)pSVar4,Method_System_ValueTuple<string,_string>__ctor__,
               in_x4);
    SVar1.Item2 = local_50.monitor;
    SVar1.Item1 = (System_String_o *)local_50.klass;
    return (System_ValueTuple_string__string__o)SVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

