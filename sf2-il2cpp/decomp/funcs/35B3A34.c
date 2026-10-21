// FDJKKAFIEFB$$.cctor @ RVA 0x35B3A34

void FDJKKAFIEFB___cctor(MethodInfo *method)

{
  System_Char_array *array;
  UniRx_SerialDisposable_o *__this;
  UniRx_SerialDisposable_o **ppUVar1;
  
  if ((DAT_04568eac & 1) == 0) {
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&FDJKKAFIEFB_TypeInfo);
    FUN_01bab630(&UniRx_SerialDisposable_TypeInfo);
    FUN_01bab630(&
                 Field_<PrivateImplementationDetails>_3EBB838D673A3618780360FE3D2D06FBEFB0A2DDA6FD866A97F1391B04D5CC7A
                );
    DAT_04568eac = 1;
  }
  array = (System_Char_array *)FUN_01bab718(char___TypeInfo,0x1c);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)array,
             Field_<PrivateImplementationDetails>_3EBB838D673A3618780360FE3D2D06FBEFB0A2DDA6FD866A97F1391B04D5CC7A
             ,(MethodInfo *)0x0);
  FDJKKAFIEFB_TypeInfo->static_fields->NIFEBLPCLFG = array;
  thunk_FUN_01c20e04(FDJKKAFIEFB_TypeInfo->static_fields,array);
  __this = (UniRx_SerialDisposable_o *)thunk_FUN_01bda818(UniRx_SerialDisposable_TypeInfo);
  UniRx_SerialDisposable___ctor(__this,(MethodInfo *)0x0);
  ppUVar1 = &FDJKKAFIEFB_TypeInfo->static_fields->LEGEHOHOJGP;
  *ppUVar1 = __this;
  thunk_FUN_01c20e04(ppUVar1,__this);
  return;
}

