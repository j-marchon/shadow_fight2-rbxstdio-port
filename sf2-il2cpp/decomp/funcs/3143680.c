// KKLJIDJBFEI$$NBHHAFBDEOA @ RVA 0x3143680

float KKLJIDJBFEI__NBHHAFBDEOA
                (System_String_o *CELOLGNMKCG,System_Nullable_float__o HEDFGDPDHAL,
                MethodInfo *method)

{
  MethodInfo *method_00;
  KKLJIDJBFEI_o *pKVar1;
  long lVar2;
  System_Func_string__float__o *pSVar3;
  long lVar4;
  float fVar5;
  System_Nullable_float__Fields local_28;
  
  method_00 = (MethodInfo *)CELOLGNMKCG;
  local_28 = HEDFGDPDHAL.fields;
  if ((DAT_0456676a & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<DetailedLog_GFMLMFADEGC>__);
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<float>_get_Value__);
    method_00 = (MethodInfo *)FUN_01bab630(&StringLiteral_11526);
    DAT_0456676a = 1;
  }
  if (((ulong)HEDFGDPDHAL.fields & 0xff) == 0) {
    pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO(method_00);
    lVar2 = Method_System_Array_Empty<DetailedLog_GFMLMFADEGC>__;
    if ((pKVar1 != (KKLJIDJBFEI_o *)0x0) &&
       ((pKVar1->fields).super.MOACHOFFNCO != (System_Func_string__float__o *)0x0)) {
      pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)pKVar1);
      if ((pKVar1 != (KKLJIDJBFEI_o *)0x0) &&
         (pSVar3 = (pKVar1->fields).super.MOACHOFFNCO, pSVar3 != (System_Func_string__float__o *)0x0
         )) {
                    /* WARNING: Could not recover jumptable at 0x03243738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        fVar5 = (float)(*(code *)(pSVar3->fields).super.super.invoke_impl)
                                 ((pSVar3->fields).super.super.method_code,CELOLGNMKCG,
                                  (pSVar3->fields).super.super.method);
        return fVar5;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar4 = *(long *)(Method_System_Array_Empty<DetailedLog_GFMLMFADEGC>__ + 0x38);
    if (lVar4 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<DetailedLog_GFMLMFADEGC>__);
      lVar4 = *(long *)(lVar2 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01b81620();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    Nekki_Utils_DetailedLog__Error
              (StringLiteral_11526,
               (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)**(undefined8 **)(lVar2 + 0xb8),
               (MethodInfo *)0x0);
    fVar5 = 10000.0;
  }
  else {
    fVar5 = System_Nullable<float>__get_Value
                      ((System_Nullable_float__o)&local_28,Method_System_Nullable<float>_get_Value__
                      );
  }
  return fVar5;
}

