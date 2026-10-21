// ECENNHNBAME.MNDFKOHIAHI$$CMAABCJILJH @ RVA 0x301A7F4

void ECENNHNBAME_MNDFKOHIAHI__CMAABCJILJH
               (ECENNHNBAME_MNDFKOHIAHI_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  undefined8 *puVar1;
  int startIndex;
  bool bVar2;
  uint16_t uVar3;
  System_String_o *pSVar4;
  MethodInfo_2639E28 *in_x4;
  System_Collections_Generic_KeyValuePair_object__object__o __this_00;
  System_Collections_Generic_KeyValuePair_object__object__o __this_01;
  Il2CppObject local_40;
  
  if ((DAT_04565bfd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__);
    FUN_01bab630(&StringLiteral_1943);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_1606);
    DAT_04565bfd = 1;
  }
  bVar2 = System_String__IsNullOrEmpty(KGLJICLJHEL,(MethodInfo *)0x0);
  if (bVar2) {
    local_40.klass = (Il2CppClass *)0x0;
    local_40.monitor = (System_String_o *)0x0;
    __this_00.fields.value = StringLiteral_1;
    __this_00.fields.key = &local_40;
    System_Collections_Generic_KeyValuePair<object,_object>___ctor
              (__this_00,StringLiteral_1,
               Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__,in_x4);
    (__this->fields).MJBOGDFFGKL.fields.value = local_40.monitor;
    (__this->fields).MJBOGDFFGKL.fields.key = (System_String_o *)local_40.klass;
    thunk_FUN_01c20e04(&__this->fields,0);
    (__this->fields)._FCHBJLJDDOH_k__BackingField = true;
  }
  else {
    if (KGLJICLJHEL == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    startIndex = (KGLJICLJHEL->fields)._stringLength + -1;
    pSVar4 = System_String__Remove(KGLJICLJHEL,startIndex,1,(MethodInfo *)0x0);
    uVar3 = System_String__get_Chars(KGLJICLJHEL,startIndex,(MethodInfo *)0x0);
    puVar1 = &StringLiteral_1943;
    if (uVar3 != 0x31) {
      puVar1 = &StringLiteral_1606;
    }
    pSVar4 = System_String__Concat(pSVar4,(System_String_o *)*puVar1,(MethodInfo *)0x0);
    local_40.klass = (Il2CppClass *)0x0;
    local_40.monitor = (System_String_o *)0x0;
    __this_01.fields.value = (Il2CppObject *)KGLJICLJHEL;
    __this_01.fields.key = &local_40;
    System_Collections_Generic_KeyValuePair<object,_object>___ctor
              (__this_01,(Il2CppObject *)pSVar4,
               Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__,in_x4);
    (__this->fields).MJBOGDFFGKL.fields.value = local_40.monitor;
    (__this->fields).MJBOGDFFGKL.fields.key = (System_String_o *)local_40.klass;
    thunk_FUN_01c20e04(&__this->fields,0);
    (__this->fields)._FCHBJLJDDOH_k__BackingField = false;
  }
  return;
}

