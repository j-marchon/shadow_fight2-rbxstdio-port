// PKKLIJLIKGF$$LCCHBPEFMJN @ RVA 0x3025D00

void PKKLIJLIKGF__LCCHBPEFMJN
               (PKKLIJLIKGF_o *__this,
               System_Collections_Generic_KeyValuePair_string__string__o KEFILECBPMF,
               MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_KeyValuePair_object__object__o item;
  long lVar2;
  System_String_o *pSVar3;
  System_String_o *key;
  MethodInfo_2639E28 *in_x4;
  System_Collections_Generic_KeyValuePair_string__string__array *pSVar4;
  System_Collections_Generic_List_KeyValuePair_string__string___o *__this_00;
  System_Collections_Generic_KeyValuePair_object__object__o __this_01;
  Il2CppObject local_40;
  
  if ((DAT_04565c8e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_Add__);
    DAT_04565c8e = 1;
  }
  pSVar3 = System_String__Copy(KEFILECBPMF.fields.key,(MethodInfo *)0x0);
  key = System_String__Copy(KEFILECBPMF.fields.value,(MethodInfo *)0x0);
  __this_00 = (__this->fields).NAPHDEGHDNP;
  local_40.klass = (Il2CppClass *)0x0;
  local_40.monitor = (System_String_o *)0x0;
  __this_01.fields.value = (Il2CppObject *)pSVar3;
  __this_01.fields.key = &local_40;
  System_Collections_Generic_KeyValuePair<object,_object>___ctor
            (__this_01,(Il2CppObject *)key,
             Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__,in_x4);
  lVar2 = Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_Add__;
  if (__this_00 != (System_Collections_Generic_List_KeyValuePair_string__string___o *)0x0) {
    item.fields.value = local_40.monitor;
    item.fields.key = (Il2CppObject *)local_40.klass;
    pSVar4 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar4 != (System_Collections_Generic_KeyValuePair_string__string__array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar4->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar4->m_Items[(int)uVar1].fields.key = (System_String_o *)local_40.klass;
        pSVar4->m_Items[(int)uVar1].fields.value = local_40.monitor;
        thunk_FUN_01c20e04(pSVar4->m_Items + (int)uVar1,0);
      }
      else {
        System_Collections_Generic_List<KeyValuePair<object,_object>>__AddWithResize
                  ((System_Collections_Generic_List_T__o *)__this_00,item,
                   *(MethodInfo_266FF2C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

