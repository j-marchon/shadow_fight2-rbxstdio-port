// MFLHNKGKEGA$$OPFOIDJHPIH @ RVA 0x316469C

void MFLHNKGKEGA__OPFOIDJHPIH(MFLHNKGKEGA_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  int32_t iVar1;
  UniRx_ReactiveProperty_string____o *pUVar2;
  
  if ((DAT_045668a5 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_IndexOf<string>__);
    FUN_01bab630(&Method_UniRx_ReactiveProperty<string[]>_get_Value__);
    DAT_045668a5 = 1;
  }
  pUVar2 = (__this->fields).IDPIHPBEHFC;
  if ((pUVar2 != (UniRx_ReactiveProperty_string____o *)0x0) &&
     (iVar1 = System_Array__IndexOf<object>
                        ((System_Object_array *)(pUVar2->fields).value,(Il2CppObject *)CJNHFNHJHPE,
                         Method_System_Array_IndexOf<string>__), -1 < iVar1)) {
    (__this->fields).JLGMCFKNPAK = iVar1;
  }
  return;
}

