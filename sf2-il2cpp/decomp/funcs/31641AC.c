// MFLHNKGKEGA$$GFDCGNNBDLH @ RVA 0x31641AC

void MFLHNKGKEGA__GFDCGNNBDLH
               (MFLHNKGKEGA_o *__this,System_String_array *JLFFJLLAEEB,MethodInfo *method)

{
  UniRx_ReactiveProperty_string____o *__this_00;
  
  if ((DAT_0456689d & 1) == 0) {
    FUN_01bab630(&Method_UniRx_ReactiveProperty<string[]>_set_Value__);
    DAT_0456689d = 1;
  }
  __this_00 = (__this->fields).IDPIHPBEHFC;
  if (__this_00 != (UniRx_ReactiveProperty_string____o *)0x0) {
    UniRx_ReactiveProperty<object>__set_Value
              ((UniRx_ReactiveProperty_T__o *)__this_00,&JLFFJLLAEEB->obj,
               Method_UniRx_ReactiveProperty<string[]>_set_Value__);
    (__this->fields).JLGMCFKNPAK = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

