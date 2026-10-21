// LIDILBBODBM$$INJGBDANOLJ @ RVA 0x315A3F8

bool LIDILBBODBM__INJGBDANOLJ
               (LIDILBBODBM_o *__this,System_Nullable_DateTime__o PLPINLMDGKE,MethodInfo *method)

{
  char cVar1;
  System_TimeSpan_Fields t1;
  bool bVar2;
  System_DateTime_o d1;
  System_TimeSpan_o SVar3;
  System_Lazy_TimeSpan__o *__this_00;
  System_Nullable_TimeSpan__o __this_01;
  undefined8 local_40;
  System_TimeSpan_Fields local_38;
  
  if ((DAT_04566860 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&Method_System_Lazy<TimeSpan>_get_Value__);
    FUN_01bab630(&Method_System_Nullable<DateTime>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<TimeSpan>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<TimeSpan>__ctor__);
    FUN_01bab630(&Method_System_Nullable<DateTime>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<TimeSpan>_get_HasValue__);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_04566860 = 1;
  }
  if ((PLPINLMDGKE.fields._0_8_ & 0xff) != 0) {
    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    d1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_DateTime_TypeInfo);
    }
    SVar3 = System_DateTime__op_Subtraction
                      (d1,PLPINLMDGKE.fields.value.fields._dateData,(MethodInfo *)0x0);
    local_40 = 0;
    local_38._ticks = 0;
    __this_01.fields.value.fields._ticks = SVar3.fields._ticks;
    __this_01.fields._0_8_ = &local_40;
    System_Nullable<TimeSpan>___ctor
              (__this_01,(System_TimeSpan_o)Method_System_Nullable<TimeSpan>__ctor__._ticks,
               (MethodInfo_27FB8F4 *)method);
    t1._ticks = local_38._ticks;
    __this_00 = (__this->fields).GAFHPBLKILE;
    if (__this_00 == (System_Lazy_TimeSpan__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    cVar1 = (char)local_40;
    SVar3 = System_Lazy<TimeSpan>__get_Value(__this_00,Method_System_Lazy<TimeSpan>_get_Value__);
    if (cVar1 != '\0') {
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = System_TimeSpan__op_GreaterThan((System_TimeSpan_o)t1._ticks,SVar3,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  return false;
}

