// LDAJCBOOHPE$$OCDGHBHPBAK @ RVA 0x3489BC4

void LDAJCBOOHPE__OCDGHBHPBAK
               (System_ValueTuple_string____Nullable_DateTime___o *__return_storage_ptr__,
               LDAJCBOOHPE_o *__this,System_String_o *PAIMAJLHILL,MethodInfo *method)

{
  undefined1 auVar1 [16];
  bool bVar2;
  long lVar3;
  System_String_o *value;
  Il2CppObject *pIVar4;
  System_DateTime_o SVar5;
  MethodInfo_27F61A0 *method_00;
  MethodInfo_2BCCEF8 *in_x5;
  long lVar6;
  void *dateData;
  Il2CppClass *pIVar7;
  System_ValueTuple_T1__T2__o __this_00;
  System_Nullable_DateTime__o __this_01;
  System_ValueTuple_T1__T2__o __this_02;
  System_Nullable_DateTime__o item2;
  Il2CppObject *local_68;
  undefined8 uStack_60;
  Il2CppObject local_58;
  uint64_t local_48;
  
  if ((DAT_045683d2 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&Method_Newtonsoft_Json_JsonConvert_DeserializeObject<LDAJCBOOHPE_MirrorCacheDto>__
                );
    FUN_01bab630(&Newtonsoft_Json_JsonConvert_TypeInfo);
    FUN_01bab630(&LDAJCBOOHPE_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<DateTime>__ctor__);
    FUN_01bab630(&Method_System_ValueTuple<string[],_Nullable<DateTime>>__ctor__);
    DAT_045683d2 = 1;
  }
  bVar2 = System_String__IsNullOrWhiteSpace(PAIMAJLHILL,(MethodInfo *)0x0);
  lVar3 = Method_System_Array_Empty<string>__;
  if (bVar2) {
    lVar6 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar6 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar6 = *(long *)(lVar3 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01b81620();
    }
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01b81620();
    }
    __this_00.fields.Item2 = (Il2CppObject *)**(undefined8 **)(lVar3 + 0xb8);
    local_58.klass = (Il2CppClass *)0x0;
    local_58.monitor = (void *)0x0;
    local_48 = 0;
    __this_00.fields.Item1 = &local_58;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = Method_System_ValueTuple<string[],_Nullable<DateTime>>__ctor__._dateData;
    System_ValueTuple<object,_Nullable<DateTime>>___ctor
              (__this_00,(Il2CppObject *)0x0,(System_Nullable_DateTime__o)(auVar1 << 0x40),in_x5);
  }
  else {
    if ((LDAJCBOOHPE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    method_00 = (MethodInfo_27F61A0 *)0x0;
    value = IBMPAMLCCHF__EOJPLECOGAD
                      (PAIMAJLHILL,LDAJCBOOHPE_TypeInfo->static_fields->EDCHCICLDBD,
                       LDAJCBOOHPE_TypeInfo->static_fields->PDMLGKMLOKP,(MethodInfo *)0x0);
    if ((Newtonsoft_Json_JsonConvert_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pIVar4 = Newtonsoft_Json_JsonConvert__DeserializeObject<object>
                       (value,
                        Method_Newtonsoft_Json_JsonConvert_DeserializeObject<LDAJCBOOHPE_MirrorCacheDto>__
                       );
    if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    dateData = pIVar4[1].monitor;
    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    SVar5 = System_DateTime__FromBinary((int64_t)dateData,(MethodInfo *)0x0);
    lVar3 = Method_System_Array_Empty<string>__;
    pIVar7 = pIVar4[1].klass;
    if (pIVar7 == (Il2CppClass *)0x0) {
      lVar6 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar6 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar6 = *(long *)(lVar3 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_01b81620();
      }
      if (*(int *)(lVar6 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01b81620();
      }
      pIVar7 = (Il2CppClass *)**(undefined8 **)(lVar3 + 0xb8);
    }
    local_68 = (Il2CppObject *)0x0;
    uStack_60 = 0;
    __this_01.fields.value.fields._dateData = SVar5.fields._dateData;
    __this_01.fields._0_8_ = &local_68;
    System_Nullable<DateTime>___ctor
              (__this_01,(System_DateTime_o)Method_System_Nullable<DateTime>__ctor__._dateData,
               method_00);
    local_58.klass = (Il2CppClass *)0x0;
    local_58.monitor = (void *)0x0;
    local_48 = 0;
    __this_02.fields.Item2 = (Il2CppObject *)pIVar7;
    __this_02.fields.Item1 = &local_58;
    item2.fields.value.fields._dateData =
         (System_DateTime_Fields)
         (System_DateTime_Fields)
         Method_System_ValueTuple<string[],_Nullable<DateTime>>__ctor__._dateData;
    item2.fields._0_8_ = uStack_60;
    System_ValueTuple<object,_Nullable<DateTime>>___ctor(__this_02,local_68,item2,in_x5);
  }
  (__return_storage_ptr__->fields).Item2.fields.value.fields._dateData = local_48;
  *(void **)&(__return_storage_ptr__->fields).Item2.fields = local_58.monitor;
  (__return_storage_ptr__->fields).Item1 = (System_String_array *)local_58.klass;
  return;
}

