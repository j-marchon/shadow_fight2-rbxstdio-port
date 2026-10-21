// EEGDOGKBLNG$$NDKMLPFGFAI @ RVA 0x3070CE4

System_Collections_Generic_Dictionary_string__int__o *
EEGDOGKBLNG__NDKMLPFGFAI(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_string__int__o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  long lVar3;
  
  if ((DAT_04565f70 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&StringLiteral_11980);
    DAT_04565f70 = 1;
    method = extraout_x1;
  }
  lVar1 = Method_System_Array_Empty<string>__;
  lVar3 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar3 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__,method);
    lVar3 = *(long *)(lVar1 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01b81620();
  }
  pSVar2 = EEGDOGKBLNG__MPLCEKAPDHJ
                     (__this,StringLiteral_11980,
                      (System_String_array *)**(undefined8 **)(lVar1 + 0xb8),in_x3);
  return pSVar2;
}

