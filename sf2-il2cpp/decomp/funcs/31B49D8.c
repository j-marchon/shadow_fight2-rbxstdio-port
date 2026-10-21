// AJAMDCEKAFE$$IMDBPBLPCCO @ RVA 0x31B49D8

System_Collections_Generic_List_string__o *
AJAMDCEKAFE__IMDBPBLPCCO
          (int32_t KBAJGAHMEAF,System_String_array *OPAEPDIIOEB,int32_t HLOBIOJPEKN,
          System_Func_string__string__o *GFAGKLLGEII,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *item;
  uint uVar2;
  System_String_array *pSVar3;
  
  if ((DAT_04566ba6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04566ba6 = 1;
  }
  __this = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,
             Method_System_Collections_Generic_List<string>__ctor__);
  if (OPAEPDIIOEB == (System_String_array *)0x0) {
LAB_032b4b4c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar2 = (uint)OPAEPDIIOEB->max_length;
  if ((int)uVar2 <= HLOBIOJPEKN) {
    HLOBIOJPEKN = uVar2 - 1;
  }
  if (HLOBIOJPEKN < KBAJGAHMEAF) {
    return __this;
  }
  if ((uint)KBAJGAHMEAF < uVar2) {
    do {
      lVar1 = Method_System_Collections_Generic_List<string>_Add__;
      item = OPAEPDIIOEB->m_Items[KBAJGAHMEAF];
      if (GFAGKLLGEII == (System_Func_string__string__o *)0x0) {
        if (__this == (System_Collections_Generic_List_string__o *)0x0) goto LAB_032b4b4c;
        pSVar3 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
      }
      else {
        item = (System_String_o *)
               (*(code *)(GFAGKLLGEII->fields).super.super.invoke_impl)
                         ((GFAGKLLGEII->fields).super.super.method_code,item,
                          (GFAGKLLGEII->fields).super.super.method);
        lVar1 = Method_System_Collections_Generic_List<string>_Add__;
        if (__this == (System_Collections_Generic_List_string__o *)0x0) goto LAB_032b4b4c;
        pSVar3 = (__this->fields)._items;
        (__this->fields)._version = (__this->fields)._version + 1;
      }
      if (pSVar3 == (System_String_array *)0x0) goto LAB_032b4b4c;
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
      }
      KBAJGAHMEAF = KBAJGAHMEAF + 1;
      if (HLOBIOJPEKN < KBAJGAHMEAF) {
        return __this;
      }
    } while ((uint)KBAJGAHMEAF < (uint)OPAEPDIIOEB->max_length);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

